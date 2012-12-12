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



// System declarations

#include "OSGConfig.h"

// Class declarations
#include "OSGColor.h"
#include "OSGMathIO.h"

#include "OSGColor.ins"

OSG_BEGIN_NAMESPACE

// Null values

//OSG_BASE_DLLMAPPING Color3f     OSG::NullColor3f( 0,0,0 );
//OSG_BASE_DLLMAPPING Color4f     OSG::NullColor4f( 0,0,0,0 );
//OSG_BASE_DLLMAPPING Color3ub    OSG::NullColor3ub( 0,0,0 );
//OSG_BASE_DLLMAPPING Color4ub    OSG::NullColor4ub( 0,0,0,0 );

OSG_COLOR3_OUTPUT_OP_INST(Real32);
OSG_COLOR3_OUTPUT_OP_INST(UInt8);

OSG_COLOR3_INPUT_OP_INST(Real32);
OSG_COLOR3_INPUT_OP_INST(UInt8);


OSG_COLOR4_OUTPUT_OP_INST(Real32);
OSG_COLOR4_OUTPUT_OP_INST(UInt8);

OSG_COLOR4_INPUT_OP_INST(Real32);
OSG_COLOR4_INPUT_OP_INST(UInt8);

OSG_END_NAMESPACE
