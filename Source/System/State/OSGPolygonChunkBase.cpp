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
 **     class PolygonChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPOLYGONCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPolygonChunkBase.h"
#include "OSGPolygonChunk.h"

#include <OSGGL.h>                        // CullFace default header
#include <OSGGL.h>                        // FrontFace default header
#include <OSGGL.h>                        // FrontMode default header
#include <OSGGL.h>                        // BackMode default header
#include <OSGGL.h>                        // Smooth default header
#include <OSGGL.h>                        // OffsetPoint default header
#include <OSGGL.h>                        // OffsetLine default header
#include <OSGGL.h>                        // OffsetFill default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  PolygonChunkBase::CullFaceFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::CullFaceFieldId);

const OSG::BitVector  PolygonChunkBase::FrontFaceFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::FrontFaceFieldId);

const OSG::BitVector  PolygonChunkBase::FrontModeFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::FrontModeFieldId);

const OSG::BitVector  PolygonChunkBase::BackModeFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::BackModeFieldId);

const OSG::BitVector  PolygonChunkBase::SmoothFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::SmoothFieldId);

const OSG::BitVector  PolygonChunkBase::OffsetFactorFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::OffsetFactorFieldId);

const OSG::BitVector  PolygonChunkBase::OffsetBiasFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::OffsetBiasFieldId);

const OSG::BitVector  PolygonChunkBase::OffsetPointFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::OffsetPointFieldId);

const OSG::BitVector  PolygonChunkBase::OffsetLineFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::OffsetLineFieldId);

const OSG::BitVector  PolygonChunkBase::OffsetFillFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::OffsetFillFieldId);

const OSG::BitVector  PolygonChunkBase::StippleFieldMask = 
    (TypeTraits<BitVector>::One << PolygonChunkBase::StippleFieldId);

const OSG::BitVector PolygonChunkBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var GLenum          PolygonChunkBase::_sfCullFace
    Defines which side of the polygon is invisible. Set to GL_NONE to not cull anything.
*/
/*! \var GLenum          PolygonChunkBase::_sfFrontFace
    Defines which side of the polygon is considered the front side,          defaults to GL_CCW.
*/
/*! \var GLenum          PolygonChunkBase::_sfFrontMode
    Defines if polygon front sides are rendered filled (default), outlined or as points.
*/
/*! \var GLenum          PolygonChunkBase::_sfBackMode
    Defines if polygon front sides are rendered filled (default), outlined or as points.
*/
/*! \var bool            PolygonChunkBase::_sfSmooth
    Defines if polygon antialiasing is used.
*/
/*! \var Real32          PolygonChunkBase::_sfOffsetFactor
    Defines the offset factor.
*/
/*! \var Real32          PolygonChunkBase::_sfOffsetBias
    Defines the offset bias.
*/
/*! \var bool            PolygonChunkBase::_sfOffsetPoint
    Enables offsetting for points.
*/
/*! \var bool            PolygonChunkBase::_sfOffsetLine
    Enables offsetting for lines.
*/
/*! \var bool            PolygonChunkBase::_sfOffsetFill
    Enables offsetting for polygons.
*/
/*! \var Int32           PolygonChunkBase::_mfStipple
    Defines the stipple pattern. Is only valid and used if it contains          32 elements.
*/

//! PolygonChunk description

