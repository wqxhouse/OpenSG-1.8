/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <OSGConfig.h>
#include <OSGGL.h>
#include <OSGNodePtr.h>
#include <OSGViewport.h>
#include <OSGFBOViewport.h>
#include <OSGTileCameraDecorator.h>
#include <OSGBaseFunctions.h>
#include <OSGStereoBufferViewport.h>
#include <OSGFieldContainerFields.h>
#include <OSGDisplayFilterForeground.h>
#include <OSGRemoteAspect.h>
#include "OSGMultiDisplayWindow.h"
#include "OSGConnection.h"
#include "OSGNode.h"

OSG_USING_NAMESPACE

/*! \class osg::MultiDisplayWindow
 *  \ingroup GrpSystemCluster
 */

/*----------------------- constructors & destructors ----------------------*/

/*! Constructor
 */
MultiDisplayWindow::MultiDisplayWindow(void) :
    Inherited()
{
}

/*! Copy Constructor
 */
MultiDisplayWindow::MultiDisplayWindow(const MultiDisplayWindow &source) :
    Inherited(source)
{
}

/*! Destructor
 */
MultiDisplayWindow::~MultiDisplayWindow(void)
{
}

/*----------------------------- class specific ----------------------------*/

/*! initialize the static features of the class, e.g. action callbacks
 */
void MultiDisplayWindow::initMethod (void)
{
}

/*! react to field changes
 */
void MultiDisplayWindow::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

/*! output the instance for debug purposes
 */
void MultiDisplayWindow::dump(      UInt32    ,
                              const BitVector ) const
{
    SLOG << "hServers:" << getHServers() << " "
         << "vServers:" << getVServers() << std::endl;
}

/*----------------------------- server methods ----------------------------*/

/*! initialise the cluster window on the server side. This method is
     called after the first sync.
 */
void MultiDisplayWindow::serverInit( WindowPtr ,
                                     UInt32 )
{
}

/*! render server window
 *
 *  update all viewport parameters and render local viewports
 *  Width and height of the whole window are calculated by
 *  multiplieing the local window size by hServers and vServers.
 */
