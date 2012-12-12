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
 **     class SkyBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSKYBACKGROUNDBASE_H_
#define _OSGSKYBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGBackground.h> // Parent

#include <OSGColor4fFields.h> // SkyColor type
#include <OSGReal32Fields.h> // SkyAngle type
#include <OSGColor4fFields.h> // GroundColor type
#include <OSGReal32Fields.h> // GroundAngle type
#include <OSGUInt32Fields.h> // SphereRes type
#include <OSGTextureChunkFields.h> // BackTexture type
#include <OSGTextureChunkFields.h> // BottomTexture type
#include <OSGTextureChunkFields.h> // FrontTexture type
#include <OSGTextureChunkFields.h> // LeftTexture type
#include <OSGTextureChunkFields.h> // RightTexture type
#include <OSGTextureChunkFields.h> // TopTexture type
#include <OSGBoolFields.h> // BoxInside type
#include <OSGVec3fFields.h> // TopTexCoord type
#include <OSGVec3fFields.h> // BottomTexCoord type
#include <OSGVec3fFields.h> // RightTexCoord type
#include <OSGVec3fFields.h> // LeftTexCoord type
#include <OSGVec3fFields.h> // FrontTexCoord type
#include <OSGVec3fFields.h> // BackTexCoord type
#include <OSGNodeFields.h> // Beacon type
#include <OSGInt32Fields.h> // ClearStencilBit type
#include <OSGBoolFields.h> // DlistCache type
#include <OSGInt32Fields.h> // GLId type

#include <OSGSkyBackgroundFields.h>

OSG_BEGIN_NAMESPACE

class SkyBackground;
class BinaryDataHandler;

//! \brief SkyBackground Base Class.

class OSG_SYSTEMLIB_DLLMAPPING SkyBackgroundBase : public Background
{
  private:

    typedef Background    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef SkyBackgroundPtr  Ptr;

    enum
    {
        SkyColorFieldId        = Inherited::NextFieldId,
        SkyAngleFieldId        = SkyColorFieldId        + 1,
        GroundColorFieldId     = SkyAngleFieldId        + 1,
        GroundAngleFieldId     = GroundColorFieldId     + 1,
        SphereResFieldId       = GroundAngleFieldId     + 1,
        BackTextureFieldId     = SphereResFieldId       + 1,
        BottomTextureFieldId   = BackTextureFieldId     + 1,
        FrontTextureFieldId    = BottomTextureFieldId   + 1,
        LeftTextureFieldId     = FrontTextureFieldId    + 1,
        RightTextureFieldId    = LeftTextureFieldId     + 1,
        TopTextureFieldId      = RightTextureFieldId    + 1,
        BoxInsideFieldId       = TopTextureFieldId      + 1,
        TopTexCoordFieldId     = BoxInsideFieldId       + 1,
        BottomTexCoordFieldId  = TopTexCoordFieldId     + 1,
        RightTexCoordFieldId   = BottomTexCoordFieldId  + 1,
        LeftTexCoordFieldId    = RightTexCoordFieldId   + 1,
        FrontTexCoordFieldId   = LeftTexCoordFieldId    + 1,
        BackTexCoordFieldId    = FrontTexCoordFieldId   + 1,
        BeaconFieldId          = BackTexCoordFieldId    + 1,
        ClearStencilBitFieldId = BeaconFieldId          + 1,
        DlistCacheFieldId      = ClearStencilBitFieldId + 1,
        GLIdFieldId            = DlistCacheFieldId      + 1,
        NextFieldId            = GLIdFieldId            + 1
    };

