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
 **     class ShaderParameterMVec3f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERMVEC3FINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGShaderParameterMVec3fBase.h"
#include "OSGShaderParameterMVec3f.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ShaderParameterMVec3fBase::ValueFieldMask = 
    (TypeTraits<BitVector>::One << ShaderParameterMVec3fBase::ValueFieldId);

const OSG::BitVector ShaderParameterMVec3fBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec3f           ShaderParameterMVec3fBase::_mfValue
    parameter value
*/

//! ShaderParameterMVec3f description

FieldDescription *ShaderParameterMVec3fBase::_desc[] = 
{
    new FieldDescription(MFVec3f::getClassType(), 
                     "value", 
                     ValueFieldId, ValueFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ShaderParameterMVec3fBase::editMFValue))
};


FieldContainerType ShaderParameterMVec3fBase::_type(
    "ShaderParameterMVec3f",
    "ShaderParameter",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&ShaderParameterMVec3fBase::createEmpty),
    ShaderParameterMVec3f::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ShaderParameterMVec3fBase, ShaderParameterMVec3fPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterMVec3fBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ShaderParameterMVec3fBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ShaderParameterMVec3fBase::shallowCopy(void) const 
{ 
    ShaderParameterMVec3fPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ShaderParameterMVec3f *>(this)); 

    return returnValue; 
}

UInt32 ShaderParameterMVec3fBase::getContainerSize(void) const 
{ 
    return sizeof(ShaderParameterMVec3f); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterMVec3fBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<ShaderParameterMVec3fBase *>(&other),
                          whichField);
}
#else
void ShaderParameterMVec3fBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ShaderParameterMVec3fBase *) &other, whichField, sInfo);
}
void ShaderParameterMVec3fBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ShaderParameterMVec3fBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfValue.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ShaderParameterMVec3fBase::ShaderParameterMVec3fBase(void) :
    _mfValue                  (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ShaderParameterMVec3fBase::ShaderParameterMVec3fBase(const ShaderParameterMVec3fBase &source) :
    _mfValue                  (source._mfValue                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ShaderParameterMVec3fBase::~ShaderParameterMVec3fBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterMVec3fBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }


    return returnValue;
}

void ShaderParameterMVec3fBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }


}

void ShaderParameterMVec3fBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterMVec3fBase::executeSyncImpl(      ShaderParameterMVec3fBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.syncWith(pOther->_mfValue);


}
#else
void ShaderParameterMVec3fBase::executeSyncImpl(      ShaderParameterMVec3fBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.syncWith(pOther->_mfValue, sInfo);


}

void ShaderParameterMVec3fBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ShaderParameterMVec3fPtr>::_type("ShaderParameterMVec3fPtr", "ShaderParameterPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ShaderParameterMVec3fPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ShaderParameterMVec3fPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGShaderParameterMVec3fBase.cpp,v 1.4 2008/06/09 12:28:05 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGSHADERPARAMETERMVEC3FBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSHADERPARAMETERMVEC3FBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSHADERPARAMETERMVEC3FFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

