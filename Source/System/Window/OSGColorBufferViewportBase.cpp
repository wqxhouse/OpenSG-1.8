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
 **     class ColorBufferViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECOLORBUFFERVIEWPORTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGColorBufferViewportBase.h"
#include "OSGColorBufferViewport.h"

#include <OSGGL.h>                        // Red default header
#include <OSGGL.h>                        // Blue default header
#include <OSGGL.h>                        // Green default header
#include <OSGGL.h>                        // Alpha default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  ColorBufferViewportBase::RedFieldMask = 
    (TypeTraits<BitVector>::One << ColorBufferViewportBase::RedFieldId);

const OSG::BitVector  ColorBufferViewportBase::BlueFieldMask = 
    (TypeTraits<BitVector>::One << ColorBufferViewportBase::BlueFieldId);

const OSG::BitVector  ColorBufferViewportBase::GreenFieldMask = 
    (TypeTraits<BitVector>::One << ColorBufferViewportBase::GreenFieldId);

const OSG::BitVector  ColorBufferViewportBase::AlphaFieldMask = 
    (TypeTraits<BitVector>::One << ColorBufferViewportBase::AlphaFieldId);

const OSG::BitVector ColorBufferViewportBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            ColorBufferViewportBase::_sfRed
    Define whether the red color channel is written to.
*/
/*! \var bool            ColorBufferViewportBase::_sfBlue
    Define whether the green color channel is written to.
*/
/*! \var bool            ColorBufferViewportBase::_sfGreen
    Define whether the blue color channel is written to.
*/
/*! \var bool            ColorBufferViewportBase::_sfAlpha
    Define whether the alpha color channel is written to.
*/

//! ColorBufferViewport description

FieldDescription *ColorBufferViewportBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "red", 
                     RedFieldId, RedFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ColorBufferViewportBase::editSFRed)),
    new FieldDescription(SFBool::getClassType(), 
                     "blue", 
                     BlueFieldId, BlueFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ColorBufferViewportBase::editSFBlue)),
    new FieldDescription(SFBool::getClassType(), 
                     "green", 
                     GreenFieldId, GreenFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ColorBufferViewportBase::editSFGreen)),
    new FieldDescription(SFBool::getClassType(), 
                     "alpha", 
                     AlphaFieldId, AlphaFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ColorBufferViewportBase::editSFAlpha))
};


FieldContainerType ColorBufferViewportBase::_type(
    "ColorBufferViewport",
    "Viewport",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&ColorBufferViewportBase::createEmpty),
    ColorBufferViewport::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ColorBufferViewportBase, ColorBufferViewportPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ColorBufferViewportBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ColorBufferViewportBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ColorBufferViewportBase::shallowCopy(void) const 
{ 
    ColorBufferViewportPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ColorBufferViewport *>(this)); 

    return returnValue; 
}

UInt32 ColorBufferViewportBase::getContainerSize(void) const 
{ 
    return sizeof(ColorBufferViewport); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ColorBufferViewportBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<ColorBufferViewportBase *>(&other),
                          whichField);
}
#else
void ColorBufferViewportBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ColorBufferViewportBase *) &other, whichField, sInfo);
}
void ColorBufferViewportBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ColorBufferViewportBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ColorBufferViewportBase::ColorBufferViewportBase(void) :
    _sfRed                    (bool(GL_TRUE)), 
    _sfBlue                   (bool(GL_TRUE)), 
    _sfGreen                  (bool(GL_TRUE)), 
    _sfAlpha                  (bool(GL_TRUE)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ColorBufferViewportBase::ColorBufferViewportBase(const ColorBufferViewportBase &source) :
    _sfRed                    (source._sfRed                    ), 
    _sfBlue                   (source._sfBlue                   ), 
    _sfGreen                  (source._sfGreen                  ), 
    _sfAlpha                  (source._sfAlpha                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ColorBufferViewportBase::~ColorBufferViewportBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ColorBufferViewportBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
    {
        returnValue += _sfRed.getBinSize();
    }

    if(FieldBits::NoField != (BlueFieldMask & whichField))
    {
        returnValue += _sfBlue.getBinSize();
    }

    if(FieldBits::NoField != (GreenFieldMask & whichField))
    {
        returnValue += _sfGreen.getBinSize();
    }

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }


    return returnValue;
}

void ColorBufferViewportBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
    {
        _sfRed.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BlueFieldMask & whichField))
    {
        _sfBlue.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GreenFieldMask & whichField))
    {
        _sfGreen.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }


}

void ColorBufferViewportBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
    {
        _sfRed.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BlueFieldMask & whichField))
    {
        _sfBlue.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GreenFieldMask & whichField))
    {
        _sfGreen.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ColorBufferViewportBase::executeSyncImpl(      ColorBufferViewportBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
        _sfRed.syncWith(pOther->_sfRed);

    if(FieldBits::NoField != (BlueFieldMask & whichField))
        _sfBlue.syncWith(pOther->_sfBlue);

    if(FieldBits::NoField != (GreenFieldMask & whichField))
        _sfGreen.syncWith(pOther->_sfGreen);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pOther->_sfAlpha);


}
#else
void ColorBufferViewportBase::executeSyncImpl(      ColorBufferViewportBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (RedFieldMask & whichField))
        _sfRed.syncWith(pOther->_sfRed);

    if(FieldBits::NoField != (BlueFieldMask & whichField))
        _sfBlue.syncWith(pOther->_sfBlue);

    if(FieldBits::NoField != (GreenFieldMask & whichField))
        _sfGreen.syncWith(pOther->_sfGreen);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pOther->_sfAlpha);



}

void ColorBufferViewportBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<ColorBufferViewportPtr>::_type("ColorBufferViewportPtr", "ViewportPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ColorBufferViewportPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ColorBufferViewportPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGCOLORBUFFERVIEWPORTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCOLORBUFFERVIEWPORTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCOLORBUFFERVIEWPORTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

