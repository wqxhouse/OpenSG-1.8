/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class XWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEXWINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGXWindowBase.h"
#include "OSGXWindow.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  XWindowBase::DisplayFieldMask = 
    (TypeTraits<BitVector>::One << XWindowBase::DisplayFieldId);

const OSG::BitVector  XWindowBase::WindowFieldMask = 
    (TypeTraits<BitVector>::One << XWindowBase::WindowFieldId);

const OSG::BitVector  XWindowBase::ContextFieldMask = 
    (TypeTraits<BitVector>::One << XWindowBase::ContextFieldId);

const OSG::BitVector XWindowBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var DisplayP        XWindowBase::_sfDisplay
    
*/
/*! \var X11Window       XWindowBase::_sfWindow
    
*/
/*! \var GLXContext      XWindowBase::_sfContext
    
*/

//! XWindow description

FieldDescription *XWindowBase::_desc[] = 
{
    new FieldDescription(SFDisplayP::getClassType(), 
                     "display", 
                     DisplayFieldId, DisplayFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&XWindowBase::editSFDisplay)),
    new FieldDescription(SFX11Window::getClassType(), 
                     "window", 
                     WindowFieldId, WindowFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&XWindowBase::editSFWindow)),
    new FieldDescription(SFGLXContext::getClassType(), 
                     "context", 
                     ContextFieldId, ContextFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&XWindowBase::editSFContext))
};


FieldContainerType XWindowBase::_type(
    "XWindow",
    "Window",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&XWindowBase::createEmpty),
    XWindow::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(XWindowBase, XWindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &XWindowBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &XWindowBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr XWindowBase::shallowCopy(void) const 
{ 
    XWindowPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const XWindow *>(this)); 

    return returnValue; 
}

UInt32 XWindowBase::getContainerSize(void) const 
{ 
    return sizeof(XWindow); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void XWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<XWindowBase *>(&other),
                          whichField);
}
#else
void XWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((XWindowBase *) &other, whichField, sInfo);
}
void XWindowBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void XWindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

XWindowBase::XWindowBase(void) :
    _sfDisplay                (DisplayP(NULL)), 
    _sfWindow                 (), 
    _sfContext                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

XWindowBase::XWindowBase(const XWindowBase &source) :
    _sfDisplay                (source._sfDisplay                ), 
    _sfWindow                 (source._sfWindow                 ), 
    _sfContext                (source._sfContext                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

XWindowBase::~XWindowBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 XWindowBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
    {
        returnValue += _sfDisplay.getBinSize();
    }

    if(FieldBits::NoField != (WindowFieldMask & whichField))
    {
        returnValue += _sfWindow.getBinSize();
    }

    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        returnValue += _sfContext.getBinSize();
    }


    return returnValue;
}

void XWindowBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
    {
        _sfDisplay.copyToBin(pMem);
    }

    if(FieldBits::NoField != (WindowFieldMask & whichField))
    {
        _sfWindow.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        _sfContext.copyToBin(pMem);
    }


}

void XWindowBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
    {
        _sfDisplay.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (WindowFieldMask & whichField))
    {
        _sfWindow.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        _sfContext.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void XWindowBase::executeSyncImpl(      XWindowBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
        _sfDisplay.syncWith(pOther->_sfDisplay);

    if(FieldBits::NoField != (WindowFieldMask & whichField))
        _sfWindow.syncWith(pOther->_sfWindow);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
        _sfContext.syncWith(pOther->_sfContext);


}
#else
void XWindowBase::executeSyncImpl(      XWindowBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
        _sfDisplay.syncWith(pOther->_sfDisplay);

    if(FieldBits::NoField != (WindowFieldMask & whichField))
        _sfWindow.syncWith(pOther->_sfWindow);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
        _sfContext.syncWith(pOther->_sfContext);



}

void XWindowBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<XWindowPtr>::_type("XWindowPtr", "WindowPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(XWindowPtr, OSG_WINDOWXLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(XWindowPtr, OSG_WINDOWXLIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.49 2008/06/09 07:30:44 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGXWINDOWBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGXWINDOWBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGXWINDOWFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

