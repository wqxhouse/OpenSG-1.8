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
 **     class ShaderParameter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGShaderParameterBase.h"
#include "OSGShaderParameter.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ShaderParameterBase::NameFieldMask = 
    (TypeTraits<BitVector>::One << ShaderParameterBase::NameFieldId);

const OSG::BitVector ShaderParameterBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var std::string     ShaderParameterBase::_sfName
    parameter name
*/

//! ShaderParameter description

FieldDescription *ShaderParameterBase::_desc[] = 
{
    new FieldDescription(SFString::getClassType(), 
                     "name", 
                     NameFieldId, NameFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ShaderParameterBase::editSFName))
};


FieldContainerType ShaderParameterBase::_type(
    "ShaderParameter",
    "AttachmentContainer",
    NULL,
    NULL, 
    ShaderParameter::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ShaderParameterBase, ShaderParameterPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ShaderParameterBase::getType(void) const 
{
    return _type;
} 


UInt32 ShaderParameterBase::getContainerSize(void) const 
{ 
    return sizeof(ShaderParameter); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<ShaderParameterBase *>(&other),
                          whichField);
}
#else
void ShaderParameterBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ShaderParameterBase *) &other, whichField, sInfo);
}
void ShaderParameterBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ShaderParameterBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ShaderParameterBase::ShaderParameterBase(void) :
    _sfName                   (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ShaderParameterBase::ShaderParameterBase(const ShaderParameterBase &source) :
    _sfName                   (source._sfName                   ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ShaderParameterBase::~ShaderParameterBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }


    return returnValue;
}

void ShaderParameterBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }


}

void ShaderParameterBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterBase::executeSyncImpl(      ShaderParameterBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
        _sfName.syncWith(pOther->_sfName);


}
#else
void ShaderParameterBase::executeSyncImpl(      ShaderParameterBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (NameFieldMask & whichField))
        _sfName.syncWith(pOther->_sfName);



}

void ShaderParameterBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ShaderParameterPtr>::_type("ShaderParameterPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ShaderParameterPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ShaderParameterPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGShaderParameterBase.cpp,v 1.12 2008/06/09 12:28:05 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGSHADERPARAMETERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSHADERPARAMETERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSHADERPARAMETERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

