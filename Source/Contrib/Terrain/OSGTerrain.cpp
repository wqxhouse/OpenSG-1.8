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

/* Stefan Roettgers Quadtree Tesselation Algorithm
    http://wwwvis.informatik.uni-stuttgart.de/~roettger/data/Papers/TERRAIN.PDF
   This code is based on a Java3D Implementation by Martin Barbisch, University Stuttgart
    http://wwwvis.informatik.uni-stuttgart.de/javatevi/
 */

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <strstream>

#include <OSGConfig.h>

#include "OSGTerrain.h"
#include "OSGImage.h"
#include "OSGRenderAction.h"
#include "OSGMaterial.h"
#include <OSGChunkMaterial.h>
#include <OSGTextureChunk.h>
#include <OSGSHLParameterChunk.h>

OSG_USING_NAMESPACE

static const Real32 MinGlobalRes  = 10.0f;        // min global res., the higher the more vertices
static const UInt32 NW = 0, W = 1, SW = 2, S = 3, SE = 4, E = 5, NE = 6, N = 7, C = 8;

// switch to fill Geometry with TRIANGLE_FANS instead of TRIANGLES
//#define WITH_TRIANGLE_FANS

// switch to share a single SHLChunk with several SHLParameterChunks
//#define WITH_SINGLE_SHLCHUNK

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::Terrain
Terrain node core
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void Terrain::initMethod (void)
{
#if 0
    DrawAction::registerEnterDefault( 
        getClassType(), 
        osgTypedMethodFunctor2BaseCPtrRef<
            Action::ResultE,
            FCPtr<GeometryPtr, Terrain>, 
            CNodePtr          ,  
            Action           *>(&Terrain::drawEnter));
#endif  
    RenderAction::registerEnterDefault(
        getClassType(), 
        osgTypedMethodFunctor2BaseCPtrRef<
            Action::ResultE,
            FCPtr<GeometryPtr, Terrain>, 
            CNodePtr          ,  
            Action           *>(&Terrain::renderEnter));
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

Terrain::Terrain(void) :
    Inherited()
{
}

Terrain::Terrain(const Terrain &source) :
    Inherited(source)
{
}

Terrain::~Terrain(void)
{
}

Real32 Terrain::getHeightDataScaled (UInt32 i) const
{
   switch (getHeightData()->getDataType()) {
   default:
   case Image::OSG_INVALID_IMAGEDATATYPE:
   case Image::OSG_UINT8_IMAGEDATA:
     return ((UInt8*)getHeightData()->getData())[i]/Real32(TypeTraits<UInt8>::getMax());
   case Image::OSG_UINT16_IMAGEDATA:
     return ((UInt16*)getHeightData()->getData())[i]/Real32(TypeTraits<UInt16>::getMax());
   case Image::OSG_UINT32_IMAGEDATA:
     return ((UInt32*)getHeightData()->getData())[i]/Real32(TypeTraits<UInt32>::getMax());
   case Image::OSG_FLOAT16_IMAGEDATA:
     return ((Real16*)getHeightData()->getData())[i];
   case Image::OSG_FLOAT32_IMAGEDATA:
     return ((Real32*)getHeightData()->getData())[i];
   };
}
void Terrain::getVertex (UInt32 i, Pnt3f& point) const
{
   GeoPositions3fPtr pos = GeoPositions3fPtr::dcast(getHeightVertices());
   point.setValue(pos->getField()[i]);
}
const Pnt3f& Terrain::getVertex (UInt32 i) const
{
   GeoPositions3fPtr pos = GeoPositions3fPtr::dcast(getHeightVertices());
   return pos->getField()[i];
}
UInt32 Terrain::getNumVertices () const
{
   GeoPositions3fPtr pos = GeoPositions3fPtr::dcast(getHeightVertices());
   return pos->getField().size();
}

// GLSL programs

// vertex shader program for bump mapping in surface local coordinates
static std::string _vp_program =
"const vec3   planenormal   = vec3 (0.0, 0.0, 1.0);\n"
"const vec3   planebinormal = vec3 (0.0, 1.0, 0.0);\n"
"const vec3   planetangent  = vec3 (1.0, 0.0, 0.0);\n"
"varying vec3 lightDir;    // interpolated surface local coordinate light direction\n"
"varying vec3 viewDir;     // interpolated surface local coordinate view direction\n"

"void main(void)\n"
"{\n"
"    // Do standard vertex stuff\n"

"    gl_Position    = gl_ModelViewProjectionMatrix * gl_Vertex;\n"
"    gl_TexCoord[0] = gl_MultiTexCoord0;\n"

"    // Compute the binormal\n"
"    vec3 n = normalize(gl_NormalMatrix * planenormal);\n"
"    vec3 t = normalize(gl_NormalMatrix * planetangent);\n"
"    vec3 b = cross(n, t);\n"

"    // Transform light position into surface local coordinates\n"
"    vec3 LightPosition = gl_LightSource[0].position.xyz;\n"

"    vec3 v;\n"
"    v.x = dot(LightPosition, t);\n"
"    v.y = dot(LightPosition, b);\n"
"    v.z = dot(LightPosition, n);\n"

"    lightDir = normalize(v);\n"

"    vec3 pos = vec3 (gl_ModelViewMatrix * gl_Vertex);\n"
"    v.x = dot(pos, t);\n"
"    v.y = dot(pos, b);\n"
"    v.z = dot(pos, n);\n"

"    viewDir = normalize(v);\n"
"\n"
"}\n";

// fragment shader program for bump mapping in surface local coordinates
static std::string _fp_program =
"uniform sampler2D texSampler;\n"
"uniform sampler2D nmapSampler;\n"
"uniform float offsetS;\n"
"uniform float offsetT;\n"
"uniform float scaleS;\n"
"uniform float scaleT;\n"
"uniform float specularExponent;\n"
"uniform float diffuseFactor;\n"
"uniform float specularFactor;\n"
"uniform vec3  basecolor;\n"
"varying vec3 lightDir;       // interpolated surface local coordinate light direction\n"
"varying vec3 viewDir;        // interpolated surface local coordinate view direction\n"

"void main (void)\n"
"{\n"
"    vec3 norm;\n"
"    vec3 r;\n"
"    vec3 color;\n"
"    vec3 texcolor;\n"
"    float intensity;\n"
"    float spec;\n"
"    float d;\n"
"    // Fetch normal from normal map\n"
"    vec2 nmapST = vec2 (gl_TexCoord[0])*vec2(scaleS, scaleT) + vec2(offsetS, offsetT);\n"
"    norm = vec3(texture2D(nmapSampler, nmapST));\n"
"    norm = (norm - 0.5) * 2.0;\n"
"    // Compute diffuse reflection\n"
"    d = dot(lightDir, norm);\n"
"    intensity = max(d, 0.0) * diffuseFactor;\n"
"    // Compute specular reflection\n"
"    d = 2.0 * d;\n"
"    r = d * norm;\n"
"    r = lightDir - r;\n"
"    spec = pow(max(dot(r, viewDir), 0.0), specularExponent) * specularFactor;\n"
"    intensity += min (spec, 1.0);\n"
"    // mix texture color and lighting color\n"
"    texcolor = vec3(texture2D(texSampler, vec2 (gl_TexCoord[0])));\n"
"    color = clamp(texcolor * basecolor * intensity, 0.0, 1.0);\n"
"    // Write out final fragment color\n"
"    gl_FragColor = vec4 (color, 1.0);\n"
"\n"
"}\n";

// SHLChunk initialized in Terrain::changed
static SHLChunkPtr s_shlChunk;
SHLChunkPtr Terrain::createSHLChunk () const
{
   SHLChunkPtr shl = SHLChunk::create();
   beginEditCP(shl);
   shl->setVertexProgram  (_vp_program);
   shl->setFragmentProgram(_fp_program);
   endEditCP(shl);
   // CF without the following addRefCP, 
   // it crashes on changing SHLParameterChunks in Terrain::addMaterialChunks
   addRefCP(shl);
   return shl;
}


// ARB vertex and fragment programs
// generated out of GLSL programs by 
// cgc -oglsl -strict -profile arbvp1 vertex.glsl   -o perpixel.avp
// cgc -oglsl -strict -profile arbfp1 fragment.glsl -o perpixel.afp

// CF does not work currently!

static std::string _avp_program =
"!!ARBvp1.0\n"
"PARAM mv[4]    = { state.matrix.modelview };\n"
"PARAM mvp[4]   = { state.matrix.mvp };\n"
"PARAM mvinv[4] = { state.matrix.modelview.invtrans };\n"
"PARAM light0   = state.light[0].position;\n"
"TEMP R0;\n"
"TEMP R1;\n"
"TEMP R2;\n"
"TEMP R3;\n"
"TEMP R4;\n"
"TEMP R5;\n"
"MOV result.texcoord[0], vertex.texcoord[0];\n"
"MUL R0, vertex.position.y, mvp[1];\n"
"//MUL R3.xyz, vertex.position.y, mv[1];\n"
"//MOV R2.xyz, mvinv[0];\n"
"//MOV R1.xyz, mvinv[2];\n"
"//DP3 R1.w, mvinv[2], R1;\n"
"//DP3 R2.x, mvinv[0], R2;\n"
"//MAD R1.xyz, vertex.position.x, mv[0], R3;\n"
"MAD R0, vertex.position.x, mvp[0], R0;\n"
"MAD R0, vertex.position.z, mvp[2], R0;\n"
"//MAD R1.xyz, vertex.position.z, mv[2], R1;\n"
"//RSQ R2.x, R2.x;\n"
"//MAD R4.xyz, vertex.position.w, mv[3], R1;\n"
"//RSQ R1.x, R1.w;\n"
"//MUL R2.xyz, R2.x, mvinv[0];\n"
"//MUL R1.xyz, R1.x, mvinv[2];\n"
"//DP3 R5.z, R4, R1;\n"
"//DP3 R5.x, R4, R2;\n"
"//DP3 R1.w, R1, light0;\n"
"//MUL R3.xyz, R1.zxyw, R2.yzxw;\n"
"//MAD R3.xyz, R1.yzxw, R2.zxyw, -R3;\n"
"//DP3 R1.x, R2, light0;\n"
"//DP3 R1.y, R3, light0;\n"
"//DP3 R5.y, R4, R3;\n"
"//DP3 R1.z, R1.xyww, R1.xyww;\n"
"//DP3 R2.x, R5, R5;\n"
"//RSQ R1.z, R1.z;\n"
"MAD result.position, vertex.position.w, mvp[3], R0;\n"
"//RSQ R0.x, R2.x;\n"
"//MUL result.texcoord[1].xyz, R1.z, R1.xyww;\n"
"//MUL result.texcoord[2].xyz, R0.x, R5;\n"
"END\n"
"# 31 instructions, 6 R-regs\n";

VertexProgramChunkPtr Terrain::createVPChunk () const
{
   std::istrstream vpcode(_avp_program.c_str());

   VertexProgramChunkPtr vp = VertexProgramChunk::create();
   beginEditCP(vp);
   vp->read(vpcode);
   // parameter come here
   endEditCP(vp);
   addRefCP(vp);
   return vp;
}

static std::string _afp_program =
"!!ARBfp1.0\n"
"PARAM c[9] = { program.local[0..4], { 0.5, 2, 0, 1 }, program.local[6..8] };\n"
"TEMP R0;\n"
"TEMP R1;\n"
"MOV R0.w, c[4].x;\n"
"MOV R0.z, c[3].x;\n"
"MOV R0.x, c[1];\n"
"MOV R0.y, c[2].x;\n"
"MAD R0.xy, fragment.texcoord[0], R0, R0.zwzw;\n"
"TEX R0.xyz, R0, texture[1], 2D;\n"
"ADD R0.xyz, R0, -c[5].x;\n"
"MUL R1.xyz, R0, c[5].y;\n"
"DP3 R0.x, fragment.texcoord[1], R1;\n"
"MUL R1.xyz, R0.x, R1;\n"
"MAD R1.xyz, -R1, c[5].y, fragment.texcoord[1];\n"
"DP3 R0.y, R1, fragment.texcoord[2];\n"
"MAX R0.y, R0, c[5].z;\n"
"POW R0.y, R0.y, c[7].x;\n"
"MUL R0.y, R0, c[8].x;\n"
"MIN R1.x, R0.y, c[5].w;\n"
"MAX R0.w, R0.x, c[5].z;\n"
"TEX R0.xyz, fragment.texcoord[0], texture[0], 2D;\n"
"MAD R0.w, R0, c[6].x, R1.x;\n"
"MUL R0.xyz, R0, c[0];\n"
"MUL_SAT result.color.xyz, R0, R0.w;\n"
"MOV result.color.w, c[5];\n"
"MOV result.color, c[5];\n"
"END\n"
"# 22 instructions, 2 R-regs\n";

FragmentProgramChunkPtr Terrain::createFPChunk () const
{
   std::istrstream fpcode(_afp_program.c_str());

   FragmentProgramChunkPtr fp = FragmentProgramChunk::create();
   beginEditCP(fp);
   fp->read(fpcode);
   // parameter come here
   fp->addParameter("offsetS", 3, Vec4f(1.0f/getTexSpacing(), 1.0f/getTexSpacing(), 1.0f/getTexSpacing(), 1.0f/getTexSpacing()));
   fp->addParameter("scaleS",  1, Vec4f(-getOriginTexX()/getTexSpacing(),  -getOriginTexX()/getTexSpacing(), -getOriginTexX()/getTexSpacing(), -getOriginTexX()/getTexSpacing()));
   if (getTexYSpacing() != 1.0f) {
      fp->addParameter("offsetT", 4, Vec4f(-getOriginTexY()/getTexYSpacing(), -getOriginTexY()/getTexYSpacing(), -getOriginTexY()/getTexYSpacing(), -getOriginTexY()/getTexYSpacing()));
      fp->addParameter("scaleT",  2, Vec4f(1.0f/getTexYSpacing(), 1.0f/getTexYSpacing(), 1.0f/getTexYSpacing(), 1.0f/getTexYSpacing()));
   } else {
      fp->addParameter("offsetT", 4, Vec4f(-getOriginTexY()/getTexSpacing(), -getOriginTexY()/getTexSpacing(), -getOriginTexY()/getTexSpacing(), -getOriginTexY()/getTexSpacing()));
      fp->addParameter("scaleT",  2, Vec4f(1.0f/getTexSpacing(), 1.0f/getTexSpacing(), 1.0f/getTexSpacing(), 1.0f/getTexSpacing()));
   }
   fp->addParameter("diffuseFactor",    6, Vec4f(1.0f, 1.0f, 1.0f, 1.0f));
   fp->addParameter("specularExponent", 7, Vec4f(6.0f, 6.0f, 6.0f, 6.0f));
   fp->addParameter("specularFactor",   8, Vec4f(0.2f, 0.2f, 0.2f, 0.2f));
   fp->addParameter("basecolor", 0, Vec4f(1.0f, 1.0f, 1.0f, 1.0f));
   endEditCP(fp);
   addRefCP(fp);
   return fp;
}

void Terrain::addMaterialChunks () const
{
#if 1
#ifndef WITH_SINGLE_SHLCHUNK
   SHLParameterChunkPtr shlp = SHLParameterChunk::create();
   beginEditCP(shlp);
   shlp->setSHLChunk(s_shlChunk);
   shlp->setUniformParameter("texSampler",  0);
   shlp->setUniformParameter("nmapSampler", 1);
   // the following spares a second set of texture coordinates
   shlp->setUniformParameter("offsetS",    -getOriginTexX()/getTexSpacing());
   shlp->setUniformParameter("scaleS",     1.0f/getTexSpacing());
   if (getTexYSpacing() != 1.0f) {
      shlp->setUniformParameter("offsetT",    -getOriginTexY()/getTexYSpacing());
      shlp->setUniformParameter("scaleT",     1.0f/getTexYSpacing());
   } else {
      shlp->setUniformParameter("offsetT",    -getOriginTexY()/getTexSpacing());
      shlp->setUniformParameter("scaleT",     1.0f/getTexSpacing());
   }
   shlp->setUniformParameter("diffuseFactor",    1.0f);
   shlp->setUniformParameter("specularFactor",   0.2f);
   shlp->setUniformParameter("specularExponent", 6.0f);
   shlp->setUniformParameter("basecolor", Vec3f(1.0, 1.0, 1.0));
   endEditCP(shlp);
#else
   SHLChunkPtr shl = SHLChunk::create();
   beginEditCP(shl);
   shl->setVertexProgram  (_vp_program);
   shl->setFragmentProgram(_fp_program);
   shl->setUniformParameter("texSampler",  0);
   shl->setUniformParameter("nmapSampler", 1);
   // the following spares a second set of texture coordinates
   shl->setUniformParameter("offsetS",    -getOriginTexX()/getTexSpacing());
   shl->setUniformParameter("scaleS",     1.0f/getTexSpacing());
   if (getTexYSpacing() != 1.0f) {
      shl->setUniformParameter("offsetT",    -getOriginTexY()/getTexYSpacing());
      shl->setUniformParameter("scaleT",     1.0f/getTexYSpacing());
   } else {
      shl->setUniformParameter("offsetT",    -getOriginTexY()/getTexSpacing());
      shl->setUniformParameter("scaleT",     1.0f/getTexSpacing());
   }
   shl->setUniformParameter("diffuseFactor",    1.0f);
   shl->setUniformParameter("specularFactor",   0.2f);
   shl->setUniformParameter("specularExponent", 6.0f);
   shl->setUniformParameter("basecolor", Vec3f(1.0, 1.0, 1.0));
   endEditCP(shl);
#endif
#else
   VertexProgramChunkPtr   vp = createVPChunk();
   FragmentProgramChunkPtr fp = createFPChunk();
#endif

   ImagePtr        normal_map_img = createNormalMap();
   TextureChunkPtr tex_normal_map = TextureChunk::create();
   beginEditCP(tex_normal_map);
   tex_normal_map->setImage(normal_map_img);
   tex_normal_map->setMinFilter(GL_LINEAR);
   tex_normal_map->setMagFilter(GL_LINEAR);
   tex_normal_map->setWrapS(GL_CLAMP);
   tex_normal_map->setWrapT(GL_CLAMP);
   //tex_normal_map->setEnvMode(GL_MODULATE);
   endEditCP(tex_normal_map);

   ChunkMaterialPtr mat = ChunkMaterialPtr::dcast(getMaterial());
   beginEditCP(mat);
#if 1
#ifndef WITH_SINGLE_SHLCHUNK
   StateChunkPtr oldSHL  = mat->find(SHLChunk::getClassType());
   if (oldSHL == NullFC) {
      mat->addChunk(s_shlChunk);
   }
   StateChunkPtr oldSHLP = mat->find(SHLParameterChunk::getClassType());
   if (oldSHLP != NullFC) {
      mat->subChunk(oldSHLP);
   }
   mat->addChunk(shlp);
#else
   StateChunkPtr oldSHL  = mat->find(SHLChunk::getClassType());
   if (oldSHL != NullFC) {
      mat->subChunk(oldSHL);
   }
   mat->addChunk(shl);
#endif
#else
   StateChunkPtr oldVP  = mat->find(VertexProgramChunk::getClassType());
   if (oldVP != NullFC) {
      mat->subChunk(oldVP);
   }
   mat->addChunk(vp);
   StateChunkPtr oldFP  = mat->find(FragmentProgramChunk::getClassType());
   if (oldFP != NullFC) {
      mat->subChunk(oldFP);
   }
   mat->addChunk(fp);
#endif
   StateChunkPtr oldTEX  = mat->find(TextureChunk::getClassType(), 1);
   if (oldTEX != NullFC) {
      mat->subChunk(oldTEX);
   }
   mat->addChunk(tex_normal_map, 1);
   endEditCP(mat);
}

ImagePtr Terrain::createNormalMap () const
{
   ImagePtr out = Image::create();
   out->set(Image::OSG_RGB_PF, getWidth()-1, getWidth()-1, 1, 
	    1, 1, 0.0f, NULL, Image::OSG_UINT8_IMAGEDATA);
   UInt8* outData = (UInt8*)out->getData();

   GeoPositions3fPtr pos = GeoPositions3fPtr::dcast(getPositions());
   const Real32  maxData = 0.5f*TypeTraits<UInt8>::getMax();
   UInt32 vnum, inum;
   vnum = inum = 0;
   for (UInt32 z = 0; z < getWidth(); z++) {
      for (UInt32 x = 0; x < getWidth(); x++, vnum++) {
	 Vec3f tanx, tany, norm;
  	 if (x == 0 || z == 0) {
	    continue;
	 }
	 //if (x > 0) {
	 tanx = pos->getValue(vnum)          - pos->getValue(vnum-1);
	 //} else {
	 //tanx = pos->getValue(vnum+1)        - pos->getValue(vnum);		
	 //}
	 //if (z > 0) {
	 tany = pos->getValue(vnum) - pos->getValue(vnum-getWidth());
	 //} else {
	 //tany = pos->getValue(vnum+getWidth()) - pos->getValue(vnum);
	 //}
	 norm.setValue(tany.cross(tanx)); norm.normalize();
	 outData[inum]   = UInt8(maxData*(norm[0]+1.0f));
	 outData[inum+1] = UInt8(maxData*(norm[1]+1.0f));
	 outData[inum+2] = UInt8(maxData*(norm[2]+1.0f));
	 inum += 3;
      }
   }
   return out;
}


void Terrain::calcD2ErrorMatrix() 
{  
  //--- call recursive function for setting initial D2-Values ---
  calcD2ErrorMatrixRec(getWidth() / 2, getWidth() / 2, getWidth(), 1);

  //--- ensure max level difference of 1 ------------------------
  propagateD2Errors();
}

void Terrain::calcD2ErrorMatrixRec(Int32 centerX, Int32 centerZ, Int32 width, Int32 level) 
{
   if (level <= getLevel()) {
      Int32 w2 = width / 2;
      Int32 w4 = width / 4;
      //--- current value -------------------------------------------------------------
      Int32 nodeIndex = centerZ * getWidth() + centerX;
      if (level == getLevel()-getBorderDetail()
	  && (centerX <= w2 || (getWidth()-centerX) <= w2+1 || centerZ <= w2 || (getWidth()-centerZ) <= w2+1)) {
	getHeightError(nodeIndex) = (getBoundMax()[1]-getBoundMin()[1]) / ((Real32) width * getVertexSpacing());
      } else if (level > getLevel()-getBorderDetail()
		 && (centerX <= w2 || (getWidth()-centerX) <= w2+1 || centerZ <= w2 || (getWidth()-centerZ) <= w2+1)) { 
	getHeightError(nodeIndex) = 0.0f;
      } else {
	getHeightError(nodeIndex) = calcD2Value(centerX, centerZ, width);
      }
      //--- descend tree --------------------------------------------------------------
      calcD2ErrorMatrixRec(centerX - w4, centerZ + w4, w2, level + 1);  // nw child
      calcD2ErrorMatrixRec(centerX + w4, centerZ + w4, w2, level + 1);  // ne child
      calcD2ErrorMatrixRec(centerX + w4, centerZ - w4, w2, level + 1);  // se child
      calcD2ErrorMatrixRec(centerX - w4, centerZ - w4, w2, level + 1);  // sw child
   }
}

Real32 Terrain::calcD2Value (Int32 centerX, Int32 centerZ, Int32 width) 
{
   //--- init needed vars -------------------------------------------------------------
  Int32 rx = width / 2;                          // radius offset in x direction
  Int32 rz = rx * getWidth();                    // radius offset in z direction
  
  Int32 c  = centerZ * getWidth() + centerX;     // center vertex
  Int32 n  = c - rz;                             // northern vertex
  Int32 w  = c - rx;                             // western
  Int32 s  = c + rz;                             // southern
  Int32 e  = c + rx;                             // eastern
  Int32 nw = n - rx;                             // ...
  Int32 sw = s - rx;
  Int32 se = s + rx;
  Int32 ne = n + rx;
  
  const GeoPositions3f::StoredFieldType& v = 
    GeoPositions3fPtr::dcast(getHeightVertices())->getField(); // shortcut

  //--- north, east, south, west errors ----------------------------------------------
  Real32 nErr = osgabs( v[n][1] -  (v[nw][1] + v[ne][1]) / 2.0f);
  Real32 eErr = osgabs( v[e][1] -  (v[ne][1] + v[se][1]) / 2.0f);
  Real32 sErr = osgabs( v[s][1] -  (v[se][1] + v[sw][1]) / 2.0f);
  Real32 wErr = osgabs( v[w][1] -  (v[sw][1] + v[nw][1]) / 2.0f);
  
  
  //--- 1. and 2. diagonal error -----------------------------------------------------
  
  Real32 d1Err = osgabs( v[c][1] -  (v[nw][1] + v[se][1]) / 2.0f);
  Real32 d2Err = osgabs( v[c][1] -  (v[ne][1] + v[sw][1]) / 2.0f);
  
  //--- determine max of the 6 errors ------------------------------------------------
  
  Real32 maxErr = osgMax(osgMax(nErr, eErr),
			 osgMax(osgMax(sErr, wErr), osgMax(d1Err, d2Err)));
  
  return (maxErr / ((Real32) width * getVertexSpacing()));
}



void Terrain::propagateD2Errors() 
{
    const Real32 D2K = MinGlobalRes / (2.0f * (MinGlobalRes - 1.0f));

  // find the highest level
  //--- init vars --------------------------------------------------------------------

  Int32 steps = getWidth() / 2;
  Int32 width = 2;
  
  Int32 centerX, centerZ;

  Int32 w2;
  Int32 p1, p2, p3;                 // indices of parents
  Int32 p1x = 0, p1z = 0, 
    p2x = 0, p2z = 0, 
    p3x = 0, p3z = 0;

  MFReal32& em = *getMFHeightError();             // shortcut


  //--- iterate through all levels ---------------------------------------------------
  while (steps > 1) {
     w2 = width / 2;
     centerX = w2;

     for (Int32 i = 0; i < steps; i++) {
        centerZ = w2;
	for (Int32 j = 0; j < steps; j++) {
	   //--- determine parents' indices ------------------------
	   switch ((centerX/width)%2 + 2*((centerZ/width)%2)) {
	   case 0: 
	     p1x = centerX+w2;
	     p1z = centerZ+w2;
	     p2x = centerX-width-w2;
	     p2z = centerZ+w2;
	     p3x = centerX+w2;
	     p3z = centerZ-width-w2;
	     break;
	   case 1: 
	     p1x = centerX-w2;
	     p1z = centerZ+w2;
	     p2x = centerX-w2;
	     p2z = centerZ-width-w2;
	     p3x = centerX+width+w2;
	     p3z = centerZ+w2;
	     break;
	   case 2: 
	     p1x = centerX+w2;
	     p1z = centerZ-w2;
	     p2x = centerX+w2;
	     p2z = centerZ+width+w2;
	     p3x = centerX-width-w2;
	     p3z = centerZ-w2;
	     break;
	   case 3: 
	     p1x = centerX-w2;
	     p1z = centerZ-w2;
	     p2x = centerX+width+w2;
	     p2z = centerZ-w2;
	     p3x = centerX-w2;
	     p3z = centerZ+width+w2;
	     break;
	   }
	   
	   //--- propagate to 3 parents -----------------------------
	   Real32 d2K_EMthis = D2K * em[centerZ * getWidth() + centerX];

	   //--- to real father -------------------------------------
	   p1     = p1z * getWidth() + p1x;
	   em[p1] = osgMax(em[p1], d2K_EMthis);

	   //--- other 2 "parents" ----------------------------------
	   if (p2x >= 0  &&  p2x < getWidth()  && p2z >= 0  &&  p2z < getWidth()    ) {
	      p2     = p2z * getWidth() + p2x;
	      em[p2] = osgMax(em[p2], d2K_EMthis);
	   }

	   if (p3x >= 0  &&  p3x < getWidth()  && p3z >= 0  &&  p3z < getWidth()    ) {
	      p3     = p3z * getWidth() + p3x;
	      em[p3] = osgMax(em[p3], d2K_EMthis);
	   }

	   centerZ += width;                  // advance zPos
	}
	centerX += width;                          // advance xPos
     }
     width *= 2;  
     steps /= 2;
  }
}

Real32 Terrain::calcSubDiv(Int32 nodeIndex, Int32 width) 
{
   //--- calculate the eye distance to each node, using L1-Norm --------------
   const Pnt3f& v = getVertex(nodeIndex);
   Real32 eyeDist = osgabs(v[0] - getEyePoint()[0]) +
     osgabs(getEyeHeight()) +
     osgabs(v[2] - getEyePoint()[2]);

   //--- calc subdiv value ---------------------------------------------------
   return eyeDist / ((width * getVertexSpacing()) * MinGlobalRes *
		     osgMax(getDetail() * getHeightError(nodeIndex), 1.0f));
}

void Terrain::triangulateMeshRec (const FrustumVolume& frustum, 
				  Int32 c, Int32 width, Int32 level) 
{
   if (level > getLevel()) {  
      return;  
   }

   //--- check view frustum --------------------------------------------------------------		
#if 1
   if (level <= getLevel() - 2) {
      Pnt3f point;
      getVertex(c, point);

      SphereVolume current(point,
			   (0.5f*width) * getVertexSpacing() * 15.0f);
      
      if (!OSG::intersect(frustum, current))  {  
	 return;  
      }
   }
#endif

   //--- go on ---------------------------------------------------------------------------
   Real32 subDiv = calcSubDiv(c, width);

   Int32   w2     = width / 2;
   Int32   w4     = width / 4;
   Int32   r      = w4 * getWidth();

   Int32   nw     = c - r - w4;
   Int32   ne     = c - r + w4;
   Int32   sw     = c + r - w4;
   Int32   se     = c + r + w4;

   if (subDiv >= 1.0f) { //--- NOT to be drawn --------------------
     deleteNode(c, width);
     return;
   } else { //--- leaf or parent? ---------------------
     getHeightQuad(c) = calcBlend(subDiv);

     triangulateMeshRec(frustum, nw, w2, level+1);
     triangulateMeshRec(frustum, ne, w2, level+1);
     triangulateMeshRec(frustum, sw, w2, level+1);
     triangulateMeshRec(frustum, se, w2, level+1);

     return;
   }
}

//=== Render Terrain-Mesh ==================================================================================
bool Terrain::renderMeshRec (const FrustumVolume& frustum, 
			     Int32 x, Int32 z, Int32 width, Int32 level, Int32 dirToFather,
			     Real32 rhNW, Real32 rhNE, Real32 rhSW, Real32 rhSE) 
{
   // returns true if caller has to draw this corner
   Int32 c = z * getWidth() + x;              // center

   if (getHeightQuad(c) == TypeTraits<Real32>::getMax()) { // stop recursion
      return true;  
   }  

   Int32 w2 = width / 2;
   Int32 w4 = width / 4;
   
   
   //--- check view frustum ---------------------------------------------------------------------------
#if 1
   if (level <= getLevel()-2) {  
      Pnt3f point;
      getVertex(c, point);
     
      SphereVolume current;
      current.setCenter(point);
      current.setRadius((Real32) w2 * (Real32) getVertexSpacing() * 5.0f);
      
      if (!OSG::intersect(frustum, current)) {  
        return false;  
      }
   }
#endif

   //--- init necessary vars --------------------------------------------------------------------------
   Int32 rx = width / 2;             // radius offset in x direction
   Int32 rz = rx * getWidth();            // radius offset in z direction

   Int32 n  = c - rz;                // northern vertex
   Int32 w  = c - rx;                // western
   Int32 s  = c + rz;                // southern
   Int32 e  = c + rx;                // eastern
   Int32 nw = n - rx;
   Int32 sw = s - rx;
   Int32 se = s + rx;
   Int32 ne = n + rx;

   //--- get all 9 heights ----------------------------------------------------------------------------
   Real32 blend = getHeightQuad(c);

   Real32 hC  = getHeight(c, width, dirToFather, C, blend, rhNW, rhNE, rhSW, rhSE);
   Real32 hN  = getHeight(n, width, dirToFather, N, blend, rhNW, rhNE, rhSW, rhSE);
   Real32 hS  = getHeight(s, width, dirToFather, S, blend, rhNW, rhNE, rhSW, rhSE);
   Real32 hW  = getHeight(w, width, dirToFather, W, blend, rhNW, rhNE, rhSW, rhSE);
   Real32 hE  = getHeight(e, width, dirToFather, E, blend, rhNW, rhNE, rhSW, rhSE);

   //--- check if node has children -------------------------------------------------------------------
   bool corners[] = { true, true, true, true, true, true, true, true };
   bool isLeaf  = false;

   if (level < getLevel()) {
      corners[NW] = renderMeshRec(frustum, x-w4, z-w4, w2, level+1, SE, rhNW, hN,   hW,   hC );
      corners[NE] = renderMeshRec(frustum, x+w4, z-w4, w2, level+1, SW, hN,   rhNE, hC,   hE );
      corners[SW] = renderMeshRec(frustum, x-w4, z+w4, w2, level+1, NE, hW,   hC,   rhSW, hS );
      corners[SE] = renderMeshRec(frustum, x+w4, z+w4, w2, level+1, NW, hC,   hE,   hS,   rhSE);
   } else {
      isLeaf = true;
   }

   if (corners[NW] || corners[SW] || corners[SE] || corners[NE]) {
      if (corners[NW] && corners[SW] && corners[SE] && corners[NE]) {  
	 isLeaf = true;  
      }

      //--- determine 'corners' to be drawn ------------------------------------------------------
      const MFReal32& qm = *getMFHeightQuad(); // shortcut
      // check array bounds and whether the neighbor exists
      if ((z-width >= 0    ) && (qm[c-(getWidth()*width)] == TypeTraits<Real32>::getMax())) {  
	 corners[N] = false;  
      }
      if ((x+width <  getWidth()) && (qm[c+width]         == TypeTraits<Real32>::getMax())) {  
	 corners[E] = false;  
      }
      if ((z+width <  getWidth()) && (qm[c+(getWidth()*width)] == TypeTraits<Real32>::getMax())) {  
	 corners[S] = false;  
      }
      if ((x-width >= 0    ) && (qm[c-width]         == TypeTraits<Real32>::getMax())) {  
	 corners[W] = false;  
      }

      createFanAround(x, z, width, corners, isLeaf, hC, hN, hS, hW, hE, rhNW, rhNE, rhSW, rhSE);
   }
   return false;
}

void Terrain::createFanAround (Int32 x, Int32 z, Int32 width, bool* corners, bool isLeaf,
			       Real32 hC,  Real32 hN,  Real32 hS,  Real32 hW,  Real32 hE,
			       Real32 hNW, Real32 hNE, Real32 hSW, Real32 hSE) 
{
   //--- init necessary vars -------------------------------------------------
  Int32 rx = width / 2;             // radius offset in x direction
  Int32 rz = rx * getWidth();            // radius offset in z direction

  Int32 c  = z * getWidth() + x;         // center vertex
  Int32 n  = c - rz;                // northern vertex
  Int32 w  = c - rx;                // western
  Int32 s  = c + rz;                // southern
  Int32 e  = c + rx;                // eastern
  Int32 nw = n - rx;
  Int32 sw = s - rx;
  Int32 se = s + rx;
  Int32 ne = n + rx;

  //--- pre-check corners array ---------------------------------------------
  if (!isLeaf) {
     if (!corners[NW] && !corners[SW]) {  corners[W] = false;  }
     if (!corners[SW] && !corners[SE]) {  corners[S] = false;  }
     if (!corners[SE] && !corners[NE]) {  corners[E] = false;  }
     if (!corners[NE] && !corners[NW]) {  corners[N] = false;  }
  }

#ifdef WITH_TRIANGLES
   // adapt height
   GeoPositions3f::StoredFieldType& pos = GeoPositions3fPtr::dcast(getPositions())->getField();
   pos[c][1]  = hC;
   //--- check western quarter -----------------------------------------------
   GeoIndicesUI32::StoredFieldType& ind = GeoIndicesUI32Ptr::dcast(getIndices())->getField();
   if (corners[NW] || corners[W] || corners[SW]) {
   pos[nw][1] = hNW;
   pos[w][1]  = hW;
   pos[sw][1] = hSW;
   if (corners[NW]) {
      ind.push_back(nw);
      if (corners[W]) {
	ind.push_back(w);
	if (corners[SW]) {	 
	  ind.push_back(c);
	  ind.push_back(w);
	  ind.push_back(sw);
	}
      } else {
	if (corners[SW]) { ind.push_back(sw); }
	else             { ind.push_back(w);  }
      }
     ind.push_back(c);
  } else if (corners[W] || corners[SW]) {
     ind.push_back(w);
     ind.push_back(sw);
     ind.push_back(c);
  }
  }

  //--- check southern quarter ----------------------------------------------
  if (corners[SW] || corners[S] || corners[SE]) {
  pos[sw][1] = hSW;
  pos[s][1]  = hS;
  pos[se][1] = hSE;
  if (corners[SW]) {
    ind.push_back(sw);
    if (corners[S]) { 
     ind.push_back(s);
     if (corners[SE]) {
        ind.push_back(c);
	ind.push_back(s);
	ind.push_back(se);
      }
    } else {
      if (corners[SE]) {  ind.push_back(se);  }
      else             {  ind.push_back(s);   }
    }
    ind.push_back(c);
  } else if (corners[S] || corners[SE]) {
    ind.push_back(s);
    ind.push_back(se);
    ind.push_back(c); 
  }
  }

  //--- check eastern quarter -----------------------------------------------
  if (corners[SE] || corners[E] || corners[NE]) {
  pos[se][1] = hSE;
  pos[e][1]  = hE;
  pos[ne][1] = hNE;
  if (corners[SE]) {
    ind.push_back(se); 
    if (corners[E]) {
      ind.push_back(e);       
      if (corners[NE]) {	
	ind.push_back(c); 
	ind.push_back(e); 
	ind.push_back(ne); 
      }
    } else {
      if (corners[NE]) {  ind.push_back(ne);  }
      else             {  ind.push_back(e);   }
    }
    ind.push_back(c); 
  } else if (corners[E] || corners[NE]) {
    ind.push_back(e); 
    ind.push_back(ne); 
    ind.push_back(c); 
  }
  }

  //--- check northern quarter ----------------------------------------------
  if (corners[NE] || corners[N] || corners[NW]) {
  pos[ne][1] = hNE;
  pos[e][1]  = hN;
  pos[nw][1] = hNW;
  if (corners[NE]) {
    ind.push_back(ne); 
    if (corners[N]) {
      ind.push_back(n); 
      if (corners[NW]) {	
	ind.push_back(c); 
	ind.push_back(n); 
	ind.push_back(nw); 
      }
    } else {
      if (corners[NW]) {  ind.push_back(nw);  }
      else             {  ind.push_back(n);   }
    }
    ind.push_back(c); 
  } else if (corners[N] || corners[NW]) {
    ind.push_back(n); 
    ind.push_back(nw); 
    ind.push_back(c); 
  }
  }
#else // WITH_TRIANGLE_FANS
   GeoIndicesUI32::StoredFieldType& ind = GeoIndicesUI32Ptr::dcast(getIndices())->getField();
   UInt32 prev = ind.size();
   GeoPositions3f::StoredFieldType& pos = GeoPositions3fPtr::dcast(getPositions())->getField();
   pos[c][1] = hC;
   ind.push_back(c);
   Int32 last  = C;
   Int32 first = C;
   if (corners[NW]) {
      SINFO << " NW" << std::flush;
      pos[nw][1] = hNW;
      ind.push_back(nw);
      last = NW;
      if (first == C) { first = NW; }
   }
   if (corners[W]) {
      SINFO << " W" << std::flush;
      pos[w][1] = hW;
      ind.push_back(w);
      last = W;
      if (first == C) { first = W; }
   }
   if (corners[SW]) {	 
      SINFO << " SW" << std::flush;
      pos[sw][1] = hSW;
      ind.push_back(sw);
      last = SW;
      if (first == C) { first = SW; }
   }
   if (corners[S]) {    
      SINFO << " S" << std::flush;
      if (last == W) {
	ind.push_back(c);
      }
      pos[s][1] = hS;
      ind.push_back(s);
      last = S;
      if (first == C) { first = S; }
   }  
   if (corners[SE]) {
      SINFO << " SE" << std::flush;
      pos[se][1] = hSE;
      ind.push_back(se);
      last = SE;
      if (first == C) { first = SE; }
   }
   if (corners[E]) {    
      SINFO << " E" << std::flush;
      if (last == S || last == W) {
	ind.push_back(c);
      }
      pos[e][1] = hE;
      ind.push_back(e);
      last = E;
      if (first == C) { first = E; }
   } 
   if (corners[NE]) {
      SINFO << " NE" << std::flush;
      pos[ne][1] = hNE;
      ind.push_back(ne);
      last = NE;
      if (first == C) { first = NE; }
   }
   if (corners[N]) {    
      SINFO << " N" << std::flush;
      if (last == E || last == S || last == W) {
	ind.push_back(c);
      }
      pos[n][1] = hN;
      ind.push_back(n);
      last = N;
      if (first == C) { first = N; }
   }
   // if first and last point are not midpoints, then close triangle-fan
   if (!(first%2 == 1 && last%2 == 1)) { // first and last point are not midpoints
      ind.push_back(ind[prev+1]);
   }
   // triangle fan with length (ind.size()-prev)
   GeoPLengthsUI32Ptr len = GeoPLengthsUI32Ptr::dcast(getLengths());
   len->push_back((ind.size()-prev));
   GeoPTypesUI8Ptr    typ = GeoPTypesUI8Ptr::dcast(getTypes());
   typ->push_back(GL_TRIANGLE_FAN);
   SINFO << "added triangle-fan of length " << ind.size()-prev << std::endl;
#endif
}

void Terrain::setInterleaved(Int32 index, Real32 height) 
{
   // add position/tex-coord
   GeoIndicesUI32::StoredFieldType& ind = GeoIndicesUI32Ptr::dcast(getIndices())->getField();
   ind.push_back(index);
}


Real32 Terrain::getHeight(Int32 index, Int32 width, Int32 dirToFather, Int32 neswc, Real32 blend,
			  Real32 rhNW, Real32 rhNE, Real32 rhSW, Real32 rhSE) 
{
  const GeoPositions3f::StoredFieldType& vertices = 
    GeoPositions3fPtr::dcast(getHeightVertices())->getField();
  //--- init vars ------------------------------------------------------------------------
  Real32 height = vertices[index][1];

  //--- determine blend values if this is a leaf -----------------------------------------
  if (getGeoMorphing()) {
     //--- init other vars --------------------------------------------------------
     Int32 rx = width / 2;             // radius offset in x dir.
     Int32 rz = rx * getWidth();            // radius offset in z dir.
     
     Int32 z  = index / getWidth();         // z coord. of index
     Int32 x  = index - (z * getWidth());   // x coord. of index
     
     
     //--- determine offset and center indices ------------------------------------
     switch (neswc) {
     case C: 
       switch (dirToFather) {
       case SE:
       case NW:  
	 height = (1.0f-blend) * (rhNW + rhSE)/2.0f + blend*height;  
	 break;
       case NE:
       case SW:  
	 height = (1.0f-blend) * (rhNE+rhSW)/2.0f + blend*height;  
	 break;
       }
       break;
       
     case N: 
       if (z - rx >= 0)    {  
	 blend = osgMin(blend,getHeightQuad(index - rz));  
       }
       
       height = (1.0f-blend) * (rhNW+rhNE)/2.0f + blend*height;
       
       break;
       
     case S: 
       if (z + rx < getWidth()) {  
	 blend=osgMin(blend,getHeightQuad(index + rz));  
       }
       
       height = (1.0f-blend) * (rhSW+rhSE)/2.0f + blend*height;
       
       break;

     case W: 
       if (x - rx >= 0)    {   
	 blend=osgMin(blend,getHeightQuad(index - rx));  
       }
       
       height = (1.0f-blend) * (rhNW+rhSW)/2.0f + blend*height;

       break;

     case E: 
       if (x + rx < getWidth()) {  
	 blend=osgMin(blend,getHeightQuad(index + rx));  
       }

       height = (1.0f-blend) * (rhNE+rhSE)/2.0f + blend*height;

       break;
     }
  }

  return height;
}

Real32 Terrain::calcBlend(Real32 subDiv) 
{
   //--- calc blend factor ----------------------
   Real32 blend = 2 * (1.0f - subDiv);
   blend = osgMin(blend, 1.0f);
   return blend;
}

void Terrain::deleteNode (Int32 index, Int32 width) 
{
   //--- init vars ---------------------------------------
   width /= 2;
  
   Int32 rx = width / 2;
   Int32 rz = rx * getWidth();
   
   //--- delete this node and descend --------------------
   getHeightQuad(index) = TypeTraits<Real32>::getMax();    // C (this)
   if (width > 2) {
      deleteNode(index - rz - rx, width);    // NW
      deleteNode(index - rz + rx, width);    // NE
      deleteNode(index + rz - rx, width);    // SW
      deleteNode(index + rz + rx, width);    // SE
   }
}

Real32 Terrain::getHeightAboveGround (const Pnt3f& eye) 
{
   Real32 ex = eye[0];
   Real32 ey = eye[1];
   Real32 ez = eye[2];
   //--- init needed vars --------------------------------------------------
   Real32 ulx = getVertex(0)[0];                    // upper left x coord.
   Real32 ulz = getVertex(0)[2];                    // upper left z coord.
   
   Real32 lrx = getVertex(getNumVertices() - 1)[0];      // lower right...
   Real32 lrz = getVertex(getNumVertices() - 1)[2];      // ...
   
   //--- determine height above ground -------------------------------------
   if      (ex < ulx) {  ex = ulx;  }
   else if (ex > lrx) {  ex = lrx;  }
  
   if      (ez < ulz) {  ez = ulz;  }
   else if (ez > lrz) {  ez = lrz;  }
   
   Int32 x = (Int32) ((ex - ulx) / getVertexSpacing());
   Int32 z = (Int32) ((ez - ulz) / getVertexSpacing());
   
   if (x > getWidth() - 1) {  x = getWidth() - 1;  }
   if (z > getWidth() - 1) {  z = getWidth() - 1;  }
   
   Real32 ground = getVertex((z * getWidth()) + x)[1];
  
   return ey - ground;
}

Action::ResultE Terrain::renderEnter (Action* action)
{  
   RenderAction* da = dynamic_cast<RenderAction*>(action);
   if (da != NULL && getWidth() > 0) { // dynamic tesselation
      Time startTime = getSystemTime();
      //--- create Terrain Mesh -------------------------------------------------------------
      GeoPLengthsUI32Ptr len = GeoPLengthsUI32Ptr::dcast(getLengths());
      if (getUpdateTerrain() || len->size() == 0) {
	 if (!getEyePointValid()) {
	    Matrix camera  = da->getCameraToWorld();
	    Matrix toworld = da->top_matrix();
	    //action->getActNode()->getToWorld(toworld);
	    toworld.invert();
	    camera.multLeft(toworld);
	    //--- triangulate Mesh ----------------------------------------------------------------
	    setEyePoint(Pnt3f(camera[3][0], camera[3][1], camera[3][2]));
	 }
	 setEyeHeight(getHeightAboveGround(getEyePoint()));
	 const FrustumVolume& frustum = da->getFrustum();
	 triangulateMeshRec(frustum, getWidth()*getWidth()/2, getWidth()-1, 1);

	 GeoPTypesUI8Ptr    typ = GeoPTypesUI8Ptr::dcast(getTypes());
	 GeoIndicesUI32Ptr  ind = GeoIndicesUI32Ptr::dcast(getIndices());
	 beginEditCP(ind);
	 len->clear();
	 typ->clear();
	 ind->clear();
	 
	 const GeoPositions3f::StoredFieldType& v = 
	   GeoPositions3fPtr::dcast(getHeightVertices())->getField();
	 Real32 hNW = v[0][1];
	 Real32 hNE = v[(getWidth()-1)][1];
	 Real32 hSW = v[(getWidth()-1)*getWidth()][1];
	 Real32 hSE = v[((getWidth()-1)*getWidth()+(getWidth()-1))][1];
	 renderMeshRec(frustum, getWidth()/2, getWidth()/2, getWidth()-1, 1, C, hNW, hNE, hSW, hSE);
#ifdef WITH_TRIANGLES
	 beginEditCP(len);
	 beginEditCP(typ);
	 len->push_back((ind->size()));
	 typ->push_back(GL_TRIANGLES);
	 endEditCP(typ);
	 endEditCP(len);
#endif
	 endEditCP(ind);
      }
      Time endTime = getSystemTime();
      //SNOTICE << "terrain time:     " << endTime-startTime << " ms" << std::endl;
   }

   return Inherited::renderActionHandler(action);
}

void            Terrain::adjustVolume (Volume& volume)
{
   volume.setValid (false);
   //volume.setStatic(true);
   volume.setEmpty();
   volume.extendBy(getBoundMin());
   volume.extendBy(getBoundMax());
   volume.setValid();
   Pnt3f minB, maxB;
   volume.getBounds(minB, maxB);
}

/*----------------------------- class specific ----------------------------*/

void Terrain::changed(BitVector whichField, UInt32 origin)
{
    // create single SHL chunk, parameters are changed in separate SHL parameter chunks
    if (s_shlChunk == NullFC) {
       s_shlChunk = createSHLChunk();
    }
    TerrainPtr thisPtr(this);
    // changed HeightData
    // * update HeightError and HeightQuad
    if ((whichField & HeightDataFieldMask) && getHeightData() != NullFC) {
       if (getHeightData()->getPixelFormat() != Image::OSG_L_PF) {
	  SLOG << "heightData is not of LUMINANCE format! " << std::endl;
	  getHeightData()->reformat(Image::OSG_L_PF);
       }
       {
	 setWidth(getHeightData()->getWidth());
	 assert(getHeightData()->getHeight() == getWidth());
	 setLevel((UInt32)(osglog ((getWidth() - 1.0f)) / osglog(2.0f)));

	 SLOG << "found data width=" << getWidth() << ", level=" << getLevel() << std::endl;

	 // clear quad array
	 getMFHeightError()->resize(getWidth()*getWidth());
	 getMFHeightQuad() ->resize(getWidth()*getWidth());
	 for (UInt32 i=0; i<getWidth(); ++i) {
	   for (UInt32 j=0; j<getWidth(); ++j) {
	     getHeightQuad(j*getWidth() + i) = TypeTraits<Real32>::getMax();
	   }
	 }
	 
	 //--- fill Vertices and TexCoords arrays with values --------------------------------------
	 Int32  vnum = 0;                                 // vertex number
	 
	 UInt32 x, z;
	 
	 GeoPositions3fPtr  pos  = GeoPositions3f::create();
	 GeoIndicesUI32Ptr  ind = GeoIndicesUI32::create();
	 GeoPTypesUI8Ptr    typ = GeoPTypesUI8::create();
	 GeoPLengthsUI32Ptr len = GeoPLengthsUI32::create();
	 Pnt3f boundMin(Inf, Inf, Inf);
	 Pnt3f boundMax(NegInf, NegInf, NegInf);
	 beginEditCP(pos);
	 pos ->getFieldPtr()->clear();
	 for (z = 0; z < getWidth(); z++) {
	   for (x = 0; x < getWidth(); x++, vnum++) {
	     Real32 px = (x * getVertexSpacing() + getOriginX());
	     Real32 py = (getHeightDataScaled(vnum) * getHeightScale());
	     Real32 pz = (z * getVertexSpacing() + getOriginY());
	     pos ->push_back(Pnt3f(px, py, pz));
	     boundMin[0] = osgMin(boundMin[0], px);
	     boundMin[1] = osgMin(boundMin[1], py);
	     boundMin[2] = osgMin(boundMin[2], pz);
	     boundMax[0] = osgMax(boundMax[0], px);
	     boundMax[1] = osgMax(boundMax[1], py);
	     boundMax[2] = osgMax(boundMax[2], pz);
	   }
	 }
	 endEditCP(pos);

	 // original heightfield points; Positions is used for geomorphing
	 GeoPositions3fPtr vert = GeoPositions3fPtr::dcast(pos->clone());
	 addRefCP(vert);
	 if (getHeightVertices() != NullFC) {
	    subRefCP(getHeightVertices());
	 }
	 
	 beginEditCP(thisPtr, HeightVerticesFieldMask | BoundMinFieldMask | BoundMaxFieldMask
		     | PositionsFieldMask | TypesFieldMask | LengthsFieldMask | IndicesFieldMask | DlistCacheFieldMask);
	 // geometry fields
	 setPositions(pos);
	 setTypes(typ);
	 setIndices(ind);
	 setLengths(len);
	 setDlistCache(false); // no dlists for changing geometry
	 // terrain fields
	 setHeightVertices(vert);
	 setBoundMin(boundMin);
	 setBoundMax(boundMax);
	 endEditCP  (thisPtr, HeightVerticesFieldMask | BoundMinFieldMask | BoundMaxFieldMask
		     | PositionsFieldMask | TypesFieldMask | LengthsFieldMask | IndicesFieldMask | DlistCacheFieldMask);

	 // calc D2 errors for quality control
	 calcD2ErrorMatrix();
       }
    }   
    if (((whichField & MaterialFieldMask) || (whichField & PerPixelLightingFieldMask))
	&& getPositions() != NullFC) {
       // create texCoords 
       Real32 sstep = getTexSpacing() / (Real32)getWidth(); // Width steps between [0..1.0] for:
       Real32 tstep = sstep;
       if (getTexYSpacing() != 1.0f) { // it is sufficient to just set field TexSpacing for isotropic scaling
	  tstep = getTexYSpacing() / (Real32)getWidth();
       }
       GeoTexCoords2fPtr tex;
       if (getTexCoords() == NullFC) {
	  tex = GeoTexCoords2f::create();
       } else {
	  tex = GeoTexCoords2fPtr::dcast(getTexCoords());
       }
       UInt32 vnum = 0;
       UInt32 x, z;
       Real32 s, t;                                     // tex coords
       beginEditCP(tex);
       tex->getFieldPtr()->clear();
       for (z = 0, t=getOriginTexY(); z < getWidth(); z++, t+=tstep) {
	  for (x = 0, s=getOriginTexX(); x < getWidth(); x++, s+=sstep) {
	     tex ->push_back(Vec2f(s, t));
	  }
       }
       endEditCP(tex);

       beginEditCP(thisPtr, NormalsFieldMask | TexCoordsFieldMask);
       setTexCoords(tex);
       if (getPerPixelLighting()) {
	  // modify material
	  if (getMaterial() != NullFC) {
	    addMaterialChunks();

	    setNormals(NullFC);
	  }
       } else {
	  // create vertex normals
	  GeoPositions3fPtr  pos  = GeoPositions3fPtr::dcast(getPositions());
	  GeoNormals3fPtr    norm = GeoNormals3f::create();
	  beginEditCP(norm);
	  norm->getFieldPtr()->clear();
	  for (z = 0; z < getWidth(); z++) {
	     for (x = 0; x < getWidth(); x++, vnum++) {
	       Vec3f tanx, tany, n;
	       if (x > 0) {
		 tanx = pos->getValue(vnum)          - pos->getValue(vnum-1);
	       } else {
		 tanx = pos->getValue(vnum+1)        - pos->getValue(vnum);		
	       }
	       if (z > 0) {
		 tany = pos->getValue(vnum) - pos->getValue(vnum-getWidth());
	       } else {
		 tany = pos->getValue(vnum+getWidth()) - pos->getValue(vnum);
	       }
	       n.setValue(tany.cross(tanx)); n.normalize();
	       norm->push_back(n);
	     }
	   }
	   endEditCP(norm);
	   setNormals(norm);
       }
       endEditCP  (thisPtr, NormalsFieldMask | TexCoordsFieldMask);
    }
    Inherited::changed(whichField, origin);
}

void Terrain::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump Terrain NI" << std::endl;
}


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGTerrain.cpp,v 1.4 2009/04/07 17:09:29 neumannc Exp $";
    static Char8 cvsid_hpp       [] = OSGTERRAINBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTERRAINBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTERRAINFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif
