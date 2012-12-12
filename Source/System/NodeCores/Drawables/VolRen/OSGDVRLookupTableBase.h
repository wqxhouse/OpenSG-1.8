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
 **     class DVRLookupTable
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDVRLOOKUPTABLEBASE_H_
#define _OSGDVRLOOKUPTABLEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGAttachment.h> // Parent

#include <OSGUInt8Fields.h> // Dimension type
#include <OSGUInt32Fields.h> // Size type
#include <OSGUInt8Fields.h> // Channel type
#include <OSGUInt8Fields.h> // Data type
#include <OSGReal32Fields.h> // DataR type
#include <OSGReal32Fields.h> // DataG type
#include <OSGReal32Fields.h> // DataB type
#include <OSGReal32Fields.h> // DataA type
#include <OSGBoolFields.h> // Touched type

#include <OSGDVRLookupTableFields.h>

OSG_BEGIN_NAMESPACE

class DVRLookupTable;
class BinaryDataHandler;

//! \brief DVRLookupTable Base Class.

class OSG_SYSTEMLIB_DLLMAPPING DVRLookupTableBase : public Attachment
{
  private:

    typedef Attachment    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DVRLookupTablePtr  Ptr;

    enum
    {
        DimensionFieldId = Inherited::NextFieldId,
        SizeFieldId      = DimensionFieldId + 1,
        ChannelFieldId   = SizeFieldId      + 1,
        DataFieldId      = ChannelFieldId   + 1,
        DataRFieldId     = DataFieldId      + 1,
        DataGFieldId     = DataRFieldId     + 1,
        DataBFieldId     = DataGFieldId     + 1,
        DataAFieldId     = DataBFieldId     + 1,
        TouchedFieldId   = DataAFieldId     + 1,
        NextFieldId      = TouchedFieldId   + 1
    };

    static const OSG::BitVector DimensionFieldMask;
    static const OSG::BitVector SizeFieldMask;
    static const OSG::BitVector ChannelFieldMask;
    static const OSG::BitVector DataFieldMask;
    static const OSG::BitVector DataRFieldMask;
    static const OSG::BitVector DataGFieldMask;
    static const OSG::BitVector DataBFieldMask;
    static const OSG::BitVector DataAFieldMask;
    static const OSG::BitVector TouchedFieldMask;


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


           SFUInt8             *editSFDimension      (void);
     const SFUInt8             *getSFDimension      (void) const;
#ifndef OSG_2_PREP
           SFUInt8             *getSFDimension      (void);
#endif

           MFUInt32            *editMFSize           (void);
     const MFUInt32            *getMFSize           (void) const;
#ifndef OSG_2_PREP
           MFUInt32            *getMFSize           (void);
#endif

           SFUInt8             *editSFChannel        (void);
     const SFUInt8             *getSFChannel        (void) const;
#ifndef OSG_2_PREP
           SFUInt8             *getSFChannel        (void);
#endif

           MFUInt8             *editMFData           (void);
     const MFUInt8             *getMFData           (void) const;
#ifndef OSG_2_PREP
           MFUInt8             *getMFData           (void);
#endif

           MFReal32            *editMFDataR          (void);
     const MFReal32            *getMFDataR          (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFDataR          (void);
#endif

           MFReal32            *editMFDataG          (void);
     const MFReal32            *getMFDataG          (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFDataG          (void);
#endif

           MFReal32            *editMFDataB          (void);
     const MFReal32            *getMFDataB          (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFDataB          (void);
#endif

           MFReal32            *editMFDataA          (void);
     const MFReal32            *getMFDataA          (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFDataA          (void);
#endif

           SFBool              *editSFTouched        (void);
     const SFBool              *getSFTouched        (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFTouched        (void);
#endif


           UInt8               &editDimension      (void);
     const UInt8               &getDimension      (void) const;
#ifndef OSG_2_PREP
           UInt8               &getDimension      (void);
#endif

           UInt8               &editChannel        (void);
     const UInt8               &getChannel        (void) const;
#ifndef OSG_2_PREP
           UInt8               &getChannel        (void);
#endif

           bool                &editTouched        (void);
     const bool                &getTouched        (void) const;
#ifndef OSG_2_PREP
           bool                &getTouched        (void);
#endif

           UInt32              &editSize           (const UInt32 index);
     const UInt32              &getSize           (const UInt32 index) const;
#ifndef OSG_2_PREP
           UInt32              &getSize           (const UInt32 index);
           MFUInt32            &getSize           (void);
     const MFUInt32            &getSize           (void) const;
#endif

           UInt8               &editData           (const UInt32 index);
     const UInt8               &getData           (const UInt32 index) const;
#ifndef OSG_2_PREP
           UInt8               &getData           (const UInt32 index);
           MFUInt8             &getData           (void);
     const MFUInt8             &getData           (void) const;
#endif

           Real32              &editDataR          (const UInt32 index);
     const Real32              &getDataR          (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getDataR          (const UInt32 index);
           MFReal32            &getDataR          (void);
     const MFReal32            &getDataR          (void) const;
#endif

           Real32              &editDataG          (const UInt32 index);
     const Real32              &getDataG          (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getDataG          (const UInt32 index);
           MFReal32            &getDataG          (void);
     const MFReal32            &getDataG          (void) const;
#endif

           Real32              &editDataB          (const UInt32 index);
     const Real32              &getDataB          (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getDataB          (const UInt32 index);
           MFReal32            &getDataB          (void);
     const MFReal32            &getDataB          (void) const;
#endif

           Real32              &editDataA          (const UInt32 index);
     const Real32              &getDataA          (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getDataA          (const UInt32 index);
           MFReal32            &getDataA          (void);
     const MFReal32            &getDataA          (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setDimension      ( const UInt8 &value );
     void setChannel        ( const UInt8 &value );
     void setTouched        ( const bool &value );

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

    static  DVRLookupTablePtr      create          (void); 
    static  DVRLookupTablePtr      createEmpty     (void); 

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

    SFUInt8             _sfDimension;
    MFUInt32            _mfSize;
    SFUInt8             _sfChannel;
    MFUInt8             _mfData;
    MFReal32            _mfDataR;
    MFReal32            _mfDataG;
    MFReal32            _mfDataB;
    MFReal32            _mfDataA;
    SFBool              _sfTouched;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DVRLookupTableBase(void);
    DVRLookupTableBase(const DVRLookupTableBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DVRLookupTableBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DVRLookupTableBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DVRLookupTableBase *pOther,
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
    void operator =(const DVRLookupTableBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DVRLookupTableBase *DVRLookupTableBaseP;

typedef osgIF<DVRLookupTableBase::isNodeCore,
              CoredNodePtr<DVRLookupTable>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DVRLookupTableNodePtr;

typedef RefPtr<DVRLookupTablePtr> DVRLookupTableRefPtr;

OSG_END_NAMESPACE

#define OSGDVRLOOKUPTABLEBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGDVRLOOKUPTABLEBASE_H_ */