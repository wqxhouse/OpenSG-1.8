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
 **     class TexGenChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXGENCHUNKBASE_H_
#define _OSGTEXGENCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGStateChunk.h> // Parent

#include <OSGGLenumFields.h> // GenFuncS type
#include <OSGGLenumFields.h> // GenFuncT type
#include <OSGGLenumFields.h> // GenFuncR type
#include <OSGGLenumFields.h> // GenFuncQ type
#include <OSGVec4fFields.h> // GenFuncSPlane type
#include <OSGVec4fFields.h> // GenFuncTPlane type
#include <OSGVec4fFields.h> // GenFuncRPlane type
#include <OSGVec4fFields.h> // GenFuncQPlane type
#include <OSGNodeFields.h> // SBeacon type
#include <OSGNodeFields.h> // TBeacon type
#include <OSGNodeFields.h> // RBeacon type
#include <OSGNodeFields.h> // QBeacon type

#include <OSGTexGenChunkFields.h>

OSG_BEGIN_NAMESPACE

class TexGenChunk;
class BinaryDataHandler;

//! \brief TexGenChunk Base Class.

class OSG_SYSTEMLIB_DLLMAPPING TexGenChunkBase : public StateChunk
{
  private:

    typedef StateChunk    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TexGenChunkPtr  Ptr;

    enum
    {
        GenFuncSFieldId      = Inherited::NextFieldId,
        GenFuncTFieldId      = GenFuncSFieldId      + 1,
        GenFuncRFieldId      = GenFuncTFieldId      + 1,
        GenFuncQFieldId      = GenFuncRFieldId      + 1,
        GenFuncSPlaneFieldId = GenFuncQFieldId      + 1,
        GenFuncTPlaneFieldId = GenFuncSPlaneFieldId + 1,
        GenFuncRPlaneFieldId = GenFuncTPlaneFieldId + 1,
        GenFuncQPlaneFieldId = GenFuncRPlaneFieldId + 1,
        SBeaconFieldId       = GenFuncQPlaneFieldId + 1,
        TBeaconFieldId       = SBeaconFieldId       + 1,
        RBeaconFieldId       = TBeaconFieldId       + 1,
        QBeaconFieldId       = RBeaconFieldId       + 1,
        NextFieldId          = QBeaconFieldId       + 1
    };

    static const OSG::BitVector GenFuncSFieldMask;
    static const OSG::BitVector GenFuncTFieldMask;
    static const OSG::BitVector GenFuncRFieldMask;
    static const OSG::BitVector GenFuncQFieldMask;
    static const OSG::BitVector GenFuncSPlaneFieldMask;
    static const OSG::BitVector GenFuncTPlaneFieldMask;
    static const OSG::BitVector GenFuncRPlaneFieldMask;
    static const OSG::BitVector GenFuncQPlaneFieldMask;
    static const OSG::BitVector SBeaconFieldMask;
    static const OSG::BitVector TBeaconFieldMask;
    static const OSG::BitVector RBeaconFieldMask;
    static const OSG::BitVector QBeaconFieldMask;


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


           SFGLenum            *editSFGenFuncS       (void);
     const SFGLenum            *getSFGenFuncS       (void) const;
#ifndef OSG_2_PREP
           SFGLenum            *getSFGenFuncS       (void);
#endif

           SFGLenum            *editSFGenFuncT       (void);
     const SFGLenum            *getSFGenFuncT       (void) const;
#ifndef OSG_2_PREP
           SFGLenum            *getSFGenFuncT       (void);
#endif

           SFGLenum            *editSFGenFuncR       (void);
     const SFGLenum            *getSFGenFuncR       (void) const;
#ifndef OSG_2_PREP
           SFGLenum            *getSFGenFuncR       (void);
#endif

           SFGLenum            *editSFGenFuncQ       (void);
     const SFGLenum            *getSFGenFuncQ       (void) const;
#ifndef OSG_2_PREP
           SFGLenum            *getSFGenFuncQ       (void);
#endif

           SFVec4f             *editSFGenFuncSPlane  (void);
     const SFVec4f             *getSFGenFuncSPlane  (void) const;
#ifndef OSG_2_PREP
           SFVec4f             *getSFGenFuncSPlane  (void);
#endif

           SFVec4f             *editSFGenFuncTPlane  (void);
     const SFVec4f             *getSFGenFuncTPlane  (void) const;
#ifndef OSG_2_PREP
           SFVec4f             *getSFGenFuncTPlane  (void);
#endif

           SFVec4f             *editSFGenFuncRPlane  (void);
     const SFVec4f             *getSFGenFuncRPlane  (void) const;
#ifndef OSG_2_PREP
           SFVec4f             *getSFGenFuncRPlane  (void);
#endif

           SFVec4f             *editSFGenFuncQPlane  (void);
     const SFVec4f             *getSFGenFuncQPlane  (void) const;
#ifndef OSG_2_PREP
           SFVec4f             *getSFGenFuncQPlane  (void);
#endif

