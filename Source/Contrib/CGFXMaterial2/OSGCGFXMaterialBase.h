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
 **     class CGFXMaterial
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCGFXMATERIALBASE_H_
#define _OSGCGFXMATERIALBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGContribDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGChunkMaterial.h> // Parent

#include <OSGStringFields.h> // EffectFile type
#include <OSGStringFields.h> // EffectString type
#include <OSGStringFields.h> // CompilerOptions type
#include <OSGInt32Fields.h> // Technique type
#include <OSGShaderParameterFields.h> // Parameters type
#include <OSGImageFields.h> // Images type
#include <OSGShaderParameterStringFields.h> // VirtualIncludeFiles type

#include <OSGCGFXMaterialFields.h>

OSG_BEGIN_NAMESPACE

class CGFXMaterial;
class BinaryDataHandler;

//! \brief CGFXMaterial Base Class.

class OSG_CONTRIBLIB_DLLMAPPING CGFXMaterialBase : public ChunkMaterial
{
  private:

    typedef ChunkMaterial    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef CGFXMaterialPtr  Ptr;

    enum
    {
        EffectFileFieldId          = Inherited::NextFieldId,
        EffectStringFieldId        = EffectFileFieldId          + 1,
        CompilerOptionsFieldId     = EffectStringFieldId        + 1,
        TechniqueFieldId           = CompilerOptionsFieldId     + 1,
        ParametersFieldId          = TechniqueFieldId           + 1,
        ImagesFieldId              = ParametersFieldId          + 1,
        VirtualIncludeFilesFieldId = ImagesFieldId              + 1,
        NextFieldId                = VirtualIncludeFilesFieldId + 1
    };

    static const OSG::BitVector EffectFileFieldMask;
    static const OSG::BitVector EffectStringFieldMask;
    static const OSG::BitVector CompilerOptionsFieldMask;
    static const OSG::BitVector TechniqueFieldMask;
    static const OSG::BitVector ParametersFieldMask;
    static const OSG::BitVector ImagesFieldMask;
    static const OSG::BitVector VirtualIncludeFilesFieldMask;


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


           SFString            *editSFEffectFile     (void);
     const SFString            *getSFEffectFile     (void) const;
#ifndef OSG_2_PREP
           SFString            *getSFEffectFile     (void);
#endif

           SFString            *editSFEffectString   (void);
     const SFString            *getSFEffectString   (void) const;
#ifndef OSG_2_PREP
           SFString            *getSFEffectString   (void);
#endif

           MFString            *editMFCompilerOptions(void);
     const MFString            *getMFCompilerOptions(void) const;
#ifndef OSG_2_PREP
           MFString            *getMFCompilerOptions(void);
#endif

           SFInt32             *editSFTechnique      (void);
     const SFInt32             *getSFTechnique      (void) const;
#ifndef OSG_2_PREP
           SFInt32             *getSFTechnique      (void);
#endif

           MFShaderParameterPtr *editMFParameters     (void);
     const MFShaderParameterPtr *getMFParameters     (void) const;
#ifndef OSG_2_PREP
           MFShaderParameterPtr *getMFParameters     (void);
#endif

           MFImagePtr          *editMFImages         (void);
     const MFImagePtr          *getMFImages         (void) const;
#ifndef OSG_2_PREP
           MFImagePtr          *getMFImages         (void);
#endif

           MFShaderParameterStringPtr *editMFVirtualIncludeFiles(void);
     const MFShaderParameterStringPtr *getMFVirtualIncludeFiles(void) const;
#ifndef OSG_2_PREP
           MFShaderParameterStringPtr *getMFVirtualIncludeFiles(void);
#endif


           std::string         &editEffectFile     (void);
     const std::string         &getEffectFile     (void) const;
#ifndef OSG_2_PREP
           std::string         &getEffectFile     (void);
#endif

           std::string         &editEffectString   (void);
     const std::string         &getEffectString   (void) const;
#ifndef OSG_2_PREP
           std::string         &getEffectString   (void);
#endif

           Int32               &editTechnique      (void);
     const Int32               &getTechnique      (void) const;
#ifndef OSG_2_PREP
           Int32               &getTechnique      (void);
#endif

           std::string         &editCompilerOptions(const UInt32 index);
     const std::string         &getCompilerOptions(const UInt32 index) const;
#ifndef OSG_2_PREP
           std::string         &getCompilerOptions(const UInt32 index);
           MFString            &getCompilerOptions(void);
     const MFString            &getCompilerOptions(void) const;
#endif

           ShaderParameterPtr  &editParameters     (const UInt32 index);
     const ShaderParameterPtr  &getParameters     (const UInt32 index) const;
#ifndef OSG_2_PREP
           ShaderParameterPtr  &getParameters     (const UInt32 index);
           MFShaderParameterPtr &getParameters     (void);
     const MFShaderParameterPtr &getParameters     (void) const;
#endif

           ImagePtr            &editImages         (const UInt32 index);
     const ImagePtr            &getImages         (const UInt32 index) const;
#ifndef OSG_2_PREP
           ImagePtr            &getImages         (const UInt32 index);
           MFImagePtr          &getImages         (void);
     const MFImagePtr          &getImages         (void) const;
#endif

           ShaderParameterStringPtr &editVirtualIncludeFiles(const UInt32 index);
     const ShaderParameterStringPtr &getVirtualIncludeFiles(const UInt32 index) const;
#ifndef OSG_2_PREP
           ShaderParameterStringPtr &getVirtualIncludeFiles(const UInt32 index);
           MFShaderParameterStringPtr &getVirtualIncludeFiles(void);
     const MFShaderParameterStringPtr &getVirtualIncludeFiles(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setEffectFile     ( const std::string &value );
     void setEffectString   ( const std::string &value );
     void setTechnique      ( const Int32 &value );

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

    static  CGFXMaterialPtr      create          (void); 
    static  CGFXMaterialPtr      createEmpty     (void); 

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

    SFString            _sfEffectFile;
    SFString            _sfEffectString;
    MFString            _mfCompilerOptions;
    SFInt32             _sfTechnique;
    MFShaderParameterPtr   _mfParameters;
    MFImagePtr          _mfImages;
    MFShaderParameterStringPtr   _mfVirtualIncludeFiles;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CGFXMaterialBase(void);
    CGFXMaterialBase(const CGFXMaterialBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CGFXMaterialBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      CGFXMaterialBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      CGFXMaterialBase *pOther,
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
    void operator =(const CGFXMaterialBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef CGFXMaterialBase *CGFXMaterialBaseP;

typedef osgIF<CGFXMaterialBase::isNodeCore,
              CoredNodePtr<CGFXMaterial>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet CGFXMaterialNodePtr;

typedef RefPtr<CGFXMaterialPtr> CGFXMaterialRefPtr;

OSG_END_NAMESPACE

#define OSGCGFXMATERIALBASE_HEADER_CVSID "@(#)$Id: OSGCGFXMaterialBase.h,v 1.7 2008/11/24 16:05:59 macnihilist Exp $"

#endif /* _OSGCGFXMATERIALBASE_H_ */
