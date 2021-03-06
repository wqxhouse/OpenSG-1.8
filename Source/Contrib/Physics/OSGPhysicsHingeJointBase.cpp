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
 **     class PhysicsHingeJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSHINGEJOINTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPhysicsHingeJointBase.h"
#include "OSGPhysicsHingeJoint.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  PhysicsHingeJointBase::AnchorFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsHingeJointBase::AnchorFieldId);

const OSG::BitVector  PhysicsHingeJointBase::AxisFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsHingeJointBase::AxisFieldId);

const OSG::BitVector PhysicsHingeJointBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec3f           PhysicsHingeJointBase::_sfAnchor
    
*/
/*! \var Vec3f           PhysicsHingeJointBase::_sfAxis
    
*/

//! PhysicsHingeJoint description

FieldDescription *PhysicsHingeJointBase::_desc[] = 
{
    new FieldDescription(SFVec3f::getClassType(), 
                     "anchor", 
                     AnchorFieldId, AnchorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsHingeJointBase::editSFAnchor)),
    new FieldDescription(SFVec3f::getClassType(), 
                     "axis", 
                     AxisFieldId, AxisFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsHingeJointBase::editSFAxis))
};


FieldContainerType PhysicsHingeJointBase::_type(
    "PhysicsHingeJoint",
    "PhysicsJoint",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&PhysicsHingeJointBase::createEmpty),
    PhysicsHingeJoint::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsHingeJointBase, PhysicsHingeJointPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsHingeJointBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsHingeJointBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsHingeJointBase::shallowCopy(void) const 
{ 
    PhysicsHingeJointPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsHingeJoint *>(this)); 

    return returnValue; 
}

UInt32 PhysicsHingeJointBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsHingeJoint); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsHingeJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<PhysicsHingeJointBase *>(&other),
                          whichField);
}
#else
void PhysicsHingeJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsHingeJointBase *) &other, whichField, sInfo);
}
void PhysicsHingeJointBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsHingeJointBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsHingeJointBase::PhysicsHingeJointBase(void) :
    _sfAnchor                 (), 
    _sfAxis                   (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsHingeJointBase::PhysicsHingeJointBase(const PhysicsHingeJointBase &source) :
    _sfAnchor                 (source._sfAnchor                 ), 
    _sfAxis                   (source._sfAxis                   ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsHingeJointBase::~PhysicsHingeJointBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsHingeJointBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
    {
        returnValue += _sfAnchor.getBinSize();
    }

    if(FieldBits::NoField != (AxisFieldMask & whichField))
    {
        returnValue += _sfAxis.getBinSize();
    }


    return returnValue;
}

void PhysicsHingeJointBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
    {
        _sfAnchor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AxisFieldMask & whichField))
    {
        _sfAxis.copyToBin(pMem);
    }


}

void PhysicsHingeJointBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
    {
        _sfAnchor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AxisFieldMask & whichField))
    {
        _sfAxis.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsHingeJointBase::executeSyncImpl(      PhysicsHingeJointBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
        _sfAnchor.syncWith(pOther->_sfAnchor);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
        _sfAxis.syncWith(pOther->_sfAxis);


}
#else
void PhysicsHingeJointBase::executeSyncImpl(      PhysicsHingeJointBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
        _sfAnchor.syncWith(pOther->_sfAnchor);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
        _sfAxis.syncWith(pOther->_sfAxis);



}

void PhysicsHingeJointBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PhysicsHingeJointPtr>::_type("PhysicsHingeJointPtr", "PhysicsJointPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsHingeJointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsHingeJointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGPhysicsHingeJointBase.cpp,v 1.5 2008/06/09 12:28:02 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPHYSICSHINGEJOINTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHYSICSHINGEJOINTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHYSICSHINGEJOINTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

