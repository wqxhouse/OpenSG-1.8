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
 **     class TextureGrabForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureGrabForegroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextureGrabForegroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TextureGrabForegroundPtr TextureGrabForegroundBase::create(void) 
{
    TextureGrabForegroundPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TextureGrabForegroundPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TextureGrabForegroundPtr TextureGrabForegroundBase::createEmpty(void) 
{ 
    TextureGrabForegroundPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TextureGrabForeground::_sfTexture field.
inline
const SFTextureChunkPtr *TextureGrabForegroundBase::getSFTexture(void) const
{
    return &_sfTexture;
}

//! Get the TextureGrabForeground::_sfTexture field.
inline
SFTextureChunkPtr *TextureGrabForegroundBase::editSFTexture(void)
{
    return &_sfTexture;
}

#ifndef OSG_2_PREP
//! Get the TextureGrabForeground::_sfTexture field.
inline
SFTextureChunkPtr *TextureGrabForegroundBase::getSFTexture(void)
{
    return &_sfTexture;
}
#endif

//! Get the TextureGrabForeground::_sfAutoResize field.
inline
const SFBool *TextureGrabForegroundBase::getSFAutoResize(void) const
{
    return &_sfAutoResize;
}

//! Get the TextureGrabForeground::_sfAutoResize field.
inline
SFBool *TextureGrabForegroundBase::editSFAutoResize(void)
{
    return &_sfAutoResize;
}

#ifndef OSG_2_PREP
//! Get the TextureGrabForeground::_sfAutoResize field.
inline
SFBool *TextureGrabForegroundBase::getSFAutoResize(void)
{
    return &_sfAutoResize;
}
#endif

//! Get the TextureGrabForeground::_sfBindTarget field.
inline
const SFGLenum *TextureGrabForegroundBase::getSFBindTarget(void) const
{
    return &_sfBindTarget;
}

//! Get the TextureGrabForeground::_sfBindTarget field.
inline
SFGLenum *TextureGrabForegroundBase::editSFBindTarget(void)
{
    return &_sfBindTarget;
}

#ifndef OSG_2_PREP
//! Get the TextureGrabForeground::_sfBindTarget field.
inline
SFGLenum *TextureGrabForegroundBase::getSFBindTarget(void)
{
    return &_sfBindTarget;
}
#endif

//! Get the TextureGrabForeground::_sfCopyTarget field.
inline
const SFGLenum *TextureGrabForegroundBase::getSFCopyTarget(void) const
{
    return &_sfCopyTarget;
}

//! Get the TextureGrabForeground::_sfCopyTarget field.
inline
SFGLenum *TextureGrabForegroundBase::editSFCopyTarget(void)
{
    return &_sfCopyTarget;
}

#ifndef OSG_2_PREP
//! Get the TextureGrabForeground::_sfCopyTarget field.
inline
SFGLenum *TextureGrabForegroundBase::getSFCopyTarget(void)
{
    return &_sfCopyTarget;
}
#endif


//! Get the value of the TextureGrabForeground::_sfTexture field.
inline
TextureChunkPtr &TextureGrabForegroundBase::editTexture(void)
{
    return _sfTexture.getValue();
}

//! Get the value of the TextureGrabForeground::_sfTexture field.
inline
const TextureChunkPtr &TextureGrabForegroundBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureGrabForeground::_sfTexture field.
inline
TextureChunkPtr &TextureGrabForegroundBase::getTexture(void)
{
    return _sfTexture.getValue();
}
#endif

//! Set the value of the TextureGrabForeground::_sfTexture field.
inline
void TextureGrabForegroundBase::setTexture(const TextureChunkPtr &value)
{
    _sfTexture.setValue(value);
}

//! Get the value of the TextureGrabForeground::_sfAutoResize field.
inline
bool &TextureGrabForegroundBase::editAutoResize(void)
{
    return _sfAutoResize.getValue();
}

//! Get the value of the TextureGrabForeground::_sfAutoResize field.
inline
const bool &TextureGrabForegroundBase::getAutoResize(void) const
{
    return _sfAutoResize.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureGrabForeground::_sfAutoResize field.
inline
bool &TextureGrabForegroundBase::getAutoResize(void)
{
    return _sfAutoResize.getValue();
}
#endif

//! Set the value of the TextureGrabForeground::_sfAutoResize field.
inline
void TextureGrabForegroundBase::setAutoResize(const bool &value)
{
    _sfAutoResize.setValue(value);
}

//! Get the value of the TextureGrabForeground::_sfBindTarget field.
inline
GLenum &TextureGrabForegroundBase::editBindTarget(void)
{
    return _sfBindTarget.getValue();
}

//! Get the value of the TextureGrabForeground::_sfBindTarget field.
inline
const GLenum &TextureGrabForegroundBase::getBindTarget(void) const
{
    return _sfBindTarget.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureGrabForeground::_sfBindTarget field.
inline
GLenum &TextureGrabForegroundBase::getBindTarget(void)
{
    return _sfBindTarget.getValue();
}
#endif

//! Set the value of the TextureGrabForeground::_sfBindTarget field.
inline
void TextureGrabForegroundBase::setBindTarget(const GLenum &value)
{
    _sfBindTarget.setValue(value);
}

//! Get the value of the TextureGrabForeground::_sfCopyTarget field.
inline
GLenum &TextureGrabForegroundBase::editCopyTarget(void)
{
    return _sfCopyTarget.getValue();
}

//! Get the value of the TextureGrabForeground::_sfCopyTarget field.
inline
const GLenum &TextureGrabForegroundBase::getCopyTarget(void) const
{
    return _sfCopyTarget.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureGrabForeground::_sfCopyTarget field.
inline
GLenum &TextureGrabForegroundBase::getCopyTarget(void)
{
    return _sfCopyTarget.getValue();
}
#endif

//! Set the value of the TextureGrabForeground::_sfCopyTarget field.
inline
void TextureGrabForegroundBase::setCopyTarget(const GLenum &value)
{
    _sfCopyTarget.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTEXTUREGRABFOREGROUNDBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

