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
 **     class Terrain!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETERRAININST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGTerrainBase.h"
#include "OSGTerrain.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TerrainBase::HeightDataFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::HeightDataFieldId);

const OSG::BitVector  TerrainBase::HeightScaleFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::HeightScaleFieldId);

const OSG::BitVector  TerrainBase::HeightErrorFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::HeightErrorFieldId);

const OSG::BitVector  TerrainBase::HeightQuadFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::HeightQuadFieldId);

const OSG::BitVector  TerrainBase::WidthFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::WidthFieldId);

const OSG::BitVector  TerrainBase::LevelFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::LevelFieldId);

const OSG::BitVector  TerrainBase::DetailFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::DetailFieldId);

const OSG::BitVector  TerrainBase::BorderDetailFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::BorderDetailFieldId);

const OSG::BitVector  TerrainBase::VertexSpacingFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::VertexSpacingFieldId);

const OSG::BitVector  TerrainBase::HeightVerticesFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::HeightVerticesFieldId);

const OSG::BitVector  TerrainBase::GeoMorphingFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::GeoMorphingFieldId);

const OSG::BitVector  TerrainBase::BoundMinFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::BoundMinFieldId);

const OSG::BitVector  TerrainBase::BoundMaxFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::BoundMaxFieldId);

const OSG::BitVector  TerrainBase::EyePointFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::EyePointFieldId);

const OSG::BitVector  TerrainBase::EyeHeightFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::EyeHeightFieldId);

const OSG::BitVector  TerrainBase::EyePointValidFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::EyePointValidFieldId);

const OSG::BitVector  TerrainBase::OriginXFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::OriginXFieldId);

const OSG::BitVector  TerrainBase::OriginYFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::OriginYFieldId);

const OSG::BitVector  TerrainBase::OriginTexXFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::OriginTexXFieldId);

const OSG::BitVector  TerrainBase::OriginTexYFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::OriginTexYFieldId);

const OSG::BitVector  TerrainBase::TexSpacingFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::TexSpacingFieldId);

const OSG::BitVector  TerrainBase::TexYSpacingFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::TexYSpacingFieldId);

const OSG::BitVector  TerrainBase::UpdateTerrainFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::UpdateTerrainFieldId);

const OSG::BitVector  TerrainBase::PerPixelLightingFieldMask = 
    (TypeTraits<BitVector>::One << TerrainBase::PerPixelLightingFieldId);

const OSG::BitVector TerrainBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ImagePtr        TerrainBase::_sfHeightData
    Terrain height as image
*/
/*! \var Real32          TerrainBase::_sfHeightScale
    Scale factor for terrain height
*/
/*! \var Real32          TerrainBase::_mfHeightError
    Error values
*/
/*! \var Real32          TerrainBase::_mfHeightQuad
    Vertex indices used in current tesselation (encoding terrain quadtree)
*/
/*! \var UInt32          TerrainBase::_sfWidth
    width and height of dataset
*/
/*! \var UInt32          TerrainBase::_sfLevel
    levels of terrain quadtree
*/
/*! \var Real32          TerrainBase::_sfDetail
    Detail of terrain tesselation
*/
/*! \var Int32           TerrainBase::_sfBorderDetail
    Detail for borders (0: determined by height data, positive: borders at level borderDetail)
*/
/*! \var Real32          TerrainBase::_sfVertexSpacing
    Spacing to horizontal and vertical neighbour vertices
*/
/*! \var GeoPositionsPtr TerrainBase::_sfHeightVertices
    Precomputed terrain vertices
*/
/*! \var bool            TerrainBase::_sfGeoMorphing
    
*/
/*! \var Pnt3f           TerrainBase::_sfBoundMin
    Min vertex of AABB
*/
/*! \var Pnt3f           TerrainBase::_sfBoundMax
    Max vertex of AABB
*/
/*! \var Pnt3f           TerrainBase::_sfEyePoint
    Eye point of this frame
*/
/*! \var Real32          TerrainBase::_sfEyeHeight
    Height of eye point above terrain
*/
/*! \var bool            TerrainBase::_sfEyePointValid
    Eye point set externally, otherwise it is computed internally
*/
/*! \var Real32          TerrainBase::_sfOriginX
    X-component of terrain lower left point
*/
/*! \var Real32          TerrainBase::_sfOriginY
    Y-component of terrain lower left point
*/
/*! \var Real32          TerrainBase::_sfOriginTexX
    texture X-component of terrain lower left point
*/
/*! \var Real32          TerrainBase::_sfOriginTexY
    texture Y-component of terrain lower left point
*/
/*! \var Real32          TerrainBase::_sfTexSpacing
    Spacing of texture coordinates for horizontal (and vertical) neighbour vertices
*/
/*! \var Real32          TerrainBase::_sfTexYSpacing
    Spacing of texture coordinates for vertical neighbour vertices
*/
/*! \var bool            TerrainBase::_sfUpdateTerrain
    update terrain in next frame
*/
/*! \var bool            TerrainBase::_sfPerPixelLighting
    Do per-pixel lighting with normalmap; otherwise generate per-vertex normals
*/

