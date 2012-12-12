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
 **     class TransformChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TransformChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TransformChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TransformChunkPtr TransformChunkBase::create(void) 
{
    TransformChunkPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TransformChunkPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TransformChunkPtr TransformChunkBase::createEmpty(void) 
{ 
    TransformChunkPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TransformChunk::_sfMatrix field.
inline
const SFMatrix *TransformChunkBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}

//! Get the TransformChunk::_sfMatrix field.
inline
SFMatrix *TransformChunkBase::editSFMatrix(void)
{
    return &_sfMatrix;
}

#ifndef OSG_2_PREP
//! Get the TransformChunk::_sfMatrix field.
inline
SFMatrix *TransformChunkBase::getSFMatrix(void)
{
    return &_sfMatrix;
}
#endif


//! Get the value of the TransformChunk::_sfMatrix field.
inline
Matrix &TransformChunkBase::editMatrix(void)
{
    return _sfMatrix.getValue();
}

//! Get the value of the TransformChunk::_sfMatrix field.
inline
const Matrix &TransformChunkBase::getMatrix(void) const
{
    return _sfMatrix.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TransformChunk::_sfMatrix field.
inline
Matrix &TransformChunkBase::getMatrix(void)
{
    return _sfMatrix.getValue();
}
#endif

//! Set the value of the TransformChunk::_sfMatrix field.
inline
void TransformChunkBase::setMatrix(const Matrix &value)
{
    _sfMatrix.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTRANSFORMCHUNKBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

