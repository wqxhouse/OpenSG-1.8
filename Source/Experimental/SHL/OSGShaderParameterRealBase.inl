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
 **     class ShaderParameterReal!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterRealBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterRealBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ShaderParameterRealPtr ShaderParameterRealBase::create(void) 
{
    ShaderParameterRealPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ShaderParameterRealPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ShaderParameterRealPtr ShaderParameterRealBase::createEmpty(void) 
{ 
    ShaderParameterRealPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ShaderParameterReal::_sfValue field.
inline
const SFReal32 *ShaderParameterRealBase::getSFValue(void) const
{
    return &_sfValue;
}

//! Get the ShaderParameterReal::_sfValue field.
inline
SFReal32 *ShaderParameterRealBase::editSFValue(void)
{
    return &_sfValue;
}

#ifndef OSG_2_PREP
//! Get the ShaderParameterReal::_sfValue field.
inline
SFReal32 *ShaderParameterRealBase::getSFValue(void)
{
    return &_sfValue;
}
#endif


//! Get the value of the ShaderParameterReal::_sfValue field.
inline
Real32 &ShaderParameterRealBase::editValue(void)
{
    return _sfValue.getValue();
}

//! Get the value of the ShaderParameterReal::_sfValue field.
inline
const Real32 &ShaderParameterRealBase::getValue(void) const
{
    return _sfValue.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ShaderParameterReal::_sfValue field.
inline
Real32 &ShaderParameterRealBase::getValue(void)
{
    return _sfValue.getValue();
}
#endif

//! Set the value of the ShaderParameterReal::_sfValue field.
inline
void ShaderParameterRealBase::setValue(const Real32 &value)
{
    _sfValue.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSHADERPARAMETERREALBASE_INLINE_CVSID "@(#)$Id: OSGShaderParameterRealBase.inl,v 1.8 2008/06/09 12:28:06 vossg Exp $"