//! Terrain description

FieldDescription *TerrainBase::_desc[] = 
{
    new FieldDescription(SFImagePtr::getClassType(), 
                     "heightData", 
                     HeightDataFieldId, HeightDataFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFHeightData)),
    new FieldDescription(SFReal32::getClassType(), 
                     "heightScale", 
                     HeightScaleFieldId, HeightScaleFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFHeightScale)),
    new FieldDescription(MFReal32::getClassType(), 
                     "heightError", 
                     HeightErrorFieldId, HeightErrorFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editMFHeightError)),
    new FieldDescription(MFReal32::getClassType(), 
                     "heightQuad", 
                     HeightQuadFieldId, HeightQuadFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editMFHeightQuad)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "width", 
                     WidthFieldId, WidthFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFWidth)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "level", 
                     LevelFieldId, LevelFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFLevel)),
    new FieldDescription(SFReal32::getClassType(), 
                     "detail", 
                     DetailFieldId, DetailFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFDetail)),
    new FieldDescription(SFInt32::getClassType(), 
                     "borderDetail", 
                     BorderDetailFieldId, BorderDetailFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFBorderDetail)),
    new FieldDescription(SFReal32::getClassType(), 
                     "vertexSpacing", 
                     VertexSpacingFieldId, VertexSpacingFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFVertexSpacing)),
    new FieldDescription(SFGeoPositionsPtr::getClassType(), 
                     "heightVertices", 
                     HeightVerticesFieldId, HeightVerticesFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFHeightVertices)),
    new FieldDescription(SFBool::getClassType(), 
                     "geoMorphing", 
                     GeoMorphingFieldId, GeoMorphingFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFGeoMorphing)),
    new FieldDescription(SFPnt3f::getClassType(), 
                     "boundMin", 
                     BoundMinFieldId, BoundMinFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFBoundMin)),
    new FieldDescription(SFPnt3f::getClassType(), 
                     "boundMax", 
                     BoundMaxFieldId, BoundMaxFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFBoundMax)),
    new FieldDescription(SFPnt3f::getClassType(), 
                     "eyePoint", 
                     EyePointFieldId, EyePointFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFEyePoint)),
    new FieldDescription(SFReal32::getClassType(), 
                     "eyeHeight", 
                     EyeHeightFieldId, EyeHeightFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFEyeHeight)),
    new FieldDescription(SFBool::getClassType(), 
                     "eyePointValid", 
                     EyePointValidFieldId, EyePointValidFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFEyePointValid)),
    new FieldDescription(SFReal32::getClassType(), 
                     "originX", 
                     OriginXFieldId, OriginXFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFOriginX)),
    new FieldDescription(SFReal32::getClassType(), 
                     "originY", 
                     OriginYFieldId, OriginYFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFOriginY)),
    new FieldDescription(SFReal32::getClassType(), 
                     "originTexX", 
                     OriginTexXFieldId, OriginTexXFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFOriginTexX)),
    new FieldDescription(SFReal32::getClassType(), 
                     "originTexY", 
                     OriginTexYFieldId, OriginTexYFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFOriginTexY)),
    new FieldDescription(SFReal32::getClassType(), 
                     "texSpacing", 
                     TexSpacingFieldId, TexSpacingFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFTexSpacing)),
    new FieldDescription(SFReal32::getClassType(), 
                     "texYSpacing", 
                     TexYSpacingFieldId, TexYSpacingFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFTexYSpacing)),
    new FieldDescription(SFBool::getClassType(), 
                     "updateTerrain", 
                     UpdateTerrainFieldId, UpdateTerrainFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFUpdateTerrain)),
    new FieldDescription(SFBool::getClassType(), 
                     "perPixelLighting", 
                     PerPixelLightingFieldId, PerPixelLightingFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TerrainBase::editSFPerPixelLighting))
};


