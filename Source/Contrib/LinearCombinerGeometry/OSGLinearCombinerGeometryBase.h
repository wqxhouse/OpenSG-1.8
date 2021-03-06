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
 **     class LinearCombinerGeometry
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLINEARCOMBINERGEOMETRYBASE_H_
#define _OSGLINEARCOMBINERGEOMETRYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGContribDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGGeometry.h> // Parent

#include <OSGReal32Fields.h> // Weights type
#include <OSGGeoPositionsFields.h> // Srcpositions type
#include <OSGDynamicVolume.h> // Srcvolumes type
#include <OSGBoolFields.h> // Recalconrender type
#include <OSGBoolFields.h> // Allgeometries3f type
#include <OSGBoolFields.h> // Positionsdirty type

#include <OSGLinearCombinerGeometryFields.h>

OSG_BEGIN_NAMESPACE

class LinearCombinerGeometry;
class BinaryDataHandler;

//! \brief LinearCombinerGeometry Base Class.

class OSG_CONTRIBLIB_DLLMAPPING LinearCombinerGeometryBase : public Geometry
{
  private:

    typedef Geometry    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef LinearCombinerGeometryPtr  Ptr;

    enum
    {
        WeightsFieldId         = Inherited::NextFieldId,
        SrcpositionsFieldId    = WeightsFieldId         + 1,
        SrcvolumesFieldId      = SrcpositionsFieldId    + 1,
        RecalconrenderFieldId  = SrcvolumesFieldId      + 1,
        Allgeometries3fFieldId = RecalconrenderFieldId  + 1,
        PositionsdirtyFieldId  = Allgeometries3fFieldId + 1,
        NextFieldId            = PositionsdirtyFieldId  + 1
    };

    static const OSG::BitVector WeightsFieldMask;
    static const OSG::BitVector SrcpositionsFieldMask;
    static const OSG::BitVector SrcvolumesFieldMask;
    static const OSG::BitVector RecalconrenderFieldMask;
    static const OSG::BitVector Allgeometries3fFieldMask;
    static const OSG::BitVector PositionsdirtyFieldMask;


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


           MFReal32            *editMFWeights        (void);
     const MFReal32            *getMFWeights        (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFWeights        (void);
#endif

           MFGeoPositionsPtr   *editMFSrcpositions   (void);
     const MFGeoPositionsPtr   *getMFSrcpositions   (void) const;
#ifndef OSG_2_PREP
           MFGeoPositionsPtr   *getMFSrcpositions   (void);
#endif





           Real32              &editWeights        (const UInt32 index);
     const Real32              &getWeights        (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getWeights        (const UInt32 index);
           MFReal32            &getWeights        (void);
     const MFReal32            &getWeights        (void) const;
#endif

           GeoPositionsPtr     &editSrcpositions   (const UInt32 index);
     const GeoPositionsPtr     &getSrcpositions   (const UInt32 index) const;
#ifndef OSG_2_PREP
           GeoPositionsPtr     &getSrcpositions   (const UInt32 index);
           MFGeoPositionsPtr   &getSrcpositions   (void);
     const MFGeoPositionsPtr   &getSrcpositions   (void) const;
#endif


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


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

    static  LinearCombinerGeometryPtr      create          (void); 
    static  LinearCombinerGeometryPtr      createEmpty     (void); 

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

    MFReal32            _mfWeights;
    MFGeoPositionsPtr   _mfSrcpositions;
    MFVolume            _mfSrcvolumes;
    SFBool              _sfRecalconrender;
    SFBool              _sfAllgeometries3f;
    SFBool              _sfPositionsdirty;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LinearCombinerGeometryBase(void);
    LinearCombinerGeometryBase(const LinearCombinerGeometryBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LinearCombinerGeometryBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFVolume            *editMFSrcvolumes     (void);
     const MFVolume            *getMFSrcvolumes     (void) const;
#ifndef OSG_2_PREP
           MFVolume            *getMFSrcvolumes     (void);
#endif
           SFBool              *editSFRecalconrender (void);
     const SFBool              *getSFRecalconrender (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFRecalconrender (void);
#endif
           SFBool              *editSFAllgeometries3f(void);
     const SFBool              *getSFAllgeometries3f(void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFAllgeometries3f(void);
#endif
           SFBool              *editSFPositionsdirty (void);
     const SFBool              *getSFPositionsdirty (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFPositionsdirty (void);
#endif

           bool                &editRecalconrender (void);
     const bool                &getRecalconrender (void) const;
#ifndef OSG_2_PREP
           bool                &getRecalconrender (void);
#endif
           bool                &editAllgeometries3f(void);
     const bool                &getAllgeometries3f(void) const;
#ifndef OSG_2_PREP
           bool                &getAllgeometries3f(void);
#endif
           bool                &editPositionsdirty (void);
     const bool                &getPositionsdirty (void) const;
#ifndef OSG_2_PREP
           bool                &getPositionsdirty (void);
#endif
           Volume              &editSrcvolumes     (UInt32 index);
     const Volume              &getSrcvolumes     (UInt32 index) const;
#ifndef OSG_2_PREP
           Volume              &getSrcvolumes     (UInt32 index);
           MFVolume            &getSrcvolumes     (void);
     const MFVolume            &getSrcvolumes     (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setRecalconrender (const bool &value);
     void setAllgeometries3f(const bool &value);
     void setPositionsdirty (const bool &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      LinearCombinerGeometryBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      LinearCombinerGeometryBase *pOther,
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
    void operator =(const LinearCombinerGeometryBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef LinearCombinerGeometryBase *LinearCombinerGeometryBaseP;

typedef osgIF<LinearCombinerGeometryBase::isNodeCore,
              CoredNodePtr<LinearCombinerGeometry>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet LinearCombinerGeometryNodePtr;

typedef RefPtr<LinearCombinerGeometryPtr> LinearCombinerGeometryRefPtr;

OSG_END_NAMESPACE

#define OSGLINEARCOMBINERGEOMETRYBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGLINEARCOMBINERGEOMETRYBASE_H_ */
