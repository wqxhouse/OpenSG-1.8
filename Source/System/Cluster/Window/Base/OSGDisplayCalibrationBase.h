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
 **     class DisplayCalibration
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISPLAYCALIBRATIONBASE_H_
#define _OSGDISPLAYCALIBRATIONBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGAttachmentContainer.h> // Parent

#include <OSGBoolFields.h> // Enabled type
#include <OSGStringFields.h> // Server type
#include <OSGMatrixFields.h> // ColorMatrix type
#include <OSGReal32Fields.h> // Gamma type
#include <OSGColor3fFields.h> // GammaRamp type
#include <OSGUInt32Fields.h> // GridWidth type
#include <OSGUInt32Fields.h> // GridHeight type
#include <OSGVec2fFields.h> // Grid type
#include <OSGReal32Fields.h> // ScaleDown type

#include <OSGDisplayCalibrationFields.h>

OSG_BEGIN_NAMESPACE

class DisplayCalibration;
class BinaryDataHandler;

//! \brief DisplayCalibration Base Class.

class OSG_SYSTEMLIB_DLLMAPPING DisplayCalibrationBase : public AttachmentContainer
{
  private:

    typedef AttachmentContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DisplayCalibrationPtr  Ptr;

    enum
    {
        EnabledFieldId     = Inherited::NextFieldId,
        ServerFieldId      = EnabledFieldId     + 1,
        ColorMatrixFieldId = ServerFieldId      + 1,
        GammaFieldId       = ColorMatrixFieldId + 1,
        GammaRampFieldId   = GammaFieldId       + 1,
        GridWidthFieldId   = GammaRampFieldId   + 1,
        GridHeightFieldId  = GridWidthFieldId   + 1,
        GridFieldId        = GridHeightFieldId  + 1,
        ScaleDownFieldId   = GridFieldId        + 1,
        NextFieldId        = ScaleDownFieldId   + 1
    };

    static const OSG::BitVector EnabledFieldMask;
    static const OSG::BitVector ServerFieldMask;
    static const OSG::BitVector ColorMatrixFieldMask;
    static const OSG::BitVector GammaFieldMask;
    static const OSG::BitVector GammaRampFieldMask;
    static const OSG::BitVector GridWidthFieldMask;
    static const OSG::BitVector GridHeightFieldMask;
    static const OSG::BitVector GridFieldMask;
    static const OSG::BitVector ScaleDownFieldMask;


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


           SFBool              *editSFEnabled        (void);
     const SFBool              *getSFEnabled        (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFEnabled        (void);
#endif

           SFString            *editSFServer         (void);
     const SFString            *getSFServer         (void) const;
#ifndef OSG_2_PREP
           SFString            *getSFServer         (void);
#endif

           SFMatrix            *editSFColorMatrix    (void);
     const SFMatrix            *getSFColorMatrix    (void) const;
#ifndef OSG_2_PREP
           SFMatrix            *getSFColorMatrix    (void);
#endif

           SFReal32            *editSFGamma          (void);
     const SFReal32            *getSFGamma          (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFGamma          (void);
#endif

           MFColor3f           *editMFGammaRamp      (void);
     const MFColor3f           *getMFGammaRamp      (void) const;
#ifndef OSG_2_PREP
           MFColor3f           *getMFGammaRamp      (void);
#endif

           SFUInt32            *editSFGridWidth      (void);
     const SFUInt32            *getSFGridWidth      (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFGridWidth      (void);
#endif

           SFUInt32            *editSFGridHeight     (void);
     const SFUInt32            *getSFGridHeight     (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFGridHeight     (void);
#endif

           MFVec2f             *editMFGrid           (void);
     const MFVec2f             *getMFGrid           (void) const;
#ifndef OSG_2_PREP
           MFVec2f             *getMFGrid           (void);
#endif

           SFReal32            *editSFScaleDown      (void);
     const SFReal32            *getSFScaleDown      (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFScaleDown      (void);
#endif


           bool                &editEnabled        (void);
     const bool                &getEnabled        (void) const;
#ifndef OSG_2_PREP
           bool                &getEnabled        (void);
#endif

           std::string         &editServer         (void);
     const std::string         &getServer         (void) const;
#ifndef OSG_2_PREP
           std::string         &getServer         (void);
#endif

           Matrix              &editColorMatrix    (void);
     const Matrix              &getColorMatrix    (void) const;
#ifndef OSG_2_PREP
           Matrix              &getColorMatrix    (void);
#endif

           Real32              &editGamma          (void);
     const Real32              &getGamma          (void) const;
#ifndef OSG_2_PREP
           Real32              &getGamma          (void);
#endif

           UInt32              &editGridWidth      (void);
     const UInt32              &getGridWidth      (void) const;
#ifndef OSG_2_PREP
           UInt32              &getGridWidth      (void);
#endif

           UInt32              &editGridHeight     (void);
     const UInt32              &getGridHeight     (void) const;
#ifndef OSG_2_PREP
           UInt32              &getGridHeight     (void);
#endif

           Real32              &editScaleDown      (void);
     const Real32              &getScaleDown      (void) const;
#ifndef OSG_2_PREP
           Real32              &getScaleDown      (void);
#endif

           Color3f             &editGammaRamp      (const UInt32 index);
     const Color3f             &getGammaRamp      (const UInt32 index) const;
#ifndef OSG_2_PREP
           Color3f             &getGammaRamp      (const UInt32 index);
           MFColor3f           &getGammaRamp      (void);
     const MFColor3f           &getGammaRamp      (void) const;
#endif

           Vec2f               &editGrid           (const UInt32 index);
     const Vec2f               &getGrid           (const UInt32 index) const;
#ifndef OSG_2_PREP
           Vec2f               &getGrid           (const UInt32 index);
           MFVec2f             &getGrid           (void);
     const MFVec2f             &getGrid           (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setEnabled        ( const bool &value );
     void setServer         ( const std::string &value );
     void setColorMatrix    ( const Matrix &value );
     void setGamma          ( const Real32 &value );
     void setGridWidth      ( const UInt32 &value );
     void setGridHeight     ( const UInt32 &value );
     void setScaleDown      ( const Real32 &value );

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

    static  DisplayCalibrationPtr      create          (void); 
    static  DisplayCalibrationPtr      createEmpty     (void); 

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

    SFBool              _sfEnabled;
    SFString            _sfServer;
    SFMatrix            _sfColorMatrix;
    SFReal32            _sfGamma;
    MFColor3f           _mfGammaRamp;
    SFUInt32            _sfGridWidth;
    SFUInt32            _sfGridHeight;
    MFVec2f             _mfGrid;
    SFReal32            _sfScaleDown;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DisplayCalibrationBase(void);
    DisplayCalibrationBase(const DisplayCalibrationBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DisplayCalibrationBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DisplayCalibrationBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DisplayCalibrationBase *pOther,
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
    void operator =(const DisplayCalibrationBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DisplayCalibrationBase *DisplayCalibrationBaseP;

typedef osgIF<DisplayCalibrationBase::isNodeCore,
              CoredNodePtr<DisplayCalibration>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DisplayCalibrationNodePtr;

typedef RefPtr<DisplayCalibrationPtr> DisplayCalibrationRefPtr;

OSG_END_NAMESPACE

#define OSGDISPLAYCALIBRATIONBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGDISPLAYCALIBRATIONBASE_H_ */