void MultiDisplayWindow::serverRender( WindowPtr serverWindow,
                                       UInt32 id,
                                       RenderActionBase *action )
{
    TileCameraDecoratorPtr deco;
    ViewportPtr serverPort;
    ViewportPtr clientPort;
    StereoBufferViewportPtr clientStereoPort;
    UInt32 sv,cv;
    Int32 l,r,t,b;
    Int32 cleft,cright,ctop,cbottom;

    // sync, otherwise viewports will be out of date

    if(!getHServers())
    {
        setHServers(getMFServers()->size());
    }
    if(!getVServers())
    {
        setVServers(1);
    }
    UInt32 row   =id/getHServers();
    UInt32 column=id%getHServers();
    // calculate width and height from local width and height
    UInt32 width  = serverWindow->getWidth() ;
    UInt32 height = serverWindow->getHeight();
    if(getWidth()==0)
    {
        setWidth( width*getHServers() );
    }
    if(getHeight()==0)
    {
        setHeight( height*getVServers() );
    }
    Int32 left   = column * width  - column * getXOverlap();
    Int32 bottom = row    * height - row    * getYOverlap();
    Int32 right  = left   + width  - 1;
    Int32 top    = bottom + height - 1;
    Real64 scaleCWidth   = ((width - getXOverlap()) * (getHServers() - 1) + width) / float(getWidth());
    Real64 scaleCHeight  = ((height - getYOverlap())* (getVServers() - 1) + height)/ float(getHeight());
    bool   isVirtualPort = false;

    // duplicate viewports
    for(cv = 0, sv = 0; cv < getMFPort()->size(); ++cv)
    {
        clientPort    = getPort(cv);
        isVirtualPort = clientPort->getType().isDerivedFrom(FBOViewport::getClassType());

        if(isVirtualPort)
        {
            // TODO -- seems wrong to render this on all servers, though rendering
            // then transmitting the texture doesn't seem like a good idea either.
            if(serverWindow->getMFPort()->size() <= sv)
            {
                serverPort = ViewportPtr::dcast(clientPort->shallowCopy());
                beginEditCP(serverWindow);
                serverWindow->addPort(serverPort);
                endEditCP(serverWindow);
            }
            else
            {
                serverPort = serverWindow->getPort(sv);

                if(serverPort->getType() != clientPort->getType())
                {
                    // there is a viewport with the wrong type
                    subRefCP(serverWindow->getPort(sv));
                    serverPort = ViewportPtr::dcast(clientPort->shallowCopy());
                    beginEditCP(serverWindow);
                    {
                        serverWindow->editPort(sv) = serverPort;
                    }
                    endEditCP(serverWindow);
                }
            }
            // update changed viewport fields
            updateViewport(serverPort,clientPort);
        }
        else
        {
            clientStereoPort = StereoBufferViewportPtr::dcast(clientPort);
            cleft   = Int32(clientPort->getPixelLeft()      * scaleCWidth)   ;
            cbottom = Int32(clientPort->getPixelBottom()    * scaleCHeight)  ;
            cright  = Int32((clientPort->getPixelRight()+1) * scaleCWidth) -1;
            ctop    = Int32((clientPort->getPixelTop()+1)   * scaleCHeight)-1;

            if( cright  < left   ||
                cleft   > right  ||
                ctop    < bottom ||
                cbottom > top       )
            {
                // invisible on this server screen
                continue;
            }
            // calculate overlapping viewport
            l = osgMax(cleft  ,left  ) - left;
            b = osgMax(cbottom,bottom) - bottom;
            r = osgMin(cright ,right ) - left;
            t = osgMin(ctop   ,top   ) - bottom;
            if(serverWindow->getMFPort()->size() <= sv)
            {
                serverPort = ViewportPtr::dcast(clientPort->shallowCopy());
                beginEditCP(serverPort);
                deco=TileCameraDecorator::create();
                beginEditCP(serverWindow);
                serverWindow->addPort(serverPort);
                serverPort->setCamera(deco);
                endEditCP(serverWindow);
                endEditCP(serverPort);
            }
            else
            {
                serverPort = serverWindow->getPort(sv);
                deco = TileCameraDecoratorPtr::dcast(serverPort->getCamera());

                if(serverPort->getType() != clientPort->getType())
                {
                    // there is a viewport with the wrong type
                    subRefCP(serverWindow->getPort(sv));
                    serverPort = ViewportPtr::dcast(clientPort->shallowCopy());

                    if(deco == NullFC)
                        deco = TileCameraDecorator::create();

                    beginEditCP(serverPort, Viewport::CameraFieldMask);
                    serverPort->setCamera(deco);
                    endEditCP(serverPort, Viewport::CameraFieldMask);

                    beginEditCP(serverWindow, Window::PortFieldMask);
                    serverWindow->editPort(sv) = serverPort;
                    endEditCP(serverWindow, Window::PortFieldMask);
                }
            }

            // update changed viewport fields
            updateViewport(serverPort,clientPort);

            // set viewport size
            beginEditCP(serverPort,
                        Viewport::LeftFieldMask|
                        Viewport::BottomFieldMask|
                        Viewport::RightFieldMask|
                        Viewport::TopFieldMask);
            serverPort->setSize(Real32(l),Real32(b),Real32(r),Real32(t));
            // use pixel even if pixel = 1
            if(serverPort->getLeft() == 1.0)
                serverPort->setLeft(1.0001);
            if(serverPort->getRight() == 1.0)
                serverPort->setRight(1.0001);
            if(serverPort->getTop() == 1.0)
                serverPort->setTop(1.0001);
            if(serverPort->getBottom() == 1.0)
                serverPort->setBottom(1.0001);
            endEditCP(serverPort,
                      Viewport::LeftFieldMask|
                      Viewport::BottomFieldMask|
                      Viewport::RightFieldMask|
                      Viewport::TopFieldMask);
            // calculate tile parameters
            beginEditCP(deco);
            deco->setFullWidth ( cright-cleft );
            deco->setFullHeight( ctop-cbottom );
            deco->setSize( ( l+left-cleft     ) / float( cright-cleft ),
                       ( b+bottom-cbottom ) / float( ctop-cbottom ),
                       ( r+left-cleft     ) / float( cright-cleft ),
                       ( t+bottom-cbottom ) / float( ctop-cbottom ) );
            deco->setDecoratee( clientPort->getCamera() );
            endEditCP(deco);
        }
        sv++;
    }
    // remove unused ports
    while(serverWindow->getMFPort()->size()>sv)
    {
        serverWindow->subPort(sv);
    }
    Inherited::serverRender(serverWindow,id,action);
}

