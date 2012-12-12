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
 **     class Manipulator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMANIPULATORBASE_H_
#define _OSGMANIPULATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGTransform.h> // Parent

#include <OSGNodeFields.h> // Target type
#include <OSGNodeFields.h> // ActiveSubHandle type
#include <OSGPnt2fFields.h> // LastMousePos type
#include <OSGViewport.h> // Viewport type
#include <OSGBoolFields.h> // Active type
#include <OSGVec3fFields.h> // Length type
#include <OSGNodeFields.h> // HandleXNode type
#include <OSGNodeFields.h> // HandleYNode type
#include <OSGNodeFields.h> // HandleZNode type
#include <OSGNodeFields.h> // TransXNode type
#include <OSGNodeFields.h> // TransYNode type
#include <OSGNodeFields.h> // TransZNode type
#include <OSGMaterial.h> // MaterialX type
#include <OSGMaterial.h> // MaterialY type
#include <OSGMaterial.h> // MaterialZ type
#include <OSGNodeFields.h> // AxisLinesN type

#include <OSGManipulatorFields.h>

OSG_BEGIN_NAMESPACE

class Manipulator;
class BinaryDataHandler;

//! \brief Manipulator Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ManipulatorBase : public Transform
{
  private:

    typedef Transform    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ManipulatorPtr  Ptr;

    enum
    {
        TargetFieldId          = Inherited::NextFieldId,
        ActiveSubHandleFieldId = TargetFieldId          + 1,
        LastMousePosFieldId    = ActiveSubHandleFieldId + 1,
        ViewportFieldId        = LastMousePosFieldId    + 1,
        ActiveFieldId          = ViewportFieldId        + 1,
        LengthFieldId          = ActiveFieldId          + 1,
        HandleXNodeFieldId     = LengthFieldId          + 1,
        HandleYNodeFieldId     = HandleXNodeFieldId     + 1,
        HandleZNodeFieldId     = HandleYNodeFieldId     + 1,
        TransXNodeFieldId      = HandleZNodeFieldId     + 1,
        TransYNodeFieldId      = TransXNodeFieldId      + 1,
        TransZNodeFieldId      = TransYNodeFieldId      + 1,
        MaterialXFieldId       = TransZNodeFieldId      + 1,
        MaterialYFieldId       = MaterialXFieldId       + 1,
        MaterialZFieldId       = MaterialYFieldId       + 1,
        AxisLinesNFieldId      = MaterialZFieldId       + 1,
        NextFieldId            = AxisLinesNFieldId      + 1
    };

    static const OSG::BitVector TargetFieldMask;
    static const OSG::BitVector ActiveSubHandleFieldMask;
    static const OSG::BitVector LastMousePosFieldMask;
    static const OSG::BitVector ViewportFieldMask;
    static const OSG::BitVector ActiveFieldMask;
    static const OSG::BitVector LengthFieldMask;
    static const OSG::BitVector HandleXNodeFieldMask;
    static const OSG::BitVector HandleYNodeFieldMask;
    static const OSG::BitVector HandleZNodeFieldMask;
    static const OSG::BitVector TransXNodeFieldMask;
    static const OSG::BitVector TransYNodeFieldMask;
    static const OSG::BitVector TransZNodeFieldMask;
    static const OSG::BitVector MaterialXFieldMask;
    static const OSG::BitVector MaterialYFieldMask;
    static const OSG::BitVector MaterialZFieldMask;
    static const OSG::BitVector AxisLinesNFieldMask;


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


           SFNodePtr           *editSFTarget         (void);
     const SFNodePtr           *getSFTarget         (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFTarget         (void);
#endif

           SFNodePtr           *editSFActiveSubHandle(void);
     const SFNodePtr           *getSFActiveSubHandle(void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFActiveSubHandle(void);
#endif

           SFViewportPtr       *editSFViewport       (void);
     const SFViewportPtr       *getSFViewport       (void) const;
#ifndef OSG_2_PREP
           SFViewportPtr       *getSFViewport       (void);
#endif

           SFBool              *editSFActive         (void);
     const SFBool              *getSFActive         (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFActive         (void);
#endif

           SFVec3f             *editSFLength         (void);
     const SFVec3f             *getSFLength         (void) const;
#ifndef OSG_2_PREP
           SFVec3f             *getSFLength         (void);
#endif

           SFNodePtr           *editSFHandleXNode    (void);
     const SFNodePtr           *getSFHandleXNode    (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFHandleXNode    (void);
#endif

           SFNodePtr           *editSFHandleYNode    (void);
     const SFNodePtr           *getSFHandleYNode    (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFHandleYNode    (void);
#endif

           SFNodePtr           *editSFHandleZNode    (void);
     const SFNodePtr           *getSFHandleZNode    (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFHandleZNode    (void);
#endif

           SFNodePtr           *editSFTransXNode     (void);
     const SFNodePtr           *getSFTransXNode     (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFTransXNode     (void);
#endif

           SFNodePtr           *editSFTransYNode     (void);
     const SFNodePtr           *getSFTransYNode     (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFTransYNode     (void);
#endif

           SFNodePtr           *editSFTransZNode     (void);
     const SFNodePtr           *getSFTransZNode     (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFTransZNode     (void);
#endif

           SFMaterialPtr       *editSFMaterialX      (void);
     const SFMaterialPtr       *getSFMaterialX      (void) const;
#ifndef OSG_2_PREP
           SFMaterialPtr       *getSFMaterialX      (void);
#endif

           SFMaterialPtr       *editSFMaterialY      (void);
     const SFMaterialPtr       *getSFMaterialY      (void) const;
#ifndef OSG_2_PREP
           SFMaterialPtr       *getSFMaterialY      (void);
#endif

           SFMaterialPtr       *editSFMaterialZ      (void);
     const SFMaterialPtr       *getSFMaterialZ      (void) const;
#ifndef OSG_2_PREP
           SFMaterialPtr       *getSFMaterialZ      (void);
#endif

           SFNodePtr           *editSFAxisLinesN     (void);
     const SFNodePtr           *getSFAxisLinesN     (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFAxisLinesN     (void);
#endif


           NodePtr             &editTarget         (void);
     const NodePtr             &getTarget         (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getTarget         (void);
#endif

           NodePtr             &editActiveSubHandle(void);
     const NodePtr             &getActiveSubHandle(void) const;
#ifndef OSG_2_PREP
           NodePtr             &getActiveSubHandle(void);
#endif


           ViewportPtr         &editViewport       (void);
     const ViewportPtr         &getViewport       (void) const;
#ifndef OSG_2_PREP
           ViewportPtr         &getViewport       (void);
#endif

           bool                &editActive         (void);
     const bool                &getActive         (void) const;
#ifndef OSG_2_PREP
           bool                &getActive         (void);
#endif

           Vec3f               &editLength         (void);
     const Vec3f               &getLength         (void) const;
#ifndef OSG_2_PREP
           Vec3f               &getLength         (void);
#endif

           NodePtr             &editHandleXNode    (void);
     const NodePtr             &getHandleXNode    (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getHandleXNode    (void);
#endif

           NodePtr             &editHandleYNode    (void);
     const NodePtr             &getHandleYNode    (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getHandleYNode    (void);
#endif

           NodePtr             &editHandleZNode    (void);
     const NodePtr             &getHandleZNode    (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getHandleZNode    (void);
#endif

           NodePtr             &editTransXNode     (void);
     const NodePtr             &getTransXNode     (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getTransXNode     (void);
#endif

           NodePtr             &editTransYNode     (void);
     const NodePtr             &getTransYNode     (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getTransYNode     (void);
#endif

           NodePtr             &editTransZNode     (void);
     const NodePtr             &getTransZNode     (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getTransZNode     (void);
#endif

           MaterialPtr         &editMaterialX      (void);
     const MaterialPtr         &getMaterialX      (void) const;
#ifndef OSG_2_PREP
           MaterialPtr         &getMaterialX      (void);
#endif

           MaterialPtr         &editMaterialY      (void);
     const MaterialPtr         &getMaterialY      (void) const;
#ifndef OSG_2_PREP
           MaterialPtr         &getMaterialY      (void);
#endif

           MaterialPtr         &editMaterialZ      (void);
     const MaterialPtr         &getMaterialZ      (void) const;
#ifndef OSG_2_PREP
           MaterialPtr         &getMaterialZ      (void);
#endif

           NodePtr             &editAxisLinesN     (void);
     const NodePtr             &getAxisLinesN     (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getAxisLinesN     (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setTarget         ( const NodePtr &value );
     void setActiveSubHandle( const NodePtr &value );
     void setViewport       ( const ViewportPtr &value );
     void setActive         ( const bool &value );
     void setLength         ( const Vec3f &value );
     void setHandleXNode    ( const NodePtr &value );
     void setHandleYNode    ( const NodePtr &value );
     void setHandleZNode    ( const NodePtr &value );
     void setTransXNode     ( const NodePtr &value );
     void setTransYNode     ( const NodePtr &value );
     void setTransZNode     ( const NodePtr &value );
     void setMaterialX      ( const MaterialPtr &value );
     void setMaterialY      ( const MaterialPtr &value );
     void setMaterialZ      ( const MaterialPtr &value );
     void setAxisLinesN     ( const NodePtr &value );

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
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFNodePtr           _sfTarget;
    SFNodePtr           _sfActiveSubHandle;
    SFPnt2f             _sfLastMousePos;
    SFViewportPtr       _sfViewport;
    SFBool              _sfActive;
    SFVec3f             _sfLength;
    SFNodePtr           _sfHandleXNode;
    SFNodePtr           _sfHandleYNode;
    SFNodePtr           _sfHandleZNode;
    SFNodePtr           _sfTransXNode;
    SFNodePtr           _sfTransYNode;
    SFNodePtr           _sfTransZNode;
    SFMaterialPtr       _sfMaterialX;
    SFMaterialPtr       _sfMaterialY;
    SFMaterialPtr       _sfMaterialZ;
    SFNodePtr           _sfAxisLinesN;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ManipulatorBase(void);
    ManipulatorBase(const ManipulatorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ManipulatorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFPnt2f             *editSFLastMousePos   (void);
     const SFPnt2f             *getSFLastMousePos   (void) const;
#ifndef OSG_2_PREP
           SFPnt2f             *getSFLastMousePos   (void);
#endif

           Pnt2f               &editLastMousePos   (void);
     const Pnt2f               &getLastMousePos   (void) const;
#ifndef OSG_2_PREP
           Pnt2f               &getLastMousePos   (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setLastMousePos   (const Pnt2f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ManipulatorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ManipulatorBase *pOther,
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
    void operator =(const ManipulatorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ManipulatorBase *ManipulatorBaseP;

typedef osgIF<ManipulatorBase::isNodeCore,
              CoredNodePtr<Manipulator>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ManipulatorNodePtr;

typedef RefPtr<ManipulatorPtr> ManipulatorRefPtr;

OSG_END_NAMESPACE

#define OSGMANIPULATORBASE_HEADER_CVSID "@(#)$Id: OSGManipulatorBase.h,v 1.8 2008/06/09 12:28:05 vossg Exp $"

#endif /* _OSGMANIPULATORBASE_H_ */
