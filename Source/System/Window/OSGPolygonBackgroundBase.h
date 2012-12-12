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
 **     class PolygonBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPOLYGONBACKGROUNDBASE_H_
#define _OSGPOLYGONBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGBackground.h> // Parent

#include <OSGMaterialFields.h> // Material type
#include <OSGVec3fFields.h> // TexCoords type
#include <OSGPnt2fFields.h> // Positions type
#include <OSGBoolFields.h> // NormalizedX type
#include <OSGBoolFields.h> // NormalizedY type
#include <OSGUInt16Fields.h> // AspectHeight type
#include <OSGUInt16Fields.h> // AspectWidth type
#include <OSGReal32Fields.h> // Scale type
#include <OSGInt32Fields.h> // ClearStencilBit type
#include <OSGBoolFields.h> // Cleanup type
#include <OSGBoolFields.h> // Tile type
#include <OSGUInt32Fields.h> // Mode type

#include <OSGPolygonBackgroundFields.h>

OSG_BEGIN_NAMESPACE

class PolygonBackground;
class BinaryDataHandler;

//! \brief PolygonBackground Base Class.

class OSG_SYSTEMLIB_DLLMAPPING PolygonBackgroundBase : public Background
{
  private:

    typedef Background    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef PolygonBackgroundPtr  Ptr;

    enum
    {
        MaterialFieldId        = Inherited::NextFieldId,
        TexCoordsFieldId       = MaterialFieldId        + 1,
        PositionsFieldId       = TexCoordsFieldId       + 1,
        NormalizedXFieldId     = PositionsFieldId       + 1,
        NormalizedYFieldId     = NormalizedXFieldId     + 1,
        AspectHeightFieldId    = NormalizedYFieldId     + 1,
        AspectWidthFieldId     = AspectHeightFieldId    + 1,
        ScaleFieldId           = AspectWidthFieldId     + 1,
        ClearStencilBitFieldId = ScaleFieldId           + 1,
        CleanupFieldId         = ClearStencilBitFieldId + 1,
        TileFieldId            = CleanupFieldId         + 1,
        ModeFieldId            = TileFieldId            + 1,
        NextFieldId            = ModeFieldId            + 1
    };

    static const OSG::BitVector MaterialFieldMask;
    static const OSG::BitVector TexCoordsFieldMask;
    static const OSG::BitVector PositionsFieldMask;
    static const OSG::BitVector NormalizedXFieldMask;
    static const OSG::BitVector NormalizedYFieldMask;
    static const OSG::BitVector AspectHeightFieldMask;
    static const OSG::BitVector AspectWidthFieldMask;
    static const OSG::BitVector ScaleFieldMask;
    static const OSG::BitVector ClearStencilBitFieldMask;
    static const OSG::BitVector CleanupFieldMask;
    static const OSG::BitVector TileFieldMask;
    static const OSG::BitVector ModeFieldMask;


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


           SFMaterialPtr       *editSFMaterial       (void);
     const SFMaterialPtr       *getSFMaterial       (void) const;
#ifndef OSG_2_PREP
           SFMaterialPtr       *getSFMaterial       (void);
#endif

           MFVec3f             *editMFTexCoords      (void);
     const MFVec3f             *getMFTexCoords      (void) const;
#ifndef OSG_2_PREP
           MFVec3f             *getMFTexCoords      (void);
#endif

           MFPnt2f             *editMFPositions      (void);
     const MFPnt2f             *getMFPositions      (void) const;
#ifndef OSG_2_PREP
           MFPnt2f             *getMFPositions      (void);
#endif

