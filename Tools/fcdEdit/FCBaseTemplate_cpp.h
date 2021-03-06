/* This is a template file for fcdEdit.
 * To create it from sample source,  cut'n'paste the source and apply the following
 * substitutions:
 * s|\|\\|g 
 * s|"|\"|g 
 * s|^|"| 
 * s|$|",|
 */

char *FCBaseTemplate_cpp[]={
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
"/*****************************************************************************\\",
" *****************************************************************************",
" **                                                                         **",
" **                  This file is automatically generated.                  **",
" **                                                                         **",
" **          Any changes made to this file WILL be lost when it is          **",
" **           regenerated, which can become necessary at any time.          **",
" **                                                                         **",
" **     Do not change this file, changes should be done in the derived      **",
" **     class @!Classname!@!",
" **                                                                         **",
" *****************************************************************************",
"\\*****************************************************************************/",
"",
"",
"#define OSG_COMPILE@!CLASSNAME!@INST",
"",
"#include <stdlib.h>",
"#include <stdio.h>",
"",
"#include <@!HeaderPrefix!@OSGConfig.h>",
"",
"#include \"OSG@!Classname!@Base.h\"",
"#include \"OSG@!Classname!@.h\"",
"",
"@@BeginFieldLoop@@",
"@@if hasDefaultHeader", 
"#include @!FieldDefaultHeader:30!@   // @!Fieldname!@ default header",
"@@endif", 
"@@EndFieldLoop@@",
"",
"OSG_BEGIN_NAMESPACE",
"",
"@@if Decorator",
"const OSG::BitVector  @!Classname!@Base::DecorateeFieldMask = ",
"    (TypeTraits<BitVector>::One << @!Classname!@Base::DecorateeFieldId);",
"const OSG::BitVector @!Classname!@Base::MTInfluenceMask = ",
"    (Inherited::MTInfluenceMask) | ",
"    (static_cast<BitVector>(@!LocalMTInfluenceMask!@) << Inherited::NextFieldId); ",
"@@else",
"@@if hasFields", 
"@@BeginFieldLoop@@",
"const OSG::BitVector  @!Classname!@Base::@!Fieldname!@FieldMask = ",
"    (TypeTraits<BitVector>::One << @!Classname!@Base::@!Fieldname!@FieldId);",
"",
"@@EndFieldLoop@@",
"@@endif",
"const OSG::BitVector @!Classname!@Base::MTInfluenceMask = ",
"    (Inherited::MTInfluenceMask) | ",
"    (static_cast<BitVector>(@!LocalMTInfluenceMask!@) << Inherited::NextFieldId); ",
//"",
//"const OSG::UInt32        @!Classname!@Base::NextFieldId; ",
//"const OSG::BitVector     @!Classname!@Base::NextFieldMask;",
"",
"@@endif", 
"",
"@@if hasFields", 
"// Field descriptions",
"",
"@@if Decorator",
"/*! \\var @!Parent!@Ptr @!Classname!@Base::_sfDecoratee",
"    The object being decorated",
"*/",
"@@else",
"@@BeginFieldLoop@@",
"/*! \\var @!Fieldtype:15!@ @!Classname!@Base::_@!fieldname!@",
"    @!Fielddescription!@",
"*/",
"@@EndFieldLoop@@",
"@@endif",
"",
"//! @!Classname!@ description",
"",
"FieldDescription *@!Classname!@Base::_desc[] = ",
"{",
"@@if Decorator",
"    new FieldDescription(SF@!Parent!@Ptr::getClassType(), ",
"                     \"decoratee\", ",
"                     DecorateeFieldId, DecorateeFieldMask,",
"                     true,",
"                     reinterpret_cast<FieldAccessMethod>(&@!Classname!@Base::editSFDecoratee))",
"@@else",
"@@BeginFieldLoop@@",
"    new FieldDescription(@!CARDINALITY!@@!CapsFieldtypeClean!@::getClassType(), ",
"                     \"@!fieldnameDesc!@\", ",
"                     @!Fieldname!@FieldId, @!Fieldname!@FieldMask,",
"                     @!fieldvisibility!@,",
"                     reinterpret_cast<FieldAccessMethod>(&@!Classname!@Base::edit"
"@!CARDINALITY!@@!Fieldname!@))@!FieldSeparator!@",
"@@EndFieldLoop@@",
"@@endif",
"};",
"",
"@@endif", 
"",
"FieldContainerType @!Classname!@Base::_type(",
"    \"@!Classname!@\",",
"    \"@!Parent!@\",",
"    NULL,",
"@@if abstract", 
"    NULL, ", 
"@@else", 
"    reinterpret_cast<PrototypeCreateF>(&@!Classname!@Base::createEmpty),",
"@@endif", 
"    @!Classname!@::initMethod,",
"@@if hasFields", 
"    _desc,",
"    sizeof(_desc));",
"@@else", 
"    NULL,", 
"    0);", 
"@@endif", 
"",
"//OSG_FIELD_CONTAINER_DEF(@!Classname!@Base, @!Classname!@Ptr)",
"",
"/*------------------------------ get -----------------------------------*/",
"",
"FieldContainerType &@!Classname!@Base::getType(void) ",
"{",
"    return _type; ",
"} ",
"",
"const FieldContainerType &@!Classname!@Base::getType(void) const ",
"{",
"    return _type;",
"} ",
"",
"",
"@@if !Abstract",
"FieldContainerPtr @!Classname!@Base::shallowCopy(void) const ",
"{ ",
"    @!Classname!@Ptr returnValue; ",
"",
"    newPtr(returnValue, dynamic_cast<const @!Classname!@ *>(this)); ",
"",
"    return returnValue; ",
"}",
"",
"@@endif",
"UInt32 @!Classname!@Base::getContainerSize(void) const ",
"{ ",
"    return sizeof(@!Classname!@); ",
"}",
"",
"",
"#if !defined(OSG_FIXED_MFIELDSYNC)",
"void @!Classname!@Base::executeSync(      FieldContainer &other,",
"                                    const BitVector      &whichField)",
"{",
"    this->executeSyncImpl(static_cast<@!Classname!@Base *>(&other),",
"                          whichField);", 
"}",
"#else",
"void @!Classname!@Base::executeSync(      FieldContainer &other,",
"                                    const BitVector      &whichField,"
"                                    const SyncInfo       &sInfo     )",
"{",
"    this->executeSyncImpl((@!Classname!@Base *) &other, whichField, sInfo);", 
"}",
""
"void @!Classname!@Base::execBeginEdit(const BitVector &whichField, ",
"                                            UInt32     uiAspect,",
"                                            UInt32     uiContainerSize) ",
"{",
"    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);",
"}",
"",
"void @!Classname!@Base::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)",
"{",
"    Inherited::onDestroyAspect(uiId, uiAspect);",
"",
"@@BeginMFFieldLoop@@",
"    _@!fieldname!@.terminateShare(uiAspect, this->getContainerSize());",
"@@EndMFFieldLoop@@",
"}",
"#endif",
"",
"/*------------------------- constructors ----------------------------------*/",
"",
"#ifdef OSG_WIN32_ICL",
"#pragma warning (disable : 383)",
"#endif",
"",
"@!Classname!@Base::@!Classname!@Base(void) :",
"@@if Decorator",
"    _sfDecoratee(),",
"@@else",
"@@BeginFieldLoop@@",
"    _@!fieldname:25!@(@!FieldTypedDefault!@), ",
"@@EndFieldLoop@@",
"@@endif",
"    Inherited() ",
"{",
"}",
"",
"#ifdef OSG_WIN32_ICL",
"#pragma warning (default : 383)",
"#endif",
"",
"@!Classname!@Base::@!Classname!@Base(const @!Classname!@Base &source) :",
"@@if Decorator",
"    _sfDecoratee(source._sfDecoratee),",
"@@else",
"@@BeginFieldLoop@@",
"    _@!fieldname:25!@(source._@!fieldname:25!@), ",
"@@EndFieldLoop@@",
"@@endif",
"    Inherited                 (source)",
"{",
"}",
"",
"/*-------------------------- destructors ----------------------------------*/",
"",
"@!Classname!@Base::~@!Classname!@Base(void)",
"{",
"}",
"",
"/*------------------------------ access -----------------------------------*/",
"",
"UInt32 @!Classname!@Base::getBinSize(const BitVector &whichField)",
"{",
"    UInt32 returnValue = Inherited::getBinSize(whichField);",
"",
"@@if Decorator",
"    if(FieldBits::NoField != (DecorateeFieldMask & whichField))",
"    {",
"        returnValue += _sfDecoratee.getBinSize();",
"    }",
"@@else",
"@@BeginFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"    {",
"        returnValue += _@!fieldname!@.getBinSize();",
"    }",
"",
"@@EndFieldLoop@@",
"@@endif",
"",
"    return returnValue;",
"}",
"",
"void @!Classname!@Base::copyToBin(      BinaryDataHandler &pMem,",
"                                  const BitVector         &whichField)",
"{",
"    Inherited::copyToBin(pMem, whichField);",
"",
"@@if Decorator",
"    if(FieldBits::NoField != (DecorateeFieldMask & whichField))",
"    {",
"        _sfDecoratee.copyToBin(pMem);",
"    }",
"@@else",
"@@BeginFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"    {",
"        _@!fieldname!@.copyToBin(pMem);",
"    }",
"",
"@@EndFieldLoop@@",
"@@endif",
"",
"}",
"",
"void @!Classname!@Base::copyFromBin(      BinaryDataHandler &pMem,",
"                                    const BitVector    &whichField)",
"{",
"    Inherited::copyFromBin(pMem, whichField);",
"",
"@@if Decorator",
"    if(FieldBits::NoField != (DecorateeFieldMask & whichField))",
"    {",
"        _sfDecoratee.copyFromBin(pMem);",
"    }",
"@@else",
"@@BeginFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"    {",
"        _@!fieldname!@.copyFromBin(pMem);",
"    }",
"",
"@@EndFieldLoop@@",
"@@endif",
"",
"}",
"",
"#if !defined(OSG_FIXED_MFIELDSYNC)",
"void @!Classname!@Base::executeSyncImpl(      @!Classname!@Base *pOther,",
"                                        const BitVector         &whichField)",
"{",
"",
"    Inherited::executeSyncImpl(pOther, whichField);",
"",
"@@if Decorator",
"    if(FieldBits::NoField != (DecorateeFieldMask & whichField))",
"    {",
"        _sfDecoratee.syncWith(pOther->_sfDecoratee);",
"    }",
"@@else",
"@@BeginFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"        _@!fieldname!@.syncWith(pOther->_@!fieldname!@);",
"",
"@@EndFieldLoop@@",
"@@endif",
"",
"}",
"#else",
"void @!Classname!@Base::executeSyncImpl(      @!Classname!@Base *pOther,",
"                                        const BitVector         &whichField,",
"                                        const SyncInfo          &sInfo      )",
"{",
"",
"    Inherited::executeSyncImpl(pOther, whichField, sInfo);",
"",
"@@if Decorator",
"    if(FieldBits::NoField != (DecorateeFieldMask & whichField))",
"    {",
"        _sfDecoratee.syncWith(pOther->_sfDecoratee);",
"    }",
"@@else",
"@@BeginSFFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"        _@!fieldname!@.syncWith(pOther->_@!fieldname!@);",
"",
"@@EndSFFieldLoop@@",
"",
"@@BeginMFFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"        _@!fieldname!@.syncWith(pOther->_@!fieldname!@, sInfo);",
"",
"@@EndMFFieldLoop@@",
"@@endif",
"",
"}",
"",
"void @!Classname!@Base::execBeginEditImpl (const BitVector &whichField, ",
"                                                 UInt32     uiAspect,",
"                                                 UInt32     uiContainerSize)",
"{",
"    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);",
"",
"@@BeginMFFieldLoop@@",
"    if(FieldBits::NoField != (@!Fieldname!@FieldMask & whichField))",
"        _@!fieldname!@.beginEdit(uiAspect, uiContainerSize);",
"",
"@@EndMFFieldLoop@@",
"}",
"#endif",
"",
"@@if isDecoratable",
"/*------------------------------ get -----------------------------------*/",
"", 
"@@BeginFieldLoop@@",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"const @!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get"
"@!CARDINALITY!@@!Fieldname!@(void) const",
"{",
"    return &_@!fieldname!@;",
"}",
"",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::edit"
"@!CARDINALITY!@@!Fieldname!@(void)",
"{",
"    return &_@!fieldname!@;",
"}",
"",
"",
"#ifndef OSG_2_PREP",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get"
"@!CARDINALITY!@@!Fieldname!@(void)",
"{",
"    return &_@!fieldname!@;",
"}",
"#endif",
"",
"@@EndFieldLoop@@",
"",
"@@BeginSFFieldLoop@@",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(void)",
"{",
"    return _@!fieldname!@.getValue();",
"}",
"",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return _@!fieldname!@.getValue();",
"}",
"",
"#ifndef OSG_2_PREP",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"@!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void)",
"{",
"    return _@!fieldname!@.getValue();",
"}",
"#endif",
"",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"void @!Classname!@Base::set@!Fieldname!@(const @!Fieldtype!@ &value)",
"{",
"    _@!fieldname!@.setValue(value);",
"}",
"",
"@@EndSFFieldLoop@@",
"",
"@@BeginMFFieldLoop@@",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(UInt32 index) const",
"{",
"    return _@!fieldname!@.getValue( index );",
"}",
"",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"@!Fieldtype!@ &@!Classname!@Base::edit@!Fieldname!@(UInt32 index)",
"{",
"    return _@!fieldname!@.getValue( index );",
"}",
"",
"ifndef OSG_2_PREP",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"@!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(UInt32 index)",
"{",
"    return _@!fieldname!@.getValue( index );",
"}",
"",
"OSG_@!LIBNAME!@LIB_DLLMAPPING",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void)",
"{",
"    return _@!fieldname!@;",
"}",
"#endif",
"@@EndMFFieldLoop@@",
"@@endif",
"",
"@@if Pointerfield",
"",
"OSG_END_NAMESPACE",
"",
"@@if SFPointerfield",
"#include <@!HeaderPrefix!@OSGSFieldTypeDef.inl>",
"@@endif",
"@@if MFPointerfield",
"#include <@!HeaderPrefix!@OSGMFieldTypeDef.inl>",
"@@endif",
"",
"OSG_BEGIN_NAMESPACE",
"@@endif",
"",
"#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)",
"DataType FieldDataTraits<@!Classname!@Ptr>::_type(\"@!Classname!@Ptr\", \"@!Parent!@Ptr\");",
"#endif",
"",
"@@if Pointerfield",
"@@if SFPointerfield",
"@@if Library",
"OSG_DLLEXPORT_SFIELD_DEF1(@!Classname!@Ptr, OSG_@!LIBNAME!@LIB_DLLTMPLMAPPING);",
"@@else",
"OSG_DLLEXPORT_SFIELD_DEF1(@!Classname!@Ptr, );",
"@@endif",
"@@endif",
"@@if MFPointerfield",
"@@if Library",
"OSG_DLLEXPORT_MFIELD_DEF1(@!Classname!@Ptr, OSG_@!LIBNAME!@LIB_DLLTMPLMAPPING);",
"@@else",
"OSG_DLLEXPORT_MFIELD_DEF1(@!Classname!@Ptr, );",
"@@endif",
"@@endif",
"@@endif",
"",
"",
"/*------------------------------------------------------------------------*/",
"/*                              cvs id's                                  */",
"",
"#ifdef OSG_SGI_CC",
"#pragma set woff 1174",
"#endif",
"",
"#ifdef OSG_LINUX_ICC",
"#pragma warning( disable : 177 )",
"#endif",
"",
"namespace",
"{",
"    static Char8 cvsid_cpp       [] = \"@(#)$Id: FCBaseTemplate_cpp.h,v 1.49 2008/06/09 07:30:44 vossg Exp $\";",
"    static Char8 cvsid_hpp       [] = OSG@!CLASSNAME!@BASE_HEADER_CVSID;",
"    static Char8 cvsid_inl       [] = OSG@!CLASSNAME!@BASE_INLINE_CVSID;",
"",
"    static Char8 cvsid_fields_hpp[] = OSG@!CLASSNAME!@FIELDS_HEADER_CVSID;",
"}",
"",
"OSG_END_NAMESPACE",
"",
NULL };
