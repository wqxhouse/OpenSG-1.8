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
 **     class Surface!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SurfaceBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SurfaceBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
SurfacePtr SurfaceBase::create(void) 
{
    SurfacePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = SurfacePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
SurfacePtr SurfaceBase::createEmpty(void) 
{ 
    SurfacePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Surface::_sfDimU field.
inline
const SFUInt32 *SurfaceBase::getSFDimU(void) const
{
    return &_sfDimU;
}

//! Get the Surface::_sfDimU field.
inline
SFUInt32 *SurfaceBase::editSFDimU(void)
{
    return &_sfDimU;
}

#ifndef OSG_2_PREP
//! Get the Surface::_sfDimU field.
inline
SFUInt32 *SurfaceBase::getSFDimU(void)
{
    return &_sfDimU;
}
#endif

//! Get the Surface::_sfDimV field.
inline
const SFUInt32 *SurfaceBase::getSFDimV(void) const
{
    return &_sfDimV;
}

//! Get the Surface::_sfDimV field.
inline
SFUInt32 *SurfaceBase::editSFDimV(void)
{
    return &_sfDimV;
}

#ifndef OSG_2_PREP
//! Get the Surface::_sfDimV field.
inline
SFUInt32 *SurfaceBase::getSFDimV(void)
{
    return &_sfDimV;
}
#endif

//! Get the Surface::_mfKnotsU field.
inline
const MFReal32 *SurfaceBase::getMFKnotsU(void) const
{
    return &_mfKnotsU;
}

//! Get the Surface::_mfKnotsU field.
inline
MFReal32 *SurfaceBase::editMFKnotsU(void)
{
    return &_mfKnotsU;
}

#ifndef OSG_2_PREP
//! Get the Surface::_mfKnotsU field.
inline
MFReal32 *SurfaceBase::getMFKnotsU(void)
{
    return &_mfKnotsU;
}
#endif

//! Get the Surface::_mfKnotsV field.
inline
const MFReal32 *SurfaceBase::getMFKnotsV(void) const
{
    return &_mfKnotsV;
}

//! Get the Surface::_mfKnotsV field.
inline
MFReal32 *SurfaceBase::editMFKnotsV(void)
{
    return &_mfKnotsV;
}

#ifndef OSG_2_PREP
//! Get the Surface::_mfKnotsV field.
inline
MFReal32 *SurfaceBase::getMFKnotsV(void)
{
    return &_mfKnotsV;
}
#endif

//! Get the Surface::_sfControlPoints field.
inline
const SFGeoPositionsPtr *SurfaceBase::getSFControlPoints(void) const
{
    return &_sfControlPoints;
}

//! Get the Surface::_sfControlPoints field.
inline
SFGeoPositionsPtr *SurfaceBase::editSFControlPoints(void)
{
    return &_sfControlPoints;
}

#ifndef OSG_2_PREP
//! Get the Surface::_sfControlPoints field.
inline
SFGeoPositionsPtr *SurfaceBase::getSFControlPoints(void)
{
    return &_sfControlPoints;
}
#endif

//! Get the Surface::_sfError field.
inline
const SFReal32 *SurfaceBase::getSFError(void) const
{
    return &_sfError;
}

//! Get the Surface::_sfError field.
inline
SFReal32 *SurfaceBase::editSFError(void)
{
    return &_sfError;
}

#ifndef OSG_2_PREP
//! Get the Surface::_sfError field.
inline
SFReal32 *SurfaceBase::getSFError(void)
{
    return &_sfError;
}
#endif

//! Get the Surface::_sfNumCurves field.
inline
const SFUInt32 *SurfaceBase::getSFNumCurves(void) const
{
    return &_sfNumCurves;
}

//! Get the Surface::_sfNumCurves field.
inline
SFUInt32 *SurfaceBase::editSFNumCurves(void)
{
    return &_sfNumCurves;
}

#ifndef OSG_2_PREP
//! Get the Surface::_sfNumCurves field.
inline
SFUInt32 *SurfaceBase::getSFNumCurves(void)
{
    return &_sfNumCurves;
}
#endif

//! Get the Surface::_mfKnotLengths field.
inline
const MFUInt32 *SurfaceBase::getMFKnotLengths(void) const
{
    return &_mfKnotLengths;
}

//! Get the Surface::_mfKnotLengths field.
inline
MFUInt32 *SurfaceBase::editMFKnotLengths(void)
{
    return &_mfKnotLengths;
}

#ifndef OSG_2_PREP
//! Get the Surface::_mfKnotLengths field.
inline
MFUInt32 *SurfaceBase::getMFKnotLengths(void)
{
    return &_mfKnotLengths;
}
#endif

//! Get the Surface::_mfDimensions field.
inline
const MFUInt32 *SurfaceBase::getMFDimensions(void) const
{
    return &_mfDimensions;
}

//! Get the Surface::_mfDimensions field.
inline
MFUInt32 *SurfaceBase::editMFDimensions(void)
{
    return &_mfDimensions;
}

#ifndef OSG_2_PREP
//! Get the Surface::_mfDimensions field.
inline
MFUInt32 *SurfaceBase::getMFDimensions(void)
{
    return &_mfDimensions;
}
#endif

//! Get the Surface::_mfCurveControlPoints field.
inline
const MFPnt3f *SurfaceBase::getMFCurveControlPoints(void) const
{
    return &_mfCurveControlPoints;
}

//! Get the Surface::_mfCurveControlPoints field.
inline
MFPnt3f *SurfaceBase::editMFCurveControlPoints(void)
{
    return &_mfCurveControlPoints;
}

#ifndef OSG_2_PREP
//! Get the Surface::_mfCurveControlPoints field.
inline
MFPnt3f *SurfaceBase::getMFCurveControlPoints(void)
{
    return &_mfCurveControlPoints;
}
#endif

//! Get the Surface::_mfKnots field.
inline
const MFReal32 *SurfaceBase::getMFKnots(void) const
{
    return &_mfKnots;
}

//! Get the Surface::_mfKnots field.
inline
MFReal32 *SurfaceBase::editMFKnots(void)
{
    return &_mfKnots;
}

#ifndef OSG_2_PREP
//! Get the Surface::_mfKnots field.
inline
MFReal32 *SurfaceBase::getMFKnots(void)
{
    return &_mfKnots;
}
#endif

//! Get the Surface::_mfCurvesPerLoop field.
inline
const MFUInt32 *SurfaceBase::getMFCurvesPerLoop(void) const
{
    return &_mfCurvesPerLoop;
}

//! Get the Surface::_mfCurvesPerLoop field.
inline
MFUInt32 *SurfaceBase::editMFCurvesPerLoop(void)
{
    return &_mfCurvesPerLoop;
}

#ifndef OSG_2_PREP
//! Get the Surface::_mfCurvesPerLoop field.
inline
MFUInt32 *SurfaceBase::getMFCurvesPerLoop(void)
{
    return &_mfCurvesPerLoop;
}
#endif

//! Get the Surface::_sfIsDelaunay field.
inline
const SFBool *SurfaceBase::getSFIsDelaunay(void) const
{
    return &_sfIsDelaunay;
}

//! Get the Surface::_sfIsDelaunay field.
inline
SFBool *SurfaceBase::editSFIsDelaunay(void)
{
    return &_sfIsDelaunay;
}

#ifndef OSG_2_PREP
//! Get the Surface::_sfIsDelaunay field.
inline
SFBool *SurfaceBase::getSFIsDelaunay(void)
{
    return &_sfIsDelaunay;
}
#endif

//! Get the Surface::_sfTextureControlPoints field.
inline
const SFGeoTexCoordsPtr *SurfaceBase::getSFTextureControlPoints(void) const
{
    return &_sfTextureControlPoints;
}

//! Get the Surface::_sfTextureControlPoints field.
inline
SFGeoTexCoordsPtr *SurfaceBase::editSFTextureControlPoints(void)
{
    return &_sfTextureControlPoints;
}

#ifndef OSG_2_PREP
//! Get the Surface::_sfTextureControlPoints field.
inline
SFGeoTexCoordsPtr *SurfaceBase::getSFTextureControlPoints(void)
{
    return &_sfTextureControlPoints;
}
#endif

//! Get the Surface::_sfDirtyMask field.
inline
const SFUInt32 *SurfaceBase::getSFDirtyMask(void) const
{
    return &_sfDirtyMask;
}

//! Get the Surface::_sfDirtyMask field.
inline
SFUInt32 *SurfaceBase::editSFDirtyMask(void)
{
    return &_sfDirtyMask;
}

#ifndef OSG_2_PREP
//! Get the Surface::_sfDirtyMask field.
inline
SFUInt32 *SurfaceBase::getSFDirtyMask(void)
{
    return &_sfDirtyMask;
}
#endif

//! Get the Surface::_sfSurfaceGLId field.
inline
const SFInt32 *SurfaceBase::getSFSurfaceGLId(void) const
{
    return &_sfSurfaceGLId;
}

//! Get the Surface::_sfSurfaceGLId field.
inline
SFInt32 *SurfaceBase::editSFSurfaceGLId(void)
{
    return &_sfSurfaceGLId;
}

#ifndef OSG_2_PREP
//! Get the Surface::_sfSurfaceGLId field.
inline
SFInt32 *SurfaceBase::getSFSurfaceGLId(void)
{
    return &_sfSurfaceGLId;
}
#endif


//! Get the value of the Surface::_sfDimU field.
inline
UInt32 &SurfaceBase::editDimU(void)
{
    return _sfDimU.getValue();
}

//! Get the value of the Surface::_sfDimU field.
inline
const UInt32 &SurfaceBase::getDimU(void) const
{
    return _sfDimU.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Surface::_sfDimU field.
inline
UInt32 &SurfaceBase::getDimU(void)
{
    return _sfDimU.getValue();
}
#endif

//! Set the value of the Surface::_sfDimU field.
inline
void SurfaceBase::setDimU(const UInt32 &value)
{
    _sfDimU.setValue(value);
}

//! Get the value of the Surface::_sfDimV field.
inline
UInt32 &SurfaceBase::editDimV(void)
{
    return _sfDimV.getValue();
}

//! Get the value of the Surface::_sfDimV field.
inline
const UInt32 &SurfaceBase::getDimV(void) const
{
    return _sfDimV.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Surface::_sfDimV field.
inline
UInt32 &SurfaceBase::getDimV(void)
{
    return _sfDimV.getValue();
}
#endif

//! Set the value of the Surface::_sfDimV field.
inline
void SurfaceBase::setDimV(const UInt32 &value)
{
    _sfDimV.setValue(value);
}

//! Get the value of the Surface::_sfControlPoints field.
inline
GeoPositionsPtr &SurfaceBase::editControlPoints(void)
{
    return _sfControlPoints.getValue();
}

//! Get the value of the Surface::_sfControlPoints field.
inline
const GeoPositionsPtr &SurfaceBase::getControlPoints(void) const
{
    return _sfControlPoints.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Surface::_sfControlPoints field.
inline
GeoPositionsPtr &SurfaceBase::getControlPoints(void)
{
    return _sfControlPoints.getValue();
}
#endif

//! Set the value of the Surface::_sfControlPoints field.
inline
void SurfaceBase::setControlPoints(const GeoPositionsPtr &value)
{
    _sfControlPoints.setValue(value);
}

//! Get the value of the Surface::_sfError field.
inline
Real32 &SurfaceBase::editError(void)
{
    return _sfError.getValue();
}

//! Get the value of the Surface::_sfError field.
inline
const Real32 &SurfaceBase::getError(void) const
{
    return _sfError.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Surface::_sfError field.
inline
Real32 &SurfaceBase::getError(void)
{
    return _sfError.getValue();
}
#endif

//! Set the value of the Surface::_sfError field.
inline
void SurfaceBase::setError(const Real32 &value)
{
    _sfError.setValue(value);
}

//! Get the value of the Surface::_sfNumCurves field.
inline
UInt32 &SurfaceBase::editNumCurves(void)
{
    return _sfNumCurves.getValue();
}

//! Get the value of the Surface::_sfNumCurves field.
inline
const UInt32 &SurfaceBase::getNumCurves(void) const
{
    return _sfNumCurves.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Surface::_sfNumCurves field.
inline
UInt32 &SurfaceBase::getNumCurves(void)
{
    return _sfNumCurves.getValue();
}
#endif

//! Set the value of the Surface::_sfNumCurves field.
inline
void SurfaceBase::setNumCurves(const UInt32 &value)
{
    _sfNumCurves.setValue(value);
}

//! Get the value of the Surface::_sfIsDelaunay field.
inline
bool &SurfaceBase::editIsDelaunay(void)
{
    return _sfIsDelaunay.getValue();
}

//! Get the value of the Surface::_sfIsDelaunay field.
inline
const bool &SurfaceBase::getIsDelaunay(void) const
{
    return _sfIsDelaunay.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Surface::_sfIsDelaunay field.
inline
bool &SurfaceBase::getIsDelaunay(void)
{
    return _sfIsDelaunay.getValue();
}
#endif

//! Set the value of the Surface::_sfIsDelaunay field.
inline
void SurfaceBase::setIsDelaunay(const bool &value)
{
    _sfIsDelaunay.setValue(value);
}

//! Get the value of the Surface::_sfTextureControlPoints field.
inline
GeoTexCoordsPtr &SurfaceBase::editTextureControlPoints(void)
{
    return _sfTextureControlPoints.getValue();
}

//! Get the value of the Surface::_sfTextureControlPoints field.
inline
const GeoTexCoordsPtr &SurfaceBase::getTextureControlPoints(void) const
{
    return _sfTextureControlPoints.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Surface::_sfTextureControlPoints field.
inline
GeoTexCoordsPtr &SurfaceBase::getTextureControlPoints(void)
{
    return _sfTextureControlPoints.getValue();
}
#endif

//! Set the value of the Surface::_sfTextureControlPoints field.
inline
void SurfaceBase::setTextureControlPoints(const GeoTexCoordsPtr &value)
{
    _sfTextureControlPoints.setValue(value);
}

//! Get the value of the Surface::_sfDirtyMask field.
inline
UInt32 &SurfaceBase::editDirtyMask(void)
{
    return _sfDirtyMask.getValue();
}

//! Get the value of the Surface::_sfDirtyMask field.
inline
const UInt32 &SurfaceBase::getDirtyMask(void) const
{
    return _sfDirtyMask.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Surface::_sfDirtyMask field.
inline
UInt32 &SurfaceBase::getDirtyMask(void)
{
    return _sfDirtyMask.getValue();
}
#endif

//! Set the value of the Surface::_sfDirtyMask field.
inline
void SurfaceBase::setDirtyMask(const UInt32 &value)
{
    _sfDirtyMask.setValue(value);
}

//! Get the value of the Surface::_sfSurfaceGLId field.
inline
Int32 &SurfaceBase::editSurfaceGLId(void)
{
    return _sfSurfaceGLId.getValue();
}

//! Get the value of the Surface::_sfSurfaceGLId field.
inline
const Int32 &SurfaceBase::getSurfaceGLId(void) const
{
    return _sfSurfaceGLId.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Surface::_sfSurfaceGLId field.
inline
Int32 &SurfaceBase::getSurfaceGLId(void)
{
    return _sfSurfaceGLId.getValue();
}
#endif

//! Set the value of the Surface::_sfSurfaceGLId field.
inline
void SurfaceBase::setSurfaceGLId(const Int32 &value)
{
    _sfSurfaceGLId.setValue(value);
}


//! Get the value of the \a index element the Surface::_mfKnotsU field.
inline
Real32 &SurfaceBase::editKnotsU(const UInt32 index)
{
    return _mfKnotsU[index];
}

//! Get the value of the \a index element the Surface::_mfKnotsU field.
inline
const Real32 &SurfaceBase::getKnotsU(const UInt32 index) const
{
    return _mfKnotsU[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the Surface::_mfKnotsU field.
inline
Real32 &SurfaceBase::getKnotsU(const UInt32 index)
{
    return _mfKnotsU[index];
}

//! Get the Surface::_mfKnotsU field.
inline
MFReal32 &SurfaceBase::getKnotsU(void)
{
    return _mfKnotsU;
}

//! Get the Surface::_mfKnotsU field.
inline
const MFReal32 &SurfaceBase::getKnotsU(void) const
{
    return _mfKnotsU;
}

#endif

//! Get the value of the \a index element the Surface::_mfKnotsV field.
inline
Real32 &SurfaceBase::editKnotsV(const UInt32 index)
{
    return _mfKnotsV[index];
}

//! Get the value of the \a index element the Surface::_mfKnotsV field.
inline
const Real32 &SurfaceBase::getKnotsV(const UInt32 index) const
{
    return _mfKnotsV[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the Surface::_mfKnotsV field.
inline
Real32 &SurfaceBase::getKnotsV(const UInt32 index)
{
    return _mfKnotsV[index];
}

//! Get the Surface::_mfKnotsV field.
inline
MFReal32 &SurfaceBase::getKnotsV(void)
{
    return _mfKnotsV;
}

//! Get the Surface::_mfKnotsV field.
inline
const MFReal32 &SurfaceBase::getKnotsV(void) const
{
    return _mfKnotsV;
}

#endif

//! Get the value of the \a index element the Surface::_mfKnotLengths field.
inline
UInt32 &SurfaceBase::editKnotLengths(const UInt32 index)
{
    return _mfKnotLengths[index];
}

//! Get the value of the \a index element the Surface::_mfKnotLengths field.
inline
const UInt32 &SurfaceBase::getKnotLengths(const UInt32 index) const
{
    return _mfKnotLengths[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the Surface::_mfKnotLengths field.
inline
UInt32 &SurfaceBase::getKnotLengths(const UInt32 index)
{
    return _mfKnotLengths[index];
}

//! Get the Surface::_mfKnotLengths field.
inline
MFUInt32 &SurfaceBase::getKnotLengths(void)
{
    return _mfKnotLengths;
}

//! Get the Surface::_mfKnotLengths field.
inline
const MFUInt32 &SurfaceBase::getKnotLengths(void) const
{
    return _mfKnotLengths;
}

#endif

//! Get the value of the \a index element the Surface::_mfDimensions field.
inline
UInt32 &SurfaceBase::editDimensions(const UInt32 index)
{
    return _mfDimensions[index];
}

//! Get the value of the \a index element the Surface::_mfDimensions field.
inline
const UInt32 &SurfaceBase::getDimensions(const UInt32 index) const
{
    return _mfDimensions[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the Surface::_mfDimensions field.
inline
UInt32 &SurfaceBase::getDimensions(const UInt32 index)
{
    return _mfDimensions[index];
}

//! Get the Surface::_mfDimensions field.
inline
MFUInt32 &SurfaceBase::getDimensions(void)
{
    return _mfDimensions;
}

//! Get the Surface::_mfDimensions field.
inline
const MFUInt32 &SurfaceBase::getDimensions(void) const
{
    return _mfDimensions;
}

#endif

//! Get the value of the \a index element the Surface::_mfCurveControlPoints field.
inline
Pnt3f &SurfaceBase::editCurveControlPoints(const UInt32 index)
{
    return _mfCurveControlPoints[index];
}

//! Get the value of the \a index element the Surface::_mfCurveControlPoints field.
inline
const Pnt3f &SurfaceBase::getCurveControlPoints(const UInt32 index) const
{
    return _mfCurveControlPoints[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the Surface::_mfCurveControlPoints field.
inline
Pnt3f &SurfaceBase::getCurveControlPoints(const UInt32 index)
{
    return _mfCurveControlPoints[index];
}

//! Get the Surface::_mfCurveControlPoints field.
inline
MFPnt3f &SurfaceBase::getCurveControlPoints(void)
{
    return _mfCurveControlPoints;
}

//! Get the Surface::_mfCurveControlPoints field.
inline
const MFPnt3f &SurfaceBase::getCurveControlPoints(void) const
{
    return _mfCurveControlPoints;
}

#endif

//! Get the value of the \a index element the Surface::_mfKnots field.
inline
Real32 &SurfaceBase::editKnots(const UInt32 index)
{
    return _mfKnots[index];
}

//! Get the value of the \a index element the Surface::_mfKnots field.
inline
const Real32 &SurfaceBase::getKnots(const UInt32 index) const
{
    return _mfKnots[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the Surface::_mfKnots field.
inline
Real32 &SurfaceBase::getKnots(const UInt32 index)
{
    return _mfKnots[index];
}

//! Get the Surface::_mfKnots field.
inline
MFReal32 &SurfaceBase::getKnots(void)
{
    return _mfKnots;
}

//! Get the Surface::_mfKnots field.
inline
const MFReal32 &SurfaceBase::getKnots(void) const
{
    return _mfKnots;
}

#endif

//! Get the value of the \a index element the Surface::_mfCurvesPerLoop field.
inline
UInt32 &SurfaceBase::editCurvesPerLoop(const UInt32 index)
{
    return _mfCurvesPerLoop[index];
}

//! Get the value of the \a index element the Surface::_mfCurvesPerLoop field.
inline
const UInt32 &SurfaceBase::getCurvesPerLoop(const UInt32 index) const
{
    return _mfCurvesPerLoop[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the Surface::_mfCurvesPerLoop field.
inline
UInt32 &SurfaceBase::getCurvesPerLoop(const UInt32 index)
{
    return _mfCurvesPerLoop[index];
}

//! Get the Surface::_mfCurvesPerLoop field.
inline
MFUInt32 &SurfaceBase::getCurvesPerLoop(void)
{
    return _mfCurvesPerLoop;
}

//! Get the Surface::_mfCurvesPerLoop field.
inline
const MFUInt32 &SurfaceBase::getCurvesPerLoop(void) const
{
    return _mfCurvesPerLoop;
}

#endif

OSG_END_NAMESPACE

#define OSGSURFACEBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.22 2008/06/09 12:26:59 vossg Exp $"

