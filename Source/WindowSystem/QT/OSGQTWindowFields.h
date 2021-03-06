/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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


#ifndef _OSGQTWINDOWFIELDS_H_
#define _OSGQTWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>

#include <OSGFieldContainerPtr.h>
#include <OSGNodeCoreFieldDataType.h>
#include <OSGWindowQTDef.h>

#include <OSGWindowFields.h>

OSG_BEGIN_NAMESPACE

class QTWindow;

//! QTWindowPtr

typedef FCPtr<WindowPtr, QTWindow> QTWindowPtr;

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

/*! \brief QTWindowPtr field traits 
    \ingroup GrpWindowQTField
    \ingroup GrpWindowQTFieldTraits
 */

template <>
struct FieldDataTraits<QTWindowPtr> : 
    public FieldTraitsRecurseMapper<QTWindowPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType &getType (void) { return _type;        }

    static char     *getSName(void) { return "SFQTWindowPtr"; }
    static char     *getMName(void) { return "MFQTWindowPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class FieldTraitsRecurseMapper<QTWindowPtr, true> */
/*! \hideinhierarchy                                   */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS) 
/*! \ingroup GrpWindowQTFieldSingle */

typedef SField<QTWindowPtr> SFQTWindowPtr;
#endif

#ifndef OSG_COMPILEQTWINDOWINST
OSG_DLLEXPORT_DECL1(SField, QTWindowPtr, OSG_WINDOWQTLIB_DLLTMPLMAPPING)
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS) 
/*! \ingroup GrpWindowQTFieldMulti */

typedef MField<QTWindowPtr> MFQTWindowPtr;
#endif

#ifndef OSG_COMPILEQTWINDOWINST
OSG_DLLEXPORT_DECL1(MField, QTWindowPtr, OSG_WINDOWQTLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGQTWINDOWFIELDS_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGQTWINDOWFIELDS_H_ */
