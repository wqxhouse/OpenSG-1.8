/* This is a template file for fcdEdit.
 * To create it from sample source,  cut'n'paste the source and apply the following
 * substitutions:
 * s|\|\\|g 
 * s|"|\"|g 
 * s|^|"| 
 * s|$|",|
 */

char *FCTemplate_h[]={
"/*---------------------------------------------------------------------------*\\",
" *                                OpenSG                                     *",
" *                                                                           *",
" *                                                                           *",
" *               Copyright (C) 2000-2002 by the OpenSG Forum                 *",
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
"#ifndef _OSG@!CLASSNAME!@_H_",
"#define _OSG@!CLASSNAME!@_H_",
"#ifdef __sgi",
"#pragma once",
"#endif",
"",
"#include <@!HeaderPrefix!@OSGConfig.h>",
"",
"@@if useLocalIncludes",
"#include \"OSG@!Classname!@Base.h\"",
"@@else",
"#include <OSG@!Classname!@Base.h>",
"@@endif",
"",
"OSG_BEGIN_NAMESPACE",
"",
"@@if Library",
"/*! \\brief @!Classname!@ class. See \\ref ",
"           Page@!Libname!@@!Classname!@ for a description.",
"*/",
"",
"class OSG_@!LIBNAME!@LIB_DLLMAPPING @!Classname!@ : public @!Classname!@Base",
"@@else",
"class @!Classname!@ : public @!Classname!@Base",
"@@endif",
"{",
"  private:",
"",
"    typedef @!Classname!@Base Inherited;",
"",
"    /*==========================  PUBLIC  =================================*/",
"  public:",
"",
"    /*---------------------------------------------------------------------*/",
"    /*! \\name                      Sync                                    */",
"    /*! \\{                                                                 */",
"",
"    virtual void changed(BitVector  whichField, ",
"                         UInt32     origin    );",
"",
"    /*! \\}                                                                 */",
"    /*---------------------------------------------------------------------*/",
"    /*! \\name                     Output                                   */",
"    /*! \\{                                                                 */",
"",
"    virtual void dump(      UInt32     uiIndent = 0, ",
"                      const BitVector  bvFlags  = 0) const;",
"",
"    /*! \\}                                                                 */",
"    /*=========================  PROTECTED  ===============================*/",
"  protected:",
"",
"    // Variables should all be in @!Classname!@Base.",
"",
"    /*---------------------------------------------------------------------*/",
"    /*! \\name                  Constructors                                */",
"    /*! \\{                                                                 */",
"",
"    @!Classname!@(void);",
"    @!Classname!@(const @!Classname!@ &source);",
"",
"    /*! \\}                                                                 */",
"    /*---------------------------------------------------------------------*/",
"    /*! \\name                   Destructors                                */",
"    /*! \\{                                                                 */",
"",
"    virtual ~@!Classname!@(void); ",
"",
"    /*! \\}                                                                 */",
"    ",
"    /*==========================  PRIVATE  ================================*/",
"  private:",
"",
"    friend class FieldContainer;",
"    friend class @!Classname!@Base;",
"",
"    static void initMethod(void);",
"",
"    // prohibit default functions (move to 'public' if you need one)",
"",
"    void operator =(const @!Classname!@ &source);",
"};",
"",
"typedef @!Classname!@ *@!Classname!@P;",
"",
"OSG_END_NAMESPACE",
"",
"@@if useLocalIncludes",
"#include \"OSG@!Classname!@Base.inl\"",
"#include \"OSG@!Classname!@.inl\"",
"@@else",
"#include <OSG@!Classname!@Base.inl>",
"#include <OSG@!Classname!@.inl>",
"@@endif",
"",
"#define OSG@!CLASSNAME!@_HEADER_CVSID \"@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $\"",
"",
"#endif /* _OSG@!CLASSNAME!@_H_ */",
NULL };
