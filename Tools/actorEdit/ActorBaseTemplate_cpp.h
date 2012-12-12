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
 **     Do not change this file, changes should be done in the derived      **
 **     class @!Classname!@
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

//----------------------------------------------------------------------------
//    Includes
//----------------------------------------------------------------------------

#include <@!HeaderPrefix!@OSGConfig.h>
@@if UseLocalIncludes
#include "OSGNodeCore.h"
@@else
#include <OSGNodeCore.h>
@@endif

#include "OSG@!Classname!@Base.h"

OSG_USING_NAMESPACE

//----------------------------------------------------------------------------
//    Static Member Init
//----------------------------------------------------------------------------

@!Classname!@Base::EnterStoreType *@!Classname!@Base::_pClassEnterStore = NULL;
@!Classname!@Base::LeaveStoreType *@!Classname!@Base::_pClassLeaveStore = NULL;

//----------------------------------------------------------------------------
//    Destructor
//----------------------------------------------------------------------------

/*! Destructor.
 */

@!Classname!@Base::~@!Classname!@Base(void)
{
}

//----------------------------------------------------------------------------
//    Start/Stop
//----------------------------------------------------------------------------

/*! Called before a traversal begins. This method can be overridden in derived
 *  classes, but the inherited version must be called.
 */

@!Classname!@Base::ResultE
@!Classname!@Base::start(void)
{
    return @!ParentName!@::start();
}

/*! Called after a traversal ends. This method can be overridden in derived
 *  classes, but the inherited version must be called.
 */

@!Classname!@Base::ResultE
@!Classname!@Base::stop(void)
{
    return @!ParentName!@::stop();
}

//----------------------------------------------------------------------------
//    Enter/Leave
//----------------------------------------------------------------------------

@@if !EnterStore_IS_Empty
/*! This method is called when a node is entered. This method can be overridden
 *  in derived classes, but the inherited version should be called if there is
 *  nothing to do for the node.
 */

@!Classname!@Base::ResultE
@!Classname!@Base::enterNode(FunctorArgumentType &funcArg)
{
@@if EnterStore_IS_Simple
    ResultE  result = NewActionTypes::Continue;
    Functor *pFunc  = NULL;

    if((pFunc = _instanceEnterStore.getFunctor()) != NULL)
    {
        result = pFunc->call(funcArg.getNode()->getCore(), funcArg);
    }
    else if((pFunc = _pClassEnterStore->getFunctor()) != NULL)
    {
        result = pFunc->call(funcArg.getNode()->getCore(), funcArg);
    }
    else
    {
        result = @!ParentName!@::enterNode(funcArg);
    }

    return result;
@@endif
@@if EnterStore_IS_Single
    ResultE      result    = NewActionTypes::Continue;
    NodeCorePtr  pNodeCore = funcArg.getNode()->getCore();
    Functor     *pFunc     = NULL;

    if((pFunc = _instanceEnterStore.getFunctor(pNodeCore->getType())) != NULL)
    {
        result = pFunc->call(pNodeCore, funcArg);
    }
    else if((pFunc = _pClassEnterStore->getFunctor(pNodeCore->getType())) != NULL)
    {
        result = pFunc->call(pNodeCore, funcArg);
    }
    else
    {
        result = @!ParentName!@::enterNode(funcArg);
    }

    return result;
@@endif
@@if EnterStore_IS_Multi
    ResultE      result    = NewActionTypes::Continue;
    NodeCorePtr  pNodeCore = funcArg.getNode()->getCore();
    Functor     *pFunc     = NULL;

    if((pFunc = _instanceEnterStore.getFunctor(pNodeCore->getType())) != NULL)
    {
        result = pFunc->call(pNodeCore, funcArg);
    }
    else if((pFunc = _pClassEnterStore->getFunctor(pNodeCore->getType())) != NULL)
    {
        result = pFunc->call(pNodeCore, funcArg);
    }
    else
    {
        result = @!ParentName!@::enterNode(funcArg);
    }

    return result;
@@endif
}
@@endif

