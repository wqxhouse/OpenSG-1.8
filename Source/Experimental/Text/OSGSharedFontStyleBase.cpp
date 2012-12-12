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
 **     class SharedFontStyle!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHAREDFONTSTYLEINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSharedFontStyleBase.h"
#include "OSGSharedFontStyle.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SharedFontStyleBase::ContainedFontStyleFieldMask = 
    (TypeTraits<BitVector>::One << SharedFontStyleBase::ContainedFontStyleFieldId);

const OSG::BitVector SharedFontStyleBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var FontStyleP      SharedFontStyleBase::_sfContainedFontStyle
    
*/

//! SharedFontStyle description

FieldDescription *SharedFontStyleBase::_desc[] = 
{
    new FieldDescription(SFFontStyleP::getClassType(), 
                     "ContainedFontStyle", 
                     ContainedFontStyleFieldId, ContainedFontStyleFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&SharedFontStyleBase::editSFContainedFontStyle))
};


FieldContainerType SharedFontStyleBase::_type(
    "SharedFontStyle",
    "FieldContainer",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&SharedFontStyleBase::createEmpty),
    SharedFontStyle::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SharedFontStyleBase, SharedFontStylePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SharedFontStyleBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SharedFontStyleBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SharedFontStyleBase::shallowCopy(void) const 
{ 
    SharedFontStylePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SharedFontStyle *>(this)); 

    return returnValue; 
}

UInt32 SharedFontStyleBase::getContainerSize(void) const 
{ 
    return sizeof(SharedFontStyle); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SharedFontStyleBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<SharedFontStyleBase *>(&other),
                          whichField);
}
#else
void SharedFontStyleBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SharedFontStyleBase *) &other, whichField, sInfo);
}
void SharedFontStyleBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SharedFontStyleBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SharedFontStyleBase::SharedFontStyleBase(void) :
    _sfContainedFontStyle     (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SharedFontStyleBase::SharedFontStyleBase(const SharedFontStyleBase &source) :
    _sfContainedFontStyle     (source._sfContainedFontStyle     ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SharedFontStyleBase::~SharedFontStyleBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SharedFontStyleBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ContainedFontStyleFieldMask & whichField))
    {
        returnValue += _sfContainedFontStyle.getBinSize();
    }


    return returnValue;
}

void SharedFontStyleBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ContainedFontStyleFieldMask & whichField))
    {
        _sfContainedFontStyle.copyToBin(pMem);
    }


}

void SharedFontStyleBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ContainedFontStyleFieldMask & whichField))
    {
        _sfContainedFontStyle.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SharedFontStyleBase::executeSyncImpl(      SharedFontStyleBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ContainedFontStyleFieldMask & whichField))
        _sfContainedFontStyle.syncWith(pOther->_sfContainedFontStyle);


}
#else
void SharedFontStyleBase::executeSyncImpl(      SharedFontStyleBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ContainedFontStyleFieldMask & whichField))
        _sfContainedFontStyle.syncWith(pOther->_sfContainedFontStyle);



}

void SharedFontStyleBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<SharedFontStylePtr>::_type("SharedFontStylePtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SharedFontStylePtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGSHAREDFONTSTYLEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSHAREDFONTSTYLEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSHAREDFONTSTYLEFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

