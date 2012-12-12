/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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
 **     class PhongMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHONGMATERIALINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPhongMaterialBase.h"
#include "OSGPhongMaterial.h"

#include <OSGGL.h>                        // ColorMaterial default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  PhongMaterialBase::AmbientFieldMask = 
    (TypeTraits<BitVector>::One << PhongMaterialBase::AmbientFieldId);

const OSG::BitVector  PhongMaterialBase::DiffuseFieldMask = 
    (TypeTraits<BitVector>::One << PhongMaterialBase::DiffuseFieldId);

const OSG::BitVector  PhongMaterialBase::SpecularFieldMask = 
    (TypeTraits<BitVector>::One << PhongMaterialBase::SpecularFieldId);

const OSG::BitVector  PhongMaterialBase::ShininessFieldMask = 
    (TypeTraits<BitVector>::One << PhongMaterialBase::ShininessFieldId);

const OSG::BitVector  PhongMaterialBase::EmissionFieldMask = 
    (TypeTraits<BitVector>::One << PhongMaterialBase::EmissionFieldId);

const OSG::BitVector  PhongMaterialBase::TransparencyFieldMask = 
    (TypeTraits<BitVector>::One << PhongMaterialBase::TransparencyFieldId);

const OSG::BitVector  PhongMaterialBase::LitFieldMask = 
    (TypeTraits<BitVector>::One << PhongMaterialBase::LitFieldId);

const OSG::BitVector  PhongMaterialBase::ColorMaterialFieldMask = 
    (TypeTraits<BitVector>::One << PhongMaterialBase::ColorMaterialFieldId);

const OSG::BitVector PhongMaterialBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Color3f         PhongMaterialBase::_sfAmbient
    
*/
/*! \var Color3f         PhongMaterialBase::_sfDiffuse
    
*/
/*! \var Color3f         PhongMaterialBase::_sfSpecular
    
*/
/*! \var Real32          PhongMaterialBase::_sfShininess
    
*/
/*! \var Color3f         PhongMaterialBase::_sfEmission
    
*/
/*! \var Real32          PhongMaterialBase::_sfTransparency
    
*/
/*! \var bool            PhongMaterialBase::_sfLit
    
*/
/*! \var GLenum          PhongMaterialBase::_sfColorMaterial
    
*/

//! PhongMaterial description

FieldDescription *PhongMaterialBase::_desc[] = 
{
    new FieldDescription(SFColor3f::getClassType(), 
                     "ambient", 
                     AmbientFieldId, AmbientFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhongMaterialBase::editSFAmbient)),
    new FieldDescription(SFColor3f::getClassType(), 
                     "diffuse", 
                     DiffuseFieldId, DiffuseFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhongMaterialBase::editSFDiffuse)),
    new FieldDescription(SFColor3f::getClassType(), 
                     "specular", 
                     SpecularFieldId, SpecularFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhongMaterialBase::editSFSpecular)),
    new FieldDescription(SFReal32::getClassType(), 
                     "shininess", 
                     ShininessFieldId, ShininessFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhongMaterialBase::editSFShininess)),
    new FieldDescription(SFColor3f::getClassType(), 
                     "emission", 
                     EmissionFieldId, EmissionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhongMaterialBase::editSFEmission)),
    new FieldDescription(SFReal32::getClassType(), 
                     "transparency", 
                     TransparencyFieldId, TransparencyFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhongMaterialBase::editSFTransparency)),
    new FieldDescription(SFBool::getClassType(), 
                     "lit", 
                     LitFieldId, LitFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhongMaterialBase::editSFLit)),
    new FieldDescription(SFGLenum::getClassType(), 
                     "colorMaterial", 
                     ColorMaterialFieldId, ColorMaterialFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhongMaterialBase::editSFColorMaterial))
};


FieldContainerType PhongMaterialBase::_type(
    "PhongMaterial",
    "ChunkMaterial",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&PhongMaterialBase::createEmpty),
    PhongMaterial::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhongMaterialBase, PhongMaterialPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhongMaterialBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhongMaterialBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhongMaterialBase::shallowCopy(void) const 
{ 
    PhongMaterialPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhongMaterial *>(this)); 

    return returnValue; 
}

