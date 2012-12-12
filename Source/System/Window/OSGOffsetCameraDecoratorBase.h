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
 **     class OffsetCameraDecorator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGOFFSETCAMERADECORATORBASE_H_
#define _OSGOFFSETCAMERADECORATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGCameraDecorator.h> // Parent

#include <OSGReal32Fields.h> // OffsetX type
#include <OSGReal32Fields.h> // OffsetY type
#include <OSGUInt32Fields.h> // FullWidth type
#include <OSGUInt32Fields.h> // FullHeight type

#include <OSGOffsetCameraDecoratorFields.h>

OSG_BEGIN_NAMESPACE

class OffsetCameraDecorator;
class BinaryDataHandler;

//! \brief OffsetCameraDecorator Base Class.

class OSG_SYSTEMLIB_DLLMAPPING OffsetCameraDecoratorBase : public CameraDecorator
{
  private:

    typedef CameraDecorator    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef OffsetCameraDecoratorPtr  Ptr;

    enum
    {
        OffsetXFieldId    = Inherited::NextFieldId,
        OffsetYFieldId    = OffsetXFieldId    + 1,
        FullWidthFieldId  = OffsetYFieldId    + 1,
        FullHeightFieldId = FullWidthFieldId  + 1,
        NextFieldId       = FullHeightFieldId + 1
    };

    static const OSG::BitVector OffsetXFieldMask;
    static const OSG::BitVector OffsetYFieldMask;
    static const OSG::BitVector FullWidthFieldMask;
    static const OSG::BitVector FullHeightFieldMask;


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


           SFReal32            *editSFOffsetX        (void);
     const SFReal32            *getSFOffsetX        (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFOffsetX        (void);
#endif

           SFReal32            *editSFOffsetY        (void);
     const SFReal32            *getSFOffsetY        (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFOffsetY        (void);
#endif

           SFUInt32            *editSFFullWidth      (void);
     const SFUInt32            *getSFFullWidth      (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFFullWidth      (void);
#endif

           SFUInt32            *editSFFullHeight     (void);
     const SFUInt32            *getSFFullHeight     (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFFullHeight     (void);
#endif


           Real32              &editOffsetX        (void);
     const Real32              &getOffsetX        (void) const;
#ifndef OSG_2_PREP
           Real32              &getOffsetX        (void);
#endif

           Real32              &editOffsetY        (void);
     const Real32              &getOffsetY        (void) const;
#ifndef OSG_2_PREP
           Real32              &getOffsetY        (void);
#endif

           UInt32              &editFullWidth      (void);
     const UInt32              &getFullWidth      (void) const;
#ifndef OSG_2_PREP
           UInt32              &getFullWidth      (void);
#endif

           UInt32              &editFullHeight     (void);
     const UInt32              &getFullHeight     (void) const;
#ifndef OSG_2_PREP
           UInt32              &getFullHeight     (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setOffsetX        ( const Real32 &value );
     void setOffsetY        ( const Real32 &value );
     void setFullWidth      ( const UInt32 &value );
     void setFullHeight     ( const UInt32 &value );

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

    static  OffsetCameraDecoratorPtr      create          (void); 
    static  OffsetCameraDecoratorPtr      createEmpty     (void); 

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

    SFReal32            _sfOffsetX;
    SFReal32            _sfOffsetY;
    SFUInt32            _sfFullWidth;
    SFUInt32            _sfFullHeight;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    OffsetCameraDecoratorBase(void);
    OffsetCameraDecoratorBase(const OffsetCameraDecoratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~OffsetCameraDecoratorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      OffsetCameraDecoratorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      OffsetCameraDecoratorBase *pOther,
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
    void operator =(const OffsetCameraDecoratorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef OffsetCameraDecoratorBase *OffsetCameraDecoratorBaseP;

typedef osgIF<OffsetCameraDecoratorBase::isNodeCore,
              CoredNodePtr<OffsetCameraDecorator>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet OffsetCameraDecoratorNodePtr;

typedef RefPtr<OffsetCameraDecoratorPtr> OffsetCameraDecoratorRefPtr;

OSG_END_NAMESPACE

#define OSGOFFSETCAMERADECORATORBASE_HEADER_CVSID "@(#)$Id: OSGOffsetCameraDecoratorBase.h,v 1.4 2008/06/09 12:28:23 vossg Exp $"

#endif /* _OSGOFFSETCAMERADECORATORBASE_H_ */
