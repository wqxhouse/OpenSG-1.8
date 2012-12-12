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
 **     class GrabForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGRABFOREGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGGrabForegroundBase.h"
#include "OSGGrabForeground.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  GrabForegroundBase::ImageFieldMask = 
    (TypeTraits<BitVector>::One << GrabForegroundBase::ImageFieldId);

const OSG::BitVector  GrabForegroundBase::AutoResizeFieldMask = 
    (TypeTraits<BitVector>::One << GrabForegroundBase::AutoResizeFieldId);

const OSG::BitVector GrabForegroundBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ImagePtr        GrabForegroundBase::_sfImage
    The image to write to.
*/
/*! \var bool            GrabForegroundBase::_sfAutoResize
    Automatically resize the image when the viewport size changes.
*/

//! GrabForeground description

FieldDescription *GrabForegroundBase::_desc[] = 
{
    new FieldDescription(SFImagePtr::getClassType(), 
                     "image", 
                     ImageFieldId, ImageFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&GrabForegroundBase::editSFImage)),
    new FieldDescription(SFBool::getClassType(), 
                     "autoResize", 
                     AutoResizeFieldId, AutoResizeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&GrabForegroundBase::editSFAutoResize))
};


FieldContainerType GrabForegroundBase::_type(
    "GrabForeground",
    "Foreground",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&GrabForegroundBase::createEmpty),
    GrabForeground::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(GrabForegroundBase, GrabForegroundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GrabForegroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GrabForegroundBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GrabForegroundBase::shallowCopy(void) const 
{ 
    GrabForegroundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GrabForeground *>(this)); 

    return returnValue; 
}

UInt32 GrabForegroundBase::getContainerSize(void) const 
{ 
    return sizeof(GrabForeground); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GrabForegroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<GrabForegroundBase *>(&other),
                          whichField);
}
#else
void GrabForegroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GrabForegroundBase *) &other, whichField, sInfo);
}
void GrabForegroundBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GrabForegroundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GrabForegroundBase::GrabForegroundBase(void) :
    _sfImage                  (), 
    _sfAutoResize             (bool(false)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GrabForegroundBase::GrabForegroundBase(const GrabForegroundBase &source) :
    _sfImage                  (source._sfImage                  ), 
    _sfAutoResize             (source._sfAutoResize             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GrabForegroundBase::~GrabForegroundBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GrabForegroundBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        returnValue += _sfImage.getBinSize();
    }

    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        returnValue += _sfAutoResize.getBinSize();
    }


    return returnValue;
}

void GrabForegroundBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        _sfAutoResize.copyToBin(pMem);
    }


}

void GrabForegroundBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        _sfAutoResize.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GrabForegroundBase::executeSyncImpl(      GrabForegroundBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
        _sfImage.syncWith(pOther->_sfImage);

    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
        _sfAutoResize.syncWith(pOther->_sfAutoResize);


}
#else
void GrabForegroundBase::executeSyncImpl(      GrabForegroundBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
        _sfImage.syncWith(pOther->_sfImage);

    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
        _sfAutoResize.syncWith(pOther->_sfAutoResize);



}

void GrabForegroundBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<GrabForegroundPtr>::_type("GrabForegroundPtr", "ForegroundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GrabForegroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(GrabForegroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGGRABFOREGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGRABFOREGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGRABFOREGROUNDFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