    static const OSG::BitVector SkyColorFieldMask;
    static const OSG::BitVector SkyAngleFieldMask;
    static const OSG::BitVector GroundColorFieldMask;
    static const OSG::BitVector GroundAngleFieldMask;
    static const OSG::BitVector SphereResFieldMask;
    static const OSG::BitVector BackTextureFieldMask;
    static const OSG::BitVector BottomTextureFieldMask;
    static const OSG::BitVector FrontTextureFieldMask;
    static const OSG::BitVector LeftTextureFieldMask;
    static const OSG::BitVector RightTextureFieldMask;
    static const OSG::BitVector TopTextureFieldMask;
    static const OSG::BitVector BoxInsideFieldMask;
    static const OSG::BitVector TopTexCoordFieldMask;
    static const OSG::BitVector BottomTexCoordFieldMask;
    static const OSG::BitVector RightTexCoordFieldMask;
    static const OSG::BitVector LeftTexCoordFieldMask;
    static const OSG::BitVector FrontTexCoordFieldMask;
    static const OSG::BitVector BackTexCoordFieldMask;
    static const OSG::BitVector BeaconFieldMask;
    static const OSG::BitVector ClearStencilBitFieldMask;
    static const OSG::BitVector DlistCacheFieldMask;
    static const OSG::BitVector GLIdFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           MFColor4f           *editMFSkyColor       (void);
     const MFColor4f           *getMFSkyColor       (void) const;
#ifndef OSG_2_PREP
           MFColor4f           *getMFSkyColor       (void);
#endif

