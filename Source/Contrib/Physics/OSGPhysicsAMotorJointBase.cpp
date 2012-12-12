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
 **     class PhysicsAMotorJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSAMOTORJOINTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPhysicsAMotorJointBase.h"
#include "OSGPhysicsAMotorJoint.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  PhysicsAMotorJointBase::ModeFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsAMotorJointBase::ModeFieldId);

const OSG::BitVector  PhysicsAMotorJointBase::NumAxesFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsAMotorJointBase::NumAxesFieldId);

const OSG::BitVector PhysicsAMotorJointBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Int32           PhysicsAMotorJointBase::_sfMode
    
*/
/*! \var Int32           PhysicsAMotorJointBase::_sfNumAxes
    
*/

//! PhysicsAMotorJoint description

FieldDescription *PhysicsAMotorJointBase::_desc[] = 
{
    new FieldDescription(SFInt32::getClassType(), 
                     "mode", 
                     ModeFieldId, ModeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsAMotorJointBase::editSFMode)),
    new FieldDescription(SFInt32::getClassType(), 
                     "numAxes", 
                     NumAxesFieldId, NumAxesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsAMotorJointBase::editSFNumAxes))
};


FieldContainerType PhysicsAMotorJointBase::_type(
    "PhysicsAMotorJoint",
    "PhysicsJoint",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&PhysicsAMotorJointBase::createEmpty),
    PhysicsAMotorJoint::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsAMotorJointBase, PhysicsAMotorJointPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsAMotorJointBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsAMotorJointBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsAMotorJointBase::shallowCopy(void) const 
{ 
    PhysicsAMotorJointPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsAMotorJoint *>(this)); 

    return returnValue; 
}

UInt32 PhysicsAMotorJointBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsAMotorJoint); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsAMotorJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<PhysicsAMotorJointBase *>(&other),
                          whichField);
}
#else
void PhysicsAMotorJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsAMotorJointBase *) &other, whichField, sInfo);
}
void PhysicsAMotorJointBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsAMotorJointBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsAMotorJointBase::PhysicsAMotorJointBase(void) :
    _sfMode                   (), 
    _sfNumAxes                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsAMotorJointBase::PhysicsAMotorJointBase(const PhysicsAMotorJointBase &source) :
    _sfMode                   (source._sfMode                   ), 
    _sfNumAxes                (source._sfNumAxes                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsAMotorJointBase::~PhysicsAMotorJointBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsAMotorJointBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        returnValue += _sfMode.getBinSize();
    }

    if(FieldBits::NoField != (NumAxesFieldMask & whichField))
    {
        returnValue += _sfNumAxes.getBinSize();
    }


    return returnValue;
}

void PhysicsAMotorJointBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NumAxesFieldMask & whichField))
    {
        _sfNumAxes.copyToBin(pMem);
    }


}

void PhysicsAMotorJointBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NumAxesFieldMask & whichField))
    {
        _sfNumAxes.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsAMotorJointBase::executeSyncImpl(      PhysicsAMotorJointBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pOther->_sfMode);

    if(FieldBits::NoField != (NumAxesFieldMask & whichField))
        _sfNumAxes.syncWith(pOther->_sfNumAxes);


}
#else
void PhysicsAMotorJointBase::executeSyncImpl(      PhysicsAMotorJointBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pOther->_sfMode);

    if(FieldBits::NoField != (NumAxesFieldMask & whichField))
        _sfNumAxes.syncWith(pOther->_sfNumAxes);



}

void PhysicsAMotorJointBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PhysicsAMotorJointPtr>::_type("PhysicsAMotorJointPtr", "PhysicsJointPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsAMotorJointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsAMotorJointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGPhysicsAMotorJointBase.cpp,v 1.5 2008/06/09 12:28:02 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPHYSICSAMOTORJOINTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHYSICSAMOTORJOINTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHYSICSAMOTORJOINTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