FieldDescription *PolygonChunkBase::_desc[] = 
{
    new FieldDescription(SFGLenum::getClassType(), 
                     "cullFace", 
                     CullFaceFieldId, CullFaceFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFCullFace)),
    new FieldDescription(SFGLenum::getClassType(), 
                     "frontFace", 
                     FrontFaceFieldId, FrontFaceFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFFrontFace)),
    new FieldDescription(SFGLenum::getClassType(), 
                     "frontMode", 
                     FrontModeFieldId, FrontModeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFFrontMode)),
    new FieldDescription(SFGLenum::getClassType(), 
                     "backMode", 
                     BackModeFieldId, BackModeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFBackMode)),
    new FieldDescription(SFBool::getClassType(), 
                     "smooth", 
                     SmoothFieldId, SmoothFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFSmooth)),
    new FieldDescription(SFReal32::getClassType(), 
                     "offsetFactor", 
                     OffsetFactorFieldId, OffsetFactorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFOffsetFactor)),
    new FieldDescription(SFReal32::getClassType(), 
                     "offsetBias", 
                     OffsetBiasFieldId, OffsetBiasFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFOffsetBias)),
    new FieldDescription(SFBool::getClassType(), 
                     "offsetPoint", 
                     OffsetPointFieldId, OffsetPointFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFOffsetPoint)),
    new FieldDescription(SFBool::getClassType(), 
                     "offsetLine", 
                     OffsetLineFieldId, OffsetLineFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFOffsetLine)),
    new FieldDescription(SFBool::getClassType(), 
                     "offsetFill", 
                     OffsetFillFieldId, OffsetFillFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editSFOffsetFill)),
    new FieldDescription(MFInt32::getClassType(), 
                     "stipple", 
                     StippleFieldId, StippleFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PolygonChunkBase::editMFStipple))
};


FieldContainerType PolygonChunkBase::_type(
    "PolygonChunk",
    "StateChunk",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&PolygonChunkBase::createEmpty),
    PolygonChunk::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PolygonChunkBase, PolygonChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PolygonChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PolygonChunkBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PolygonChunkBase::shallowCopy(void) const 
{ 
    PolygonChunkPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PolygonChunk *>(this)); 

    return returnValue; 
}

UInt32 PolygonChunkBase::getContainerSize(void) const 
{ 
    return sizeof(PolygonChunk); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PolygonChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<PolygonChunkBase *>(&other),
                          whichField);
}
#else
void PolygonChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PolygonChunkBase *) &other, whichField, sInfo);
}
void PolygonChunkBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PolygonChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfStipple.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PolygonChunkBase::PolygonChunkBase(void) :
    _sfCullFace               (GLenum(GL_NONE)), 
    _sfFrontFace              (GLenum(GL_CCW)), 
    _sfFrontMode              (GLenum(GL_FILL)), 
    _sfBackMode               (GLenum(GL_FILL)), 
    _sfSmooth                 (bool(GL_FALSE)), 
    _sfOffsetFactor           (Real32(0)), 
    _sfOffsetBias             (Real32(0)), 
    _sfOffsetPoint            (bool(GL_FALSE)), 
    _sfOffsetLine             (bool(GL_FALSE)), 
    _sfOffsetFill             (bool(GL_FALSE)), 
    _mfStipple                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PolygonChunkBase::PolygonChunkBase(const PolygonChunkBase &source) :
    _sfCullFace               (source._sfCullFace               ), 
    _sfFrontFace              (source._sfFrontFace              ), 
    _sfFrontMode              (source._sfFrontMode              ), 
    _sfBackMode               (source._sfBackMode               ), 
    _sfSmooth                 (source._sfSmooth                 ), 
    _sfOffsetFactor           (source._sfOffsetFactor           ), 
    _sfOffsetBias             (source._sfOffsetBias             ), 
    _sfOffsetPoint            (source._sfOffsetPoint            ), 
    _sfOffsetLine             (source._sfOffsetLine             ), 
    _sfOffsetFill             (source._sfOffsetFill             ), 
    _mfStipple                (source._mfStipple                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PolygonChunkBase::~PolygonChunkBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PolygonChunkBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
    {
        returnValue += _sfCullFace.getBinSize();
    }

    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
    {
        returnValue += _sfFrontFace.getBinSize();
    }

    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
    {
        returnValue += _sfFrontMode.getBinSize();
    }

    if(FieldBits::NoField != (BackModeFieldMask & whichField))
    {
        returnValue += _sfBackMode.getBinSize();
    }

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        returnValue += _sfSmooth.getBinSize();
    }

    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        returnValue += _sfOffsetFactor.getBinSize();
    }

    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        returnValue += _sfOffsetBias.getBinSize();
    }

    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
    {
        returnValue += _sfOffsetPoint.getBinSize();
    }

    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
    {
        returnValue += _sfOffsetLine.getBinSize();
    }

    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
    {
        returnValue += _sfOffsetFill.getBinSize();
    }

    if(FieldBits::NoField != (StippleFieldMask & whichField))
    {
        returnValue += _mfStipple.getBinSize();
    }


    return returnValue;
}

void PolygonChunkBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
    {
        _sfCullFace.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
    {
        _sfFrontFace.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
    {
        _sfFrontMode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BackModeFieldMask & whichField))
    {
        _sfBackMode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        _sfOffsetFactor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        _sfOffsetBias.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
    {
        _sfOffsetPoint.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
    {
        _sfOffsetLine.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
    {
        _sfOffsetFill.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StippleFieldMask & whichField))
    {
        _mfStipple.copyToBin(pMem);
    }


}

void PolygonChunkBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
    {
        _sfCullFace.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
    {
        _sfFrontFace.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
    {
        _sfFrontMode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BackModeFieldMask & whichField))
    {
        _sfBackMode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        _sfOffsetFactor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        _sfOffsetBias.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
    {
        _sfOffsetPoint.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
    {
        _sfOffsetLine.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
    {
        _sfOffsetFill.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StippleFieldMask & whichField))
    {
        _mfStipple.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PolygonChunkBase::executeSyncImpl(      PolygonChunkBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
        _sfCullFace.syncWith(pOther->_sfCullFace);

    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
        _sfFrontFace.syncWith(pOther->_sfFrontFace);

    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
        _sfFrontMode.syncWith(pOther->_sfFrontMode);

    if(FieldBits::NoField != (BackModeFieldMask & whichField))
        _sfBackMode.syncWith(pOther->_sfBackMode);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pOther->_sfSmooth);

    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
        _sfOffsetFactor.syncWith(pOther->_sfOffsetFactor);

    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
        _sfOffsetBias.syncWith(pOther->_sfOffsetBias);

    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
        _sfOffsetPoint.syncWith(pOther->_sfOffsetPoint);

    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
        _sfOffsetLine.syncWith(pOther->_sfOffsetLine);

    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
        _sfOffsetFill.syncWith(pOther->_sfOffsetFill);

    if(FieldBits::NoField != (StippleFieldMask & whichField))
        _mfStipple.syncWith(pOther->_mfStipple);


}
#else
void PolygonChunkBase::executeSyncImpl(      PolygonChunkBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
        _sfCullFace.syncWith(pOther->_sfCullFace);

    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
        _sfFrontFace.syncWith(pOther->_sfFrontFace);

    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
        _sfFrontMode.syncWith(pOther->_sfFrontMode);

    if(FieldBits::NoField != (BackModeFieldMask & whichField))
        _sfBackMode.syncWith(pOther->_sfBackMode);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pOther->_sfSmooth);

    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
        _sfOffsetFactor.syncWith(pOther->_sfOffsetFactor);

    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
        _sfOffsetBias.syncWith(pOther->_sfOffsetBias);

    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
        _sfOffsetPoint.syncWith(pOther->_sfOffsetPoint);

    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
        _sfOffsetLine.syncWith(pOther->_sfOffsetLine);

    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
        _sfOffsetFill.syncWith(pOther->_sfOffsetFill);


    if(FieldBits::NoField != (StippleFieldMask & whichField))
        _mfStipple.syncWith(pOther->_mfStipple, sInfo);


}

void PolygonChunkBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (StippleFieldMask & whichField))
        _mfStipple.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PolygonChunkPtr>::_type("PolygonChunkPtr", "StateChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PolygonChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PolygonChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGPOLYGONCHUNKBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPOLYGONCHUNKBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPOLYGONCHUNKFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

