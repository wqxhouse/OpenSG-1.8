/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2000,2001,2002 by the OpenSG Forum                *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include "OSGConfig.h"

#include "OSGShadingGeometry.h"

OSG_USING_NAMESPACE

FieldContainerType ShadingGeometry::_type(
    "ShadingGeometry",
    "NodeCore",
    NULL,
    (PrototypeCreateF) &ShadingGeometry::createEmpty,
    NULL,
    NULL,
    0);


OSG_FIELD_CONTAINER_DEF(ShadingGeometry, ShadingGeometry::Ptr);

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

ShadingGeometry::ShadingGeometry(void) :
     Inherited    (),
    _shadingGroups()
{
}

ShadingGeometry::ShadingGeometry(const ShadingGeometry &source) :
     Inherited    (source               ),
    _shadingGroups(source._shadingGroups)
{
}

/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

ShadingGeometry::~ShadingGeometry(void)
{
}

/*-------------------------------------------------------------------------*/
/*                             Assignment                                  */

/*-------------------------------------------------------------------------*/
/*                             Comparison                                  */

/*-------------------------------------------------------------------------*/
/*                              cvs id's                                   */

#ifdef __sgi
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp[] = "@(#)$Id: $";
    static Char8 cvsid_hpp[] = OSGSHADINGGEOMETRY_HEADER_CVSID;
    static Char8 cvsid_inl[] = OSGSHADINGGEOMETRY_INLINE_CVSID;
}

