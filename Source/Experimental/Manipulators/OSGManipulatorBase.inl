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
 **     class Manipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ManipulatorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ManipulatorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 


/*------------------------------ get -----------------------------------*/

//! Get the Manipulator::_sfTarget field.
inline
const SFNodePtr *ManipulatorBase::getSFTarget(void) const
{
    return &_sfTarget;
}

//! Get the Manipulator::_sfTarget field.
inline
SFNodePtr *ManipulatorBase::editSFTarget(void)
{
    return &_sfTarget;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfTarget field.
inline
SFNodePtr *ManipulatorBase::getSFTarget(void)
{
    return &_sfTarget;
}
#endif

//! Get the Manipulator::_sfActiveSubHandle field.
inline
const SFNodePtr *ManipulatorBase::getSFActiveSubHandle(void) const
{
    return &_sfActiveSubHandle;
}

//! Get the Manipulator::_sfActiveSubHandle field.
inline
SFNodePtr *ManipulatorBase::editSFActiveSubHandle(void)
{
    return &_sfActiveSubHandle;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfActiveSubHandle field.
inline
SFNodePtr *ManipulatorBase::getSFActiveSubHandle(void)
{
    return &_sfActiveSubHandle;
}
#endif

//! Get the Manipulator::_sfLastMousePos field.
inline
const SFPnt2f *ManipulatorBase::getSFLastMousePos(void) const
{
    return &_sfLastMousePos;
}

//! Get the Manipulator::_sfLastMousePos field.
inline
SFPnt2f *ManipulatorBase::editSFLastMousePos(void)
{
    return &_sfLastMousePos;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfLastMousePos field.
inline
SFPnt2f *ManipulatorBase::getSFLastMousePos(void)
{
    return &_sfLastMousePos;
}
#endif

//! Get the Manipulator::_sfViewport field.
inline
const SFViewportPtr *ManipulatorBase::getSFViewport(void) const
{
    return &_sfViewport;
}

//! Get the Manipulator::_sfViewport field.
inline
SFViewportPtr *ManipulatorBase::editSFViewport(void)
{
    return &_sfViewport;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfViewport field.
inline
SFViewportPtr *ManipulatorBase::getSFViewport(void)
{
    return &_sfViewport;
}
#endif

//! Get the Manipulator::_sfActive field.
inline
const SFBool *ManipulatorBase::getSFActive(void) const
{
    return &_sfActive;
}

//! Get the Manipulator::_sfActive field.
inline
SFBool *ManipulatorBase::editSFActive(void)
{
    return &_sfActive;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfActive field.
inline
SFBool *ManipulatorBase::getSFActive(void)
{
    return &_sfActive;
}
#endif

//! Get the Manipulator::_sfLength field.
inline
const SFVec3f *ManipulatorBase::getSFLength(void) const
{
    return &_sfLength;
}

//! Get the Manipulator::_sfLength field.
inline
SFVec3f *ManipulatorBase::editSFLength(void)
{
    return &_sfLength;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfLength field.
inline
SFVec3f *ManipulatorBase::getSFLength(void)
{
    return &_sfLength;
}
#endif

//! Get the Manipulator::_sfHandleXNode field.
inline
const SFNodePtr *ManipulatorBase::getSFHandleXNode(void) const
{
    return &_sfHandleXNode;
}

//! Get the Manipulator::_sfHandleXNode field.
inline
SFNodePtr *ManipulatorBase::editSFHandleXNode(void)
{
    return &_sfHandleXNode;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfHandleXNode field.
inline
SFNodePtr *ManipulatorBase::getSFHandleXNode(void)
{
    return &_sfHandleXNode;
}
#endif

//! Get the Manipulator::_sfHandleYNode field.
inline
const SFNodePtr *ManipulatorBase::getSFHandleYNode(void) const
{
    return &_sfHandleYNode;
}

//! Get the Manipulator::_sfHandleYNode field.
inline
SFNodePtr *ManipulatorBase::editSFHandleYNode(void)
{
    return &_sfHandleYNode;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfHandleYNode field.
inline
SFNodePtr *ManipulatorBase::getSFHandleYNode(void)
{
    return &_sfHandleYNode;
}
#endif

//! Get the Manipulator::_sfHandleZNode field.
inline
const SFNodePtr *ManipulatorBase::getSFHandleZNode(void) const
{
    return &_sfHandleZNode;
}

//! Get the Manipulator::_sfHandleZNode field.
inline
SFNodePtr *ManipulatorBase::editSFHandleZNode(void)
{
    return &_sfHandleZNode;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfHandleZNode field.
inline
SFNodePtr *ManipulatorBase::getSFHandleZNode(void)
{
    return &_sfHandleZNode;
}
#endif

//! Get the Manipulator::_sfTransXNode field.
inline
const SFNodePtr *ManipulatorBase::getSFTransXNode(void) const
{
    return &_sfTransXNode;
}

//! Get the Manipulator::_sfTransXNode field.
inline
SFNodePtr *ManipulatorBase::editSFTransXNode(void)
{
    return &_sfTransXNode;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfTransXNode field.
inline
SFNodePtr *ManipulatorBase::getSFTransXNode(void)
{
    return &_sfTransXNode;
}
#endif

//! Get the Manipulator::_sfTransYNode field.
inline
const SFNodePtr *ManipulatorBase::getSFTransYNode(void) const
{
    return &_sfTransYNode;
}

//! Get the Manipulator::_sfTransYNode field.
inline
SFNodePtr *ManipulatorBase::editSFTransYNode(void)
{
    return &_sfTransYNode;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfTransYNode field.
inline
SFNodePtr *ManipulatorBase::getSFTransYNode(void)
{
    return &_sfTransYNode;
}
#endif

//! Get the Manipulator::_sfTransZNode field.
inline
const SFNodePtr *ManipulatorBase::getSFTransZNode(void) const
{
    return &_sfTransZNode;
}

//! Get the Manipulator::_sfTransZNode field.
inline
SFNodePtr *ManipulatorBase::editSFTransZNode(void)
{
    return &_sfTransZNode;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfTransZNode field.
inline
SFNodePtr *ManipulatorBase::getSFTransZNode(void)
{
    return &_sfTransZNode;
}
#endif

//! Get the Manipulator::_sfMaterialX field.
inline
const SFMaterialPtr *ManipulatorBase::getSFMaterialX(void) const
{
    return &_sfMaterialX;
}

//! Get the Manipulator::_sfMaterialX field.
inline
SFMaterialPtr *ManipulatorBase::editSFMaterialX(void)
{
    return &_sfMaterialX;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfMaterialX field.
inline
SFMaterialPtr *ManipulatorBase::getSFMaterialX(void)
{
    return &_sfMaterialX;
}
#endif

//! Get the Manipulator::_sfMaterialY field.
inline
const SFMaterialPtr *ManipulatorBase::getSFMaterialY(void) const
{
    return &_sfMaterialY;
}

//! Get the Manipulator::_sfMaterialY field.
inline
SFMaterialPtr *ManipulatorBase::editSFMaterialY(void)
{
    return &_sfMaterialY;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfMaterialY field.
inline
SFMaterialPtr *ManipulatorBase::getSFMaterialY(void)
{
    return &_sfMaterialY;
}
#endif

//! Get the Manipulator::_sfMaterialZ field.
inline
const SFMaterialPtr *ManipulatorBase::getSFMaterialZ(void) const
{
    return &_sfMaterialZ;
}

//! Get the Manipulator::_sfMaterialZ field.
inline
SFMaterialPtr *ManipulatorBase::editSFMaterialZ(void)
{
    return &_sfMaterialZ;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfMaterialZ field.
inline
SFMaterialPtr *ManipulatorBase::getSFMaterialZ(void)
{
    return &_sfMaterialZ;
}
#endif

//! Get the Manipulator::_sfAxisLinesN field.
inline
const SFNodePtr *ManipulatorBase::getSFAxisLinesN(void) const
{
    return &_sfAxisLinesN;
}

//! Get the Manipulator::_sfAxisLinesN field.
inline
SFNodePtr *ManipulatorBase::editSFAxisLinesN(void)
{
    return &_sfAxisLinesN;
}

#ifndef OSG_2_PREP
//! Get the Manipulator::_sfAxisLinesN field.
inline
SFNodePtr *ManipulatorBase::getSFAxisLinesN(void)
{
    return &_sfAxisLinesN;
}
#endif


//! Get the value of the Manipulator::_sfTarget field.
inline
NodePtr &ManipulatorBase::editTarget(void)
{
    return _sfTarget.getValue();
}

//! Get the value of the Manipulator::_sfTarget field.
inline
const NodePtr &ManipulatorBase::getTarget(void) const
{
    return _sfTarget.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfTarget field.
inline
NodePtr &ManipulatorBase::getTarget(void)
{
    return _sfTarget.getValue();
}
#endif

//! Set the value of the Manipulator::_sfTarget field.
inline
void ManipulatorBase::setTarget(const NodePtr &value)
{
    _sfTarget.setValue(value);
}

//! Get the value of the Manipulator::_sfActiveSubHandle field.
inline
NodePtr &ManipulatorBase::editActiveSubHandle(void)
{
    return _sfActiveSubHandle.getValue();
}

//! Get the value of the Manipulator::_sfActiveSubHandle field.
inline
const NodePtr &ManipulatorBase::getActiveSubHandle(void) const
{
    return _sfActiveSubHandle.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfActiveSubHandle field.
inline
NodePtr &ManipulatorBase::getActiveSubHandle(void)
{
    return _sfActiveSubHandle.getValue();
}
#endif

//! Set the value of the Manipulator::_sfActiveSubHandle field.
inline
void ManipulatorBase::setActiveSubHandle(const NodePtr &value)
{
    _sfActiveSubHandle.setValue(value);
}

//! Get the value of the Manipulator::_sfLastMousePos field.
inline
Pnt2f &ManipulatorBase::editLastMousePos(void)
{
    return _sfLastMousePos.getValue();
}

//! Get the value of the Manipulator::_sfLastMousePos field.
inline
const Pnt2f &ManipulatorBase::getLastMousePos(void) const
{
    return _sfLastMousePos.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfLastMousePos field.
inline
Pnt2f &ManipulatorBase::getLastMousePos(void)
{
    return _sfLastMousePos.getValue();
}
#endif

//! Set the value of the Manipulator::_sfLastMousePos field.
inline
void ManipulatorBase::setLastMousePos(const Pnt2f &value)
{
    _sfLastMousePos.setValue(value);
}

//! Get the value of the Manipulator::_sfViewport field.
inline
ViewportPtr &ManipulatorBase::editViewport(void)
{
    return _sfViewport.getValue();
}

//! Get the value of the Manipulator::_sfViewport field.
inline
const ViewportPtr &ManipulatorBase::getViewport(void) const
{
    return _sfViewport.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfViewport field.
inline
ViewportPtr &ManipulatorBase::getViewport(void)
{
    return _sfViewport.getValue();
}
#endif

//! Set the value of the Manipulator::_sfViewport field.
inline
void ManipulatorBase::setViewport(const ViewportPtr &value)
{
    _sfViewport.setValue(value);
}

//! Get the value of the Manipulator::_sfActive field.
inline
bool &ManipulatorBase::editActive(void)
{
    return _sfActive.getValue();
}

//! Get the value of the Manipulator::_sfActive field.
inline
const bool &ManipulatorBase::getActive(void) const
{
    return _sfActive.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfActive field.
inline
bool &ManipulatorBase::getActive(void)
{
    return _sfActive.getValue();
}
#endif

//! Set the value of the Manipulator::_sfActive field.
inline
void ManipulatorBase::setActive(const bool &value)
{
    _sfActive.setValue(value);
}

//! Get the value of the Manipulator::_sfLength field.
inline
Vec3f &ManipulatorBase::editLength(void)
{
    return _sfLength.getValue();
}

//! Get the value of the Manipulator::_sfLength field.
inline
const Vec3f &ManipulatorBase::getLength(void) const
{
    return _sfLength.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfLength field.
inline
Vec3f &ManipulatorBase::getLength(void)
{
    return _sfLength.getValue();
}
#endif

//! Set the value of the Manipulator::_sfLength field.
inline
void ManipulatorBase::setLength(const Vec3f &value)
{
    _sfLength.setValue(value);
}

//! Get the value of the Manipulator::_sfHandleXNode field.
inline
NodePtr &ManipulatorBase::editHandleXNode(void)
{
    return _sfHandleXNode.getValue();
}

//! Get the value of the Manipulator::_sfHandleXNode field.
inline
const NodePtr &ManipulatorBase::getHandleXNode(void) const
{
    return _sfHandleXNode.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfHandleXNode field.
inline
NodePtr &ManipulatorBase::getHandleXNode(void)
{
    return _sfHandleXNode.getValue();
}
#endif

//! Set the value of the Manipulator::_sfHandleXNode field.
inline
void ManipulatorBase::setHandleXNode(const NodePtr &value)
{
    _sfHandleXNode.setValue(value);
}

//! Get the value of the Manipulator::_sfHandleYNode field.
inline
NodePtr &ManipulatorBase::editHandleYNode(void)
{
    return _sfHandleYNode.getValue();
}

//! Get the value of the Manipulator::_sfHandleYNode field.
inline
const NodePtr &ManipulatorBase::getHandleYNode(void) const
{
    return _sfHandleYNode.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfHandleYNode field.
inline
NodePtr &ManipulatorBase::getHandleYNode(void)
{
    return _sfHandleYNode.getValue();
}
#endif

//! Set the value of the Manipulator::_sfHandleYNode field.
inline
void ManipulatorBase::setHandleYNode(const NodePtr &value)
{
    _sfHandleYNode.setValue(value);
}

//! Get the value of the Manipulator::_sfHandleZNode field.
inline
NodePtr &ManipulatorBase::editHandleZNode(void)
{
    return _sfHandleZNode.getValue();
}

//! Get the value of the Manipulator::_sfHandleZNode field.
inline
const NodePtr &ManipulatorBase::getHandleZNode(void) const
{
    return _sfHandleZNode.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfHandleZNode field.
inline
NodePtr &ManipulatorBase::getHandleZNode(void)
{
    return _sfHandleZNode.getValue();
}
#endif

//! Set the value of the Manipulator::_sfHandleZNode field.
inline
void ManipulatorBase::setHandleZNode(const NodePtr &value)
{
    _sfHandleZNode.setValue(value);
}

//! Get the value of the Manipulator::_sfTransXNode field.
inline
NodePtr &ManipulatorBase::editTransXNode(void)
{
    return _sfTransXNode.getValue();
}

//! Get the value of the Manipulator::_sfTransXNode field.
inline
const NodePtr &ManipulatorBase::getTransXNode(void) const
{
    return _sfTransXNode.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfTransXNode field.
inline
NodePtr &ManipulatorBase::getTransXNode(void)
{
    return _sfTransXNode.getValue();
}
#endif

//! Set the value of the Manipulator::_sfTransXNode field.
inline
void ManipulatorBase::setTransXNode(const NodePtr &value)
{
    _sfTransXNode.setValue(value);
}

//! Get the value of the Manipulator::_sfTransYNode field.
inline
NodePtr &ManipulatorBase::editTransYNode(void)
{
    return _sfTransYNode.getValue();
}

//! Get the value of the Manipulator::_sfTransYNode field.
inline
const NodePtr &ManipulatorBase::getTransYNode(void) const
{
    return _sfTransYNode.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfTransYNode field.
inline
NodePtr &ManipulatorBase::getTransYNode(void)
{
    return _sfTransYNode.getValue();
}
#endif

//! Set the value of the Manipulator::_sfTransYNode field.
inline
void ManipulatorBase::setTransYNode(const NodePtr &value)
{
    _sfTransYNode.setValue(value);
}

//! Get the value of the Manipulator::_sfTransZNode field.
inline
NodePtr &ManipulatorBase::editTransZNode(void)
{
    return _sfTransZNode.getValue();
}

//! Get the value of the Manipulator::_sfTransZNode field.
inline
const NodePtr &ManipulatorBase::getTransZNode(void) const
{
    return _sfTransZNode.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfTransZNode field.
inline
NodePtr &ManipulatorBase::getTransZNode(void)
{
    return _sfTransZNode.getValue();
}
#endif

//! Set the value of the Manipulator::_sfTransZNode field.
inline
void ManipulatorBase::setTransZNode(const NodePtr &value)
{
    _sfTransZNode.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialX field.
inline
MaterialPtr &ManipulatorBase::editMaterialX(void)
{
    return _sfMaterialX.getValue();
}

//! Get the value of the Manipulator::_sfMaterialX field.
inline
const MaterialPtr &ManipulatorBase::getMaterialX(void) const
{
    return _sfMaterialX.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfMaterialX field.
inline
MaterialPtr &ManipulatorBase::getMaterialX(void)
{
    return _sfMaterialX.getValue();
}
#endif

//! Set the value of the Manipulator::_sfMaterialX field.
inline
void ManipulatorBase::setMaterialX(const MaterialPtr &value)
{
    _sfMaterialX.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialY field.
inline
MaterialPtr &ManipulatorBase::editMaterialY(void)
{
    return _sfMaterialY.getValue();
}

//! Get the value of the Manipulator::_sfMaterialY field.
inline
const MaterialPtr &ManipulatorBase::getMaterialY(void) const
{
    return _sfMaterialY.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfMaterialY field.
inline
MaterialPtr &ManipulatorBase::getMaterialY(void)
{
    return _sfMaterialY.getValue();
}
#endif

//! Set the value of the Manipulator::_sfMaterialY field.
inline
void ManipulatorBase::setMaterialY(const MaterialPtr &value)
{
    _sfMaterialY.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialZ field.
inline
MaterialPtr &ManipulatorBase::editMaterialZ(void)
{
    return _sfMaterialZ.getValue();
}

//! Get the value of the Manipulator::_sfMaterialZ field.
inline
const MaterialPtr &ManipulatorBase::getMaterialZ(void) const
{
    return _sfMaterialZ.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfMaterialZ field.
inline
MaterialPtr &ManipulatorBase::getMaterialZ(void)
{
    return _sfMaterialZ.getValue();
}
#endif

//! Set the value of the Manipulator::_sfMaterialZ field.
inline
void ManipulatorBase::setMaterialZ(const MaterialPtr &value)
{
    _sfMaterialZ.setValue(value);
}

//! Get the value of the Manipulator::_sfAxisLinesN field.
inline
NodePtr &ManipulatorBase::editAxisLinesN(void)
{
    return _sfAxisLinesN.getValue();
}

//! Get the value of the Manipulator::_sfAxisLinesN field.
inline
const NodePtr &ManipulatorBase::getAxisLinesN(void) const
{
    return _sfAxisLinesN.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Manipulator::_sfAxisLinesN field.
inline
NodePtr &ManipulatorBase::getAxisLinesN(void)
{
    return _sfAxisLinesN.getValue();
}
#endif

//! Set the value of the Manipulator::_sfAxisLinesN field.
inline
void ManipulatorBase::setAxisLinesN(const NodePtr &value)
{
    _sfAxisLinesN.setValue(value);
}


OSG_END_NAMESPACE

#define OSGMANIPULATORBASE_INLINE_CVSID "@(#)$Id: OSGManipulatorBase.inl,v 1.7 2008/06/09 12:28:05 vossg Exp $"
