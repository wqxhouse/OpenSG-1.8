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
 **     class PassiveBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPASSIVEBACKGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPassiveBackgroundBase.h"
#include "OSGPassiveBackground.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector PassiveBackgroundBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType PassiveBackgroundBase::_type(
    "PassiveBackground",
    "Background",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&PassiveBackgroundBase::createEmpty),
    PassiveBackground::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(PassiveBackgroundBase, PassiveBackgroundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PassiveBackgroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PassiveBackgroundBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PassiveBackgroundBase::shallowCopy(void) const 
{ 
    PassiveBackgroundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PassiveBackground *>(this)); 

    return returnValue; 
}

UInt32 PassiveBackgroundBase::getContainerSize(void) const 
{ 
    return sizeof(PassiveBackground); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PassiveBackgroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<PassiveBackgroundBase *>(&other),
                          whichField);
}
#else
void PassiveBackgroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PassiveBackgroundBase *) &other, whichField, sInfo);
}
void PassiveBackgroundBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PassiveBackgroundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PassiveBackgroundBase::PassiveBackgroundBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PassiveBackgroundBase::PassiveBackgroundBase(const PassiveBackgroundBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PassiveBackgroundBase::~PassiveBackgroundBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PassiveBackgroundBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void PassiveBackgroundBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void PassiveBackgroundBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PassiveBackgroundBase::executeSyncImpl(      PassiveBackgroundBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void PassiveBackgroundBase::executeSyncImpl(      PassiveBackgroundBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void PassiveBackgroundBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PassiveBackgroundPtr>::_type("PassiveBackgroundPtr", "BackgroundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PassiveBackgroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.49 2008/06/09 07:30:44 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPASSIVEBACKGROUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPASSIVEBACKGROUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPASSIVEBACKGROUNDFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