           SFBool              *editSFNormalizedX    (void);
     const SFBool              *getSFNormalizedX    (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFNormalizedX    (void);
#endif

           SFBool              *editSFNormalizedY    (void);
     const SFBool              *getSFNormalizedY    (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFNormalizedY    (void);
#endif

           SFUInt16            *editSFAspectHeight   (void);
     const SFUInt16            *getSFAspectHeight   (void) const;
#ifndef OSG_2_PREP
           SFUInt16            *getSFAspectHeight   (void);
#endif

           SFUInt16            *editSFAspectWidth    (void);
     const SFUInt16            *getSFAspectWidth    (void) const;
#ifndef OSG_2_PREP
           SFUInt16            *getSFAspectWidth    (void);
#endif

           SFReal32            *editSFScale          (void);
     const SFReal32            *getSFScale          (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFScale          (void);
#endif

           SFInt32             *editSFClearStencilBit(void);
     const SFInt32             *getSFClearStencilBit(void) const;
#ifndef OSG_2_PREP
           SFInt32             *getSFClearStencilBit(void);
#endif

           SFBool              *editSFCleanup        (void);
     const SFBool              *getSFCleanup        (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFCleanup        (void);
#endif

           SFBool              *editSFTile           (void);
     const SFBool              *getSFTile           (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFTile           (void);
#endif

           SFUInt32            *editSFMode           (void);
     const SFUInt32            *getSFMode           (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFMode           (void);
#endif


           MaterialPtr         &editMaterial       (void);
     const MaterialPtr         &getMaterial       (void) const;
#ifndef OSG_2_PREP
           MaterialPtr         &getMaterial       (void);
#endif

           bool                &editNormalizedX    (void);
     const bool                &getNormalizedX    (void) const;
#ifndef OSG_2_PREP
           bool                &getNormalizedX    (void);
#endif

           bool                &editNormalizedY    (void);
     const bool                &getNormalizedY    (void) const;
#ifndef OSG_2_PREP
           bool                &getNormalizedY    (void);
#endif

           UInt16              &editAspectHeight   (void);
     const UInt16              &getAspectHeight   (void) const;
#ifndef OSG_2_PREP
           UInt16              &getAspectHeight   (void);
#endif

           UInt16              &editAspectWidth    (void);
     const UInt16              &getAspectWidth    (void) const;
#ifndef OSG_2_PREP
           UInt16              &getAspectWidth    (void);
#endif

           Real32              &editScale          (void);
     const Real32              &getScale          (void) const;
#ifndef OSG_2_PREP
           Real32              &getScale          (void);
#endif

           Int32               &editClearStencilBit(void);
     const Int32               &getClearStencilBit(void) const;
#ifndef OSG_2_PREP
           Int32               &getClearStencilBit(void);
#endif

           bool                &editCleanup        (void);
     const bool                &getCleanup        (void) const;
#ifndef OSG_2_PREP
           bool                &getCleanup        (void);
#endif

           bool                &editTile           (void);
     const bool                &getTile           (void) const;
#ifndef OSG_2_PREP
           bool                &getTile           (void);
#endif

           UInt32              &editMode           (void);
     const UInt32              &getMode           (void) const;
#ifndef OSG_2_PREP
           UInt32              &getMode           (void);
#endif

           Vec3f               &editTexCoords      (const UInt32 index);
     const Vec3f               &getTexCoords      (const UInt32 index) const;
#ifndef OSG_2_PREP
           Vec3f               &getTexCoords      (const UInt32 index);
           MFVec3f             &getTexCoords      (void);
     const MFVec3f             &getTexCoords      (void) const;
#endif

           Pnt2f               &editPositions      (const UInt32 index);
     const Pnt2f               &getPositions      (const UInt32 index) const;
#ifndef OSG_2_PREP
           Pnt2f               &getPositions      (const UInt32 index);
           MFPnt2f             &getPositions      (void);
     const MFPnt2f             &getPositions      (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setMaterial       ( const MaterialPtr &value );
     void setNormalizedX    ( const bool &value );
     void setNormalizedY    ( const bool &value );
     void setAspectHeight   ( const UInt16 &value );
     void setAspectWidth    ( const UInt16 &value );
     void setScale          ( const Real32 &value );
     void setClearStencilBit( const Int32 &value );
     void setCleanup        ( const bool &value );
     void setTile           ( const bool &value );
     void setMode           ( const UInt32 &value );

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

    static  PolygonBackgroundPtr      create          (void); 
    static  PolygonBackgroundPtr      createEmpty     (void); 

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

    SFMaterialPtr       _sfMaterial;
    MFVec3f             _mfTexCoords;
    MFPnt2f             _mfPositions;
    SFBool              _sfNormalizedX;
    SFBool              _sfNormalizedY;
    SFUInt16            _sfAspectHeight;
    SFUInt16            _sfAspectWidth;
    SFReal32            _sfScale;
    SFInt32             _sfClearStencilBit;
    SFBool              _sfCleanup;
    SFBool              _sfTile;
    SFUInt32            _sfMode;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PolygonBackgroundBase(void);
    PolygonBackgroundBase(const PolygonBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PolygonBackgroundBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      PolygonBackgroundBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      PolygonBackgroundBase *pOther,
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
    void operator =(const PolygonBackgroundBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef PolygonBackgroundBase *PolygonBackgroundBaseP;

typedef osgIF<PolygonBackgroundBase::isNodeCore,
              CoredNodePtr<PolygonBackground>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet PolygonBackgroundNodePtr;

typedef RefPtr<PolygonBackgroundPtr> PolygonBackgroundRefPtr;

OSG_END_NAMESPACE

#define OSGPOLYGONBACKGROUNDBASE_HEADER_CVSID "@(#)$Id: OSGPolygonBackgroundBase.h,v 1.14 2009/06/30 16:05:12 yjung Exp $"

#endif /* _OSGPOLYGONBACKGROUNDBASE_H_ */