@@if !LeaveStore_IS_Empty
/*! This method is called when a node is left. This method can be overridden
 *  in derived classes, but the inherited version should be called if there is
 *  nothing to do for the node.
 */

@!Classname!@Base::ResultE
@!Classname!@Base::leaveNode(FunctorArgumentType &funcArg)
{
@@if LeaveStore_IS_Simple
    ResultE  result = NewActionTypes::Continue;
    Functor *pFunc  = NULL;

    if((pFunc = _instanceLeaveStore.getFunctor()) != NULL)
    {
        result = pFunc->call(funcArg.getNode()->getCore(), funcArg);
    }
    else if((pFunc = _pClassLeaveStore->getFunctor()) != NULL)
    {
        result = pFunc->call(funcArg.getNode()->getCore(), funcArg);
    }
    else
    {
        result = @!ParentName!@::leaveNode(funcArg);
    }

    return result;
@@endif
@@if LeaveStore_IS_Single
    ResultE      result    = NewActionTypes::Continue;
    NodeCorePtr  pNodeCore = funcArg.getNode()->getCore();
    Functor     *pFunc     = NULL;

    if((pFunc = _instanceLeaveStore.getFunctor(pNodeCore->getType())) != NULL)
    {
        result = pFunc->call(pNodeCore, funcArg);
    }
    else if((pFunc = _pClassLeaveStore->getFunctor(pNodeCore->getType())) != NULL)
    {
        result = pFunc->call(pNodeCore, funcArg);
    }
    else
    {
        result = @!ParentName!@::leaveNode(funcArg);
    }

    return result;
@@endif
@@if LeaveStore_IS_Multi
    ResultE      result    = NewActionTypes::Continue;
    NodeCorePtr  pNodeCore = funcArg.getNode()->getCore();
    Functor     *pFunc     = NULL;

    if((pFunc = _instanceLeaveStore.getFunctor(pNodeCore->getType())) != NULL)
    {
        result = pFunc->call(pNodeCore, funcArg);
    }
    else if((pFunc = _pClassLeaveStore->getFunctor(pNodeCore->getType())) != NULL)
    {
        result = pFunc->call(pNodeCore, funcArg);
    }
    else
    {
        result = @!ParentName!@::leaveNode(funcArg);
    }

    return result;
@@endif
}
@@endif

@@if !EnterStore_IS_Empty
//----------------------------------------------------------------------------
//    Enter Registration
//----------------------------------------------------------------------------

@@if EnterStore_IS_Simple
/*! Register a functor that is used by all instances of this class, when
 *  entering a node.
 */

void
@!Classname!@Base::regClassEnter(const Functor &refFunc)
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->regFunctor(refFunc);
}

/*! Register a functor that is used by the instance of this class, when
 *  entering a node. Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regEnter(const Functor &refFunc)
{
    _instanceEnterStore.regFunctor(refFunc);
}

/*! Remove the functor registered with regClassEnter.
 */

void
@!Classname!@Base::unregClassEnter(void)
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->unregFunctor();
}

/*! Remove the functor registered with regEnter.
 */

void
@!Classname!@Base::unregEnter(void)
{
    _instanceEnterStore.unregFunctor();
}
@@endif
@@if EnterStore_IS_Single

/*! Register a functor that is used by all instances of this class, when
 *  entering a node with a core of the specified type. Calling this method
 *  multiple times overrides the previous settings.
 */

void
@!Classname!@Base::regClassEnter(const Functor            &refFunc,
                                 const FieldContainerType &refType )
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->regFunctor(refFunc, refType);
}

/*! Register a functor that is used be the instance of this class, when
 *  entering a mode with a core of the specified type. Calling this method
 *  multiple times overrides the previous settings.
 *  Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regEnter(const Functor            &refFunc,
                            const FieldContainerType &refType )
{
    _instanceEnterStore.regFunctor(refFunc, refType);
}

/*! Register a functor that is used by all instances of this class, when
 *  entering a node with a core that has a type different from the one used
 *  with regClassEnter.
 */

