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
 **     class ParallelComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPARALLELCOMPOSERINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGParallelComposerBase.h"
#include "OSGParallelComposer.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ParallelComposerBase::ShortFieldMask = 
    (TypeTraits<BitVector>::One << ParallelComposerBase::ShortFieldId);

const OSG::BitVector  ParallelComposerBase::AlphaFieldMask = 
    (TypeTraits<BitVector>::One << ParallelComposerBase::AlphaFieldId);

const OSG::BitVector  ParallelComposerBase::PcLibPathFieldMask = 
    (TypeTraits<BitVector>::One << ParallelComposerBase::PcLibPathFieldId);

const OSG::BitVector ParallelComposerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            ParallelComposerBase::_sfShort
    
*/
/*! \var bool            ParallelComposerBase::_sfAlpha
    
*/
/*! \var std::string     ParallelComposerBase::_sfPcLibPath
    
*/

//! ParallelComposer description

FieldDescription *ParallelComposerBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "short", 
                     ShortFieldId, ShortFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParallelComposerBase::editSFShort)),
    new FieldDescription(SFBool::getClassType(), 
                     "alpha", 
                     AlphaFieldId, AlphaFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParallelComposerBase::editSFAlpha)),
    new FieldDescription(SFString::getClassType(), 
                     "pcLibPath", 
                     PcLibPathFieldId, PcLibPathFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ParallelComposerBase::editSFPcLibPath))
};


FieldContainerType ParallelComposerBase::_type(
    "ParallelComposer",
    "ImageComposer",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&ParallelComposerBase::createEmpty),
    ParallelComposer::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ParallelComposerBase, ParallelComposerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ParallelComposerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ParallelComposerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ParallelComposerBase::shallowCopy(void) const 
{ 
    ParallelComposerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ParallelComposer *>(this)); 

    return returnValue; 
}

UInt32 ParallelComposerBase::getContainerSize(void) const 
{ 
    return sizeof(ParallelComposer); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ParallelComposerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<ParallelComposerBase *>(&other),
                          whichField);
}
#else
void ParallelComposerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ParallelComposerBase *) &other, whichField, sInfo);
}
void ParallelComposerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ParallelComposerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ParallelComposerBase::ParallelComposerBase(void) :
    _sfShort                  (bool(true)), 
    _sfAlpha                  (bool(false)), 
    _sfPcLibPath              (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ParallelComposerBase::ParallelComposerBase(const ParallelComposerBase &source) :
    _sfShort                  (source._sfShort                  ), 
    _sfAlpha                  (source._sfAlpha                  ), 
    _sfPcLibPath              (source._sfPcLibPath              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ParallelComposerBase::~ParallelComposerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ParallelComposerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        returnValue += _sfShort.getBinSize();
    }

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }

    if(FieldBits::NoField != (PcLibPathFieldMask & whichField))
    {
        returnValue += _sfPcLibPath.getBinSize();
    }


    return returnValue;
}

void ParallelComposerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PcLibPathFieldMask & whichField))
    {
        _sfPcLibPath.copyToBin(pMem);
    }


}

void ParallelComposerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PcLibPathFieldMask & whichField))
    {
        _sfPcLibPath.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ParallelComposerBase::executeSyncImpl(      ParallelComposerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
        _sfShort.syncWith(pOther->_sfShort);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pOther->_sfAlpha);

    if(FieldBits::NoField != (PcLibPathFieldMask & whichField))
        _sfPcLibPath.syncWith(pOther->_sfPcLibPath);


}
#else
void ParallelComposerBase::executeSyncImpl(      ParallelComposerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
        _sfShort.syncWith(pOther->_sfShort);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pOther->_sfAlpha);

    if(FieldBits::NoField != (PcLibPathFieldMask & whichField))
        _sfPcLibPath.syncWith(pOther->_sfPcLibPath);



}

void ParallelComposerBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ParallelComposerPtr>::_type("ParallelComposerPtr", "ImageComposerPtr");
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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGParallelComposerBase.cpp,v 1.4 2008/06/09 12:28:09 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPARALLELCOMPOSERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPARALLELCOMPOSERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPARALLELCOMPOSERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

