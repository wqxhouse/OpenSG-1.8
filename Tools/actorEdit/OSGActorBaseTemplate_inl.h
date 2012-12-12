
const char *ActorBaseTemplate_inl[] =
{
"/*---------------------------------------------------------------------------*\\",
" *                                OpenSG                                     *",
" *                                                                           *",
" *                                                                           *",
" *             Copyright (C) 2000-2002 by the OpenSG Forum                   *",
" *                                                                           *",
" *                            www.opensg.org                                 *",
" *                                                                           *",
" *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"/*---------------------------------------------------------------------------*\\",
" *                                License                                    *",
" *                                                                           *",
" * This library is free software; you can redistribute it and/or modify it   *",
" * under the terms of the GNU Library General Public License as published    *",
" * by the Free Software Foundation, version 2.                               *",
" *                                                                           *",
" * This library is distributed in the hope that it will be useful, but       *",
" * WITHOUT ANY WARRANTY; without even the implied warranty of                *",
" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *",
" * Library General Public License for more details.                          *",
" *                                                                           *",
" * You should have received a copy of the GNU Library General Public         *",
" * License along with this library; if not, write to the Free Software       *",
" * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"/*---------------------------------------------------------------------------*\\",
" *                                Changes                                    *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"",
"/*****************************************************************************\\",
" *****************************************************************************",
" **                                                                         **",
" **                  This file is automatically generated.                  **",
" **                                                                         **",
" **          Any changes made to this file WILL be lost when it is          **",
" **           regenerated, which can become necessary at any time.          **",
" **                                                                         **",
" **     Do not change this file, changes should be done in the derived      **",
" **     class @!Classname!@",
" **                                                                         **",
" *****************************************************************************",
"\\*****************************************************************************/",
"",
"",
"OSG_BEGIN_NAMESPACE",
"",
"//----------------------------------------------------------------------------",
"//    State Access",
"//----------------------------------------------------------------------------",
"",
"/*! Return the StatePtr, cast to this actor's state class",
" *  @!Classname!@BaseState",
" */",
"",
"inline const @!Classname!@Base::@!Classname!@BaseState *",
"@!Classname!@Base::getCastState(void) const",
"{",
"    return reinterpret_cast<const @!Classname!@BaseState *>(getState());",
"}",
"",
"/*! Return the StatePtr, cast to this actor's state class",
" *  @!Classname!@BaseState",
" */",
"",
"inline @!Classname!@Base::@!Classname!@BaseState *",
"@!Classname!@Base::getCastState(void)",
"{",
"    return reinterpret_cast<@!Classname!@BaseState *>(getState());",
"}",
"",
"//----------------------------------------------------------------------------",
"//    State Class",
"//----------------------------------------------------------------------------",
"",
"/*! Default constructor.",
" */",
"",
"inline",
"@!Classname!@Base::@!Classname!@BaseState::@!Classname!@BaseState(void) :",
"@@BeginStateLoop@@",
"@@if StateElem_IS_Hierarchical",
"      _state@!StateElemName!@(@!StateElemDefaultValue!@),",
"@@endif",
"@@EndStateLoop@@",
"      ParentStateType()",
"{",
"}",
"",
"/*! Copy constructor.",
" */",
"",
"inline",
"@!Classname!@Base::@!Classname!@BaseState::@!Classname!@BaseState(",
"    const @!Classname!@BaseState &source) :",
"@@BeginStateLoop@@",
"@@if StateElem_IS_Hierarchical",
"      _state@!StateElemName!@(source._state@!StateElemName!@),",
"@@endif",
"@@EndStateLoop@@",
"      ParentStateType(source)",
"{",
"}",
"",
"@@BeginStateLoop@@",
"@@if StateElem_IS_Hierarchical",
"/*! Return the state element @!StateElemName!@. For internal use only.",
" */",
"",
"inline const @!StateElemType!@ &",
"@!Classname!@Base::@!Classname!@BaseState::get@!StateElemName!@(void) const",
"{",
"    return _state@!StateElemName!@;",
"}",
"",
"/*! Return the state element @!StateElemName!@. For internal use only.",
" */",
"",
"inline @!StateElemType!@ &",
"@!Classname!@Base::@!Classname!@BaseState::get@!StateElemName!@(void)",
"{",
"    return _state@!StateElemName!@;",
"}",
"@@endif",
"@@EndStateLoop@@",
"",
"//----------------------------------------------------------------------------",
"//    Public State Access",
"//----------------------------------------------------------------------------",
"",
"@@BeginStateLoop@@",
"@@if StateElem_IS_Public",
"/*! Return the state element @!StateElemName!@.",
"@@if StateElem_IS_Hierarchical",
" *  \\warning This state element can only be accessed after the actor was",
" *  attached to an action.",
"@@endif",
" */",
"",
"inline const @!StateElemType!@ &",
"@!Classname!@Base::get@!StateElemName!@(void) const",
"{",
"@@if StateElem_IS_Hierarchical",
"    return getCastState()->get@!StateElemName!@();",
"@@else",
"    return _state@!StateElemName!@;",
"@@endif",
"}",
"",
"/*! Return the state element @!StateElemName!@.",
"@@if StateElem_IS_Hierarchical",
" *  \\warning This state element can only be accessed after the actor was",
" *  attached to an action.",
"@@endif",
" */",
"",
"inline @!StateElemType!@ &",
"@!Classname!@Base::get@!StateElemName!@(void)",
"{",
"@@if StateElem_IS_Hierarchical",
"    return getCastState()->get@!StateElemName!@();",
"@@else",
"    return _state@!StateElemName!@;",
"@@endif",
"}",
"",
"/*! Set the state element @!StateElemName!@.",
"@@if StateElem_IS_Hierarchical",
" *  \\warning This state element can only be accessed after the actor was",
" *  attached to an action.",
"@@endif",
" */",
"",
"inline void",
"@!Classname!@Base::set@!StateElemName!@(const @!StateElemType!@ &stateVal)",
"{",
"@@if StateElem_IS_Hierarchical",
"    getCastState()->get@!StateElemName!@() = stateVal;",
"@@else",
"    _state@!StateElemName!@ = stateVal;",
"@@endif",
"}",
"@@endif",
"@@EndStateLoop@@",
"",
"//----------------------------------------------------------------------------",
"//    Protected State Access",
"//----------------------------------------------------------------------------",
"",
"@@BeginStateLoop@@",
"@@if StateElem_IS_Protected",
"/*! Return the state element @!StateElemName!@.",
"@@if StateElem_IS_Hierarchical",
" *  \\warning This state element can only be accessed after the actor was",
" *  attached to an action.",
"@@endif",
" */",
"",
"inline const @!StateElemType!@ &",
"@!Classname!@Base::get@!StateElemName!@(void) const",
"{",
"@@if StateElem_IS_Hierarchical",
"    return getCastState()->get@!StateElemName!@();",
"@@else",
"    return _state@!StateElemName!@;",
"@@endif",
"}",
"",
"/*! Return the state element @!StateElemName!@.",
"@@if StateElem_IS_Hierarchical",
" *  \\warning This state element can only be accessed after the actor was",
" *  attached to an action.",
"@@endif",
" */",
"",
"inline @!StateElemType!@ &",
"@!Classname!@Base::get@!StateElemName!@(void)",
"{",
"@@if StateElem_IS_Hierarchical",
"    return getCastState()->get@!StateElemName!@();",
"@@else",
"    return _state@!StateElemName!@;",
"@@endif",
"}",
"",
"/*! Set the state element @!StateElemName!@.",
"@@if StateElem_IS_Hierarchical",
" *  \\warning This state element can only be accessed after the actor was",
" *  attached to an action.",
"@@endif",
" */",
"",
"inline void",
"@!Classname!@Base::set@!StateElemName!@(const @!StateElemType!@ &stateVal)",
"{",
"@@if StateElem_IS_Hierarchical",
"    return getCastState()->get@!StateElemName!@() = stateVal;",
"@@else",
"    _state@!StateElemName!@ = stateVal;",
"@@endif",
"}",
"@@endif",
"@@EndStateLoop@@",
"",
"OSG_END_NAMESPACE",
"",
"#define OSG@!CLASSNAME!@BASE_INLINE_CVSID \"@(#)$Id: OSGActorBaseTemplate_inl.h,v 1.3 2004/09/13 09:45:20 neumannc Exp $\"",
NULL
};
