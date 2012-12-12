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
 **     class NewFieldContainer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &NewFieldContainerBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 NewFieldContainerBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
NewFieldContainerPtr NewFieldContainerBase::create(void) 
{
    NewFieldContainerPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = NewFieldContainerPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
NewFieldContainerPtr NewFieldContainerBase::createEmpty(void) 
{ 
    NewFieldContainerPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the NewFieldContainer::_mfFoo field.
inline
MFUInt32 *NewFieldContainerBase::getMFFoo(void)
{
    return &_mfFoo;
}

//! Get the NewFieldContainer::_sfBar field.
inline
SFTripleInt *NewFieldContainerBase::getSFBar(void)
{
    return &_sfBar;
}


//! Get the value of the NewFieldContainer::_sfBar field.
inline
TripleInt &NewFieldContainerBase::getBar(void)
{
    return _sfBar.getValue();
}

//! Get the value of the NewFieldContainer::_sfBar field.
inline
const TripleInt &NewFieldContainerBase::getBar(void) const
{
    return _sfBar.getValue();
}

//! Set the value of the NewFieldContainer::_sfBar field.
inline
void NewFieldContainerBase::setBar(const TripleInt &value)
{
    _sfBar.setValue(value);
}


//! Get the value of the \a index element the NewFieldContainer::_mfFoo field.
inline
UInt32 &NewFieldContainerBase::getFoo(const UInt32 index)
{
    return _mfFoo[index];
}

//! Get the NewFieldContainer::_mfFoo field.
inline
MFUInt32 &NewFieldContainerBase::getFoo(void)
{
    return _mfFoo;
}

//! Get the NewFieldContainer::_mfFoo field.
inline
const MFUInt32 &NewFieldContainerBase::getFoo(void) const
{
    return _mfFoo;
}

OSG_END_NAMESPACE

#define OSGNEWFIELDCONTAINERBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