void
@!Classname!@Base::regDefaultClassEnter(const Functor &refFunc)
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->regDefaultFunctor(refFunc);
}

/*! Register a functor that is used by the instance of this class, when
 *  entering a node with a core that has a type different from the one used
 *  with regEnter.
 *  Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regDefaultEnter(const Functor &refFunc)
{
    _instanceEnterStore.regDefaultFunctor(refFunc);
}

/*! Remove the functor registered with regClassEnter.
 */

void
@!Classname!@Base::unregClassEnter(void)
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->unregFunctor();
}

/*! Remove the functor registered with regEnter.
 */

void
@!Classname!@Base::unregEnter(void)
{
    _instanceEnterStore.unregFunctor();
}

/*! Remove the functor registered with regDefaultClassEnter.
 */

void
@!Classname!@Base::unregDefaultClassEnter(void)
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->unregDefaultFunctor();
}

/*! Remove the functor registered with regDefaultEnter.
 */

void
@!Classname!@Base::unregDefaultEnter(void)
{
    _instanceEnterStore.unregDefaultFunctor();
}
@@endif
@@if EnterStore_IS_Multi

/*! Register a functor that is used by all instances of this class, when
 *  entering a node with a core of the specified type.
 *  For every type of NodeCore a different functor can be registerd.
 */

void
@!Classname!@Base::regClassEnter(const Functor            &refFunc,
                                 const FieldContainerType &refType )
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->regFunctor(refFunc, refType);
}

/*! Register a functor that is used by the instance of this class, when
 *  entering a node with a core of the specified type.
 *  For every type of NodeCore a different functor can be registerd.
 *  Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regEnter(const Functor            &refFunc,
                            const FieldContainerType &refType )
{
    _instanceEnterStore.regFunctor(refFunc, refType);
}

/*! Register a functor that is used by all instances of this class, when
 *  entering a node with a core for which no specific functor was registerd.
 */

void
@!Classname!@Base::regDefaultClassEnter(const Functor &refFunc)
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->regDefaultFunctor(refFunc);
}

/*! Register a functor that is used by the instance of this class, when
 *  entering a node with a core for which no specific functor was registerd.
 *  Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regDefaultEnter(const Functor &refFunc)
{
    _instanceEnterStore.regDefaultFunctor(refFunc);
}

/*! Remove a functor registered with regClassEnter.
 */

void
@!Classname!@Base::unregClassEnter(const FieldContainerType &refType)
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->unregFunctor(refType);
}

/*! Remove a functor registered with regEnter.
 */

void
@!Classname!@Base::unregEnter(const FieldContainerType &refType)
{
    _instanceEnterStore.unregFunctor(refType);
}

/*! Remove the functor registered with regDefaultClassEnter.
 */

void
@!Classname!@Base::unregDefaultClassEnter(void)
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    _pClassEnterStore->unregDefaultFunctor();
}

/*! Remove the functor registered with regDefaultEnter.
 */

void
@!Classname!@Base::unregDefaultEnter(void)
{
    _instanceEnterStore.unregDefaultFunctor();
}
@@endif
@@endif

@@if !LeaveStore_IS_Empty
//----------------------------------------------------------------------------
//    Leave Registration
//----------------------------------------------------------------------------

@@if LeaveStore_IS_Simple
/*! Register a functor that is used by all instances of this class, when
 *  leaveing a node.
 */

void
@!Classname!@Base::regClassLeave(const Functor &refFunc)
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->regFunctor(refFunc);
}

/*! Register a functor that is used by the instance of this class, when
 *  leaveing a node. Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regLeave(const Functor &refFunc)
{
    _instanceLeaveStore.regFunctor(refFunc);
}

/*! Remove the functor registered with regClassLeave.
 */

void
@!Classname!@Base::unregClassLeave(void)
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->unregFunctor();
}

/*! Remove the functor registered with regLeave.
 */

