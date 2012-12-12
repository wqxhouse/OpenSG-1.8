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
 **     class FBOViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFBOVIEWPORTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGFBOViewportBase.h"
#include "OSGFBOViewport.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  FBOViewportBase::EnabledFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::EnabledFieldId);

const OSG::BitVector  FBOViewportBase::ExcludeNodesFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::ExcludeNodesFieldId);

const OSG::BitVector  FBOViewportBase::RenderNodesFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::RenderNodesFieldId);

const OSG::BitVector  FBOViewportBase::TexturesFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::TexturesFieldId);

const OSG::BitVector  FBOViewportBase::FboOnFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::FboOnFieldId);

const OSG::BitVector  FBOViewportBase::StorageWidthFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::StorageWidthFieldId);

const OSG::BitVector  FBOViewportBase::StorageHeightFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::StorageHeightFieldId);

const OSG::BitVector  FBOViewportBase::GenCubemapsFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::GenCubemapsFieldId);

const OSG::BitVector  FBOViewportBase::GenDepthmapsFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::GenDepthmapsFieldId);

const OSG::BitVector  FBOViewportBase::FrameBufferIndexFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::FrameBufferIndexFieldId);

const OSG::BitVector  FBOViewportBase::DepthBufferIndexFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::DepthBufferIndexFieldId);

const OSG::BitVector  FBOViewportBase::StencilBufferIndexFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::StencilBufferIndexFieldId);

const OSG::BitVector  FBOViewportBase::DirtyFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::DirtyFieldId);

const OSG::BitVector  FBOViewportBase::ReadBufferFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::ReadBufferFieldId);

const OSG::BitVector  FBOViewportBase::IgnoreCameraDecoratorsFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::IgnoreCameraDecoratorsFieldId);

const OSG::BitVector  FBOViewportBase::FboOffIgnoreStorageSizeFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::FboOffIgnoreStorageSizeFieldId);

const OSG::BitVector  FBOViewportBase::ZOffsetFieldMask = 
    (TypeTraits<BitVector>::One << FBOViewportBase::ZOffsetFieldId);

const OSG::BitVector FBOViewportBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            FBOViewportBase::_sfEnabled
    
*/
/*! \var NodePtr         FBOViewportBase::_mfExcludeNodes
    Nodes which shall be excluded
*/
/*! \var NodePtr         FBOViewportBase::_mfRenderNodes
    Nodes which shall be rendered
*/
/*! \var TextureChunkPtr FBOViewportBase::_mfTextures
    The render targets
*/
/*! \var bool            FBOViewportBase::_sfFboOn
    
*/
/*! \var Int32           FBOViewportBase::_sfStorageWidth
    
*/
/*! \var Int32           FBOViewportBase::_sfStorageHeight
    
*/
/*! \var bool            FBOViewportBase::_sfGenCubemaps
    
*/
/*! \var bool            FBOViewportBase::_sfGenDepthmaps
    
*/
/*! \var UInt32          FBOViewportBase::_sfFrameBufferIndex
    
*/
/*! \var UInt32          FBOViewportBase::_sfDepthBufferIndex
    
*/
/*! \var UInt32          FBOViewportBase::_sfStencilBufferIndex
    
*/
/*! \var bool            FBOViewportBase::_sfDirty
    Needs to be set for forceing re-initialization, e.g. when setting texture size.
*/
/*! \var bool            FBOViewportBase::_sfReadBuffer
    Reads current buffer back into image.
*/
/*! \var bool            FBOViewportBase::_sfIgnoreCameraDecorators
    whether the render method should ignore CameraDecorators or not
*/
/*! \var bool            FBOViewportBase::_sfFboOffIgnoreStorageSize
    whether to ignore storage size in Fbo off mode and just consider window size
*/
/*! \var Int32           FBOViewportBase::_mfZOffset
    The zOffset specifies the z-offset of one (or more) 2-dimensional images within a 3-dimensional texture.
*/

//! FBOViewport description

