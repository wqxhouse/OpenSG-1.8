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
 **     class ComponentTransform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ComponentTransformBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ComponentTransformBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ComponentTransformPtr ComponentTransformBase::create(void) 
{
    ComponentTransformPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ComponentTransformPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ComponentTransformPtr ComponentTransformBase::createEmpty(void) 
{ 
    ComponentTransformPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ComponentTransform::_sfCenter field.
inline
const SFVec3f *ComponentTransformBase::getSFCenter(void) const
{
    return &_sfCenter;
}

//! Get the ComponentTransform::_sfCenter field.
inline
SFVec3f *ComponentTransformBase::editSFCenter(void)
{
    return &_sfCenter;
}

#ifndef OSG_2_PREP
//! Get the ComponentTransform::_sfCenter field.
inline
SFVec3f *ComponentTransformBase::getSFCenter(void)
{
    return &_sfCenter;
}
#endif

//! Get the ComponentTransform::_sfRotation field.
inline
const SFQuaternion *ComponentTransformBase::getSFRotation(void) const
{
    return &_sfRotation;
}

//! Get the ComponentTransform::_sfRotation field.
inline
SFQuaternion *ComponentTransformBase::editSFRotation(void)
{
    return &_sfRotation;
}

#ifndef OSG_2_PREP
//! Get the ComponentTransform::_sfRotation field.
inline
SFQuaternion *ComponentTransformBase::getSFRotation(void)
{
    return &_sfRotation;
}
#endif

//! Get the ComponentTransform::_sfScale field.
inline
const SFVec3f *ComponentTransformBase::getSFScale(void) const
{
    return &_sfScale;
}

//! Get the ComponentTransform::_sfScale field.
inline
SFVec3f *ComponentTransformBase::editSFScale(void)
{
    return &_sfScale;
}

#ifndef OSG_2_PREP
//! Get the ComponentTransform::_sfScale field.
inline
SFVec3f *ComponentTransformBase::getSFScale(void)
{
    return &_sfScale;
}
#endif

//! Get the ComponentTransform::_sfScaleOrientation field.
inline
const SFQuaternion *ComponentTransformBase::getSFScaleOrientation(void) const
{
    return &_sfScaleOrientation;
}

//! Get the ComponentTransform::_sfScaleOrientation field.
inline
SFQuaternion *ComponentTransformBase::editSFScaleOrientation(void)
{
    return &_sfScaleOrientation;
}

#ifndef OSG_2_PREP
//! Get the ComponentTransform::_sfScaleOrientation field.
inline
SFQuaternion *ComponentTransformBase::getSFScaleOrientation(void)
{
    return &_sfScaleOrientation;
}
#endif

//! Get the ComponentTransform::_sfTranslation field.
inline
const SFVec3f *ComponentTransformBase::getSFTranslation(void) const
{
    return &_sfTranslation;
}

//! Get the ComponentTransform::_sfTranslation field.
inline
SFVec3f *ComponentTransformBase::editSFTranslation(void)
{
    return &_sfTranslation;
}

#ifndef OSG_2_PREP
//! Get the ComponentTransform::_sfTranslation field.
inline
SFVec3f *ComponentTransformBase::getSFTranslation(void)
{
    return &_sfTranslation;
}
#endif


//! Get the value of the ComponentTransform::_sfCenter field.
inline
Vec3f &ComponentTransformBase::editCenter(void)
{
    return _sfCenter.getValue();
}

//! Get the value of the ComponentTransform::_sfCenter field.
inline
const Vec3f &ComponentTransformBase::getCenter(void) const
{
    return _sfCenter.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ComponentTransform::_sfCenter field.
inline
Vec3f &ComponentTransformBase::getCenter(void)
{
    return _sfCenter.getValue();
}
#endif

//! Set the value of the ComponentTransform::_sfCenter field.
inline
void ComponentTransformBase::setCenter(const Vec3f &value)
{
    _sfCenter.setValue(value);
}

//! Get the value of the ComponentTransform::_sfRotation field.
inline
Quaternion &ComponentTransformBase::editRotation(void)
{
    return _sfRotation.getValue();
}

//! Get the value of the ComponentTransform::_sfRotation field.
inline
const Quaternion &ComponentTransformBase::getRotation(void) const
{
    return _sfRotation.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ComponentTransform::_sfRotation field.
inline
Quaternion &ComponentTransformBase::getRotation(void)
{
    return _sfRotation.getValue();
}
#endif

//! Set the value of the ComponentTransform::_sfRotation field.
inline
void ComponentTransformBase::setRotation(const Quaternion &value)
{
    _sfRotation.setValue(value);
}

//! Get the value of the ComponentTransform::_sfScale field.
inline
Vec3f &ComponentTransformBase::editScale(void)
{
    return _sfScale.getValue();
}

//! Get the value of the ComponentTransform::_sfScale field.
inline
const Vec3f &ComponentTransformBase::getScale(void) const
{
    return _sfScale.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ComponentTransform::_sfScale field.
inline
Vec3f &ComponentTransformBase::getScale(void)
{
    return _sfScale.getValue();
}
#endif

//! Set the value of the ComponentTransform::_sfScale field.
inline
void ComponentTransformBase::setScale(const Vec3f &value)
{
    _sfScale.setValue(value);
}

//! Get the value of the ComponentTransform::_sfScaleOrientation field.
inline
Quaternion &ComponentTransformBase::editScaleOrientation(void)
{
    return _sfScaleOrientation.getValue();
}

//! Get the value of the ComponentTransform::_sfScaleOrientation field.
inline
const Quaternion &ComponentTransformBase::getScaleOrientation(void) const
{
    return _sfScaleOrientation.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ComponentTransform::_sfScaleOrientation field.
inline
Quaternion &ComponentTransformBase::getScaleOrientation(void)
{
    return _sfScaleOrientation.getValue();
}
#endif

//! Set the value of the ComponentTransform::_sfScaleOrientation field.
inline
void ComponentTransformBase::setScaleOrientation(const Quaternion &value)
{
    _sfScaleOrientation.setValue(value);
}

//! Get the value of the ComponentTransform::_sfTranslation field.
inline
Vec3f &ComponentTransformBase::editTranslation(void)
{
    return _sfTranslation.getValue();
}

//! Get the value of the ComponentTransform::_sfTranslation field.
inline
const Vec3f &ComponentTransformBase::getTranslation(void) const
{
    return _sfTranslation.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ComponentTransform::_sfTranslation field.
inline
Vec3f &ComponentTransformBase::getTranslation(void)
{
    return _sfTranslation.getValue();
}
#endif

//! Set the value of the ComponentTransform::_sfTranslation field.
inline
void ComponentTransformBase::setTranslation(const Vec3f &value)
{
    _sfTranslation.setValue(value);
}


OSG_END_NAMESPACE

#define OSGCOMPONENTTRANSFORMBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

