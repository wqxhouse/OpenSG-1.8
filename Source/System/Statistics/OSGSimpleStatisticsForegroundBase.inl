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
 **     class SimpleStatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SimpleStatisticsForegroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SimpleStatisticsForegroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
SimpleStatisticsForegroundPtr SimpleStatisticsForegroundBase::create(void) 
{
    SimpleStatisticsForegroundPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = SimpleStatisticsForegroundPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
SimpleStatisticsForegroundPtr SimpleStatisticsForegroundBase::createEmpty(void) 
{ 
    SimpleStatisticsForegroundPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
const MFString *SimpleStatisticsForegroundBase::getMFFormats(void) const
{
    return &_mfFormats;
}

//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
MFString *SimpleStatisticsForegroundBase::editMFFormats(void)
{
    return &_mfFormats;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
MFString *SimpleStatisticsForegroundBase::getMFFormats(void)
{
    return &_mfFormats;
}
#endif

//! Get the SimpleStatisticsForeground::_sfSize field.
inline
const SFReal32 *SimpleStatisticsForegroundBase::getSFSize(void) const
{
    return &_sfSize;
}

//! Get the SimpleStatisticsForeground::_sfSize field.
inline
SFReal32 *SimpleStatisticsForegroundBase::editSFSize(void)
{
    return &_sfSize;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfSize field.
inline
SFReal32 *SimpleStatisticsForegroundBase::getSFSize(void)
{
    return &_sfSize;
}
#endif

//! Get the SimpleStatisticsForeground::_sfColor field.
inline
const SFColor4f *SimpleStatisticsForegroundBase::getSFColor(void) const
{
    return &_sfColor;
}

//! Get the SimpleStatisticsForeground::_sfColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::editSFColor(void)
{
    return &_sfColor;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::getSFColor(void)
{
    return &_sfColor;
}
#endif

//! Get the SimpleStatisticsForeground::_sfShadowColor field.
inline
const SFColor4f *SimpleStatisticsForegroundBase::getSFShadowColor(void) const
{
    return &_sfShadowColor;
}

//! Get the SimpleStatisticsForeground::_sfShadowColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::editSFShadowColor(void)
{
    return &_sfShadowColor;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfShadowColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::getSFShadowColor(void)
{
    return &_sfShadowColor;
}
#endif

//! Get the SimpleStatisticsForeground::_sfBgColor field.
inline
const SFColor4f *SimpleStatisticsForegroundBase::getSFBgColor(void) const
{
    return &_sfBgColor;
}

//! Get the SimpleStatisticsForeground::_sfBgColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::editSFBgColor(void)
{
    return &_sfBgColor;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfBgColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::getSFBgColor(void)
{
    return &_sfBgColor;
}
#endif

//! Get the SimpleStatisticsForeground::_sfFamily field.
inline
const SFString *SimpleStatisticsForegroundBase::getSFFamily(void) const
{
    return &_sfFamily;
}

//! Get the SimpleStatisticsForeground::_sfFamily field.
inline
SFString *SimpleStatisticsForegroundBase::editSFFamily(void)
{
    return &_sfFamily;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfFamily field.
inline
SFString *SimpleStatisticsForegroundBase::getSFFamily(void)
{
    return &_sfFamily;
}
#endif

//! Get the SimpleStatisticsForeground::_sfShadowOffset field.
inline
const SFVec2f *SimpleStatisticsForegroundBase::getSFShadowOffset(void) const
{
    return &_sfShadowOffset;
}

//! Get the SimpleStatisticsForeground::_sfShadowOffset field.
inline
SFVec2f *SimpleStatisticsForegroundBase::editSFShadowOffset(void)
{
    return &_sfShadowOffset;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfShadowOffset field.
inline
SFVec2f *SimpleStatisticsForegroundBase::getSFShadowOffset(void)
{
    return &_sfShadowOffset;
}
#endif

//! Get the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
const SFUInt8 *SimpleStatisticsForegroundBase::getSFHorizontalAlign(void) const
{
    return &_sfHorizontalAlign;
}

//! Get the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
SFUInt8 *SimpleStatisticsForegroundBase::editSFHorizontalAlign(void)
{
    return &_sfHorizontalAlign;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
SFUInt8 *SimpleStatisticsForegroundBase::getSFHorizontalAlign(void)
{
    return &_sfHorizontalAlign;
}
#endif

//! Get the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
const SFUInt8 *SimpleStatisticsForegroundBase::getSFVerticalAlign(void) const
{
    return &_sfVerticalAlign;
}

//! Get the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
SFUInt8 *SimpleStatisticsForegroundBase::editSFVerticalAlign(void)
{
    return &_sfVerticalAlign;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
SFUInt8 *SimpleStatisticsForegroundBase::getSFVerticalAlign(void)
{
    return &_sfVerticalAlign;
}
#endif

//! Get the SimpleStatisticsForeground::_sfBorderColor field.
inline
const SFColor4f *SimpleStatisticsForegroundBase::getSFBorderColor(void) const
{
    return &_sfBorderColor;
}

//! Get the SimpleStatisticsForeground::_sfBorderColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::editSFBorderColor(void)
{
    return &_sfBorderColor;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfBorderColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::getSFBorderColor(void)
{
    return &_sfBorderColor;
}
#endif

//! Get the SimpleStatisticsForeground::_sfBorderOffset field.
inline
const SFVec2f *SimpleStatisticsForegroundBase::getSFBorderOffset(void) const
{
    return &_sfBorderOffset;
}

//! Get the SimpleStatisticsForeground::_sfBorderOffset field.
inline
SFVec2f *SimpleStatisticsForegroundBase::editSFBorderOffset(void)
{
    return &_sfBorderOffset;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfBorderOffset field.
inline
SFVec2f *SimpleStatisticsForegroundBase::getSFBorderOffset(void)
{
    return &_sfBorderOffset;
}
#endif

//! Get the SimpleStatisticsForeground::_sfTextMargin field.
inline
const SFVec2f *SimpleStatisticsForegroundBase::getSFTextMargin(void) const
{
    return &_sfTextMargin;
}

//! Get the SimpleStatisticsForeground::_sfTextMargin field.
inline
SFVec2f *SimpleStatisticsForegroundBase::editSFTextMargin(void)
{
    return &_sfTextMargin;
}

#ifndef OSG_2_PREP
//! Get the SimpleStatisticsForeground::_sfTextMargin field.
inline
SFVec2f *SimpleStatisticsForegroundBase::getSFTextMargin(void)
{
    return &_sfTextMargin;
}
#endif


//! Get the value of the SimpleStatisticsForeground::_sfSize field.
inline
Real32 &SimpleStatisticsForegroundBase::editSize(void)
{
    return _sfSize.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfSize field.
inline
const Real32 &SimpleStatisticsForegroundBase::getSize(void) const
{
    return _sfSize.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfSize field.
inline
Real32 &SimpleStatisticsForegroundBase::getSize(void)
{
    return _sfSize.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfSize field.
inline
void SimpleStatisticsForegroundBase::setSize(const Real32 &value)
{
    _sfSize.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfColor field.
inline
Color4f &SimpleStatisticsForegroundBase::editColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getColor(void) const
{
    return _sfColor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfColor field.
inline
Color4f &SimpleStatisticsForegroundBase::getColor(void)
{
    return _sfColor.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfColor field.
inline
void SimpleStatisticsForegroundBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowColor field.
inline
Color4f &SimpleStatisticsForegroundBase::editShadowColor(void)
{
    return _sfShadowColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getShadowColor(void) const
{
    return _sfShadowColor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfShadowColor field.
inline
Color4f &SimpleStatisticsForegroundBase::getShadowColor(void)
{
    return _sfShadowColor.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfShadowColor field.
inline
void SimpleStatisticsForegroundBase::setShadowColor(const Color4f &value)
{
    _sfShadowColor.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfBgColor field.
inline
Color4f &SimpleStatisticsForegroundBase::editBgColor(void)
{
    return _sfBgColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfBgColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getBgColor(void) const
{
    return _sfBgColor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfBgColor field.
inline
Color4f &SimpleStatisticsForegroundBase::getBgColor(void)
{
    return _sfBgColor.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfBgColor field.
inline
void SimpleStatisticsForegroundBase::setBgColor(const Color4f &value)
{
    _sfBgColor.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfFamily field.
inline
std::string &SimpleStatisticsForegroundBase::editFamily(void)
{
    return _sfFamily.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfFamily field.
inline
const std::string &SimpleStatisticsForegroundBase::getFamily(void) const
{
    return _sfFamily.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfFamily field.
inline
std::string &SimpleStatisticsForegroundBase::getFamily(void)
{
    return _sfFamily.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfFamily field.
inline
void SimpleStatisticsForegroundBase::setFamily(const std::string &value)
{
    _sfFamily.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowOffset field.
inline
Vec2f &SimpleStatisticsForegroundBase::editShadowOffset(void)
{
    return _sfShadowOffset.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowOffset field.
inline
const Vec2f &SimpleStatisticsForegroundBase::getShadowOffset(void) const
{
    return _sfShadowOffset.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfShadowOffset field.
inline
Vec2f &SimpleStatisticsForegroundBase::getShadowOffset(void)
{
    return _sfShadowOffset.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfShadowOffset field.
inline
void SimpleStatisticsForegroundBase::setShadowOffset(const Vec2f &value)
{
    _sfShadowOffset.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
UInt8 &SimpleStatisticsForegroundBase::editHorizontalAlign(void)
{
    return _sfHorizontalAlign.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
const UInt8 &SimpleStatisticsForegroundBase::getHorizontalAlign(void) const
{
    return _sfHorizontalAlign.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
UInt8 &SimpleStatisticsForegroundBase::getHorizontalAlign(void)
{
    return _sfHorizontalAlign.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
void SimpleStatisticsForegroundBase::setHorizontalAlign(const UInt8 &value)
{
    _sfHorizontalAlign.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
UInt8 &SimpleStatisticsForegroundBase::editVerticalAlign(void)
{
    return _sfVerticalAlign.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
const UInt8 &SimpleStatisticsForegroundBase::getVerticalAlign(void) const
{
    return _sfVerticalAlign.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
UInt8 &SimpleStatisticsForegroundBase::getVerticalAlign(void)
{
    return _sfVerticalAlign.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
void SimpleStatisticsForegroundBase::setVerticalAlign(const UInt8 &value)
{
    _sfVerticalAlign.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfBorderColor field.
inline
Color4f &SimpleStatisticsForegroundBase::editBorderColor(void)
{
    return _sfBorderColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfBorderColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getBorderColor(void) const
{
    return _sfBorderColor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfBorderColor field.
inline
Color4f &SimpleStatisticsForegroundBase::getBorderColor(void)
{
    return _sfBorderColor.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfBorderColor field.
inline
void SimpleStatisticsForegroundBase::setBorderColor(const Color4f &value)
{
    _sfBorderColor.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfBorderOffset field.
inline
Vec2f &SimpleStatisticsForegroundBase::editBorderOffset(void)
{
    return _sfBorderOffset.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfBorderOffset field.
inline
const Vec2f &SimpleStatisticsForegroundBase::getBorderOffset(void) const
{
    return _sfBorderOffset.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfBorderOffset field.
inline
Vec2f &SimpleStatisticsForegroundBase::getBorderOffset(void)
{
    return _sfBorderOffset.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfBorderOffset field.
inline
void SimpleStatisticsForegroundBase::setBorderOffset(const Vec2f &value)
{
    _sfBorderOffset.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfTextMargin field.
inline
Vec2f &SimpleStatisticsForegroundBase::editTextMargin(void)
{
    return _sfTextMargin.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfTextMargin field.
inline
const Vec2f &SimpleStatisticsForegroundBase::getTextMargin(void) const
{
    return _sfTextMargin.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SimpleStatisticsForeground::_sfTextMargin field.
inline
Vec2f &SimpleStatisticsForegroundBase::getTextMargin(void)
{
    return _sfTextMargin.getValue();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfTextMargin field.
inline
void SimpleStatisticsForegroundBase::setTextMargin(const Vec2f &value)
{
    _sfTextMargin.setValue(value);
}


//! Get the value of the \a index element the SimpleStatisticsForeground::_mfFormats field.
inline
std::string &SimpleStatisticsForegroundBase::editFormats(const UInt32 index)
{
    return _mfFormats[index];
}

//! Get the value of the \a index element the SimpleStatisticsForeground::_mfFormats field.
inline
const std::string &SimpleStatisticsForegroundBase::getFormats(const UInt32 index) const
{
    return _mfFormats[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the SimpleStatisticsForeground::_mfFormats field.
inline
std::string &SimpleStatisticsForegroundBase::getFormats(const UInt32 index)
{
    return _mfFormats[index];
}

//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
MFString &SimpleStatisticsForegroundBase::getFormats(void)
{
    return _mfFormats;
}

//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
const MFString &SimpleStatisticsForegroundBase::getFormats(void) const
{
    return _mfFormats;
}

#endif

OSG_END_NAMESPACE

#define OSGSIMPLESTATISTICSFOREGROUNDBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

