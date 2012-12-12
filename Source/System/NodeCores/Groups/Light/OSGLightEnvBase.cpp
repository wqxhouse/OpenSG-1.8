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
 **     class LightEnv!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELIGHTENVINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGLightEnvBase.h"
#include "OSGLightEnv.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector LightEnvBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType LightEnvBase::_type(
    "LightEnv",
    "NodeCore",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&LightEnvBase::createEmpty),
    LightEnv::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(LightEnvBase, LightEnvPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &LightEnvBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &LightEnvBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr LightEnvBase::shallowCopy(void) const 
{ 
    LightEnvPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const LightEnv *>(this)); 

    return returnValue; 
}

UInt32 LightEnvBase::getContainerSize(void) const 
{ 
    return sizeof(LightEnv); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void LightEnvBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<LightEnvBase *>(&other),
                          whichField);
}
#else
void LightEnvBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((LightEnvBase *) &other, whichField, sInfo);
}
void LightEnvBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void LightEnvBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

LightEnvBase::LightEnvBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

LightEnvBase::LightEnvBase(const LightEnvBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

LightEnvBase::~LightEnvBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 LightEnvBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void LightEnvBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void LightEnvBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void LightEnvBase::executeSyncImpl(      LightEnvBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void LightEnvBase::executeSyncImpl(      LightEnvBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void LightEnvBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<LightEnvPtr>::_type("LightEnvPtr", "NodeCorePtr");
#endif



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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGLightEnvBase.cpp,v 1.9 2008/06/09 12:28:19 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGLIGHTENVBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGLIGHTENVBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGLIGHTENVFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

