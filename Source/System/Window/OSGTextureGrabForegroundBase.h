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
 **     class TextureGrabForeground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREGRABFOREGROUNDBASE_H_
#define _OSGTEXTUREGRABFOREGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGForeground.h> // Parent

#include <OSGTextureChunkFields.h> // Texture type
#include <OSGBoolFields.h> // AutoResize type
#include <OSGGLenumFields.h> // BindTarget type
#include <OSGGLenumFields.h> // CopyTarget type

#include <OSGTextureGrabForegroundFields.h>

OSG_BEGIN_NAMESPACE

class TextureGrabForeground;
class BinaryDataHandler;

//! \brief TextureGrabForeground Base Class.

class OSG_SYSTEMLIB_DLLMAPPING TextureGrabForegroundBase : public Foreground
{
  private:

    typedef Foreground    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TextureGrabForegroundPtr  Ptr;

    enum
    {
        TextureFieldId    = Inherited::NextFieldId,
        AutoResizeFieldId = TextureFieldId    + 1,
        BindTargetFieldId = AutoResizeFieldId + 1,
        CopyTargetFieldId = BindTargetFieldId + 1,
        NextFieldId       = CopyTargetFieldId + 1
    };

    static const OSG::BitVector TextureFieldMask;
    static const OSG::BitVector AutoResizeFieldMask;
    static const OSG::BitVector BindTargetFieldMask;
    static const OSG::BitVector CopyTargetFieldMask;


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


           SFTextureChunkPtr   *editSFTexture        (void);
     const SFTextureChunkPtr   *getSFTexture        (void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFTexture        (void);
#endif

           SFBool              *editSFAutoResize     (void);
     const SFBool              *getSFAutoResize     (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFAutoResize     (void);
#endif

           SFGLenum            *editSFBindTarget     (void);
     const SFGLenum            *getSFBindTarget     (void) const;
#ifndef OSG_2_PREP
           SFGLenum            *getSFBindTarget     (void);
#endif

           SFGLenum            *editSFCopyTarget     (void);
     const SFGLenum            *getSFCopyTarget     (void) const;
#ifndef OSG_2_PREP
           SFGLenum            *getSFCopyTarget     (void);
#endif


           TextureChunkPtr     &editTexture        (void);
     const TextureChunkPtr     &getTexture        (void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getTexture        (void);
#endif

           bool                &editAutoResize     (void);
     const bool                &getAutoResize     (void) const;
#ifndef OSG_2_PREP
           bool                &getAutoResize     (void);
#endif

           GLenum              &editBindTarget     (void);
     const GLenum              &getBindTarget     (void) const;
#ifndef OSG_2_PREP
           GLenum              &getBindTarget     (void);
#endif

           GLenum              &editCopyTarget     (void);
     const GLenum              &getCopyTarget     (void) const;
#ifndef OSG_2_PREP
           GLenum              &getCopyTarget     (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setTexture        ( const TextureChunkPtr &value );
     void setAutoResize     ( const bool &value );
     void setBindTarget     ( const GLenum &value );
     void setCopyTarget     ( const GLenum &value );

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

    static  TextureGrabForegroundPtr      create          (void); 
    static  TextureGrabForegroundPtr      createEmpty     (void); 

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

    SFTextureChunkPtr   _sfTexture;
    SFBool              _sfAutoResize;
    SFGLenum            _sfBindTarget;
    SFGLenum            _sfCopyTarget;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureGrabForegroundBase(void);
    TextureGrabForegroundBase(const TextureGrabForegroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureGrabForegroundBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TextureGrabForegroundBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TextureGrabForegroundBase *pOther,
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
    void operator =(const TextureGrabForegroundBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TextureGrabForegroundBase *TextureGrabForegroundBaseP;

typedef osgIF<TextureGrabForegroundBase::isNodeCore,
              CoredNodePtr<TextureGrabForeground>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TextureGrabForegroundNodePtr;

typedef RefPtr<TextureGrabForegroundPtr> TextureGrabForegroundRefPtr;

OSG_END_NAMESPACE

#define OSGTEXTUREGRABFOREGROUNDBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGTEXTUREGRABFOREGROUNDBASE_H_ */