/*! swap server window
 */
void MultiDisplayWindow::serverSwap( WindowPtr window,UInt32 id )
{
    Connection *connection;

    // clear command buffers
    UInt8 pixel[3];
    glReadPixels(0,0,
                 1,1,
                 GL_RGB,GL_UNSIGNED_BYTE,
                 pixel);
    glFinish();

    if(!getFastSync())
    {
        connection=getNetwork()->getMainConnection();
        if(!getInterleave())
        {
            // tell client that we are finish
            connection->signal();
            // wait for swap
            connection->wait();
        }
    }
    Inherited::serverSwap(window,id);
}

/*----------------------------- client methods ----------------------------*/

/*! init client window
 *
 *  If manageClientViewports is set, then all viewports from the
 *  cluster window are duplcated to the client window.
 */
void MultiDisplayWindow::clientInit( void )
{
    bool             changed = false;
    ViewportPtr      vp,cvp;

    if(getManageClientViewports() == false ||
       getClientWindow() == NullFC)
        return;

    // check if something changed
    if(getMFPort()->size() == getClientWindow()->getMFPort()->size())
    {
        for(UInt32 v = 0 ; v < getMFPort()->size() && !changed ; v++)
        {
            vp  = getPort(v);
            cvp = getClientWindow()->getPort(v);
            if( vp->getRoot() != cvp->getRoot() ||
                vp->getLeft() != cvp->getLeft() ||
                vp->getRight() != cvp->getRight() ||
                vp->getBottom() != cvp->getBottom() ||
                vp->getTop() != cvp->getTop() ||
                vp->getBackground() != cvp->getBackground() ||
                vp->getMFForegrounds()->size() !=
                    cvp->getMFForegrounds()->size() )
                changed = true;
        }
    }
    else
    {
        changed = true;
    }

    if(changed)
    {
        beginEditCP(getClientWindow());
        // remove all viewports
        while(getClientWindow()->getMFPort()->size())
        {
            vp = getClientWindow()->getPort(0);
            getClientWindow()->subPort(0);
            subRefCP(vp);
        }
        // duplicate viewports
        for(UInt32 v=0 ; v<getMFPort()->size() ;v++)
        {
            getClientWindow()->addPort(ViewportPtr::dcast(getPort(v)->shallowCopy()));
        }
        endEditCP(getClientWindow());
    }
}

/*! render client window
 */
void MultiDisplayWindow::clientSwap( void )
{
    Connection *connection=getNetwork()->getMainConnection();

    if(getFastSync())
    {
        connection->selectChannel();
    }
    else
    {
        if(!getInterleave())
        {
            // wait for all servers to finish
            connection->wait();
            // initiate swap
            connection->signal();
        }
    }

    // show client window
    Inherited::clientSwap();
}

/*-------------------------------------------------------------------------*/
/*                              helper                                     */

/*! update all changed viewport field from the client port
 */
