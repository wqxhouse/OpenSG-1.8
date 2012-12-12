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
 **     class ImageForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEIMAGEFOREGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGImageForegroundBase.h"
#include "OSGImageForeground.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ImageForegroundBase::ImagesFieldMask = 
    (TypeTraits<BitVector>::One << ImageForegroundBase::ImagesFieldId);

const OSG::BitVector  ImageForegroundBase::PositionsFieldMask = 
    (TypeTraits<BitVector>::One << ImageForegroundBase::PositionsFieldId);

const OSG::BitVector ImageForegroundBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ImagePtr        ImageForegroundBase::_mfImages
    The images to display.
*/
/*! \var Pnt2f           ImageForegroundBase::_mfPositions
    The positions of the images.
*/

//! ImageForeground description

FieldDescription *ImageForegroundBase::_desc[] = 
{
    new FieldDescription(MFImagePtr::getClassType(), 
                     "images", 
                     ImagesFieldId, ImagesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageForegroundBase::editMFImages)),
    new FieldDescription(MFPnt2f::getClassType(), 
                     "positions", 
                     PositionsFieldId, PositionsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageForegroundBase::editMFPositions))
};


FieldContainerType ImageForegroundBase::_type(
    "ImageForeground",
    "Foreground",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&ImageForegroundBase::createEmpty),
    ImageForeground::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ImageForegroundBase, ImageForegroundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ImageForegroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ImageForegroundBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ImageForegroundBase::shallowCopy(void) const 
{ 
    ImageForegroundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ImageForeground *>(this)); 

    return returnValue; 
}

UInt32 ImageForegroundBase::getContainerSize(void) const 
{ 
    return sizeof(ImageForeground); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ImageForegroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<ImageForegroundBase *>(&other),
                          whichField);
}
#else
void ImageForegroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ImageForegroundBase *) &other, whichField, sInfo);
}
void ImageForegroundBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ImageForegroundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfImages.terminateShare(uiAspect, this->getContainerSize());
    _mfPositions.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ImageForegroundBase::ImageForegroundBase(void) :
    _mfImages                 (), 
    _mfPositions              (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ImageForegroundBase::ImageForegroundBase(const ImageForegroundBase &source) :
    _mfImages                 (source._mfImages                 ), 
    _mfPositions              (source._mfPositions              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ImageForegroundBase::~ImageForegroundBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ImageForegroundBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        returnValue += _mfImages.getBinSize();
    }

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _mfPositions.getBinSize();
    }


    return returnValue;
}

void ImageForegroundBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        _mfImages.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyToBin(pMem);
    }


}

void ImageForegroundBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        _mfImages.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ImageForegroundBase::executeSyncImpl(      ImageForegroundBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
        _mfImages.syncWith(pOther->_mfImages);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _mfPositions.syncWith(pOther->_mfPositions);


}
#else
void ImageForegroundBase::executeSyncImpl(      ImageForegroundBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (ImagesFieldMask & whichField))
        _mfImages.syncWith(pOther->_mfImages, sInfo);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _mfPositions.syncWith(pOther->_mfPositions, sInfo);


}

void ImageForegroundBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
        _mfImages.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _mfPositions.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ImageForegroundPtr>::_type("ImageForegroundPtr", "ForegroundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ImageForegroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ImageForegroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGIMAGEFOREGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGIMAGEFOREGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGIMAGEFOREGROUNDFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