void
@!Classname!@Base::unregLeave(void)
{
    _instanceLeaveStore.unregFunctor();
}
@@endif
@@if LeaveStore_IS_Single
/*! Register a functor that is used by all instances of this class, when
 *  leaveing a node with a core of the specified type. Calling this method
 *  multiple times overrides the previous settings.
 */

void
@!Classname!@Base::regClassLeave(const Functor            &refFunc,
                                 const FieldContainerType &refType )
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->regFunctor(refFunc, refType);
}

/*! Register a functor that is used be the instance of this class, when
 *  leaveing a mode with a core of the specified type. Calling this method
 *  multiple times overrides the previous settings.
 *  Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regLeave(const Functor            &refFunc,
                            const FieldContainerType &refType )
{
    _instanceLeaveStore.regFunctor(refFunc, refType);
}

/*! Register a functor that is used by all instances of this class, when
 *  leaveing a node with a core that has a type different from the one used
 *  with regClassLeave.
 */

void
@!Classname!@Base::regDefaultClassLeave(const Functor &refFunc)
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->regDefaultFunctor(refFunc);
}

/*! Register a functor that is used by the instance of this class, when
 *  leaveing a node with a core that has a type different from the one used
 *  with regLeave.
 *  Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regDefaultLeave(const Functor &refFunc)
{
    _instanceLeaveStore.regDefaultFunctor(refFunc);
}

/*! Remove the functor registered with regClassLeave.
 */

void
@!Classname!@Base::unregClassLeave(void)
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->unregFunctor();
}

/*! Remove the functor registered with regLeave.
 */

void
@!Classname!@Base::unregLeave(void)
{
    _instanceLeaveStore.unregFunctor();
}

/*! Remove the functor registered with regDefaultClassLeave.
 */


void
@!Classname!@Base::unregDefaultClassLeave(void)
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->unregDefaultFunctor();
}

/*! Remove the functor registered with regDefaultLeave.
 */

void
@!Classname!@Base::unregDefaultLeave(void)
{
    _instanceLeaveStore.unregDefaultFunctor();
}
@@endif
@@if LeaveStore_IS_Multi
/*! Register a functor that is used by all instances of this class, when
 *  leaveing a node with a core of the specified type.
 *  For every type of NodeCore a different functor can be registerd.
 */

void
@!Classname!@Base::regClassLeave(const Functor            &refFunc,
                                 const FieldContainerType &refType )
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->regFunctor(refFunc, refType);
}

/*! Register a functor that is used by the instance of this class, when
 *  leaveing a node with a core of the specified type.
 *  For every type of NodeCore a different functor can be registerd.
 *  Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regLeave(const Functor            &refFunc,
                            const FieldContainerType &refType )
{
    _instanceLeaveStore.regFunctor(refFunc, refType);
}

/*! Register a functor that is used by all instances of this class, when
 *  leaveing a node with a core for which no specific functor was registerd.
 */

void
@!Classname!@Base::regDefaultClassLeave(const Functor &refFunc)
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->regDefaultFunctor(refFunc);
}

/*! Register a functor that is used by the instance of this class, when
 *  leaveing a node with a core for which no specific functor was registerd.
 *  Instance functors take priority over class functors.
 */

void
@!Classname!@Base::regDefaultLeave(const Functor &refFunc)
{
    _instanceLeaveStore.regDefaultFunctor(refFunc);
}

/*! Remove a functor registered with regClassLeave.
 */

void
@!Classname!@Base::unregClassLeave(const FieldContainerType &refType)
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->unregFunctor(refType);
}

/*! Remove a functor registered with regLeave.
 */

void
@!Classname!@Base::unregLeave(const FieldContainerType &refType)
{
    _instanceLeaveStore.unregFunctor(refType);
}

/*! Remove the functor registered with regDefaultClassLeave.
 */

void
@!Classname!@Base::unregDefaultClassLeave(void)
{
    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

    _pClassLeaveStore->unregDefaultFunctor();
}

/*! Remove the functor registered with regDefaultLeave.
 */

void
@!Classname!@Base::unregDefaultLeave(void)
{
    _instanceLeaveStore.unregDefaultFunctor();
}
@@endif
@@endif