void MultiDisplayWindow::updateViewport(ViewportPtr &serverPort,
                                        ViewportPtr &clientPort)
{
    bool equal, found;

    // Compare the pointers.
    if(serverPort == clientPort)
        return;
    if(serverPort == NullFC || clientPort == NullFC)
        return;
    if(serverPort->getType() != serverPort->getType())
        return;

    const FieldContainerType &type = serverPort->getType();
    UInt32 fcount = osgMin(serverPort->getType().getNumFieldDescs(),
                           clientPort->getType().getNumFieldDescs());

    BitVector ffilter = RemoteAspect::getFieldFilter(type.getId());

    for(UInt32 i = 1; i <= fcount; ++i)
    {
        const FieldDescription* fdesc = type.getFieldDescription(i);
        // ignore attachments
        if(strcmp(fdesc->getCName(), "parent") == 0 ||
           strcmp(fdesc->getCName(), "camera") == 0)
            continue;

        BitVector mask = fdesc->getFieldMask();

        // don't update filtered fields
        if(ffilter & mask)
            continue;

        Field *dst_field = serverPort->getField(i);
        Field *src_field = clientPort->getField(i);

        const FieldType &dst_ftype = dst_field->getType();
        const FieldType &src_ftype = src_field->getType();

        if(dst_ftype != src_ftype)
            continue;

        equal = true;
        found = false;

        if(strstr(dst_ftype.getCName(), "Ptr") == NULL)
        {
            // This is very slow with multi fields!!!!
            std::string av, bv;
            dst_field->getValueByStr(av);
            src_field->getValueByStr(bv);
            if(av != bv)
                equal = false;
        }
        else
        {
            if(dst_field->getCardinality() == FieldType::SINGLE_FIELD)
            {
                if((static_cast<SFFieldContainerPtr *>(dst_field)->getValue() !=
                    static_cast<SFFieldContainerPtr *>(src_field)->getValue()))
                    equal = false;
            }
            else if(dst_field->getCardinality() == FieldType::MULTI_FIELD)
            {
                UInt32 j, cn = static_cast<MFFieldContainerPtr*>(src_field)->size(),
                          sn = static_cast<MFFieldContainerPtr*>(src_field)->size();

                if (strcmp(fdesc->getCName(), "foregrounds") == 0)
                {
                    MFForegroundPtr sFgndBag;
                    MFForegroundPtr::const_iterator sFgndIt, cFgndIt;
                    DisplayFilterForegroundPtr filterFgnd = NullFC;

                    sFgndIt = serverPort->getMFForegrounds()->begin();
                    cFgndIt = clientPort->getMFForegrounds()->begin();

                    while (sFgndIt != serverPort->getMFForegrounds()->end())
                    {
                        filterFgnd = DisplayFilterForegroundPtr::dcast(*sFgndIt);

                        if (filterFgnd != NullFC &&
                           !filterFgnd->getServer().empty())
                            found = true;   // loaded filters found
                        else
                            sFgndBag.push_back(*sFgndIt);

                        ++sFgndIt;
                    }

                    if (sFgndBag.size() !=
                            clientPort->getMFForegrounds()->size())
                    {
                        equal = false;
                    }
                    else
                    {
                        sFgndIt = sFgndBag.begin();

                        while (sFgndIt != sFgndBag.end() &&
                               cFgndIt != clientPort->getMFForegrounds()->end() &&
                              *sFgndIt == *cFgndIt)
                        {
                            ++sFgndIt;
                            ++cFgndIt;
                        }

                        if (sFgndIt != sFgndBag.end() ||
                            cFgndIt != clientPort->getMFForegrounds()->end())
                            equal = false;
                    }
                }
                else
                {
                    if(static_cast<MFFieldContainerPtr*>(dst_field)->size() !=
                       static_cast<MFFieldContainerPtr*>(src_field)->size())
                    {
                        equal = false;
                    }
                    else
                    {
                        for(j=0;j < static_cast<MFFieldContainerPtr*>(dst_field)->size();++j)
                        {
                            if(((*(static_cast<MFFieldContainerPtr *>(dst_field)))[j] !=
                                (*(static_cast<MFFieldContainerPtr *>(src_field)))[j]))
                                equal = false;
                        }
                    }
                }
            }
        }
        if(equal == false)
        {
            beginEditCP(serverPort, mask);
            dst_field->setAbstrValue(*src_field);
            endEditCP(serverPort, mask);

            if (found)
            {
                ClusterWindowPtr ptr(this);

                beginEditCP(ptr, DirtyFieldMask);
                    setDirty(true);
                endEditCP(ptr, DirtyFieldMask);
            }
        }
    }
}

/*-------------------------------------------------------------------------*/
/*                              cvs id's                                   */

#ifdef __sgi
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static char cvsid_cpp[] = "@(#)$Id: $";
    static char cvsid_hpp[] = OSGMULTIDISPLAYCONFIG_HEADER_CVSID;
    static char cvsid_inl[] = OSGMULTIDISPLAYCONFIG_INLINE_CVSID;
}
