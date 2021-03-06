/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsHingeJointBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsHingeJointBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsHingeJointPtr PhysicsHingeJointBase::create(void) 
{
    PhysicsHingeJointPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsHingeJointPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsHingeJointPtr PhysicsHingeJointBase::createEmpty(void) 
{ 
    PhysicsHingeJointPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsHingeJoint::_sfAnchor field.
inline
const SFVec3f *PhysicsHingeJointBase::getSFAnchor(void) const
{
    return &_sfAnchor;
}

//! Get the PhysicsHingeJoint::_sfAnchor field.
inline
SFVec3f *PhysicsHingeJointBase::editSFAnchor(void)
{
    return &_sfAnchor;
}

#ifndef OSG_2_PREP
//! Get the PhysicsHingeJoint::_sfAnchor field.
inline
SFVec3f *PhysicsHingeJointBase::getSFAnchor(void)
{
    return &_sfAnchor;
}
#endif

//! Get the PhysicsHingeJoint::_sfAxis field.
inline
const SFVec3f *PhysicsHingeJointBase::getSFAxis(void) const
{
    return &_sfAxis;
}

//! Get the PhysicsHingeJoint::_sfAxis field.
inline
SFVec3f *PhysicsHingeJointBase::editSFAxis(void)
{
    return &_sfAxis;
}

#ifndef OSG_2_PREP
//! Get the PhysicsHingeJoint::_sfAxis field.
inline
SFVec3f *PhysicsHingeJointBase::getSFAxis(void)
{
    return &_sfAxis;
}
#endif


//! Get the value of the PhysicsHingeJoint::_sfAnchor field.
inline
Vec3f &PhysicsHingeJointBase::editAnchor(void)
{
    return _sfAnchor.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfAnchor field.
inline
const Vec3f &PhysicsHingeJointBase::getAnchor(void) const
{
    return _sfAnchor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsHingeJoint::_sfAnchor field.
inline
Vec3f &PhysicsHingeJointBase::getAnchor(void)
{
    return _sfAnchor.getValue();
}
#endif

//! Set the value of the PhysicsHingeJoint::_sfAnchor field.
inline
void PhysicsHingeJointBase::setAnchor(const Vec3f &value)
{
    _sfAnchor.setValue(value);
}

//! Get the value of the PhysicsHingeJoint::_sfAxis field.
inline
Vec3f &PhysicsHingeJointBase::editAxis(void)
{
    return _sfAxis.getValue();
}

//! Get the value of the PhysicsHingeJoint::_sfAxis field.
inline
const Vec3f &PhysicsHingeJointBase::getAxis(void) const
{
    return _sfAxis.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsHingeJoint::_sfAxis field.
inline
Vec3f &PhysicsHingeJointBase::getAxis(void)
{
    return _sfAxis.getValue();
}
#endif

//! Set the value of the PhysicsHingeJoint::_sfAxis field.
inline
void PhysicsHingeJointBase::setAxis(const Vec3f &value)
{
    _sfAxis.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPHYSICSHINGEJOINTBASE_INLINE_CVSID "@(#)$Id: OSGPhysicsHingeJointBase.inl,v 1.5 2008/06/09 12:28:02 vossg Exp $"

