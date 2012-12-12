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
 **     class TextureBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREBACKGROUNDBASE_H_
#define _OSGTEXTUREBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGBackground.h> // Parent

#include <OSGColor4fFields.h> // Color type
#include <OSGTextureChunkFields.h> // Texture type
#include <OSGPnt2fFields.h> // TexCoords type
#include <OSGReal32Fields.h> // RadialDistortion type
#include <OSGVec2fFields.h> // CenterOfDistortion type
#include <OSGUInt16Fields.h> // Hor type
#include <OSGUInt16Fields.h> // Vert type
#include <OSGInt32Fields.h> // ClearStencilBit type

#include <OSGTextureBackgroundFields.h>

OSG_BEGIN_NAMESPACE

class TextureBackground;
class BinaryDataHandler;

//! \brief TextureBackground Base Class.

class OSG_SYSTEMLIB_DLLMAPPING TextureBackgroundBase : public Background
{
  private:

    typedef Background    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TextureBackgroundPtr  Ptr;

    enum
    {
        ColorFieldId              = Inherited::NextFieldId,
        TextureFieldId            = ColorFieldId              + 1,
        TexCoordsFieldId          = TextureFieldId            + 1,
        RadialDistortionFieldId   = TexCoordsFieldId          + 1,
        CenterOfDistortionFieldId = RadialDistortionFieldId   + 1,
        HorFieldId                = CenterOfDistortionFieldId + 1,
        VertFieldId               = HorFieldId                + 1,
        ClearStencilBitFieldId    = VertFieldId               + 1,
        NextFieldId               = ClearStencilBitFieldId    + 1
    };

    static const OSG::BitVector ColorFieldMask;
    static const OSG::BitVector TextureFieldMask;
    static const OSG::BitVector TexCoordsFieldMask;
    static const OSG::BitVector RadialDistortionFieldMask;
    static const OSG::BitVector CenterOfDistortionFieldMask;
    static const OSG::BitVector HorFieldMask;
    static const OSG::BitVector VertFieldMask;
    static const OSG::BitVector ClearStencilBitFieldMask;


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


           SFColor4f           *editSFColor          (void);
     const SFColor4f           *getSFColor          (void) const;
#ifndef OSG_2_PREP
           SFColor4f           *getSFColor          (void);
#endif

           SFTextureChunkPtr   *editSFTexture        (void);
     const SFTextureChunkPtr   *getSFTexture        (void) const;
#ifndef OSG_2_PREP
           SFTextureChunkPtr   *getSFTexture        (void);
#endif

           MFPnt2f             *editMFTexCoords      (void);
     const MFPnt2f             *getMFTexCoords      (void) const;
#ifndef OSG_2_PREP
           MFPnt2f             *getMFTexCoords      (void);
#endif

           SFReal32            *editSFRadialDistortion(void);
     const SFReal32            *getSFRadialDistortion(void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFRadialDistortion(void);
#endif

           SFVec2f             *editSFCenterOfDistortion(void);
     const SFVec2f             *getSFCenterOfDistortion(void) const;
#ifndef OSG_2_PREP
           SFVec2f             *getSFCenterOfDistortion(void);
#endif

           SFUInt16            *editSFHor            (void);
     const SFUInt16            *getSFHor            (void) const;
#ifndef OSG_2_PREP
           SFUInt16            *getSFHor            (void);
#endif

           SFUInt16            *editSFVert           (void);
     const SFUInt16            *getSFVert           (void) const;
#ifndef OSG_2_PREP
           SFUInt16            *getSFVert           (void);
#endif

           SFInt32             *editSFClearStencilBit(void);
     const SFInt32             *getSFClearStencilBit(void) const;
#ifndef OSG_2_PREP
           SFInt32             *getSFClearStencilBit(void);
#endif


           Color4f             &editColor          (void);
     const Color4f             &getColor          (void) const;
#ifndef OSG_2_PREP
           Color4f             &getColor          (void);
#endif

           TextureChunkPtr     &editTexture        (void);
     const TextureChunkPtr     &getTexture        (void) const;
#ifndef OSG_2_PREP
           TextureChunkPtr     &getTexture        (void);
#endif

           Real32              &editRadialDistortion(void);
     const Real32              &getRadialDistortion(void) const;
#ifndef OSG_2_PREP
           Real32              &getRadialDistortion(void);
#endif

           Vec2f               &editCenterOfDistortion(void);
     const Vec2f               &getCenterOfDistortion(void) const;
#ifndef OSG_2_PREP
           Vec2f               &getCenterOfDistortion(void);
#endif

           UInt16              &editHor            (void);
     const UInt16              &getHor            (void) const;
#ifndef OSG_2_PREP
           UInt16              &getHor            (void);
#endif

           UInt16              &editVert           (void);
     const UInt16              &getVert           (void) const;
#ifndef OSG_2_PREP
           UInt16              &getVert           (void);
#endif

           Int32               &editClearStencilBit(void);
     const Int32               &getClearStencilBit(void) const;
#ifndef OSG_2_PREP
           Int32               &getClearStencilBit(void);
#endif

           Pnt2f               &editTexCoords      (const UInt32 index);
     const Pnt2f               &getTexCoords      (const UInt32 index) const;
#ifndef OSG_2_PREP
           Pnt2f               &getTexCoords      (const UInt32 index);
           MFPnt2f             &getTexCoords      (void);
     const MFPnt2f             &getTexCoords      (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setColor          ( const Color4f &value );
     void setTexture        ( const TextureChunkPtr &value );
     void setRadialDistortion( const Real32 &value );
     void setCenterOfDistortion( const Vec2f &value );
     void setHor            ( const UInt16 &value );
     void setVert           ( const UInt16 &value );
     void setClearStencilBit( const Int32 &value );

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

    static  TextureBackgroundPtr      create          (void); 
    static  TextureBackgroundPtr      createEmpty     (void); 

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

    SFColor4f           _sfColor;
    SFTextureChunkPtr   _sfTexture;
    MFPnt2f             _mfTexCoords;
    SFReal32            _sfRadialDistortion;
    SFVec2f             _sfCenterOfDistortion;
    SFUInt16            _sfHor;
    SFUInt16            _sfVert;
    SFInt32             _sfClearStencilBit;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureBackgroundBase(void);
    TextureBackgroundBase(const TextureBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureBackgroundBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TextureBackgroundBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TextureBackgroundBase *pOther,
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
    void operator =(const TextureBackgroundBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TextureBackgroundBase *TextureBackgroundBaseP;

typedef osgIF<TextureBackgroundBase::isNodeCore,
              CoredNodePtr<TextureBackground>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TextureBackgroundNodePtr;

typedef RefPtr<TextureBackgroundPtr> TextureBackgroundRefPtr;

OSG_END_NAMESPACE

#define OSGTEXTUREBACKGROUNDBASE_HEADER_CVSID "@(#)$Id: OSGTextureBackgroundBase.h,v 1.11 2008/06/09 12:28:24 vossg Exp $"

#endif /* _OSGTEXTUREBACKGROUNDBASE_H_ */
