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
 **     class ShaderParameterVec4f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterVec4fBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterVec4fBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ShaderParameterVec4fPtr ShaderParameterVec4fBase::create(void) 
{
    ShaderParameterVec4fPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ShaderParameterVec4fPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ShaderParameterVec4fPtr ShaderParameterVec4fBase::createEmpty(void) 
{ 
    ShaderParameterVec4fPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ShaderParameterVec4f::_sfValue field.
inline
const SFVec4f *ShaderParameterVec4fBase::getSFValue(void) const
{
    return &_sfValue;
}

//! Get the ShaderParameterVec4f::_sfValue field.
inline
SFVec4f *ShaderParameterVec4fBase::editSFValue(void)
{
    return &_sfValue;
}

#ifndef OSG_2_PREP
//! Get the ShaderParameterVec4f::_sfValue field.
inline
SFVec4f *ShaderParameterVec4fBase::getSFValue(void)
{
    return &_sfValue;
}
#endif


//! Get the value of the ShaderParameterVec4f::_sfValue field.
inline
Vec4f &ShaderParameterVec4fBase::editValue(void)
{
    return _sfValue.getValue();
}

//! Get the value of the ShaderParameterVec4f::_sfValue field.
inline
const Vec4f &ShaderParameterVec4fBase::getValue(void) const
{
    return _sfValue.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ShaderParameterVec4f::_sfValue field.
inline
Vec4f &ShaderParameterVec4fBase::getValue(void)
{
    return _sfValue.getValue();
}
#endif

//! Set the value of the ShaderParameterVec4f::_sfValue field.
inline
void ShaderParameterVec4fBase::setValue(const Vec4f &value)
{
    _sfValue.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSHADERPARAMETERVEC4FBASE_INLINE_CVSID "@(#)$Id: OSGShaderParameterVec4fBase.inl,v 1.8 2008/06/09 12:28:06 vossg Exp $"

