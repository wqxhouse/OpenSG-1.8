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
 **     class Fog!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFOGINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGFogBase.h"
#include "OSGFog.h"

#include <OSGGL.h>                        // Mode default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  FogBase::OnFieldMask = 
    (TypeTraits<BitVector>::One << FogBase::OnFieldId);

const OSG::BitVector  FogBase::ModeFieldMask = 
    (TypeTraits<BitVector>::One << FogBase::ModeFieldId);

const OSG::BitVector  FogBase::ColorFieldMask = 
    (TypeTraits<BitVector>::One << FogBase::ColorFieldId);

const OSG::BitVector  FogBase::StartFieldMask = 
    (TypeTraits<BitVector>::One << FogBase::StartFieldId);

const OSG::BitVector  FogBase::EndFieldMask = 
    (TypeTraits<BitVector>::One << FogBase::EndFieldId);

const OSG::BitVector  FogBase::DensityFieldMask = 
    (TypeTraits<BitVector>::One << FogBase::DensityFieldId);

const OSG::BitVector FogBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            FogBase::_sfOn
    Whether the fog should be enabled or not.
*/
/*! \var GLenum          FogBase::_sfMode
    The fog type to use. The default is LINEAR.
*/
/*! \var Color4f         FogBase::_sfColor
    The color of the fog.
*/
/*! \var Real32          FogBase::_sfStart
    The near value for the fog, defaults to 0.
*/
/*! \var Real32          FogBase::_sfEnd
    The far value for the fog, defaults to 1.
*/
/*! \var Real32          FogBase::_sfDensity
    The density of the fog, defaults to 1.
*/

//! Fog description

FieldDescription *FogBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "on", 
                     OnFieldId, OnFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogBase::editSFOn)),
    new FieldDescription(SFGLenum::getClassType(), 
                     "mode", 
                     ModeFieldId, ModeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogBase::editSFMode)),
    new FieldDescription(SFColor4f::getClassType(), 
                     "color", 
                     ColorFieldId, ColorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogBase::editSFColor)),
    new FieldDescription(SFReal32::getClassType(), 
                     "start", 
                     StartFieldId, StartFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogBase::editSFStart)),
    new FieldDescription(SFReal32::getClassType(), 
                     "end", 
                     EndFieldId, EndFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogBase::editSFEnd)),
    new FieldDescription(SFReal32::getClassType(), 
                     "density", 
                     DensityFieldId, DensityFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogBase::editSFDensity))
};


FieldContainerType FogBase::_type(
    "Fog",
    "Group",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&FogBase::createEmpty),
    Fog::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(FogBase, FogPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &FogBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FogBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr FogBase::shallowCopy(void) const 
{ 
    FogPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Fog *>(this)); 

    return returnValue; 
}

UInt32 FogBase::getContainerSize(void) const 
{ 
    return sizeof(Fog); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void FogBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<FogBase *>(&other),
                          whichField);
}
#else
void FogBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((FogBase *) &other, whichField, sInfo);
}
void FogBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FogBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

FogBase::FogBase(void) :
    _sfOn                     (bool(true)), 
    _sfMode                   (GLenum(GL_LINEAR)), 
    _sfColor                  (Color4f(1.0, 1.0, 1.0, 1.0)), 
    _sfStart                  (Real32(0.0f)), 
    _sfEnd                    (Real32(1.0f)), 
    _sfDensity                (Real32(1.0f)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

FogBase::FogBase(const FogBase &source) :
    _sfOn                     (source._sfOn                     ), 
    _sfMode                   (source._sfMode                   ), 
    _sfColor                  (source._sfColor                  ), 
    _sfStart                  (source._sfStart                  ), 
    _sfEnd                    (source._sfEnd                    ), 
    _sfDensity                (source._sfDensity                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

FogBase::~FogBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 FogBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        returnValue += _sfOn.getBinSize();
    }

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        returnValue += _sfMode.getBinSize();
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }

    if(FieldBits::NoField != (StartFieldMask & whichField))
    {
        returnValue += _sfStart.getBinSize();
    }

    if(FieldBits::NoField != (EndFieldMask & whichField))
    {
        returnValue += _sfEnd.getBinSize();
    }

    if(FieldBits::NoField != (DensityFieldMask & whichField))
    {
        returnValue += _sfDensity.getBinSize();
    }


    return returnValue;
}

void FogBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        _sfOn.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StartFieldMask & whichField))
    {
        _sfStart.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EndFieldMask & whichField))
    {
        _sfEnd.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DensityFieldMask & whichField))
    {
        _sfDensity.copyToBin(pMem);
    }


}

void FogBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        _sfOn.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StartFieldMask & whichField))
    {
        _sfStart.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EndFieldMask & whichField))
    {
        _sfEnd.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DensityFieldMask & whichField))
    {
        _sfDensity.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FogBase::executeSyncImpl(      FogBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (OnFieldMask & whichField))
        _sfOn.syncWith(pOther->_sfOn);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pOther->_sfMode);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (StartFieldMask & whichField))
        _sfStart.syncWith(pOther->_sfStart);

    if(FieldBits::NoField != (EndFieldMask & whichField))
        _sfEnd.syncWith(pOther->_sfEnd);

    if(FieldBits::NoField != (DensityFieldMask & whichField))
        _sfDensity.syncWith(pOther->_sfDensity);


}
#else
void FogBase::executeSyncImpl(      FogBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (OnFieldMask & whichField))
        _sfOn.syncWith(pOther->_sfOn);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pOther->_sfMode);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (StartFieldMask & whichField))
        _sfStart.syncWith(pOther->_sfStart);

    if(FieldBits::NoField != (EndFieldMask & whichField))
        _sfEnd.syncWith(pOther->_sfEnd);

    if(FieldBits::NoField != (DensityFieldMask & whichField))
        _sfDensity.syncWith(pOther->_sfDensity);



}

void FogBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<FogPtr>::_type("FogPtr", "GroupPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(FogPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGFogBase.cpp,v 1.1 2009/11/13 15:44:26 yjung Exp $";
    static Char8 cvsid_hpp       [] = OSGFOGBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFOGBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFOGFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