           SFNodePtr           *editSFSBeacon        (void);
     const SFNodePtr           *getSFSBeacon        (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFSBeacon        (void);
#endif

           SFNodePtr           *editSFTBeacon        (void);
     const SFNodePtr           *getSFTBeacon        (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFTBeacon        (void);
#endif

           SFNodePtr           *editSFRBeacon        (void);
     const SFNodePtr           *getSFRBeacon        (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFRBeacon        (void);
#endif

           SFNodePtr           *editSFQBeacon        (void);
     const SFNodePtr           *getSFQBeacon        (void) const;
#ifndef OSG_2_PREP
           SFNodePtr           *getSFQBeacon        (void);
#endif


           GLenum              &editGenFuncS       (void);
     const GLenum              &getGenFuncS       (void) const;
#ifndef OSG_2_PREP
           GLenum              &getGenFuncS       (void);
#endif

           GLenum              &editGenFuncT       (void);
     const GLenum              &getGenFuncT       (void) const;
#ifndef OSG_2_PREP
           GLenum              &getGenFuncT       (void);
#endif

           GLenum              &editGenFuncR       (void);
     const GLenum              &getGenFuncR       (void) const;
#ifndef OSG_2_PREP
           GLenum              &getGenFuncR       (void);
#endif

           GLenum              &editGenFuncQ       (void);
     const GLenum              &getGenFuncQ       (void) const;
#ifndef OSG_2_PREP
           GLenum              &getGenFuncQ       (void);
#endif

           Vec4f               &editGenFuncSPlane  (void);
     const Vec4f               &getGenFuncSPlane  (void) const;
#ifndef OSG_2_PREP
           Vec4f               &getGenFuncSPlane  (void);
#endif

           Vec4f               &editGenFuncTPlane  (void);
     const Vec4f               &getGenFuncTPlane  (void) const;
#ifndef OSG_2_PREP
           Vec4f               &getGenFuncTPlane  (void);
#endif

           Vec4f               &editGenFuncRPlane  (void);
     const Vec4f               &getGenFuncRPlane  (void) const;
#ifndef OSG_2_PREP
           Vec4f               &getGenFuncRPlane  (void);
#endif

           Vec4f               &editGenFuncQPlane  (void);
     const Vec4f               &getGenFuncQPlane  (void) const;
#ifndef OSG_2_PREP
           Vec4f               &getGenFuncQPlane  (void);
#endif

           NodePtr             &editSBeacon        (void);
     const NodePtr             &getSBeacon        (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getSBeacon        (void);
#endif

           NodePtr             &editTBeacon        (void);
     const NodePtr             &getTBeacon        (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getTBeacon        (void);
#endif

           NodePtr             &editRBeacon        (void);
     const NodePtr             &getRBeacon        (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getRBeacon        (void);
#endif

           NodePtr             &editQBeacon        (void);
     const NodePtr             &getQBeacon        (void) const;
#ifndef OSG_2_PREP
           NodePtr             &getQBeacon        (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setGenFuncS       ( const GLenum &value );
     void setGenFuncT       ( const GLenum &value );
     void setGenFuncR       ( const GLenum &value );
     void setGenFuncQ       ( const GLenum &value );
     void setGenFuncSPlane  ( const Vec4f &value );
     void setGenFuncTPlane  ( const Vec4f &value );
     void setGenFuncRPlane  ( const Vec4f &value );
     void setGenFuncQPlane  ( const Vec4f &value );
     void setSBeacon        ( const NodePtr &value );
     void setTBeacon        ( const NodePtr &value );
     void setRBeacon        ( const NodePtr &value );
     void setQBeacon        ( const NodePtr &value );

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

    static  TexGenChunkPtr      create          (void); 
    static  TexGenChunkPtr      createEmpty     (void); 

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

    SFGLenum            _sfGenFuncS;
    SFGLenum            _sfGenFuncT;
    SFGLenum            _sfGenFuncR;
    SFGLenum            _sfGenFuncQ;
    SFVec4f             _sfGenFuncSPlane;
    SFVec4f             _sfGenFuncTPlane;
    SFVec4f             _sfGenFuncRPlane;
    SFVec4f             _sfGenFuncQPlane;
    SFNodePtr           _sfSBeacon;
    SFNodePtr           _sfTBeacon;
    SFNodePtr           _sfRBeacon;
    SFNodePtr           _sfQBeacon;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TexGenChunkBase(void);
    TexGenChunkBase(const TexGenChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TexGenChunkBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TexGenChunkBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TexGenChunkBase *pOther,
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
    void operator =(const TexGenChunkBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TexGenChunkBase *TexGenChunkBaseP;

typedef osgIF<TexGenChunkBase::isNodeCore,
              CoredNodePtr<TexGenChunk>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TexGenChunkNodePtr;

typedef RefPtr<TexGenChunkPtr> TexGenChunkRefPtr;

OSG_END_NAMESPACE

#define OSGTEXGENCHUNKBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGTEXGENCHUNKBASE_H_ */