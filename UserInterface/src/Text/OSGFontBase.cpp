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
 **     class Font!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFONTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGFontBase.h"
#include "OSGFont.h"

#include <OpenSG/OSGTextFace.h>           // Style default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  FontBase::FamilyFieldMask = 
    (TypeTraits<BitVector>::One << FontBase::FamilyFieldId);

const OSG::BitVector  FontBase::GlyphPixelSizeFieldMask = 
    (TypeTraits<BitVector>::One << FontBase::GlyphPixelSizeFieldId);

const OSG::BitVector  FontBase::SizeFieldMask = 
    (TypeTraits<BitVector>::One << FontBase::SizeFieldId);

const OSG::BitVector  FontBase::GapFieldMask = 
    (TypeTraits<BitVector>::One << FontBase::GapFieldId);

const OSG::BitVector  FontBase::TextureWidthFieldMask = 
    (TypeTraits<BitVector>::One << FontBase::TextureWidthFieldId);

const OSG::BitVector  FontBase::StyleFieldMask = 
    (TypeTraits<BitVector>::One << FontBase::StyleFieldId);

const OSG::BitVector  FontBase::TextureFieldMask = 
    (TypeTraits<BitVector>::One << FontBase::TextureFieldId);

const OSG::BitVector FontBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var std::string     FontBase::_sfFamily
    
*/
/*! \var UInt32          FontBase::_sfGlyphPixelSize
    
*/
/*! \var UInt32          FontBase::_sfSize
    
*/
/*! \var UInt32          FontBase::_sfGap
    
*/
/*! \var UInt32          FontBase::_sfTextureWidth
    
*/
/*! \var UInt32          FontBase::_sfStyle
    
*/
/*! \var TextureChunkPtr FontBase::_sfTexture
    
*/

//! Font description

FieldDescription *FontBase::_desc[] = 
{
    new FieldDescription(SFString::getClassType(), 
                     "Family", 
                     FamilyFieldId, FamilyFieldMask,
                     false,
                     (FieldAccessMethod) &FontBase::getSFFamily),
    new FieldDescription(SFUInt32::getClassType(), 
                     "GlyphPixelSize", 
                     GlyphPixelSizeFieldId, GlyphPixelSizeFieldMask,
                     false,
                     (FieldAccessMethod) &FontBase::getSFGlyphPixelSize),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Size", 
                     SizeFieldId, SizeFieldMask,
                     false,
                     (FieldAccessMethod) &FontBase::getSFSize),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Gap", 
                     GapFieldId, GapFieldMask,
                     false,
                     (FieldAccessMethod) &FontBase::getSFGap),
    new FieldDescription(SFUInt32::getClassType(), 
                     "TextureWidth", 
                     TextureWidthFieldId, TextureWidthFieldMask,
                     false,
                     (FieldAccessMethod) &FontBase::getSFTextureWidth),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Style", 
                     StyleFieldId, StyleFieldMask,
                     false,
                     (FieldAccessMethod) &FontBase::getSFStyle),
    new FieldDescription(SFTextureChunkPtr::getClassType(), 
                     "Texture", 
                     TextureFieldId, TextureFieldMask,
                     false,
                     (FieldAccessMethod) &FontBase::getSFTexture)
};


FieldContainerType FontBase::_type(
    "Font",
    "FieldContainer",
    NULL,
    (PrototypeCreateF) &FontBase::createEmpty,
    Font::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(FontBase, FontPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &FontBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FontBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr FontBase::shallowCopy(void) const 
{ 
    FontPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Font *>(this)); 

    return returnValue; 
}

UInt32 FontBase::getContainerSize(void) const 
{ 
    return sizeof(Font); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void FontBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((FontBase *) &other, whichField);
}
#else
void FontBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((FontBase *) &other, whichField, sInfo);
}
void FontBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FontBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

FontBase::FontBase(void) :
    _sfFamily                 (std::string("SANS")), 
    _sfGlyphPixelSize         (UInt32(46)), 
    _sfSize                   (UInt32(12)), 
    _sfGap                    (UInt32(1)), 
    _sfTextureWidth           (UInt32(0)), 
    _sfStyle                  (UInt32(TextFace::STYLE_PLAIN)), 
    _sfTexture                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

FontBase::FontBase(const FontBase &source) :
    _sfFamily                 (source._sfFamily                 ), 
    _sfGlyphPixelSize         (source._sfGlyphPixelSize         ), 
    _sfSize                   (source._sfSize                   ), 
    _sfGap                    (source._sfGap                    ), 
    _sfTextureWidth           (source._sfTextureWidth           ), 
    _sfStyle                  (source._sfStyle                  ), 
    _sfTexture                (source._sfTexture                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

FontBase::~FontBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 FontBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        returnValue += _sfFamily.getBinSize();
    }

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
    {
        returnValue += _sfGlyphPixelSize.getBinSize();
    }

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        returnValue += _sfSize.getBinSize();
    }

    if(FieldBits::NoField != (GapFieldMask & whichField))
    {
        returnValue += _sfGap.getBinSize();
    }

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
    {
        returnValue += _sfTextureWidth.getBinSize();
    }

    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        returnValue += _sfStyle.getBinSize();
    }

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }


    return returnValue;
}

void FontBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        _sfFamily.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
    {
        _sfGlyphPixelSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GapFieldMask & whichField))
    {
        _sfGap.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
    {
        _sfTextureWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        _sfStyle.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }


}

void FontBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        _sfFamily.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
    {
        _sfGlyphPixelSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GapFieldMask & whichField))
    {
        _sfGap.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
    {
        _sfTextureWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        _sfStyle.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FontBase::executeSyncImpl(      FontBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
        _sfFamily.syncWith(pOther->_sfFamily);

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
        _sfGlyphPixelSize.syncWith(pOther->_sfGlyphPixelSize);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (GapFieldMask & whichField))
        _sfGap.syncWith(pOther->_sfGap);

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
        _sfTextureWidth.syncWith(pOther->_sfTextureWidth);

    if(FieldBits::NoField != (StyleFieldMask & whichField))
        _sfStyle.syncWith(pOther->_sfStyle);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);


}
#else
void FontBase::executeSyncImpl(      FontBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
        _sfFamily.syncWith(pOther->_sfFamily);

    if(FieldBits::NoField != (GlyphPixelSizeFieldMask & whichField))
        _sfGlyphPixelSize.syncWith(pOther->_sfGlyphPixelSize);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (GapFieldMask & whichField))
        _sfGap.syncWith(pOther->_sfGap);

    if(FieldBits::NoField != (TextureWidthFieldMask & whichField))
        _sfTextureWidth.syncWith(pOther->_sfTextureWidth);

    if(FieldBits::NoField != (StyleFieldMask & whichField))
        _sfStyle.syncWith(pOther->_sfStyle);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);



}

void FontBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<FontPtr>::_type("FontPtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(FontPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(FontPtr, );


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGFONTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFONTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFONTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

