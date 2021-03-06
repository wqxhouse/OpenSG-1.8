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
 **     class FTGLText
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFTGLTEXTBASE_H_
#define _OSGFTGLTEXTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGContribDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGMaterialDrawable.h> // Parent

#include <OSGStringFields.h> // Text type
#include <OSGFTGLFontFields.h> // Font type
#include <OSGPnt3fFields.h> // Position type

#include <OSGFTGLTextFields.h>

OSG_BEGIN_NAMESPACE

class FTGLText;
class BinaryDataHandler;

//! \brief FTGLText Base Class.

class OSG_CONTRIBLIB_DLLMAPPING FTGLTextBase : public MaterialDrawable
{
  private:

    typedef MaterialDrawable    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef FTGLTextPtr  Ptr;

    enum
    {
        TextFieldId     = Inherited::NextFieldId,
        FontFieldId     = TextFieldId     + 1,
        PositionFieldId = FontFieldId     + 1,
        NextFieldId     = PositionFieldId + 1
    };

    static const OSG::BitVector TextFieldMask;
    static const OSG::BitVector FontFieldMask;
    static const OSG::BitVector PositionFieldMask;


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


           SFString            *editSFText           (void);
     const SFString            *getSFText           (void) const;
#ifndef OSG_2_PREP
           SFString            *getSFText           (void);
#endif

           SFFTGLFontPtr       *editSFFont           (void);
     const SFFTGLFontPtr       *getSFFont           (void) const;
#ifndef OSG_2_PREP
           SFFTGLFontPtr       *getSFFont           (void);
#endif

           SFPnt3f             *editSFPosition       (void);
     const SFPnt3f             *getSFPosition       (void) const;
#ifndef OSG_2_PREP
           SFPnt3f             *getSFPosition       (void);
#endif


           std::string         &editText           (void);
     const std::string         &getText           (void) const;
#ifndef OSG_2_PREP
           std::string         &getText           (void);
#endif

           FTGLFontPtr         &editFont           (void);
     const FTGLFontPtr         &getFont           (void) const;
#ifndef OSG_2_PREP
           FTGLFontPtr         &getFont           (void);
#endif

           Pnt3f               &editPosition       (void);
     const Pnt3f               &getPosition       (void) const;
#ifndef OSG_2_PREP
           Pnt3f               &getPosition       (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setText           ( const std::string &value );
     void setFont           ( const FTGLFontPtr &value );
     void setPosition       ( const Pnt3f &value );

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

    static  FTGLTextPtr      create          (void); 
    static  FTGLTextPtr      createEmpty     (void); 

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

    SFString            _sfText;
    SFFTGLFontPtr       _sfFont;
    SFPnt3f             _sfPosition;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    FTGLTextBase(void);
    FTGLTextBase(const FTGLTextBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FTGLTextBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      FTGLTextBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      FTGLTextBase *pOther,
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
    void operator =(const FTGLTextBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef FTGLTextBase *FTGLTextBaseP;

typedef osgIF<FTGLTextBase::isNodeCore,
              CoredNodePtr<FTGLText>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet FTGLTextNodePtr;

typedef RefPtr<FTGLTextPtr> FTGLTextRefPtr;

OSG_END_NAMESPACE

#define OSGFTGLTEXTBASE_HEADER_CVSID "@(#)$Id: OSGFTGLTextBase.h,v 1.10 2008/06/09 12:28:01 vossg Exp $"

#endif /* _OSGFTGLTEXTBASE_H_ */
