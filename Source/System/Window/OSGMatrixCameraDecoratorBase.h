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
 **     class MatrixCameraDecorator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMATRIXCAMERADECORATORBASE_H_
#define _OSGMATRIXCAMERADECORATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGCameraDecorator.h> // Parent

#include <OSGMatrixFields.h> // PreViewing type
#include <OSGMatrixFields.h> // PostViewing type
#include <OSGMatrixFields.h> // PreProjectionTranslation type
#include <OSGMatrixFields.h> // PostProjectionTranslation type
#include <OSGMatrixFields.h> // PreProjection type
#include <OSGMatrixFields.h> // PostProjection type

#include <OSGMatrixCameraDecoratorFields.h>

OSG_BEGIN_NAMESPACE

class MatrixCameraDecorator;
class BinaryDataHandler;

//! \brief MatrixCameraDecorator Base Class.

class OSG_SYSTEMLIB_DLLMAPPING MatrixCameraDecoratorBase : public CameraDecorator
{
  private:

    typedef CameraDecorator    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef MatrixCameraDecoratorPtr  Ptr;

    enum
    {
        PreViewingFieldId                = Inherited::NextFieldId,
        PostViewingFieldId               = PreViewingFieldId                + 1,
        PreProjectionTranslationFieldId  = PostViewingFieldId               + 1,
        PostProjectionTranslationFieldId = PreProjectionTranslationFieldId  + 1,
        PreProjectionFieldId             = PostProjectionTranslationFieldId + 1,
        PostProjectionFieldId            = PreProjectionFieldId             + 1,
        NextFieldId                      = PostProjectionFieldId            + 1
    };

    static const OSG::BitVector PreViewingFieldMask;
    static const OSG::BitVector PostViewingFieldMask;
    static const OSG::BitVector PreProjectionTranslationFieldMask;
    static const OSG::BitVector PostProjectionTranslationFieldMask;
    static const OSG::BitVector PreProjectionFieldMask;
    static const OSG::BitVector PostProjectionFieldMask;


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


           SFMatrix            *editSFPreViewing     (void);
     const SFMatrix            *getSFPreViewing     (void) const;
#ifndef OSG_2_PREP
           SFMatrix            *getSFPreViewing     (void);
#endif

           SFMatrix            *editSFPostViewing    (void);
     const SFMatrix            *getSFPostViewing    (void) const;
#ifndef OSG_2_PREP
           SFMatrix            *getSFPostViewing    (void);
#endif

           SFMatrix            *editSFPreProjectionTranslation(void);
     const SFMatrix            *getSFPreProjectionTranslation(void) const;
#ifndef OSG_2_PREP
           SFMatrix            *getSFPreProjectionTranslation(void);
#endif

           SFMatrix            *editSFPostProjectionTranslation(void);
     const SFMatrix            *getSFPostProjectionTranslation(void) const;
#ifndef OSG_2_PREP
           SFMatrix            *getSFPostProjectionTranslation(void);
#endif

           SFMatrix            *editSFPreProjection  (void);
     const SFMatrix            *getSFPreProjection  (void) const;
#ifndef OSG_2_PREP
           SFMatrix            *getSFPreProjection  (void);
#endif

           SFMatrix            *editSFPostProjection (void);
     const SFMatrix            *getSFPostProjection (void) const;
#ifndef OSG_2_PREP
           SFMatrix            *getSFPostProjection (void);
#endif


           Matrix              &editPreViewing     (void);
     const Matrix              &getPreViewing     (void) const;
#ifndef OSG_2_PREP
           Matrix              &getPreViewing     (void);
#endif

           Matrix              &editPostViewing    (void);
     const Matrix              &getPostViewing    (void) const;
#ifndef OSG_2_PREP
           Matrix              &getPostViewing    (void);
#endif

           Matrix              &editPreProjectionTranslation(void);
     const Matrix              &getPreProjectionTranslation(void) const;
#ifndef OSG_2_PREP
           Matrix              &getPreProjectionTranslation(void);
#endif

           Matrix              &editPostProjectionTranslation(void);
     const Matrix              &getPostProjectionTranslation(void) const;
#ifndef OSG_2_PREP
           Matrix              &getPostProjectionTranslation(void);
#endif

           Matrix              &editPreProjection  (void);
     const Matrix              &getPreProjection  (void) const;
#ifndef OSG_2_PREP
           Matrix              &getPreProjection  (void);
#endif

           Matrix              &editPostProjection (void);
     const Matrix              &getPostProjection (void) const;
#ifndef OSG_2_PREP
           Matrix              &getPostProjection (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setPreViewing     ( const Matrix &value );
     void setPostViewing    ( const Matrix &value );
     void setPreProjectionTranslation( const Matrix &value );
     void setPostProjectionTranslation( const Matrix &value );
     void setPreProjection  ( const Matrix &value );
     void setPostProjection ( const Matrix &value );

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

    static  MatrixCameraDecoratorPtr      create          (void); 
    static  MatrixCameraDecoratorPtr      createEmpty     (void); 

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

    SFMatrix            _sfPreViewing;
    SFMatrix            _sfPostViewing;
    SFMatrix            _sfPreProjectionTranslation;
    SFMatrix            _sfPostProjectionTranslation;
    SFMatrix            _sfPreProjection;
    SFMatrix            _sfPostProjection;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MatrixCameraDecoratorBase(void);
    MatrixCameraDecoratorBase(const MatrixCameraDecoratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MatrixCameraDecoratorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      MatrixCameraDecoratorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      MatrixCameraDecoratorBase *pOther,
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
    void operator =(const MatrixCameraDecoratorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef MatrixCameraDecoratorBase *MatrixCameraDecoratorBaseP;

typedef osgIF<MatrixCameraDecoratorBase::isNodeCore,
              CoredNodePtr<MatrixCameraDecorator>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet MatrixCameraDecoratorNodePtr;

typedef RefPtr<MatrixCameraDecoratorPtr> MatrixCameraDecoratorRefPtr;

OSG_END_NAMESPACE

#define OSGMATRIXCAMERADECORATORBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGMATRIXCAMERADECORATORBASE_H_ */