FieldContainerType TerrainBase::_type(
    "Terrain",
    "Geometry",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&TerrainBase::createEmpty),
    Terrain::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TerrainBase, TerrainPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TerrainBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TerrainBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TerrainBase::shallowCopy(void) const 
{ 
    TerrainPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Terrain *>(this)); 

    return returnValue; 
}

UInt32 TerrainBase::getContainerSize(void) const 
{ 
    return sizeof(Terrain); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TerrainBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<TerrainBase *>(&other),
                          whichField);
}
#else
void TerrainBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TerrainBase *) &other, whichField, sInfo);
}
void TerrainBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TerrainBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfHeightError.terminateShare(uiAspect, this->getContainerSize());
    _mfHeightQuad.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TerrainBase::TerrainBase(void) :
    _sfHeightData             (), 
    _sfHeightScale            (Real32(1.0f)), 
    _mfHeightError            (), 
    _mfHeightQuad             (), 
    _sfWidth                  (UInt32(0)), 
    _sfLevel                  (UInt32(1)), 
    _sfDetail                 (Real32(22.0f)), 
    _sfBorderDetail           (Int32(0)), 
    _sfVertexSpacing          (Real32(0.1f)), 
    _sfHeightVertices         (), 
    _sfGeoMorphing            (bool(false)), 
    _sfBoundMin               (), 
    _sfBoundMax               (), 
    _sfEyePoint               (), 
    _sfEyeHeight              (Real32(0.0f)), 
    _sfEyePointValid          (bool(false)), 
    _sfOriginX                (Real32(0.0f)), 
    _sfOriginY                (Real32(0.0f)), 
    _sfOriginTexX             (Real32(0.0f)), 
    _sfOriginTexY             (Real32(0.0f)), 
    _sfTexSpacing             (Real32(1.0f)), 
    _sfTexYSpacing            (Real32(1.0f)), 
    _sfUpdateTerrain          (bool(true)), 
    _sfPerPixelLighting       (bool(true)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TerrainBase::TerrainBase(const TerrainBase &source) :
    _sfHeightData             (source._sfHeightData             ), 
    _sfHeightScale            (source._sfHeightScale            ), 
    _mfHeightError            (source._mfHeightError            ), 
    _mfHeightQuad             (source._mfHeightQuad             ), 
    _sfWidth                  (source._sfWidth                  ), 
    _sfLevel                  (source._sfLevel                  ), 
    _sfDetail                 (source._sfDetail                 ), 
    _sfBorderDetail           (source._sfBorderDetail           ), 
    _sfVertexSpacing          (source._sfVertexSpacing          ), 
    _sfHeightVertices         (source._sfHeightVertices         ), 
    _sfGeoMorphing            (source._sfGeoMorphing            ), 
    _sfBoundMin               (source._sfBoundMin               ), 
    _sfBoundMax               (source._sfBoundMax               ), 
    _sfEyePoint               (source._sfEyePoint               ), 
    _sfEyeHeight              (source._sfEyeHeight              ), 
    _sfEyePointValid          (source._sfEyePointValid          ), 
    _sfOriginX                (source._sfOriginX                ), 
    _sfOriginY                (source._sfOriginY                ), 
    _sfOriginTexX             (source._sfOriginTexX             ), 
    _sfOriginTexY             (source._sfOriginTexY             ), 
    _sfTexSpacing             (source._sfTexSpacing             ), 
    _sfTexYSpacing            (source._sfTexYSpacing            ), 
    _sfUpdateTerrain          (source._sfUpdateTerrain          ), 
    _sfPerPixelLighting       (source._sfPerPixelLighting       ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TerrainBase::~TerrainBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TerrainBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HeightDataFieldMask & whichField))
    {
        returnValue += _sfHeightData.getBinSize();
    }

    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
    {
        returnValue += _sfHeightScale.getBinSize();
    }

    if(FieldBits::NoField != (HeightErrorFieldMask & whichField))
    {
        returnValue += _mfHeightError.getBinSize();
    }

    if(FieldBits::NoField != (HeightQuadFieldMask & whichField))
    {
        returnValue += _mfHeightQuad.getBinSize();
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }

    if(FieldBits::NoField != (LevelFieldMask & whichField))
    {
        returnValue += _sfLevel.getBinSize();
    }

    if(FieldBits::NoField != (DetailFieldMask & whichField))
    {
        returnValue += _sfDetail.getBinSize();
    }

    if(FieldBits::NoField != (BorderDetailFieldMask & whichField))
    {
        returnValue += _sfBorderDetail.getBinSize();
    }

    if(FieldBits::NoField != (VertexSpacingFieldMask & whichField))
    {
        returnValue += _sfVertexSpacing.getBinSize();
    }

    if(FieldBits::NoField != (HeightVerticesFieldMask & whichField))
    {
        returnValue += _sfHeightVertices.getBinSize();
    }

    if(FieldBits::NoField != (GeoMorphingFieldMask & whichField))
    {
        returnValue += _sfGeoMorphing.getBinSize();
    }

    if(FieldBits::NoField != (BoundMinFieldMask & whichField))
    {
        returnValue += _sfBoundMin.getBinSize();
    }

    if(FieldBits::NoField != (BoundMaxFieldMask & whichField))
    {
        returnValue += _sfBoundMax.getBinSize();
    }

    if(FieldBits::NoField != (EyePointFieldMask & whichField))
    {
        returnValue += _sfEyePoint.getBinSize();
    }

    if(FieldBits::NoField != (EyeHeightFieldMask & whichField))
    {
        returnValue += _sfEyeHeight.getBinSize();
    }

    if(FieldBits::NoField != (EyePointValidFieldMask & whichField))
    {
        returnValue += _sfEyePointValid.getBinSize();
    }

    if(FieldBits::NoField != (OriginXFieldMask & whichField))
    {
        returnValue += _sfOriginX.getBinSize();
    }

    if(FieldBits::NoField != (OriginYFieldMask & whichField))
    {
        returnValue += _sfOriginY.getBinSize();
    }

    if(FieldBits::NoField != (OriginTexXFieldMask & whichField))
    {
        returnValue += _sfOriginTexX.getBinSize();
    }

    if(FieldBits::NoField != (OriginTexYFieldMask & whichField))
    {
        returnValue += _sfOriginTexY.getBinSize();
    }

    if(FieldBits::NoField != (TexSpacingFieldMask & whichField))
    {
        returnValue += _sfTexSpacing.getBinSize();
    }

    if(FieldBits::NoField != (TexYSpacingFieldMask & whichField))
    {
        returnValue += _sfTexYSpacing.getBinSize();
    }

    if(FieldBits::NoField != (UpdateTerrainFieldMask & whichField))
    {
        returnValue += _sfUpdateTerrain.getBinSize();
    }

    if(FieldBits::NoField != (PerPixelLightingFieldMask & whichField))
    {
        returnValue += _sfPerPixelLighting.getBinSize();
    }


    return returnValue;
}

void TerrainBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HeightDataFieldMask & whichField))
    {
        _sfHeightData.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
    {
        _sfHeightScale.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HeightErrorFieldMask & whichField))
    {
        _mfHeightError.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HeightQuadFieldMask & whichField))
    {
        _mfHeightQuad.copyToBin(pMem);
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LevelFieldMask & whichField))
    {
        _sfLevel.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DetailFieldMask & whichField))
    {
        _sfDetail.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BorderDetailFieldMask & whichField))
    {
        _sfBorderDetail.copyToBin(pMem);
    }

    if(FieldBits::NoField != (VertexSpacingFieldMask & whichField))
    {
        _sfVertexSpacing.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HeightVerticesFieldMask & whichField))
    {
        _sfHeightVertices.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeoMorphingFieldMask & whichField))
    {
        _sfGeoMorphing.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BoundMinFieldMask & whichField))
    {
        _sfBoundMin.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BoundMaxFieldMask & whichField))
    {
        _sfBoundMax.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EyePointFieldMask & whichField))
    {
        _sfEyePoint.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EyeHeightFieldMask & whichField))
    {
        _sfEyeHeight.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EyePointValidFieldMask & whichField))
    {
        _sfEyePointValid.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OriginXFieldMask & whichField))
    {
        _sfOriginX.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OriginYFieldMask & whichField))
    {
        _sfOriginY.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OriginTexXFieldMask & whichField))
    {
        _sfOriginTexX.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OriginTexYFieldMask & whichField))
    {
        _sfOriginTexY.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TexSpacingFieldMask & whichField))
    {
        _sfTexSpacing.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TexYSpacingFieldMask & whichField))
    {
        _sfTexYSpacing.copyToBin(pMem);
    }

    if(FieldBits::NoField != (UpdateTerrainFieldMask & whichField))
    {
        _sfUpdateTerrain.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PerPixelLightingFieldMask & whichField))
    {
        _sfPerPixelLighting.copyToBin(pMem);
    }


}

void TerrainBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HeightDataFieldMask & whichField))
    {
        _sfHeightData.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
    {
        _sfHeightScale.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HeightErrorFieldMask & whichField))
    {
        _mfHeightError.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HeightQuadFieldMask & whichField))
    {
        _mfHeightQuad.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LevelFieldMask & whichField))
    {
        _sfLevel.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DetailFieldMask & whichField))
    {
        _sfDetail.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BorderDetailFieldMask & whichField))
    {
        _sfBorderDetail.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (VertexSpacingFieldMask & whichField))
    {
        _sfVertexSpacing.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HeightVerticesFieldMask & whichField))
    {
        _sfHeightVertices.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeoMorphingFieldMask & whichField))
    {
        _sfGeoMorphing.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BoundMinFieldMask & whichField))
    {
        _sfBoundMin.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BoundMaxFieldMask & whichField))
    {
        _sfBoundMax.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EyePointFieldMask & whichField))
    {
        _sfEyePoint.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EyeHeightFieldMask & whichField))
    {
        _sfEyeHeight.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EyePointValidFieldMask & whichField))
    {
        _sfEyePointValid.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OriginXFieldMask & whichField))
    {
        _sfOriginX.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OriginYFieldMask & whichField))
    {
        _sfOriginY.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OriginTexXFieldMask & whichField))
    {
        _sfOriginTexX.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OriginTexYFieldMask & whichField))
    {
        _sfOriginTexY.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TexSpacingFieldMask & whichField))
    {
        _sfTexSpacing.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TexYSpacingFieldMask & whichField))
    {
        _sfTexYSpacing.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (UpdateTerrainFieldMask & whichField))
    {
        _sfUpdateTerrain.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PerPixelLightingFieldMask & whichField))
    {
        _sfPerPixelLighting.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TerrainBase::executeSyncImpl(      TerrainBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (HeightDataFieldMask & whichField))
        _sfHeightData.syncWith(pOther->_sfHeightData);

    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
        _sfHeightScale.syncWith(pOther->_sfHeightScale);

    if(FieldBits::NoField != (HeightErrorFieldMask & whichField))
        _mfHeightError.syncWith(pOther->_mfHeightError);

    if(FieldBits::NoField != (HeightQuadFieldMask & whichField))
        _mfHeightQuad.syncWith(pOther->_mfHeightQuad);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (LevelFieldMask & whichField))
        _sfLevel.syncWith(pOther->_sfLevel);

    if(FieldBits::NoField != (DetailFieldMask & whichField))
        _sfDetail.syncWith(pOther->_sfDetail);

    if(FieldBits::NoField != (BorderDetailFieldMask & whichField))
        _sfBorderDetail.syncWith(pOther->_sfBorderDetail);

    if(FieldBits::NoField != (VertexSpacingFieldMask & whichField))
        _sfVertexSpacing.syncWith(pOther->_sfVertexSpacing);

    if(FieldBits::NoField != (HeightVerticesFieldMask & whichField))
        _sfHeightVertices.syncWith(pOther->_sfHeightVertices);

    if(FieldBits::NoField != (GeoMorphingFieldMask & whichField))
        _sfGeoMorphing.syncWith(pOther->_sfGeoMorphing);

    if(FieldBits::NoField != (BoundMinFieldMask & whichField))
        _sfBoundMin.syncWith(pOther->_sfBoundMin);

    if(FieldBits::NoField != (BoundMaxFieldMask & whichField))
        _sfBoundMax.syncWith(pOther->_sfBoundMax);

    if(FieldBits::NoField != (EyePointFieldMask & whichField))
        _sfEyePoint.syncWith(pOther->_sfEyePoint);

    if(FieldBits::NoField != (EyeHeightFieldMask & whichField))
        _sfEyeHeight.syncWith(pOther->_sfEyeHeight);

    if(FieldBits::NoField != (EyePointValidFieldMask & whichField))
        _sfEyePointValid.syncWith(pOther->_sfEyePointValid);

    if(FieldBits::NoField != (OriginXFieldMask & whichField))
        _sfOriginX.syncWith(pOther->_sfOriginX);

    if(FieldBits::NoField != (OriginYFieldMask & whichField))
        _sfOriginY.syncWith(pOther->_sfOriginY);

    if(FieldBits::NoField != (OriginTexXFieldMask & whichField))
        _sfOriginTexX.syncWith(pOther->_sfOriginTexX);

    if(FieldBits::NoField != (OriginTexYFieldMask & whichField))
        _sfOriginTexY.syncWith(pOther->_sfOriginTexY);

    if(FieldBits::NoField != (TexSpacingFieldMask & whichField))
        _sfTexSpacing.syncWith(pOther->_sfTexSpacing);

    if(FieldBits::NoField != (TexYSpacingFieldMask & whichField))
        _sfTexYSpacing.syncWith(pOther->_sfTexYSpacing);

    if(FieldBits::NoField != (UpdateTerrainFieldMask & whichField))
        _sfUpdateTerrain.syncWith(pOther->_sfUpdateTerrain);

    if(FieldBits::NoField != (PerPixelLightingFieldMask & whichField))
        _sfPerPixelLighting.syncWith(pOther->_sfPerPixelLighting);


}
#else
void TerrainBase::executeSyncImpl(      TerrainBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (HeightDataFieldMask & whichField))
        _sfHeightData.syncWith(pOther->_sfHeightData);

    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
        _sfHeightScale.syncWith(pOther->_sfHeightScale);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (LevelFieldMask & whichField))
        _sfLevel.syncWith(pOther->_sfLevel);

    if(FieldBits::NoField != (DetailFieldMask & whichField))
        _sfDetail.syncWith(pOther->_sfDetail);

    if(FieldBits::NoField != (BorderDetailFieldMask & whichField))
        _sfBorderDetail.syncWith(pOther->_sfBorderDetail);

    if(FieldBits::NoField != (VertexSpacingFieldMask & whichField))
        _sfVertexSpacing.syncWith(pOther->_sfVertexSpacing);

    if(FieldBits::NoField != (HeightVerticesFieldMask & whichField))
        _sfHeightVertices.syncWith(pOther->_sfHeightVertices);

    if(FieldBits::NoField != (GeoMorphingFieldMask & whichField))
        _sfGeoMorphing.syncWith(pOther->_sfGeoMorphing);

    if(FieldBits::NoField != (BoundMinFieldMask & whichField))
        _sfBoundMin.syncWith(pOther->_sfBoundMin);

    if(FieldBits::NoField != (BoundMaxFieldMask & whichField))
        _sfBoundMax.syncWith(pOther->_sfBoundMax);

    if(FieldBits::NoField != (EyePointFieldMask & whichField))
        _sfEyePoint.syncWith(pOther->_sfEyePoint);

    if(FieldBits::NoField != (EyeHeightFieldMask & whichField))
        _sfEyeHeight.syncWith(pOther->_sfEyeHeight);

    if(FieldBits::NoField != (EyePointValidFieldMask & whichField))
        _sfEyePointValid.syncWith(pOther->_sfEyePointValid);

    if(FieldBits::NoField != (OriginXFieldMask & whichField))
        _sfOriginX.syncWith(pOther->_sfOriginX);

    if(FieldBits::NoField != (OriginYFieldMask & whichField))
        _sfOriginY.syncWith(pOther->_sfOriginY);

    if(FieldBits::NoField != (OriginTexXFieldMask & whichField))
        _sfOriginTexX.syncWith(pOther->_sfOriginTexX);

    if(FieldBits::NoField != (OriginTexYFieldMask & whichField))
        _sfOriginTexY.syncWith(pOther->_sfOriginTexY);

    if(FieldBits::NoField != (TexSpacingFieldMask & whichField))
        _sfTexSpacing.syncWith(pOther->_sfTexSpacing);

    if(FieldBits::NoField != (TexYSpacingFieldMask & whichField))
        _sfTexYSpacing.syncWith(pOther->_sfTexYSpacing);

    if(FieldBits::NoField != (UpdateTerrainFieldMask & whichField))
        _sfUpdateTerrain.syncWith(pOther->_sfUpdateTerrain);

    if(FieldBits::NoField != (PerPixelLightingFieldMask & whichField))
        _sfPerPixelLighting.syncWith(pOther->_sfPerPixelLighting);


    if(FieldBits::NoField != (HeightErrorFieldMask & whichField))
        _mfHeightError.syncWith(pOther->_mfHeightError, sInfo);

    if(FieldBits::NoField != (HeightQuadFieldMask & whichField))
        _mfHeightQuad.syncWith(pOther->_mfHeightQuad, sInfo);


}

void TerrainBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (HeightErrorFieldMask & whichField))
        _mfHeightError.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (HeightQuadFieldMask & whichField))
        _mfHeightQuad.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<TerrainPtr>::_type("TerrainPtr", "GeometryPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TerrainPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TerrainPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGTerrainBase.cpp,v 1.10 2008/06/09 12:28:04 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGTERRAINBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTERRAINBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTERRAINFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

