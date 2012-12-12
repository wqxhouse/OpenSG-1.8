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
 **     class PhysicsGeom
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSGEOMBASE_H_
#define _OSGPHYSICSGEOMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGContribDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGAttachment.h> // Parent

#include <OSGPhysicsBodyFields.h> // Body type
#include <OSGVec3fFields.h> // Position type
#include <OSGMatrixFields.h> // Rotation type
#include <OSGQuaternionFields.h> // Quaternion type
#include <OSGUInt64Fields.h> // CategoryBits type
#include <OSGUInt64Fields.h> // CollideBits type
#include <OSGPhysicsSpaceFields.h> // Space type
#include <OSGBoolFields.h> // Enable type

#include <OSGPhysicsGeomFields.h>

OSG_BEGIN_NAMESPACE

class PhysicsGeom;
class BinaryDataHandler;

//! \brief PhysicsGeom Base Class.

class OSG_CONTRIBLIB_DLLMAPPING PhysicsGeomBase : public Attachment
{
  private:

    typedef Attachment    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef PhysicsGeomPtr  Ptr;

    enum
    {
        BodyFieldId         = Inherited::NextFieldId,
        PositionFieldId     = BodyFieldId         + 1,
        RotationFieldId     = PositionFieldId     + 1,
        QuaternionFieldId   = RotationFieldId     + 1,
        CategoryBitsFieldId = QuaternionFieldId   + 1,
        CollideBitsFieldId  = CategoryBitsFieldId + 1,
        SpaceFieldId        = CollideBitsFieldId  + 1,
        EnableFieldId       = SpaceFieldId        + 1,
        NextFieldId         = EnableFieldId       + 1
    };

    static const OSG::BitVector BodyFieldMask;
    static const OSG::BitVector PositionFieldMask;
    static const OSG::BitVector RotationFieldMask;
    static const OSG::BitVector QuaternionFieldMask;
    static const OSG::BitVector CategoryBitsFieldMask;
    static const OSG::BitVector CollideBitsFieldMask;
    static const OSG::BitVector SpaceFieldMask;
    static const OSG::BitVector EnableFieldMask;


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


           SFPhysicsBodyPtr    *editSFBody           (void);
     const SFPhysicsBodyPtr    *getSFBody           (void) const;
#ifndef OSG_2_PREP
           SFPhysicsBodyPtr    *getSFBody           (void);
#endif

           SFVec3f             *editSFPosition       (void);
     const SFVec3f             *getSFPosition       (void) const;
#ifndef OSG_2_PREP
           SFVec3f             *getSFPosition       (void);
#endif

           SFMatrix            *editSFRotation       (void);
     const SFMatrix            *getSFRotation       (void) const;
#ifndef OSG_2_PREP
           SFMatrix            *getSFRotation       (void);
#endif

           SFQuaternion        *editSFQuaternion     (void);
     const SFQuaternion        *getSFQuaternion     (void) const;
#ifndef OSG_2_PREP
           SFQuaternion        *getSFQuaternion     (void);
#endif

           SFUInt64            *editSFCategoryBits   (void);
     const SFUInt64            *getSFCategoryBits   (void) const;
#ifndef OSG_2_PREP
           SFUInt64            *getSFCategoryBits   (void);
#endif

           SFUInt64            *editSFCollideBits    (void);
     const SFUInt64            *getSFCollideBits    (void) const;
#ifndef OSG_2_PREP
           SFUInt64            *getSFCollideBits    (void);
#endif

           SFPhysicsSpacePtr   *editSFSpace          (void);
     const SFPhysicsSpacePtr   *getSFSpace          (void) const;
#ifndef OSG_2_PREP
           SFPhysicsSpacePtr   *getSFSpace          (void);
#endif

           SFBool              *editSFEnable         (void);
     const SFBool              *getSFEnable         (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFEnable         (void);
#endif


           PhysicsBodyPtr      &editBody           (void);
     const PhysicsBodyPtr      &getBody           (void) const;
#ifndef OSG_2_PREP
           PhysicsBodyPtr      &getBody           (void);
#endif

           Vec3f               &editPosition       (void);
     const Vec3f               &getPosition       (void) const;
#ifndef OSG_2_PREP
           Vec3f               &getPosition       (void);
#endif

           Matrix              &editRotation       (void);
     const Matrix              &getRotation       (void) const;
#ifndef OSG_2_PREP
           Matrix              &getRotation       (void);
#endif

           Quaternion          &editQuaternion     (void);
     const Quaternion          &getQuaternion     (void) const;
#ifndef OSG_2_PREP
           Quaternion          &getQuaternion     (void);
#endif

           UInt64              &editCategoryBits   (void);
     const UInt64              &getCategoryBits   (void) const;
#ifndef OSG_2_PREP
           UInt64              &getCategoryBits   (void);
#endif

           UInt64              &editCollideBits    (void);
     const UInt64              &getCollideBits    (void) const;
#ifndef OSG_2_PREP
           UInt64              &getCollideBits    (void);
#endif

           PhysicsSpacePtr     &editSpace          (void);
     const PhysicsSpacePtr     &getSpace          (void) const;
#ifndef OSG_2_PREP
           PhysicsSpacePtr     &getSpace          (void);
#endif

           bool                &editEnable         (void);
     const bool                &getEnable         (void) const;
#ifndef OSG_2_PREP
           bool                &getEnable         (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setBody           ( const PhysicsBodyPtr &value );
     void setPosition       ( const Vec3f &value );
     void setRotation       ( const Matrix &value );
     void setQuaternion     ( const Quaternion &value );
     void setCategoryBits   ( const UInt64 &value );
     void setCollideBits    ( const UInt64 &value );
     void setSpace          ( const PhysicsSpacePtr &value );
     void setEnable         ( const bool &value );

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

    static  PhysicsGeomPtr      create          (void); 
    static  PhysicsGeomPtr      createEmpty     (void); 

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

    SFPhysicsBodyPtr    _sfBody;
    SFVec3f             _sfPosition;
    SFMatrix            _sfRotation;
    SFQuaternion        _sfQuaternion;
    SFUInt64            _sfCategoryBits;
    SFUInt64            _sfCollideBits;
    SFPhysicsSpacePtr   _sfSpace;
    SFBool              _sfEnable;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsGeomBase(void);
    PhysicsGeomBase(const PhysicsGeomBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsGeomBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      PhysicsGeomBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      PhysicsGeomBase *pOther,
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
    void operator =(const PhysicsGeomBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef PhysicsGeomBase *PhysicsGeomBaseP;

typedef osgIF<PhysicsGeomBase::isNodeCore,
              CoredNodePtr<PhysicsGeom>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet PhysicsGeomNodePtr;

typedef RefPtr<PhysicsGeomPtr> PhysicsGeomRefPtr;

OSG_END_NAMESPACE

#define OSGPHYSICSGEOMBASE_HEADER_CVSID "@(#)$Id: OSGPhysicsGeomBase.h,v 1.5 2008/06/09 12:28:02 vossg Exp $"

#endif /* _OSGPHYSICSGEOMBASE_H_ */