           MFReal32            *editMFSkyAngle       (void);
     const MFReal32            *getMFSkyAngle       (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFSkyAngle       (void);
#endif

           MFColor4f           *editMFGroundColor    (void);
     const MFColor4f           *getMFGroundColor    (void) const;
#ifndef OSG_2_PREP
           MFColor4f           *getMFGroundColor    (void);
#endif

           MFReal32            *editMFGroundAngle    (void);
     const MFReal32            *getMFGroundAngle    (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFGroundAngle    (void);
#endif

           SFUInt32            *editSFSphereRes      (void);
     const SFUInt32            *getSFSphereRes      (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFSphereRes      (void);
#endif

           SFTextureChunkPtr   *editSFBackTexture    (void);
     const SFTextureChunkPtr   *getSFBackTexture    (void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFBackTexture    (void);
#endif

           SFTextureChunkPtr   *editSFBottomTexture  (void);
     const SFTextureChunkPtr   *getSFBottomTexture  (void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFBottomTexture  (void);
#endif

           SFTextureChunkPtr   *editSFFrontTexture   (void);
     const SFTextureChunkPtr   *getSFFrontTexture   (void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFFrontTexture   (void);
#endif

           SFTextureChunkPtr   *editSFLeftTexture    (void);
     const SFTextureChunkPtr   *getSFLeftTexture    (void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFLeftTexture    (void);
#endif

           SFTextureChunkPtr   *editSFRightTexture   (void);
     const SFTextureChunkPtr   *getSFRightTexture   (void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFRightTexture   (void);
#endif

           SFTextureChunkPtr   *editSFTopTexture     (void);
     const SFTextureChunkPtr   *getSFTopTexture     (void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFTopTexture     (void);
#endif

           SFBool              *editSFBoxInside      (void);
     const SFBool              *getSFBoxInside      (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFBoxInside      (void);
#endif

           MFVec3f             *editMFTopTexCoord    (void);
     const MFVec3f             *getMFTopTexCoord    (void) const;
#ifndef OSG_2_PREP
           MFVec3f             *getMFTopTexCoord    (void);
#endif

           MFVec3f             *editMFBottomTexCoord (void);
     const MFVec3f             *getMFBottomTexCoord (void) const;
#ifndef OSG_2_PREP
           MFVec3f             *getMFBottomTexCoord (void);
#endif

           MFVec3f             *editMFRightTexCoord  (void);
     const MFVec3f             *getMFRightTexCoord  (void) const;
#ifndef OSG_2_PREP
           MFVec3f             *getMFRightTexCoord  (void);
#endif

           MFVec3f             *editMFLeftTexCoord   (void);
     const MFVec3f             *getMFLeftTexCoord   (void) const;
#ifndef OSG_2_PREP
           MFVec3f             *getMFLeftTexCoord   (void);
#endif

           MFVec3f             *editMFFrontTexCoord  (void);
     const MFVec3f             *getMFFrontTexCoord  (void) const;
#ifndef OSG_2_PREP
           MFVec3f             *getMFFrontTexCoord  (void);
#endif

           MFVec3f             *editMFBackTexCoord   (void);
     const MFVec3f             *getMFBackTexCoord   (void) const;
#ifndef OSG_2_PREP
           MFVec3f             *getMFBackTexCoord   (void);
#endif

           SFNodePtr           *editSFBeacon         (void);
     const SFNodePtr           *getSFBeacon         (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFBeacon         (void);
#endif

           SFInt32             *editSFClearStencilBit(void);
     const SFInt32             *getSFClearStencilBit(void) const;
#ifndef OSG_2_PREP
           SFInt32             *getSFClearStencilBit(void);
#endif

           SFBool              *editSFDlistCache     (void);
     const SFBool              *getSFDlistCache     (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFDlistCache     (void);
#endif


           UInt32              &editSphereRes      (void);
     const UInt32              &getSphereRes      (void) const;
#ifndef OSG_2_PREP
           UInt32              &getSphereRes      (void);
#endif

           TextureChunkPtr     &editBackTexture    (void);
     const TextureChunkPtr     &getBackTexture    (void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getBackTexture    (void);
#endif

           TextureChunkPtr     &editBottomTexture  (void);
     const TextureChunkPtr     &getBottomTexture  (void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getBottomTexture  (void);
#endif

           TextureChunkPtr     &editFrontTexture   (void);
     const TextureChunkPtr     &getFrontTexture   (void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getFrontTexture   (void);
#endif

           TextureChunkPtr     &editLeftTexture    (void);
     const TextureChunkPtr     &getLeftTexture    (void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getLeftTexture    (void);
#endif

           TextureChunkPtr     &editRightTexture   (void);
     const TextureChunkPtr     &getRightTexture   (void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getRightTexture   (void);
#endif

           TextureChunkPtr     &editTopTexture     (void);
     const TextureChunkPtr     &getTopTexture     (void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getTopTexture     (void);
#endif

           bool                &editBoxInside      (void);
     const bool                &getBoxInside      (void) const;
#ifndef OSG_2_PREP
           bool                &getBoxInside      (void);
#endif

           NodePtr             &editBeacon         (void);
     const NodePtr             &getBeacon         (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getBeacon         (void);
#endif

           Int32               &editClearStencilBit(void);
     const Int32               &getClearStencilBit(void) const;
#ifndef OSG_2_PREP
           Int32               &getClearStencilBit(void);
#endif

           bool                &editDlistCache     (void);
     const bool                &getDlistCache     (void) const;
#ifndef OSG_2_PREP
           bool                &getDlistCache     (void);
#endif


           Color4f             &editSkyColor       (const UInt32 index);
     const Color4f             &getSkyColor       (const UInt32 index) const;
#ifndef OSG_2_PREP
           Color4f             &getSkyColor       (const UInt32 index);
           MFColor4f           &getSkyColor       (void);
     const MFColor4f           &getSkyColor       (void) const;
#endif

           Real32              &editSkyAngle       (const UInt32 index);
     const Real32              &getSkyAngle       (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getSkyAngle       (const UInt32 index);
           MFReal32            &getSkyAngle       (void);
     const MFReal32            &getSkyAngle       (void) const;
#endif

           Color4f             &editGroundColor    (const UInt32 index);
     const Color4f             &getGroundColor    (const UInt32 index) const;
#ifndef OSG_2_PREP
           Color4f             &getGroundColor    (const UInt32 index);
           MFColor4f           &getGroundColor    (void);
     const MFColor4f           &getGroundColor    (void) const;
#endif

           Real32              &editGroundAngle    (const UInt32 index);
     const Real32              &getGroundAngle    (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getGroundAngle    (const UInt32 index);
           MFReal32            &getGroundAngle    (void);
     const MFReal32            &getGroundAngle    (void) const;
#endif

           Vec3f               &editTopTexCoord    (const UInt32 index);
     const Vec3f               &getTopTexCoord    (const UInt32 index) const;
#ifndef OSG_2_PREP
           Vec3f               &getTopTexCoord    (const UInt32 index);
           MFVec3f             &getTopTexCoord    (void);
     const MFVec3f             &getTopTexCoord    (void) const;
#endif

           Vec3f               &editBottomTexCoord (const UInt32 index);
     const Vec3f               &getBottomTexCoord (const UInt32 index) const;
#ifndef OSG_2_PREP
           Vec3f               &getBottomTexCoord (const UInt32 index);
           MFVec3f             &getBottomTexCoord (void);
     const MFVec3f             &getBottomTexCoord (void) const;
#endif

           Vec3f               &editRightTexCoord  (const UInt32 index);
     const Vec3f               &getRightTexCoord  (const UInt32 index) const;
#ifndef OSG_2_PREP
           Vec3f               &getRightTexCoord  (const UInt32 index);
           MFVec3f             &getRightTexCoord  (void);
     const MFVec3f             &getRightTexCoord  (void) const;
#endif

           Vec3f               &editLeftTexCoord   (const UInt32 index);
     const Vec3f               &getLeftTexCoord   (const UInt32 index) const;
#ifndef OSG_2_PREP
           Vec3f               &getLeftTexCoord   (const UInt32 index);
           MFVec3f             &getLeftTexCoord   (void);
     const MFVec3f             &getLeftTexCoord   (void) const;
#endif

           Vec3f               &editFrontTexCoord  (const UInt32 index);
     const Vec3f               &getFrontTexCoord  (const UInt32 index) const;
#ifndef OSG_2_PREP
           Vec3f               &getFrontTexCoord  (const UInt32 index);
           MFVec3f             &getFrontTexCoord  (void);
     const MFVec3f             &getFrontTexCoord  (void) const;
#endif

           Vec3f               &editBackTexCoord   (const UInt32 index);
     const Vec3f               &getBackTexCoord   (const UInt32 index) const;
#ifndef OSG_2_PREP
           Vec3f               &getBackTexCoord   (const UInt32 index);
           MFVec3f             &getBackTexCoord   (void);
     const MFVec3f             &getBackTexCoord   (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setSphereRes      ( const UInt32 &value );
     void setBackTexture    ( const TextureChunkPtr &value );
     void setBottomTexture  ( const TextureChunkPtr &value );
     void setFrontTexture   ( const TextureChunkPtr &value );
     void setLeftTexture    ( const TextureChunkPtr &value );
     void setRightTexture   ( const TextureChunkPtr &value );
     void setTopTexture     ( const TextureChunkPtr &value );
     void setBoxInside      ( const bool &value );
     void setBeacon         ( const NodePtr &value );
     void setClearStencilBit( const Int32 &value );
     void setDlistCache     ( const bool &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SkyBackgroundPtr      create          (void); 
    static  SkyBackgroundPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFColor4f           _mfSkyColor;
    MFReal32            _mfSkyAngle;
    MFColor4f           _mfGroundColor;
    MFReal32            _mfGroundAngle;
    SFUInt32            _sfSphereRes;
    SFTextureChunkPtr   _sfBackTexture;
    SFTextureChunkPtr   _sfBottomTexture;
    SFTextureChunkPtr   _sfFrontTexture;
    SFTextureChunkPtr   _sfLeftTexture;
    SFTextureChunkPtr   _sfRightTexture;
    SFTextureChunkPtr   _sfTopTexture;
    SFBool              _sfBoxInside;
    MFVec3f             _mfTopTexCoord;
    MFVec3f             _mfBottomTexCoord;
    MFVec3f             _mfRightTexCoord;
    MFVec3f             _mfLeftTexCoord;
    MFVec3f             _mfFrontTexCoord;
    MFVec3f             _mfBackTexCoord;
    SFNodePtr           _sfBeacon;
    SFInt32             _sfClearStencilBit;
    SFBool              _sfDlistCache;
    SFInt32             _sfGLId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SkyBackgroundBase(void);
    SkyBackgroundBase(const SkyBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkyBackgroundBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFInt32             *editSFGLId           (void);
     const SFInt32             *getSFGLId           (void) const;
#ifndef OSG_2_PREP
           SFInt32             *getSFGLId           (void);
#endif

           Int32               &editGLId           (void);
     const Int32               &getGLId           (void) const;
#ifndef OSG_2_PREP
           Int32               &getGLId           (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setGLId           (const Int32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      SkyBackgroundBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      SkyBackgroundBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SkyBackgroundBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef SkyBackgroundBase *SkyBackgroundBaseP;

typedef osgIF<SkyBackgroundBase::isNodeCore,
              CoredNodePtr<SkyBackground>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet SkyBackgroundNodePtr;

typedef RefPtr<SkyBackgroundPtr> SkyBackgroundRefPtr;

OSG_END_NAMESPACE

#define OSGSKYBACKGROUNDBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.42 2008/06/09 12:26:59 vossg Exp $"

#endif /* _OSGSKYBACKGROUNDBASE_H_ */