FieldDescription *FBOViewportBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "enabled", 
                     EnabledFieldId, EnabledFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFEnabled)),
    new FieldDescription(MFNodePtr::getClassType(), 
                     "excludeNodes", 
                     ExcludeNodesFieldId, ExcludeNodesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editMFExcludeNodes)),
    new FieldDescription(MFNodePtr::getClassType(), 
                     "renderNodes", 
                     RenderNodesFieldId, RenderNodesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editMFRenderNodes)),
    new FieldDescription(MFTextureChunkPtr::getClassType(), 
                     "textures", 
                     TexturesFieldId, TexturesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editMFTextures)),
    new FieldDescription(SFBool::getClassType(), 
                     "fboOn", 
                     FboOnFieldId, FboOnFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFFboOn)),
    new FieldDescription(SFInt32::getClassType(), 
                     "storageWidth", 
                     StorageWidthFieldId, StorageWidthFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFStorageWidth)),
    new FieldDescription(SFInt32::getClassType(), 
                     "storageHeight", 
                     StorageHeightFieldId, StorageHeightFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFStorageHeight)),
    new FieldDescription(SFBool::getClassType(), 
                     "genCubemaps", 
                     GenCubemapsFieldId, GenCubemapsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFGenCubemaps)),
    new FieldDescription(SFBool::getClassType(), 
                     "genDepthmaps", 
                     GenDepthmapsFieldId, GenDepthmapsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFGenDepthmaps)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "frameBufferIndex", 
                     FrameBufferIndexFieldId, FrameBufferIndexFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFFrameBufferIndex)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "depthBufferIndex", 
                     DepthBufferIndexFieldId, DepthBufferIndexFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFDepthBufferIndex)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "stencilBufferIndex", 
                     StencilBufferIndexFieldId, StencilBufferIndexFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFStencilBufferIndex)),
    new FieldDescription(SFBool::getClassType(), 
                     "dirty", 
                     DirtyFieldId, DirtyFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFDirty)),
    new FieldDescription(SFBool::getClassType(), 
                     "readBuffer", 
                     ReadBufferFieldId, ReadBufferFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFReadBuffer)),
    new FieldDescription(SFBool::getClassType(), 
                     "ignoreCameraDecorators", 
                     IgnoreCameraDecoratorsFieldId, IgnoreCameraDecoratorsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFIgnoreCameraDecorators)),
    new FieldDescription(SFBool::getClassType(), 
                     "fboOffIgnoreStorageSize", 
                     FboOffIgnoreStorageSizeFieldId, FboOffIgnoreStorageSizeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editSFFboOffIgnoreStorageSize)),
    new FieldDescription(MFInt32::getClassType(), 
                     "zOffset", 
                     ZOffsetFieldId, ZOffsetFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&FBOViewportBase::editMFZOffset))
};


FieldContainerType FBOViewportBase::_type(
    "FBOViewport",
    "Viewport",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&FBOViewportBase::createEmpty),
    FBOViewport::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(FBOViewportBase, FBOViewportPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &FBOViewportBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FBOViewportBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr FBOViewportBase::shallowCopy(void) const 
{ 
    FBOViewportPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FBOViewport *>(this)); 

    return returnValue; 
}

UInt32 FBOViewportBase::getContainerSize(void) const 
{ 
    return sizeof(FBOViewport); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void FBOViewportBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<FBOViewportBase *>(&other),
                          whichField);
}
#else
void FBOViewportBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((FBOViewportBase *) &other, whichField, sInfo);
}
void FBOViewportBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FBOViewportBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfExcludeNodes.terminateShare(uiAspect, this->getContainerSize());
    _mfRenderNodes.terminateShare(uiAspect, this->getContainerSize());
    _mfTextures.terminateShare(uiAspect, this->getContainerSize());
    _mfZOffset.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

FBOViewportBase::FBOViewportBase(void) :
    _sfEnabled                (bool(true)), 
    _mfExcludeNodes           (), 
    _mfRenderNodes            (), 
    _mfTextures               (), 
    _sfFboOn                  (bool(true)), 
    _sfStorageWidth           (Int32(256)), 
    _sfStorageHeight          (Int32(256)), 
    _sfGenCubemaps            (bool(false)), 
    _sfGenDepthmaps           (bool(false)), 
    _sfFrameBufferIndex       (UInt32(0)), 
    _sfDepthBufferIndex       (UInt32(0)), 
    _sfStencilBufferIndex     (UInt32(0)), 
    _sfDirty                  (bool(true)), 
    _sfReadBuffer             (bool(false)), 
    _sfIgnoreCameraDecorators (bool(true)), 
    _sfFboOffIgnoreStorageSize(bool(false)), 
    _mfZOffset                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

