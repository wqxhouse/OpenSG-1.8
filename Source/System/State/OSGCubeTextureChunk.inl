/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                     Copyright 2000-2002 by OpenSG Forum                   *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

inline
UInt32 CubeTextureChunk::getStaticClassId(void)
{
    return getStaticClass()->getId();
}

inline
const StateChunkClass *CubeTextureChunk::getStaticClass(void)
{
    return &TextureChunk::_class;
}

inline
void CubeTextureChunk::setPosZImage(ImagePtr &pImage)
{
     addRefCP(pImage);

     subRefCP(_sfPosZImage.getValue());

    _sfPosZImage.setValue(pImage);
}

inline
void CubeTextureChunk::setPosXImage(ImagePtr &pImage)
{
     addRefCP(pImage);

     subRefCP(_sfPosXImage.getValue());

    _sfPosXImage.setValue(pImage);
}

inline
void CubeTextureChunk::setNegXImage(ImagePtr &pImage)
{
     addRefCP(pImage);

     subRefCP(_sfNegXImage.getValue());

    _sfNegXImage.setValue(pImage);
}

inline
void CubeTextureChunk::setPosYImage(ImagePtr &pImage)
{
     addRefCP(pImage);

     subRefCP(_sfPosYImage.getValue());

    _sfPosYImage.setValue(pImage);
}

inline
void CubeTextureChunk::setNegYImage(ImagePtr &pImage)
{
     addRefCP(pImage);

     subRefCP(_sfNegYImage.getValue());

    _sfNegYImage.setValue(pImage);
}

OSG_END_NAMESPACE

#define OSGCUBETEXTURECHUNK_INLINE_CVSID "@(#)$Id: $"
