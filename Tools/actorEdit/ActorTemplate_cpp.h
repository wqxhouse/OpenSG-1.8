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

//----------------------------------------------------------------------------
//    Includes
//----------------------------------------------------------------------------

#include "OSG@!Classname!@.h"

OSG_USING_NAMESPACE

//----------------------------------------------------------------------------
//    Create
//----------------------------------------------------------------------------

/*! Create a new instance of this actor.
 */

@!Classname!@ *
@!Classname!@::create(void)
{
    return new @!Classname!@();
}

//----------------------------------------------------------------------------
//    Destructor
//----------------------------------------------------------------------------

/*! Destructor.
 */

@!Classname!@::~@!Classname!@(void)
{
}

//----------------------------------------------------------------------------
//    Enter/Leave
//----------------------------------------------------------------------------

@@if EnterStore_IS_Empty
/*! Default implementation, replace with your own code.
 */

@!Classname!@::ResultE
@!Classname!@::enterNode(const NodePtr &pNode, UInt32 pass)
{
    return Inherited::enterNode(pNode, pass);
}
@@endif

@@if LeaveStore_IS_Empty
/*! Default implementation, replace with your own code.
 */

@!Classname!@::ResultE
@!Classname!@::leaveNode(const NodePtr &pNode, UInt32 pass)
{
    return Inherited::leaveNode(pNode, pass);
}
@@endif

//----------------------------------------------------------------------------
//    Constructors
//----------------------------------------------------------------------------

/*! Constructor.
 */

@!Classname!@::@!Classname!@(void)
    : Inherited()
{
}

/*------------------------------------------------------------------------*/
/*    cvs id's                                                            */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning(disable : 177)
#endif

namespace
{
    static Char8 cvsid_cpp     [] = "@(#)$Id:";
    static Char8 cvsid_hpp     [] = OSG@!CLASSNAME!@_HEADER_CVSID;
    static Char8 cvsid_inl     [] = OSG@!CLASSNAME!@_INLINE_CVSID;
}


#ifdef OSG_LINUX_ICC
#pragma warning(enable : 177)
#endif

#ifdef OSG_SGI_CC
#pragma reset woff 1174
#endif
