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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSHINGE2JOINTFIELDS_H_
#define _OSGPHYSICSHINGE2JOINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>

#include <OSGFieldContainerPtr.h>
#include <OSGNodeCoreFieldDataType.h>
#include <OSGContribDef.h>

#include <OSGPhysicsJointFields.h>

OSG_BEGIN_NAMESPACE

class PhysicsHinge2Joint;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! PhysicsHinge2JointPtr

typedef FCPtr<PhysicsJointPtr, PhysicsHinge2Joint> PhysicsHinge2JointPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpContribFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<PhysicsHinge2JointPtr> : 
    public FieldTraitsRecurseMapper<PhysicsHinge2JointPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFPhysicsHinge2JointPtr"; }
    static const char *getMName(void) { return "MFPhysicsHinge2JointPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<PhysicsHinge2JointPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribFieldSingle */

typedef SField<PhysicsHinge2JointPtr> SFPhysicsHinge2JointPtr;
#endif

#ifndef OSG_COMPILEPHYSICSHINGE2JOINTINST
OSG_DLLEXPORT_DECL1(SField, PhysicsHinge2JointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribFieldMulti */

typedef MField<PhysicsHinge2JointPtr> MFPhysicsHinge2JointPtr;
#endif

#ifndef OSG_COMPILEPHYSICSHINGE2JOINTINST
OSG_DLLEXPORT_DECL1(MField, PhysicsHinge2JointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGPHYSICSHINGE2JOINTFIELDS_HEADER_CVSID "@(#)$Id: OSGPhysicsHinge2JointFields.h,v 1.5 2008/06/09 12:28:02 vossg Exp $"

#endif /* _OSGPHYSICSHINGE2JOINTFIELDS_H_ */
