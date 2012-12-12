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
 **     class ScreenAlignedText!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ScreenAlignedTextBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ScreenAlignedTextBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ScreenAlignedTextPtr ScreenAlignedTextBase::create(void) 
{
    ScreenAlignedTextPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ScreenAlignedTextPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ScreenAlignedTextPtr ScreenAlignedTextBase::createEmpty(void) 
{ 
    ScreenAlignedTextPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ScreenAlignedText::_sfColor field.
inline
const SFColor4f *ScreenAlignedTextBase::getSFColor(void) const
{
    return &_sfColor;
}

//! Get the ScreenAlignedText::_sfColor field.
inline
SFColor4f *ScreenAlignedTextBase::editSFColor(void)
{
    return &_sfColor;
}

#ifndef OSG_2_PREP
//! Get the ScreenAlignedText::_sfColor field.
inline
SFColor4f *ScreenAlignedTextBase::getSFColor(void)
{
    return &_sfColor;
}
#endif

//! Get the ScreenAlignedText::_sfRenderImage field.
inline
const SFImagePtr *ScreenAlignedTextBase::getSFRenderImage(void) const
{
    return &_sfRenderImage;
}

//! Get the ScreenAlignedText::_sfRenderImage field.
inline
SFImagePtr *ScreenAlignedTextBase::editSFRenderImage(void)
{
    return &_sfRenderImage;
}

#ifndef OSG_2_PREP
//! Get the ScreenAlignedText::_sfRenderImage field.
inline
SFImagePtr *ScreenAlignedTextBase::getSFRenderImage(void)
{
    return &_sfRenderImage;
}
#endif


//! Get the value of the ScreenAlignedText::_sfColor field.
inline
Color4f &ScreenAlignedTextBase::editColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the ScreenAlignedText::_sfColor field.
inline
const Color4f &ScreenAlignedTextBase::getColor(void) const
{
    return _sfColor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ScreenAlignedText::_sfColor field.
inline
Color4f &ScreenAlignedTextBase::getColor(void)
{
    return _sfColor.getValue();
}
#endif

//! Set the value of the ScreenAlignedText::_sfColor field.
inline
void ScreenAlignedTextBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}

//! Get the value of the ScreenAlignedText::_sfRenderImage field.
inline
ImagePtr &ScreenAlignedTextBase::editRenderImage(void)
{
    return _sfRenderImage.getValue();
}

//! Get the value of the ScreenAlignedText::_sfRenderImage field.
inline
const ImagePtr &ScreenAlignedTextBase::getRenderImage(void) const
{
    return _sfRenderImage.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the ScreenAlignedText::_sfRenderImage field.
inline
ImagePtr &ScreenAlignedTextBase::getRenderImage(void)
{
    return _sfRenderImage.getValue();
}
#endif

//! Set the value of the ScreenAlignedText::_sfRenderImage field.
inline
void ScreenAlignedTextBase::setRenderImage(const ImagePtr &value)
{
    _sfRenderImage.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSCREENALIGNEDTEXTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