FBOViewportBase::FBOViewportBase(const FBOViewportBase &source) :
    _sfEnabled                (source._sfEnabled                ), 
    _mfExcludeNodes           (source._mfExcludeNodes           ), 
    _mfRenderNodes            (source._mfRenderNodes            ), 
    _mfTextures               (source._mfTextures               ), 
    _sfFboOn                  (source._sfFboOn                  ), 
    _sfStorageWidth           (source._sfStorageWidth           ), 
    _sfStorageHeight          (source._sfStorageHeight          ), 
    _sfGenCubemaps            (source._sfGenCubemaps            ), 
    _sfGenDepthmaps           (source._sfGenDepthmaps           ), 
    _sfFrameBufferIndex       (source._sfFrameBufferIndex       ), 
    _sfDepthBufferIndex       (source._sfDepthBufferIndex       ), 
    _sfStencilBufferIndex     (source._sfStencilBufferIndex     ), 
    _sfDirty                  (source._sfDirty                  ), 
    _sfReadBuffer             (source._sfReadBuffer             ), 
    _sfIgnoreCameraDecorators (source._sfIgnoreCameraDecorators ), 
    _sfFboOffIgnoreStorageSize(source._sfFboOffIgnoreStorageSize), 
    _mfZOffset                (source._mfZOffset                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

FBOViewportBase::~FBOViewportBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 FBOViewportBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        returnValue += _sfEnabled.getBinSize();
    }

    if(FieldBits::NoField != (ExcludeNodesFieldMask & whichField))
    {
        returnValue += _mfExcludeNodes.getBinSize();
    }

    if(FieldBits::NoField != (RenderNodesFieldMask & whichField))
    {
        returnValue += _mfRenderNodes.getBinSize();
    }

    if(FieldBits::NoField != (TexturesFieldMask & whichField))
    {
        returnValue += _mfTextures.getBinSize();
    }

    if(FieldBits::NoField != (FboOnFieldMask & whichField))
    {
        returnValue += _sfFboOn.getBinSize();
    }

    if(FieldBits::NoField != (StorageWidthFieldMask & whichField))
    {
        returnValue += _sfStorageWidth.getBinSize();
    }

    if(FieldBits::NoField != (StorageHeightFieldMask & whichField))
    {
        returnValue += _sfStorageHeight.getBinSize();
    }

    if(FieldBits::NoField != (GenCubemapsFieldMask & whichField))
    {
        returnValue += _sfGenCubemaps.getBinSize();
    }

    if(FieldBits::NoField != (GenDepthmapsFieldMask & whichField))
    {
        returnValue += _sfGenDepthmaps.getBinSize();
    }

    if(FieldBits::NoField != (FrameBufferIndexFieldMask & whichField))
    {
        returnValue += _sfFrameBufferIndex.getBinSize();
    }

    if(FieldBits::NoField != (DepthBufferIndexFieldMask & whichField))
    {
        returnValue += _sfDepthBufferIndex.getBinSize();
    }

    if(FieldBits::NoField != (StencilBufferIndexFieldMask & whichField))
    {
        returnValue += _sfStencilBufferIndex.getBinSize();
    }

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
    {
        returnValue += _sfDirty.getBinSize();
    }

    if(FieldBits::NoField != (ReadBufferFieldMask & whichField))
    {
        returnValue += _sfReadBuffer.getBinSize();
    }

    if(FieldBits::NoField != (IgnoreCameraDecoratorsFieldMask & whichField))
    {
        returnValue += _sfIgnoreCameraDecorators.getBinSize();
    }

    if(FieldBits::NoField != (FboOffIgnoreStorageSizeFieldMask & whichField))
    {
        returnValue += _sfFboOffIgnoreStorageSize.getBinSize();
    }

    if(FieldBits::NoField != (ZOffsetFieldMask & whichField))
    {
        returnValue += _mfZOffset.getBinSize();
    }


    return returnValue;
}

void FBOViewportBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ExcludeNodesFieldMask & whichField))
    {
        _mfExcludeNodes.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RenderNodesFieldMask & whichField))
    {
        _mfRenderNodes.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TexturesFieldMask & whichField))
    {
        _mfTextures.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FboOnFieldMask & whichField))
    {
        _sfFboOn.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StorageWidthFieldMask & whichField))
    {
        _sfStorageWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StorageHeightFieldMask & whichField))
    {
        _sfStorageHeight.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GenCubemapsFieldMask & whichField))
    {
        _sfGenCubemaps.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GenDepthmapsFieldMask & whichField))
    {
        _sfGenDepthmaps.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FrameBufferIndexFieldMask & whichField))
    {
        _sfFrameBufferIndex.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DepthBufferIndexFieldMask & whichField))
    {
        _sfDepthBufferIndex.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StencilBufferIndexFieldMask & whichField))
    {
        _sfStencilBufferIndex.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
    {
        _sfDirty.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ReadBufferFieldMask & whichField))
    {
        _sfReadBuffer.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IgnoreCameraDecoratorsFieldMask & whichField))
    {
        _sfIgnoreCameraDecorators.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FboOffIgnoreStorageSizeFieldMask & whichField))
    {
        _sfFboOffIgnoreStorageSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ZOffsetFieldMask & whichField))
    {
        _mfZOffset.copyToBin(pMem);
    }


}

void FBOViewportBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ExcludeNodesFieldMask & whichField))
    {
        _mfExcludeNodes.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RenderNodesFieldMask & whichField))
    {
        _mfRenderNodes.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TexturesFieldMask & whichField))
    {
        _mfTextures.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FboOnFieldMask & whichField))
    {
        _sfFboOn.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StorageWidthFieldMask & whichField))
    {
        _sfStorageWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StorageHeightFieldMask & whichField))
    {
        _sfStorageHeight.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GenCubemapsFieldMask & whichField))
    {
        _sfGenCubemaps.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GenDepthmapsFieldMask & whichField))
    {
        _sfGenDepthmaps.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FrameBufferIndexFieldMask & whichField))
    {
        _sfFrameBufferIndex.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DepthBufferIndexFieldMask & whichField))
    {
        _sfDepthBufferIndex.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StencilBufferIndexFieldMask & whichField))
    {
        _sfStencilBufferIndex.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
    {
        _sfDirty.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ReadBufferFieldMask & whichField))
    {
        _sfReadBuffer.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IgnoreCameraDecoratorsFieldMask & whichField))
    {
        _sfIgnoreCameraDecorators.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FboOffIgnoreStorageSizeFieldMask & whichField))
    {
        _sfFboOffIgnoreStorageSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ZOffsetFieldMask & whichField))
    {
        _mfZOffset.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FBOViewportBase::executeSyncImpl(      FBOViewportBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
        _sfEnabled.syncWith(pOther->_sfEnabled);

    if(FieldBits::NoField != (ExcludeNodesFieldMask & whichField))
        _mfExcludeNodes.syncWith(pOther->_mfExcludeNodes);

    if(FieldBits::NoField != (RenderNodesFieldMask & whichField))
        _mfRenderNodes.syncWith(pOther->_mfRenderNodes);

    if(FieldBits::NoField != (TexturesFieldMask & whichField))
        _mfTextures.syncWith(pOther->_mfTextures);

    if(FieldBits::NoField != (FboOnFieldMask & whichField))
        _sfFboOn.syncWith(pOther->_sfFboOn);

    if(FieldBits::NoField != (StorageWidthFieldMask & whichField))
        _sfStorageWidth.syncWith(pOther->_sfStorageWidth);

    if(FieldBits::NoField != (StorageHeightFieldMask & whichField))
        _sfStorageHeight.syncWith(pOther->_sfStorageHeight);

    if(FieldBits::NoField != (GenCubemapsFieldMask & whichField))
        _sfGenCubemaps.syncWith(pOther->_sfGenCubemaps);

    if(FieldBits::NoField != (GenDepthmapsFieldMask & whichField))
        _sfGenDepthmaps.syncWith(pOther->_sfGenDepthmaps);

    if(FieldBits::NoField != (FrameBufferIndexFieldMask & whichField))
        _sfFrameBufferIndex.syncWith(pOther->_sfFrameBufferIndex);

    if(FieldBits::NoField != (DepthBufferIndexFieldMask & whichField))
        _sfDepthBufferIndex.syncWith(pOther->_sfDepthBufferIndex);

    if(FieldBits::NoField != (StencilBufferIndexFieldMask & whichField))
        _sfStencilBufferIndex.syncWith(pOther->_sfStencilBufferIndex);

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
        _sfDirty.syncWith(pOther->_sfDirty);

    if(FieldBits::NoField != (ReadBufferFieldMask & whichField))
        _sfReadBuffer.syncWith(pOther->_sfReadBuffer);

    if(FieldBits::NoField != (IgnoreCameraDecoratorsFieldMask & whichField))
        _sfIgnoreCameraDecorators.syncWith(pOther->_sfIgnoreCameraDecorators);

    if(FieldBits::NoField != (FboOffIgnoreStorageSizeFieldMask & whichField))
        _sfFboOffIgnoreStorageSize.syncWith(pOther->_sfFboOffIgnoreStorageSize);

    if(FieldBits::NoField != (ZOffsetFieldMask & whichField))
        _mfZOffset.syncWith(pOther->_mfZOffset);


}
#else
void FBOViewportBase::executeSyncImpl(      FBOViewportBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
        _sfEnabled.syncWith(pOther->_sfEnabled);

    if(FieldBits::NoField != (FboOnFieldMask & whichField))
        _sfFboOn.syncWith(pOther->_sfFboOn);

    if(FieldBits::NoField != (StorageWidthFieldMask & whichField))
        _sfStorageWidth.syncWith(pOther->_sfStorageWidth);

    if(FieldBits::NoField != (StorageHeightFieldMask & whichField))
        _sfStorageHeight.syncWith(pOther->_sfStorageHeight);

    if(FieldBits::NoField != (GenCubemapsFieldMask & whichField))
        _sfGenCubemaps.syncWith(pOther->_sfGenCubemaps);

    if(FieldBits::NoField != (GenDepthmapsFieldMask & whichField))
        _sfGenDepthmaps.syncWith(pOther->_sfGenDepthmaps);

    if(FieldBits::NoField != (FrameBufferIndexFieldMask & whichField))
        _sfFrameBufferIndex.syncWith(pOther->_sfFrameBufferIndex);

    if(FieldBits::NoField != (DepthBufferIndexFieldMask & whichField))
        _sfDepthBufferIndex.syncWith(pOther->_sfDepthBufferIndex);

    if(FieldBits::NoField != (StencilBufferIndexFieldMask & whichField))
        _sfStencilBufferIndex.syncWith(pOther->_sfStencilBufferIndex);

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
        _sfDirty.syncWith(pOther->_sfDirty);

    if(FieldBits::NoField != (ReadBufferFieldMask & whichField))
        _sfReadBuffer.syncWith(pOther->_sfReadBuffer);

    if(FieldBits::NoField != (IgnoreCameraDecoratorsFieldMask & whichField))
        _sfIgnoreCameraDecorators.syncWith(pOther->_sfIgnoreCameraDecorators);

    if(FieldBits::NoField != (FboOffIgnoreStorageSizeFieldMask & whichField))
        _sfFboOffIgnoreStorageSize.syncWith(pOther->_sfFboOffIgnoreStorageSize);


    if(FieldBits::NoField != (ExcludeNodesFieldMask & whichField))
        _mfExcludeNodes.syncWith(pOther->_mfExcludeNodes, sInfo);

    if(FieldBits::NoField != (RenderNodesFieldMask & whichField))
        _mfRenderNodes.syncWith(pOther->_mfRenderNodes, sInfo);

    if(FieldBits::NoField != (TexturesFieldMask & whichField))
        _mfTextures.syncWith(pOther->_mfTextures, sInfo);

    if(FieldBits::NoField != (ZOffsetFieldMask & whichField))
        _mfZOffset.syncWith(pOther->_mfZOffset, sInfo);


}

void FBOViewportBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ExcludeNodesFieldMask & whichField))
        _mfExcludeNodes.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (RenderNodesFieldMask & whichField))
        _mfRenderNodes.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (TexturesFieldMask & whichField))
        _mfTextures.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ZOffsetFieldMask & whichField))
        _mfZOffset.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<FBOViewportPtr>::_type("FBOViewportPtr", "ViewportPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(FBOViewportPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(FBOViewportPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGFBOViewportBase.cpp,v 1.7 2008/06/09 12:28:23 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGFBOVIEWPORTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFBOVIEWPORTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFBOVIEWPORTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

