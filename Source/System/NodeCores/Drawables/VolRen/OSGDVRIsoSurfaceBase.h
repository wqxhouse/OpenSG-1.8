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
 **     class DVRIsoSurface
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDVRISOSURFACEBASE_H_
#define _OSGDVRISOSURFACEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGAttachment.h> // Parent

#include <OSGReal32Fields.h> // IsoValue type
#include <OSGReal32Fields.h> // IsoThickness type
#include <OSGReal32Fields.h> // IsoOpacity type
#include <OSGUInt32Fields.h> // AlphaMode type
#include <OSGBoolFields.h> // SpecularLighting type

#include <OSGDVRIsoSurfaceFields.h>

OSG_BEGIN_NAMESPACE

class DVRIsoSurface;
class BinaryDataHandler;

//! \brief DVRIsoSurface Base Class.

class OSG_SYSTEMLIB_DLLMAPPING DVRIsoSurfaceBase : public Attachment
{
  private:

    typedef Attachment    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DVRIsoSurfacePtr  Ptr;

    enum
    {
        IsoValueFieldId         = Inherited::NextFieldId,
        IsoThicknessFieldId     = IsoValueFieldId         + 1,
        IsoOpacityFieldId       = IsoThicknessFieldId     + 1,
        AlphaModeFieldId        = IsoOpacityFieldId       + 1,
        SpecularLightingFieldId = AlphaModeFieldId        + 1,
        NextFieldId             = SpecularLightingFieldId + 1
    };

    static const OSG::BitVector IsoValueFieldMask;
    static const OSG::BitVector IsoThicknessFieldMask;
    static const OSG::BitVector IsoOpacityFieldMask;
    static const OSG::BitVector AlphaModeFieldMask;
    static const OSG::BitVector SpecularLightingFieldMask;


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


           SFReal32            *editSFIsoValue       (void);
     const SFReal32            *getSFIsoValue       (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFIsoValue       (void);
#endif

           SFReal32            *editSFIsoThickness   (void);
     const SFReal32            *getSFIsoThickness   (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFIsoThickness   (void);
#endif

           SFReal32            *editSFIsoOpacity     (void);
     const SFReal32            *getSFIsoOpacity     (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFIsoOpacity     (void);
#endif

           SFUInt32            *editSFAlphaMode      (void);
     const SFUInt32            *getSFAlphaMode      (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFAlphaMode      (void);
#endif

           SFBool              *editSFSpecularLighting(void);
     const SFBool              *getSFSpecularLighting(void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFSpecularLighting(void);
#endif


           Real32              &editIsoValue       (void);
     const Real32              &getIsoValue       (void) const;
#ifndef OSG_2_PREP
           Real32              &getIsoValue       (void);
#endif

           Real32              &editIsoThickness   (void);
     const Real32              &getIsoThickness   (void) const;
#ifndef OSG_2_PREP
           Real32              &getIsoThickness   (void);
#endif

           Real32              &editIsoOpacity     (void);
     const Real32              &getIsoOpacity     (void) const;
#ifndef OSG_2_PREP
           Real32              &getIsoOpacity     (void);
#endif

           UInt32              &editAlphaMode      (void);
     const UInt32              &getAlphaMode      (void) const;
#ifndef OSG_2_PREP
           UInt32              &getAlphaMode      (void);
#endif

           bool                &editSpecularLighting(void);
     const bool                &getSpecularLighting(void) const;
#ifndef OSG_2_PREP
           bool                &getSpecularLighting(void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setIsoValue       ( const Real32 &value );
     void setIsoThickness   ( const Real32 &value );
     void setIsoOpacity     ( const Real32 &value );
     void setAlphaMode      ( const UInt32 &value );
     void setSpecularLighting( const bool &value );

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

    static  DVRIsoSurfacePtr      create          (void); 
    static  DVRIsoSurfacePtr      createEmpty     (void); 

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

    SFReal32            _sfIsoValue;
    SFReal32            _sfIsoThickness;
    SFReal32            _sfIsoOpacity;
    SFUInt32            _sfAlphaMode;
    SFBool              _sfSpecularLighting;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DVRIsoSurfaceBase(void);
    DVRIsoSurfaceBase(const DVRIsoSurfaceBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DVRIsoSurfaceBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DVRIsoSurfaceBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DVRIsoSurfaceBase *pOther,
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
    void operator =(const DVRIsoSurfaceBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DVRIsoSurfaceBase *DVRIsoSurfaceBaseP;

typedef osgIF<DVRIsoSurfaceBase::isNodeCore,
              CoredNodePtr<DVRIsoSurface>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DVRIsoSurfaceNodePtr;

typedef RefPtr<DVRIsoSurfacePtr> DVRIsoSurfaceRefPtr;

OSG_END_NAMESPACE

#define OSGDVRISOSURFACEBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGDVRISOSURFACEBASE_H_ */
