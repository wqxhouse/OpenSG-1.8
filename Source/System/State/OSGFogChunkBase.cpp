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
 **     class FogChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFOGCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGFogChunkBase.h"
#include "OSGFogChunk.h"

#include <OSGGL.h>                        // Mode default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  FogChunkBase::ModeFieldMask = 
    (TypeTraits<BitVector>::One << FogChunkBase::ModeFieldId);

const OSG::BitVector  FogChunkBase::ColorFieldMask = 
    (TypeTraits<BitVector>::One << FogChunkBase::ColorFieldId);

const OSG::BitVector  FogChunkBase::StartFieldMask = 
    (TypeTraits<BitVector>::One << FogChunkBase::StartFieldId);

const OSG::BitVector  FogChunkBase::EndFieldMask = 
    (TypeTraits<BitVector>::One << FogChunkBase::EndFieldId);

const OSG::BitVector  FogChunkBase::DensityFieldMask = 
    (TypeTraits<BitVector>::One << FogChunkBase::DensityFieldId);

const OSG::BitVector FogChunkBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var GLenum          FogChunkBase::_sfMode
    The fog type to use. The default is LINEAR.
*/
/*! \var Color4f         FogChunkBase::_sfColor
    The color of the fog.
*/
/*! \var Real32          FogChunkBase::_sfStart
    The near value for the fog, defaults to 0.
*/
/*! \var Real32          FogChunkBase::_sfEnd
    The far value for the fog, defaults to 1.
*/
/*! \var Real32          FogChunkBase::_sfDensity
    The density of the fog, defaults to 1.
*/

//! FogChunk description

FieldDescription *FogChunkBase::_desc[] = 
{
    new FieldDescription(SFGLenum::getClassType(), 
                     "mode", 
                     ModeFieldId, ModeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogChunkBase::editSFMode)),
    new FieldDescription(SFColor4f::getClassType(), 
                     "color", 
                     ColorFieldId, ColorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogChunkBase::editSFColor)),
    new FieldDescription(SFReal32::getClassType(), 
                     "start", 
                     StartFieldId, StartFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogChunkBase::editSFStart)),
    new FieldDescription(SFReal32::getClassType(), 
                     "end", 
                     EndFieldId, EndFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogChunkBase::editSFEnd)),
    new FieldDescription(SFReal32::getClassType(), 
                     "density", 
                     DensityFieldId, DensityFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FogChunkBase::editSFDensity))
};


FieldContainerType FogChunkBase::_type(
    "FogChunk",
    "StateChunk",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&FogChunkBase::createEmpty),
    FogChunk::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(FogChunkBase, FogChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &FogChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FogChunkBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr FogChunkBase::shallowCopy(void) const 
{ 
    FogChunkPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FogChunk *>(this)); 

    return returnValue; 
}

UInt32 FogChunkBase::getContainerSize(void) const 
{ 
    return sizeof(FogChunk); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void FogChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<FogChunkBase *>(&other),
                          whichField);
}
#else
void FogChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((FogChunkBase *) &other, whichField, sInfo);
}
void FogChunkBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FogChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

FogChunkBase::FogChunkBase(void) :
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

FogChunkBase::FogChunkBase(const FogChunkBase &source) :
    _sfMode                   (source._sfMode                   ), 
    _sfColor                  (source._sfColor                  ), 
    _sfStart                  (source._sfStart                  ), 
    _sfEnd                    (source._sfEnd                    ), 
    _sfDensity                (source._sfDensity                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

FogChunkBase::~FogChunkBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 FogChunkBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

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

void FogChunkBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

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

void FogChunkBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

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
void FogChunkBase::executeSyncImpl(      FogChunkBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

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
void FogChunkBase::executeSyncImpl(      FogChunkBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

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

void FogChunkBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<FogChunkPtr>::_type("FogChunkPtr", "StateChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(FogChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(FogChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGFogChunkBase.cpp,v 1.2 2009/11/13 18:07:00 neumannc Exp $";
    static Char8 cvsid_hpp       [] = OSGFOGCHUNKBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFOGCHUNKBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFOGCHUNKFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