//----------------------------------------------------------------------------
//    State Management
//----------------------------------------------------------------------------

#ifdef OSG_NEWACTION_STATESLOTINTERFACE

UInt32
@!Classname!@Base::createStateClone(void)
{
    UInt32     stateSlot = getSlotMap   (               ).size();
    StateType *pClone    = new StateType(*getCastState());

    getSlotMap().push_back(pClone);

    setState(pClone);

    return stateSlot;
}

#else /* OSG_NEWACTION_STATESLOTINTERFACE */

@!Classname!@Base::ActorBaseState *
@!Classname!@Base::createStateClone(void)
{
    StateType *pClone = new StateType(*getCastState());

    setState(pClone);

    return pClone;
}

#endif /* OSG_NEWACTION_STATESLOTINTERFACE */

#ifdef OSG_NEWACTION_STATESLOTINTERFACE

void
@!Classname!@Base::destroyStateClone(UInt32 slotId)
{
    delete getSlotMap()[slotId];
}

#else /* OSG_NEWACTION_STATESLOTINTERFACE */

void
@!Classname!@Base::destroyStateClone(ActorBaseState *pState)
{
    delete pState;
}

#endif /* OSG_NEWACTION_STATESLOTINTERFACE */

void
@!Classname!@Base::createInitialState(void)
{
    if(getState() != NULL)
    {
        SWARNING << "@!Classname!@Base::createInitialState: State is not NULL."
                 << endLog;
    }

    setState(new StateType());
}

void
@!Classname!@Base::deleteInitialState(void)
{
    if(getState() == NULL)
    {
        SWARNING << "@!Classname!@Base::deleteInitalState: State is NULL."
                 << endLog;
    }

    delete getState();

    setState(NULL);
}


//----------------------------------------------------------------------------
//    State Class
//----------------------------------------------------------------------------

/*! Destructor.
 */

@!Classname!@Base::@!Classname!@BaseState::~@!Classname!@BaseState(void)
{
}

//----------------------------------------------------------------------------
//    Constructors
//----------------------------------------------------------------------------

/*! Default Constructor.
 */

@!Classname!@Base::@!Classname!@Base(void)
    : Inherited(),
@@BeginStateLoop@@
@@if !StateElem_IS_Hierarchical
      _state@!StateElemName!@(@!StateElemDefaultValue!@),
@@endif
@@EndStateLoop@@
      _instanceEnterStore(),
      _instanceLeaveStore()
{
    if(_pClassEnterStore == NULL)
        _pClassEnterStore = new EnterStoreType();

    if(_pClassLeaveStore == NULL)
        _pClassLeaveStore = new LeaveStoreType();

@@if !EnterStore_IS_Empty
    setEnterNodeFlag(true);
@@endif
@@if !LeaveStore_IS_Empty
    setLeaveNodeFlag(true);
@@endif
}

//----------------------------------------------------------------------------
//    Event Notification
//----------------------------------------------------------------------------

/*! Called when the actor is attached to an action. This method can
 *  be overridden in derived classes, but the inherited version must be called.
 */

void
@!Classname!@Base::addEvent(NewActionBase *pAction, UInt32 uiActorId)
{
    Inherited::addEvent(pAction, uiActorId);
}

/*! Called when the actor is detached from an action. This method can
 *  be overridden in derived classes, but the inherited version must be called.
 */

void
@!Classname!@Base::subEvent(NewActionBase *pAction, UInt32 uiActorId)
{
    Inherited::subEvent(pAction, uiActorId);
}

/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning(disable : 177)
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: ActorBaseTemplate_cpp.h,v 1.3 2004/09/17 14:11:15 neumannc Exp $";
    static Char8 cvsid_hpp       [] = OSG@!CLASSNAME!@BASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSG@!CLASSNAME!@BASE_INLINE_CVSID;
}

#ifdef OSG_LINUX_ICC
#pragma warning(enable : 177)
#endif

#ifdef OSG_SGI_CC
#pragma reset woff 1174
#endif
