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
 **     class MaterialChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MaterialChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 MaterialChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
MaterialChunkPtr MaterialChunkBase::create(void) 
{
    MaterialChunkPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = MaterialChunkPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
MaterialChunkPtr MaterialChunkBase::createEmpty(void) 
{ 
    MaterialChunkPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the MaterialChunk::_sfDiffuse field.
inline
const SFColor4f *MaterialChunkBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}

//! Get the MaterialChunk::_sfDiffuse field.
inline
SFColor4f *MaterialChunkBase::editSFDiffuse(void)
{
    return &_sfDiffuse;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfDiffuse field.
inline
SFColor4f *MaterialChunkBase::getSFDiffuse(void)
{
    return &_sfDiffuse;
}
#endif

//! Get the MaterialChunk::_sfAmbient field.
inline
const SFColor4f *MaterialChunkBase::getSFAmbient(void) const
{
    return &_sfAmbient;
}

//! Get the MaterialChunk::_sfAmbient field.
inline
SFColor4f *MaterialChunkBase::editSFAmbient(void)
{
    return &_sfAmbient;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfAmbient field.
inline
SFColor4f *MaterialChunkBase::getSFAmbient(void)
{
    return &_sfAmbient;
}
#endif

//! Get the MaterialChunk::_sfSpecular field.
inline
const SFColor4f *MaterialChunkBase::getSFSpecular(void) const
{
    return &_sfSpecular;
}

//! Get the MaterialChunk::_sfSpecular field.
inline
SFColor4f *MaterialChunkBase::editSFSpecular(void)
{
    return &_sfSpecular;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfSpecular field.
inline
SFColor4f *MaterialChunkBase::getSFSpecular(void)
{
    return &_sfSpecular;
}
#endif

//! Get the MaterialChunk::_sfEmission field.
inline
const SFColor4f *MaterialChunkBase::getSFEmission(void) const
{
    return &_sfEmission;
}

//! Get the MaterialChunk::_sfEmission field.
inline
SFColor4f *MaterialChunkBase::editSFEmission(void)
{
    return &_sfEmission;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfEmission field.
inline
SFColor4f *MaterialChunkBase::getSFEmission(void)
{
    return &_sfEmission;
}
#endif

//! Get the MaterialChunk::_sfShininess field.
inline
const SFReal32 *MaterialChunkBase::getSFShininess(void) const
{
    return &_sfShininess;
}

//! Get the MaterialChunk::_sfShininess field.
inline
SFReal32 *MaterialChunkBase::editSFShininess(void)
{
    return &_sfShininess;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfShininess field.
inline
SFReal32 *MaterialChunkBase::getSFShininess(void)
{
    return &_sfShininess;
}
#endif

//! Get the MaterialChunk::_sfLit field.
inline
const SFBool *MaterialChunkBase::getSFLit(void) const
{
    return &_sfLit;
}

//! Get the MaterialChunk::_sfLit field.
inline
SFBool *MaterialChunkBase::editSFLit(void)
{
    return &_sfLit;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfLit field.
inline
SFBool *MaterialChunkBase::getSFLit(void)
{
    return &_sfLit;
}
#endif

//! Get the MaterialChunk::_sfColorMaterial field.
inline
const SFGLenum *MaterialChunkBase::getSFColorMaterial(void) const
{
    return &_sfColorMaterial;
}

//! Get the MaterialChunk::_sfColorMaterial field.
inline
SFGLenum *MaterialChunkBase::editSFColorMaterial(void)
{
    return &_sfColorMaterial;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfColorMaterial field.
inline
SFGLenum *MaterialChunkBase::getSFColorMaterial(void)
{
    return &_sfColorMaterial;
}
#endif

//! Get the MaterialChunk::_sfBackMaterial field.
inline
const SFBool *MaterialChunkBase::getSFBackMaterial(void) const
{
    return &_sfBackMaterial;
}

//! Get the MaterialChunk::_sfBackMaterial field.
inline
SFBool *MaterialChunkBase::editSFBackMaterial(void)
{
    return &_sfBackMaterial;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfBackMaterial field.
inline
SFBool *MaterialChunkBase::getSFBackMaterial(void)
{
    return &_sfBackMaterial;
}
#endif

//! Get the MaterialChunk::_sfBackDiffuse field.
inline
const SFColor4f *MaterialChunkBase::getSFBackDiffuse(void) const
{
    return &_sfBackDiffuse;
}

//! Get the MaterialChunk::_sfBackDiffuse field.
inline
SFColor4f *MaterialChunkBase::editSFBackDiffuse(void)
{
    return &_sfBackDiffuse;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfBackDiffuse field.
inline
SFColor4f *MaterialChunkBase::getSFBackDiffuse(void)
{
    return &_sfBackDiffuse;
}
#endif

//! Get the MaterialChunk::_sfBackAmbient field.
inline
const SFColor4f *MaterialChunkBase::getSFBackAmbient(void) const
{
    return &_sfBackAmbient;
}

//! Get the MaterialChunk::_sfBackAmbient field.
inline
SFColor4f *MaterialChunkBase::editSFBackAmbient(void)
{
    return &_sfBackAmbient;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfBackAmbient field.
inline
SFColor4f *MaterialChunkBase::getSFBackAmbient(void)
{
    return &_sfBackAmbient;
}
#endif

//! Get the MaterialChunk::_sfBackSpecular field.
inline
const SFColor4f *MaterialChunkBase::getSFBackSpecular(void) const
{
    return &_sfBackSpecular;
}

//! Get the MaterialChunk::_sfBackSpecular field.
inline
SFColor4f *MaterialChunkBase::editSFBackSpecular(void)
{
    return &_sfBackSpecular;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfBackSpecular field.
inline
SFColor4f *MaterialChunkBase::getSFBackSpecular(void)
{
    return &_sfBackSpecular;
}
#endif

//! Get the MaterialChunk::_sfBackEmission field.
inline
const SFColor4f *MaterialChunkBase::getSFBackEmission(void) const
{
    return &_sfBackEmission;
}

//! Get the MaterialChunk::_sfBackEmission field.
inline
SFColor4f *MaterialChunkBase::editSFBackEmission(void)
{
    return &_sfBackEmission;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfBackEmission field.
inline
SFColor4f *MaterialChunkBase::getSFBackEmission(void)
{
    return &_sfBackEmission;
}
#endif

//! Get the MaterialChunk::_sfBackShininess field.
inline
const SFReal32 *MaterialChunkBase::getSFBackShininess(void) const
{
    return &_sfBackShininess;
}

//! Get the MaterialChunk::_sfBackShininess field.
inline
SFReal32 *MaterialChunkBase::editSFBackShininess(void)
{
    return &_sfBackShininess;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfBackShininess field.
inline
SFReal32 *MaterialChunkBase::getSFBackShininess(void)
{
    return &_sfBackShininess;
}
#endif

//! Get the MaterialChunk::_sfBackColorMaterial field.
inline
const SFGLenum *MaterialChunkBase::getSFBackColorMaterial(void) const
{
    return &_sfBackColorMaterial;
}

//! Get the MaterialChunk::_sfBackColorMaterial field.
inline
SFGLenum *MaterialChunkBase::editSFBackColorMaterial(void)
{
    return &_sfBackColorMaterial;
}

#ifndef OSG_2_PREP
//! Get the MaterialChunk::_sfBackColorMaterial field.
inline
SFGLenum *MaterialChunkBase::getSFBackColorMaterial(void)
{
    return &_sfBackColorMaterial;
}
#endif


//! Get the value of the MaterialChunk::_sfDiffuse field.
inline
Color4f &MaterialChunkBase::editDiffuse(void)
{
    return _sfDiffuse.getValue();
}

//! Get the value of the MaterialChunk::_sfDiffuse field.
inline
const Color4f &MaterialChunkBase::getDiffuse(void) const
{
    return _sfDiffuse.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfDiffuse field.
inline
Color4f &MaterialChunkBase::getDiffuse(void)
{
    return _sfDiffuse.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfDiffuse field.
inline
void MaterialChunkBase::setDiffuse(const Color4f &value)
{
    _sfDiffuse.setValue(value);
}

//! Get the value of the MaterialChunk::_sfAmbient field.
inline
Color4f &MaterialChunkBase::editAmbient(void)
{
    return _sfAmbient.getValue();
}

//! Get the value of the MaterialChunk::_sfAmbient field.
inline
const Color4f &MaterialChunkBase::getAmbient(void) const
{
    return _sfAmbient.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfAmbient field.
inline
Color4f &MaterialChunkBase::getAmbient(void)
{
    return _sfAmbient.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfAmbient field.
inline
void MaterialChunkBase::setAmbient(const Color4f &value)
{
    _sfAmbient.setValue(value);
}

//! Get the value of the MaterialChunk::_sfSpecular field.
inline
Color4f &MaterialChunkBase::editSpecular(void)
{
    return _sfSpecular.getValue();
}

//! Get the value of the MaterialChunk::_sfSpecular field.
inline
const Color4f &MaterialChunkBase::getSpecular(void) const
{
    return _sfSpecular.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfSpecular field.
inline
Color4f &MaterialChunkBase::getSpecular(void)
{
    return _sfSpecular.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfSpecular field.
inline
void MaterialChunkBase::setSpecular(const Color4f &value)
{
    _sfSpecular.setValue(value);
}

//! Get the value of the MaterialChunk::_sfEmission field.
inline
Color4f &MaterialChunkBase::editEmission(void)
{
    return _sfEmission.getValue();
}

//! Get the value of the MaterialChunk::_sfEmission field.
inline
const Color4f &MaterialChunkBase::getEmission(void) const
{
    return _sfEmission.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfEmission field.
inline
Color4f &MaterialChunkBase::getEmission(void)
{
    return _sfEmission.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfEmission field.
inline
void MaterialChunkBase::setEmission(const Color4f &value)
{
    _sfEmission.setValue(value);
}

//! Get the value of the MaterialChunk::_sfShininess field.
inline
Real32 &MaterialChunkBase::editShininess(void)
{
    return _sfShininess.getValue();
}

//! Get the value of the MaterialChunk::_sfShininess field.
inline
const Real32 &MaterialChunkBase::getShininess(void) const
{
    return _sfShininess.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfShininess field.
inline
Real32 &MaterialChunkBase::getShininess(void)
{
    return _sfShininess.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfShininess field.
inline
void MaterialChunkBase::setShininess(const Real32 &value)
{
    _sfShininess.setValue(value);
}

//! Get the value of the MaterialChunk::_sfLit field.
inline
bool &MaterialChunkBase::editLit(void)
{
    return _sfLit.getValue();
}

//! Get the value of the MaterialChunk::_sfLit field.
inline
const bool &MaterialChunkBase::getLit(void) const
{
    return _sfLit.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfLit field.
inline
bool &MaterialChunkBase::getLit(void)
{
    return _sfLit.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfLit field.
inline
void MaterialChunkBase::setLit(const bool &value)
{
    _sfLit.setValue(value);
}

//! Get the value of the MaterialChunk::_sfColorMaterial field.
inline
GLenum &MaterialChunkBase::editColorMaterial(void)
{
    return _sfColorMaterial.getValue();
}

//! Get the value of the MaterialChunk::_sfColorMaterial field.
inline
const GLenum &MaterialChunkBase::getColorMaterial(void) const
{
    return _sfColorMaterial.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfColorMaterial field.
inline
GLenum &MaterialChunkBase::getColorMaterial(void)
{
    return _sfColorMaterial.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfColorMaterial field.
inline
void MaterialChunkBase::setColorMaterial(const GLenum &value)
{
    _sfColorMaterial.setValue(value);
}

//! Get the value of the MaterialChunk::_sfBackMaterial field.
inline
bool &MaterialChunkBase::editBackMaterial(void)
{
    return _sfBackMaterial.getValue();
}

//! Get the value of the MaterialChunk::_sfBackMaterial field.
inline
const bool &MaterialChunkBase::getBackMaterial(void) const
{
    return _sfBackMaterial.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfBackMaterial field.
inline
bool &MaterialChunkBase::getBackMaterial(void)
{
    return _sfBackMaterial.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfBackMaterial field.
inline
void MaterialChunkBase::setBackMaterial(const bool &value)
{
    _sfBackMaterial.setValue(value);
}

//! Get the value of the MaterialChunk::_sfBackDiffuse field.
inline
Color4f &MaterialChunkBase::editBackDiffuse(void)
{
    return _sfBackDiffuse.getValue();
}

//! Get the value of the MaterialChunk::_sfBackDiffuse field.
inline
const Color4f &MaterialChunkBase::getBackDiffuse(void) const
{
    return _sfBackDiffuse.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfBackDiffuse field.
inline
Color4f &MaterialChunkBase::getBackDiffuse(void)
{
    return _sfBackDiffuse.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfBackDiffuse field.
inline
void MaterialChunkBase::setBackDiffuse(const Color4f &value)
{
    _sfBackDiffuse.setValue(value);
}

//! Get the value of the MaterialChunk::_sfBackAmbient field.
inline
Color4f &MaterialChunkBase::editBackAmbient(void)
{
    return _sfBackAmbient.getValue();
}

//! Get the value of the MaterialChunk::_sfBackAmbient field.
inline
const Color4f &MaterialChunkBase::getBackAmbient(void) const
{
    return _sfBackAmbient.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfBackAmbient field.
inline
Color4f &MaterialChunkBase::getBackAmbient(void)
{
    return _sfBackAmbient.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfBackAmbient field.
inline
void MaterialChunkBase::setBackAmbient(const Color4f &value)
{
    _sfBackAmbient.setValue(value);
}

//! Get the value of the MaterialChunk::_sfBackSpecular field.
inline
Color4f &MaterialChunkBase::editBackSpecular(void)
{
    return _sfBackSpecular.getValue();
}

//! Get the value of the MaterialChunk::_sfBackSpecular field.
inline
const Color4f &MaterialChunkBase::getBackSpecular(void) const
{
    return _sfBackSpecular.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfBackSpecular field.
inline
Color4f &MaterialChunkBase::getBackSpecular(void)
{
    return _sfBackSpecular.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfBackSpecular field.
inline
void MaterialChunkBase::setBackSpecular(const Color4f &value)
{
    _sfBackSpecular.setValue(value);
}

//! Get the value of the MaterialChunk::_sfBackEmission field.
inline
Color4f &MaterialChunkBase::editBackEmission(void)
{
    return _sfBackEmission.getValue();
}

//! Get the value of the MaterialChunk::_sfBackEmission field.
inline
const Color4f &MaterialChunkBase::getBackEmission(void) const
{
    return _sfBackEmission.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfBackEmission field.
inline
Color4f &MaterialChunkBase::getBackEmission(void)
{
    return _sfBackEmission.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfBackEmission field.
inline
void MaterialChunkBase::setBackEmission(const Color4f &value)
{
    _sfBackEmission.setValue(value);
}

//! Get the value of the MaterialChunk::_sfBackShininess field.
inline
Real32 &MaterialChunkBase::editBackShininess(void)
{
    return _sfBackShininess.getValue();
}

//! Get the value of the MaterialChunk::_sfBackShininess field.
inline
const Real32 &MaterialChunkBase::getBackShininess(void) const
{
    return _sfBackShininess.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfBackShininess field.
inline
Real32 &MaterialChunkBase::getBackShininess(void)
{
    return _sfBackShininess.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfBackShininess field.
inline
void MaterialChunkBase::setBackShininess(const Real32 &value)
{
    _sfBackShininess.setValue(value);
}

//! Get the value of the MaterialChunk::_sfBackColorMaterial field.
inline
GLenum &MaterialChunkBase::editBackColorMaterial(void)
{
    return _sfBackColorMaterial.getValue();
}

//! Get the value of the MaterialChunk::_sfBackColorMaterial field.
inline
const GLenum &MaterialChunkBase::getBackColorMaterial(void) const
{
    return _sfBackColorMaterial.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the MaterialChunk::_sfBackColorMaterial field.
inline
GLenum &MaterialChunkBase::getBackColorMaterial(void)
{
    return _sfBackColorMaterial.getValue();
}
#endif

//! Set the value of the MaterialChunk::_sfBackColorMaterial field.
inline
void MaterialChunkBase::setBackColorMaterial(const GLenum &value)
{
    _sfBackColorMaterial.setValue(value);
}


OSG_END_NAMESPACE

#define OSGMATERIALCHUNKBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

