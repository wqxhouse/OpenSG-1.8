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
 **     class MultiSwitch!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMULTISWITCHINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGMultiSwitchBase.h"
#include "OSGMultiSwitch.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  MultiSwitchBase::ChoicesFieldMask = 
    (TypeTraits<BitVector>::One << MultiSwitchBase::ChoicesFieldId);

const OSG::BitVector  MultiSwitchBase::SwitchModeFieldMask = 
    (TypeTraits<BitVector>::One << MultiSwitchBase::SwitchModeFieldId);

const OSG::BitVector MultiSwitchBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt32          MultiSwitchBase::_mfChoices
    Indices of children to be included in CHOICES mode. The indices are kept      sorted and any duplicates are removed.
*/
/*! \var Int32           MultiSwitchBase::_sfSwitchMode
    Mode of operation.
*/

//! MultiSwitch description

FieldDescription *MultiSwitchBase::_desc[] = 
{
    new FieldDescription(MFUInt32::getClassType(), 
                     "choices", 
                     ChoicesFieldId, ChoicesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&MultiSwitchBase::editMFChoices)),
    new FieldDescription(SFInt32::getClassType(), 
                     "switchMode", 
                     SwitchModeFieldId, SwitchModeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&MultiSwitchBase::editSFSwitchMode))
};


FieldContainerType MultiSwitchBase::_type(
    "MultiSwitch",
    "Group",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&MultiSwitchBase::createEmpty),
    MultiSwitch::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(MultiSwitchBase, MultiSwitchPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiSwitchBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &MultiSwitchBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr MultiSwitchBase::shallowCopy(void) const 
{ 
    MultiSwitchPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const MultiSwitch *>(this)); 

    return returnValue; 
}

UInt32 MultiSwitchBase::getContainerSize(void) const 
{ 
    return sizeof(MultiSwitch); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void MultiSwitchBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<MultiSwitchBase *>(&other),
                          whichField);
}
#else
void MultiSwitchBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((MultiSwitchBase *) &other, whichField, sInfo);
}
void MultiSwitchBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MultiSwitchBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfChoices.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

MultiSwitchBase::MultiSwitchBase(void) :
    _mfChoices                (), 
    _sfSwitchMode             (Int32(-1)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

MultiSwitchBase::MultiSwitchBase(const MultiSwitchBase &source) :
    _mfChoices                (source._mfChoices                ), 
    _sfSwitchMode             (source._sfSwitchMode             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

MultiSwitchBase::~MultiSwitchBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 MultiSwitchBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChoicesFieldMask & whichField))
    {
        returnValue += _mfChoices.getBinSize();
    }

    if(FieldBits::NoField != (SwitchModeFieldMask & whichField))
    {
        returnValue += _sfSwitchMode.getBinSize();
    }


    return returnValue;
}

void MultiSwitchBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChoicesFieldMask & whichField))
    {
        _mfChoices.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SwitchModeFieldMask & whichField))
    {
        _sfSwitchMode.copyToBin(pMem);
    }


}

void MultiSwitchBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChoicesFieldMask & whichField))
    {
        _mfChoices.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SwitchModeFieldMask & whichField))
    {
        _sfSwitchMode.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MultiSwitchBase::executeSyncImpl(      MultiSwitchBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ChoicesFieldMask & whichField))
        _mfChoices.syncWith(pOther->_mfChoices);

    if(FieldBits::NoField != (SwitchModeFieldMask & whichField))
        _sfSwitchMode.syncWith(pOther->_sfSwitchMode);


}
#else
void MultiSwitchBase::executeSyncImpl(      MultiSwitchBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SwitchModeFieldMask & whichField))
        _sfSwitchMode.syncWith(pOther->_sfSwitchMode);


    if(FieldBits::NoField != (ChoicesFieldMask & whichField))
        _mfChoices.syncWith(pOther->_mfChoices, sInfo);


}

void MultiSwitchBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ChoicesFieldMask & whichField))
        _mfChoices.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<MultiSwitchPtr>::_type("MultiSwitchPtr", "GroupPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(MultiSwitchPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(MultiSwitchPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGMultiSwitchBase.cpp,v 1.1 2008/08/19 15:25:08 neumannc Exp $";
    static Char8 cvsid_hpp       [] = OSGMULTISWITCHBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGMULTISWITCHBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGMULTISWITCHFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

