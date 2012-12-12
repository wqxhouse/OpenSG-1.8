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
 **     class LinearCombinerGeometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LinearCombinerGeometryBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LinearCombinerGeometryBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LinearCombinerGeometryPtr LinearCombinerGeometryBase::create(void) 
{
    LinearCombinerGeometryPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LinearCombinerGeometryPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LinearCombinerGeometryPtr LinearCombinerGeometryBase::createEmpty(void) 
{ 
    LinearCombinerGeometryPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the LinearCombinerGeometry::_mfWeights field.
inline
const MFReal32 *LinearCombinerGeometryBase::getMFWeights(void) const
{
    return &_mfWeights;
}

//! Get the LinearCombinerGeometry::_mfWeights field.
inline
MFReal32 *LinearCombinerGeometryBase::editMFWeights(void)
{
    return &_mfWeights;
}

#ifndef OSG_2_PREP
//! Get the LinearCombinerGeometry::_mfWeights field.
inline
MFReal32 *LinearCombinerGeometryBase::getMFWeights(void)
{
    return &_mfWeights;
}
#endif

//! Get the LinearCombinerGeometry::_mfSrcpositions field.
inline
const MFGeoPositionsPtr *LinearCombinerGeometryBase::getMFSrcpositions(void) const
{
    return &_mfSrcpositions;
}

//! Get the LinearCombinerGeometry::_mfSrcpositions field.
inline
MFGeoPositionsPtr *LinearCombinerGeometryBase::editMFSrcpositions(void)
{
    return &_mfSrcpositions;
}

#ifndef OSG_2_PREP
//! Get the LinearCombinerGeometry::_mfSrcpositions field.
inline
MFGeoPositionsPtr *LinearCombinerGeometryBase::getMFSrcpositions(void)
{
    return &_mfSrcpositions;
}
#endif

//! Get the LinearCombinerGeometry::_mfSrcvolumes field.
inline
const MFVolume *LinearCombinerGeometryBase::getMFSrcvolumes(void) const
{
    return &_mfSrcvolumes;
}

//! Get the LinearCombinerGeometry::_mfSrcvolumes field.
inline
MFVolume *LinearCombinerGeometryBase::editMFSrcvolumes(void)
{
    return &_mfSrcvolumes;
}

#ifndef OSG_2_PREP
//! Get the LinearCombinerGeometry::_mfSrcvolumes field.
inline
MFVolume *LinearCombinerGeometryBase::getMFSrcvolumes(void)
{
    return &_mfSrcvolumes;
}
#endif

//! Get the LinearCombinerGeometry::_sfRecalconrender field.
inline
const SFBool *LinearCombinerGeometryBase::getSFRecalconrender(void) const
{
    return &_sfRecalconrender;
}

//! Get the LinearCombinerGeometry::_sfRecalconrender field.
inline
SFBool *LinearCombinerGeometryBase::editSFRecalconrender(void)
{
    return &_sfRecalconrender;
}

#ifndef OSG_2_PREP
//! Get the LinearCombinerGeometry::_sfRecalconrender field.
inline
SFBool *LinearCombinerGeometryBase::getSFRecalconrender(void)
{
    return &_sfRecalconrender;
}
#endif

//! Get the LinearCombinerGeometry::_sfAllgeometries3f field.
inline
const SFBool *LinearCombinerGeometryBase::getSFAllgeometries3f(void) const
{
    return &_sfAllgeometries3f;
}

//! Get the LinearCombinerGeometry::_sfAllgeometries3f field.
inline
SFBool *LinearCombinerGeometryBase::editSFAllgeometries3f(void)
{
    return &_sfAllgeometries3f;
}

#ifndef OSG_2_PREP
//! Get the LinearCombinerGeometry::_sfAllgeometries3f field.
inline
SFBool *LinearCombinerGeometryBase::getSFAllgeometries3f(void)
{
    return &_sfAllgeometries3f;
}
#endif

//! Get the LinearCombinerGeometry::_sfPositionsdirty field.
inline
const SFBool *LinearCombinerGeometryBase::getSFPositionsdirty(void) const
{
    return &_sfPositionsdirty;
}

//! Get the LinearCombinerGeometry::_sfPositionsdirty field.
inline
SFBool *LinearCombinerGeometryBase::editSFPositionsdirty(void)
{
    return &_sfPositionsdirty;
}

#ifndef OSG_2_PREP
//! Get the LinearCombinerGeometry::_sfPositionsdirty field.
inline
SFBool *LinearCombinerGeometryBase::getSFPositionsdirty(void)
{
    return &_sfPositionsdirty;
}
#endif


//! Get the value of the LinearCombinerGeometry::_sfRecalconrender field.
inline
bool &LinearCombinerGeometryBase::editRecalconrender(void)
{
    return _sfRecalconrender.getValue();
}

//! Get the value of the LinearCombinerGeometry::_sfRecalconrender field.
inline
const bool &LinearCombinerGeometryBase::getRecalconrender(void) const
{
    return _sfRecalconrender.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LinearCombinerGeometry::_sfRecalconrender field.
inline
bool &LinearCombinerGeometryBase::getRecalconrender(void)
{
    return _sfRecalconrender.getValue();
}
#endif

//! Set the value of the LinearCombinerGeometry::_sfRecalconrender field.
inline
void LinearCombinerGeometryBase::setRecalconrender(const bool &value)
{
    _sfRecalconrender.setValue(value);
}

//! Get the value of the LinearCombinerGeometry::_sfAllgeometries3f field.
inline
bool &LinearCombinerGeometryBase::editAllgeometries3f(void)
{
    return _sfAllgeometries3f.getValue();
}

//! Get the value of the LinearCombinerGeometry::_sfAllgeometries3f field.
inline
const bool &LinearCombinerGeometryBase::getAllgeometries3f(void) const
{
    return _sfAllgeometries3f.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LinearCombinerGeometry::_sfAllgeometries3f field.
inline
bool &LinearCombinerGeometryBase::getAllgeometries3f(void)
{
    return _sfAllgeometries3f.getValue();
}
#endif

//! Set the value of the LinearCombinerGeometry::_sfAllgeometries3f field.
inline
void LinearCombinerGeometryBase::setAllgeometries3f(const bool &value)
{
    _sfAllgeometries3f.setValue(value);
}

//! Get the value of the LinearCombinerGeometry::_sfPositionsdirty field.
inline
bool &LinearCombinerGeometryBase::editPositionsdirty(void)
{
    return _sfPositionsdirty.getValue();
}

//! Get the value of the LinearCombinerGeometry::_sfPositionsdirty field.
inline
const bool &LinearCombinerGeometryBase::getPositionsdirty(void) const
{
    return _sfPositionsdirty.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the LinearCombinerGeometry::_sfPositionsdirty field.
inline
bool &LinearCombinerGeometryBase::getPositionsdirty(void)
{
    return _sfPositionsdirty.getValue();
}
#endif

//! Set the value of the LinearCombinerGeometry::_sfPositionsdirty field.
inline
void LinearCombinerGeometryBase::setPositionsdirty(const bool &value)
{
    _sfPositionsdirty.setValue(value);
}


//! Get the value of the \a index element the LinearCombinerGeometry::_mfWeights field.
inline
Real32 &LinearCombinerGeometryBase::editWeights(const UInt32 index)
{
    return _mfWeights[index];
}

//! Get the value of the \a index element the LinearCombinerGeometry::_mfWeights field.
inline
const Real32 &LinearCombinerGeometryBase::getWeights(const UInt32 index) const
{
    return _mfWeights[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the LinearCombinerGeometry::_mfWeights field.
inline
Real32 &LinearCombinerGeometryBase::getWeights(const UInt32 index)
{
    return _mfWeights[index];
}

//! Get the LinearCombinerGeometry::_mfWeights field.
inline
MFReal32 &LinearCombinerGeometryBase::getWeights(void)
{
    return _mfWeights;
}

//! Get the LinearCombinerGeometry::_mfWeights field.
inline
const MFReal32 &LinearCombinerGeometryBase::getWeights(void) const
{
    return _mfWeights;
}

#endif

//! Get the value of the \a index element the LinearCombinerGeometry::_mfSrcpositions field.
inline
GeoPositionsPtr &LinearCombinerGeometryBase::editSrcpositions(const UInt32 index)
{
    return _mfSrcpositions[index];
}

//! Get the value of the \a index element the LinearCombinerGeometry::_mfSrcpositions field.
inline
const GeoPositionsPtr &LinearCombinerGeometryBase::getSrcpositions(const UInt32 index) const
{
    return _mfSrcpositions[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the LinearCombinerGeometry::_mfSrcpositions field.
inline
GeoPositionsPtr &LinearCombinerGeometryBase::getSrcpositions(const UInt32 index)
{
    return _mfSrcpositions[index];
}

//! Get the LinearCombinerGeometry::_mfSrcpositions field.
inline
MFGeoPositionsPtr &LinearCombinerGeometryBase::getSrcpositions(void)
{
    return _mfSrcpositions;
}

//! Get the LinearCombinerGeometry::_mfSrcpositions field.
inline
const MFGeoPositionsPtr &LinearCombinerGeometryBase::getSrcpositions(void) const
{
    return _mfSrcpositions;
}

#endif

//! Get the value of the \a index element the LinearCombinerGeometry::_mfSrcvolumes field.
inline
Volume &LinearCombinerGeometryBase::editSrcvolumes(const UInt32 index)
{
    return _mfSrcvolumes[index];
}

//! Get the value of the \a index element the LinearCombinerGeometry::_mfSrcvolumes field.
inline
const Volume &LinearCombinerGeometryBase::getSrcvolumes(const UInt32 index) const
{
    return _mfSrcvolumes[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the LinearCombinerGeometry::_mfSrcvolumes field.
inline
Volume &LinearCombinerGeometryBase::getSrcvolumes(const UInt32 index)
{
    return _mfSrcvolumes[index];
}

//! Get the LinearCombinerGeometry::_mfSrcvolumes field.
inline
MFVolume &LinearCombinerGeometryBase::getSrcvolumes(void)
{
    return _mfSrcvolumes;
}

//! Get the LinearCombinerGeometry::_mfSrcvolumes field.
inline
const MFVolume &LinearCombinerGeometryBase::getSrcvolumes(void) const
{
    return _mfSrcvolumes;
}

#endif

OSG_END_NAMESPACE

#define OSGLINEARCOMBINERGEOMETRYBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

