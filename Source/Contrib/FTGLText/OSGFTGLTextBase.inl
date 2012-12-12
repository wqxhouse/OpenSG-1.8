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
 **     class FTGLText!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FTGLTextBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 FTGLTextBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
FTGLTextPtr FTGLTextBase::create(void) 
{
    FTGLTextPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = FTGLTextPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
FTGLTextPtr FTGLTextBase::createEmpty(void) 
{ 
    FTGLTextPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the FTGLText::_sfText field.
inline
const SFString *FTGLTextBase::getSFText(void) const
{
    return &_sfText;
}

//! Get the FTGLText::_sfText field.
inline
SFString *FTGLTextBase::editSFText(void)
{
    return &_sfText;
}

#ifndef OSG_2_PREP
//! Get the FTGLText::_sfText field.
inline
SFString *FTGLTextBase::getSFText(void)
{
    return &_sfText;
}
#endif

//! Get the FTGLText::_sfFont field.
inline
const SFFTGLFontPtr *FTGLTextBase::getSFFont(void) const
{
    return &_sfFont;
}

//! Get the FTGLText::_sfFont field.
inline
SFFTGLFontPtr *FTGLTextBase::editSFFont(void)
{
    return &_sfFont;
}

#ifndef OSG_2_PREP
//! Get the FTGLText::_sfFont field.
inline
SFFTGLFontPtr *FTGLTextBase::getSFFont(void)
{
    return &_sfFont;
}
#endif

//! Get the FTGLText::_sfPosition field.
inline
const SFPnt3f *FTGLTextBase::getSFPosition(void) const
{
    return &_sfPosition;
}

//! Get the FTGLText::_sfPosition field.
inline
SFPnt3f *FTGLTextBase::editSFPosition(void)
{
    return &_sfPosition;
}

#ifndef OSG_2_PREP
//! Get the FTGLText::_sfPosition field.
inline
SFPnt3f *FTGLTextBase::getSFPosition(void)
{
    return &_sfPosition;
}
#endif


//! Get the value of the FTGLText::_sfText field.
inline
std::string &FTGLTextBase::editText(void)
{
    return _sfText.getValue();
}

//! Get the value of the FTGLText::_sfText field.
inline
const std::string &FTGLTextBase::getText(void) const
{
    return _sfText.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the FTGLText::_sfText field.
inline
std::string &FTGLTextBase::getText(void)
{
    return _sfText.getValue();
}
#endif

//! Set the value of the FTGLText::_sfText field.
inline
void FTGLTextBase::setText(const std::string &value)
{
    _sfText.setValue(value);
}

//! Get the value of the FTGLText::_sfFont field.
inline
FTGLFontPtr &FTGLTextBase::editFont(void)
{
    return _sfFont.getValue();
}

//! Get the value of the FTGLText::_sfFont field.
inline
const FTGLFontPtr &FTGLTextBase::getFont(void) const
{
    return _sfFont.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the FTGLText::_sfFont field.
inline
FTGLFontPtr &FTGLTextBase::getFont(void)
{
    return _sfFont.getValue();
}
#endif

//! Set the value of the FTGLText::_sfFont field.
inline
void FTGLTextBase::setFont(const FTGLFontPtr &value)
{
    _sfFont.setValue(value);
}

//! Get the value of the FTGLText::_sfPosition field.
inline
Pnt3f &FTGLTextBase::editPosition(void)
{
    return _sfPosition.getValue();
}

//! Get the value of the FTGLText::_sfPosition field.
inline
const Pnt3f &FTGLTextBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the FTGLText::_sfPosition field.
inline
Pnt3f &FTGLTextBase::getPosition(void)
{
    return _sfPosition.getValue();
}
#endif

//! Set the value of the FTGLText::_sfPosition field.
inline
void FTGLTextBase::setPosition(const Pnt3f &value)
{
    _sfPosition.setValue(value);
}


OSG_END_NAMESPACE

#define OSGFTGLTEXTBASE_INLINE_CVSID "@(#)$Id: OSGFTGLTextBase.inl,v 1.9 2008/06/09 12:28:01 vossg Exp $"