UInt32 PhongMaterialBase::getContainerSize(void) const 
{ 
    return sizeof(PhongMaterial); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhongMaterialBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<PhongMaterialBase *>(&other),
                          whichField);
}
#else
void PhongMaterialBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhongMaterialBase *) &other, whichField, sInfo);
}
void PhongMaterialBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhongMaterialBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhongMaterialBase::PhongMaterialBase(void) :
    _sfAmbient                (Color3f(0,0,0)), 
    _sfDiffuse                (Color3f(0,0,0)), 
    _sfSpecular               (Color3f(0,0,0)), 
    _sfShininess              (Real32(1)), 
    _sfEmission               (Color3f(0,0,0)), 
    _sfTransparency           (Real32(0)), 
    _sfLit                    (bool(true)), 
    _sfColorMaterial          (GLenum(GL_DIFFUSE)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhongMaterialBase::PhongMaterialBase(const PhongMaterialBase &source) :
    _sfAmbient                (source._sfAmbient                ), 
    _sfDiffuse                (source._sfDiffuse                ), 
    _sfSpecular               (source._sfSpecular               ), 
    _sfShininess              (source._sfShininess              ), 
    _sfEmission               (source._sfEmission               ), 
    _sfTransparency           (source._sfTransparency           ), 
    _sfLit                    (source._sfLit                    ), 
    _sfColorMaterial          (source._sfColorMaterial          ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhongMaterialBase::~PhongMaterialBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhongMaterialBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }

    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        returnValue += _sfShininess.getBinSize();
    }

    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        returnValue += _sfEmission.getBinSize();
    }

    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        returnValue += _sfTransparency.getBinSize();
    }

    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        returnValue += _sfLit.getBinSize();
    }

    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        returnValue += _sfColorMaterial.getBinSize();
    }


    return returnValue;
}

void PhongMaterialBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        _sfShininess.copyToBin(pMem);
    }

    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        _sfEmission.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        _sfTransparency.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        _sfLit.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        _sfColorMaterial.copyToBin(pMem);
    }


}

void PhongMaterialBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        _sfShininess.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        _sfEmission.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        _sfTransparency.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        _sfLit.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        _sfColorMaterial.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhongMaterialBase::executeSyncImpl(      PhongMaterialBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pOther->_sfAmbient);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
        _sfDiffuse.syncWith(pOther->_sfDiffuse);

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
        _sfSpecular.syncWith(pOther->_sfSpecular);

    if(FieldBits::NoField != (ShininessFieldMask & whichField))
        _sfShininess.syncWith(pOther->_sfShininess);

    if(FieldBits::NoField != (EmissionFieldMask & whichField))
        _sfEmission.syncWith(pOther->_sfEmission);

    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
        _sfTransparency.syncWith(pOther->_sfTransparency);

    if(FieldBits::NoField != (LitFieldMask & whichField))
        _sfLit.syncWith(pOther->_sfLit);

    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
        _sfColorMaterial.syncWith(pOther->_sfColorMaterial);


}
#else
void PhongMaterialBase::executeSyncImpl(      PhongMaterialBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pOther->_sfAmbient);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
        _sfDiffuse.syncWith(pOther->_sfDiffuse);

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
        _sfSpecular.syncWith(pOther->_sfSpecular);

    if(FieldBits::NoField != (ShininessFieldMask & whichField))
        _sfShininess.syncWith(pOther->_sfShininess);

    if(FieldBits::NoField != (EmissionFieldMask & whichField))
        _sfEmission.syncWith(pOther->_sfEmission);

    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
        _sfTransparency.syncWith(pOther->_sfTransparency);

    if(FieldBits::NoField != (LitFieldMask & whichField))
        _sfLit.syncWith(pOther->_sfLit);

    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
        _sfColorMaterial.syncWith(pOther->_sfColorMaterial);



}

void PhongMaterialBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PhongMaterialPtr>::_type("PhongMaterialPtr", "ChunkMaterialPtr");
#endif



/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.49 2008/06/09 07:30:44 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPHONGMATERIALBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHONGMATERIALBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHONGMATERIALFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

