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
 **     class BlendGeometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBLENDGEOMETRYINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGBlendGeometryBase.h"
#include "OSGBlendGeometry.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  BlendGeometryBase::BlendAmountsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::BlendAmountsFieldId);

const OSG::BitVector  BlendGeometryBase::BasePositionsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::BasePositionsFieldId);

const OSG::BitVector  BlendGeometryBase::BaseNormalsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::BaseNormalsFieldId);

const OSG::BitVector  BlendGeometryBase::BaseColorsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::BaseColorsFieldId);

const OSG::BitVector  BlendGeometryBase::BaseSecondaryColorsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::BaseSecondaryColorsFieldId);

const OSG::BitVector  BlendGeometryBase::BaseTexCoordsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::BaseTexCoordsFieldId);

const OSG::BitVector  BlendGeometryBase::BaseTexCoords1FieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::BaseTexCoords1FieldId);

const OSG::BitVector  BlendGeometryBase::BaseTexCoords2FieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::BaseTexCoords2FieldId);

const OSG::BitVector  BlendGeometryBase::BaseTexCoords3FieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::BaseTexCoords3FieldId);

const OSG::BitVector  BlendGeometryBase::GeoPositionDifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::GeoPositionDifferenceSetsFieldId);

const OSG::BitVector  BlendGeometryBase::GeoNormalDifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::GeoNormalDifferenceSetsFieldId);

const OSG::BitVector  BlendGeometryBase::GeoColorDifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::GeoColorDifferenceSetsFieldId);

const OSG::BitVector  BlendGeometryBase::GeoSecondaryColorDifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::GeoSecondaryColorDifferenceSetsFieldId);

const OSG::BitVector  BlendGeometryBase::GeoTexCoordDifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::GeoTexCoordDifferenceSetsFieldId);

const OSG::BitVector  BlendGeometryBase::GeoTexCoord1DifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::GeoTexCoord1DifferenceSetsFieldId);

const OSG::BitVector  BlendGeometryBase::GeoTexCoord2DifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::GeoTexCoord2DifferenceSetsFieldId);

const OSG::BitVector  BlendGeometryBase::GeoTexCoord3DifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << BlendGeometryBase::GeoTexCoord3DifferenceSetsFieldId);

const OSG::BitVector BlendGeometryBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          BlendGeometryBase::_mfBlendAmounts
    
*/
/*! \var GeoPositionsPtr BlendGeometryBase::_sfBasePositions
    
*/
/*! \var GeoNormalsPtr   BlendGeometryBase::_sfBaseNormals
    
*/
/*! \var GeoColorsPtr    BlendGeometryBase::_sfBaseColors
    
*/
/*! \var GeoColorsPtr    BlendGeometryBase::_sfBaseSecondaryColors
    
*/
/*! \var GeoTexCoordsPtr BlendGeometryBase::_sfBaseTexCoords
    
*/
/*! \var GeoTexCoordsPtr BlendGeometryBase::_sfBaseTexCoords1
    
*/
/*! \var GeoTexCoordsPtr BlendGeometryBase::_sfBaseTexCoords2
    
*/
/*! \var GeoTexCoordsPtr BlendGeometryBase::_sfBaseTexCoords3
    
*/
/*! \var GeoPositionDifferenceSetPtr BlendGeometryBase::_mfGeoPositionDifferenceSets
    
*/
/*! \var GeoNormalDifferenceSetPtr BlendGeometryBase::_mfGeoNormalDifferenceSets
    
*/
/*! \var GeoColorDifferenceSetPtr BlendGeometryBase::_mfGeoColorDifferenceSets
    
*/
/*! \var GeoColorDifferenceSetPtr BlendGeometryBase::_mfGeoSecondaryColorDifferenceSets
    
*/
/*! \var GeoTexCoordDifferenceSetPtr BlendGeometryBase::_mfGeoTexCoordDifferenceSets
    
*/
/*! \var GeoTexCoordDifferenceSetPtr BlendGeometryBase::_mfGeoTexCoord1DifferenceSets
    
*/
/*! \var GeoTexCoordDifferenceSetPtr BlendGeometryBase::_mfGeoTexCoord2DifferenceSets
    
*/
/*! \var GeoTexCoordDifferenceSetPtr BlendGeometryBase::_mfGeoTexCoord3DifferenceSets
    
*/

//! BlendGeometry description

FieldDescription *BlendGeometryBase::_desc[] = 
{
    new FieldDescription(MFReal32::getClassType(), 
                     "BlendAmounts", 
                     BlendAmountsFieldId, BlendAmountsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getMFBlendAmounts),
    new FieldDescription(SFGeoPositionsPtr::getClassType(), 
                     "BasePositions", 
                     BasePositionsFieldId, BasePositionsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getSFBasePositions),
    new FieldDescription(SFGeoNormalsPtr::getClassType(), 
                     "BaseNormals", 
                     BaseNormalsFieldId, BaseNormalsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getSFBaseNormals),
    new FieldDescription(SFGeoColorsPtr::getClassType(), 
                     "BaseColors", 
                     BaseColorsFieldId, BaseColorsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getSFBaseColors),
    new FieldDescription(SFGeoColorsPtr::getClassType(), 
                     "BaseSecondaryColors", 
                     BaseSecondaryColorsFieldId, BaseSecondaryColorsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getSFBaseSecondaryColors),
    new FieldDescription(SFGeoTexCoordsPtr::getClassType(), 
                     "BaseTexCoords", 
                     BaseTexCoordsFieldId, BaseTexCoordsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getSFBaseTexCoords),
    new FieldDescription(SFGeoTexCoordsPtr::getClassType(), 
                     "BaseTexCoords1", 
                     BaseTexCoords1FieldId, BaseTexCoords1FieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getSFBaseTexCoords1),
    new FieldDescription(SFGeoTexCoordsPtr::getClassType(), 
                     "BaseTexCoords2", 
                     BaseTexCoords2FieldId, BaseTexCoords2FieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getSFBaseTexCoords2),
    new FieldDescription(SFGeoTexCoordsPtr::getClassType(), 
                     "BaseTexCoords3", 
                     BaseTexCoords3FieldId, BaseTexCoords3FieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getSFBaseTexCoords3),
    new FieldDescription(MFGeoPositionDifferenceSetPtr::getClassType(), 
                     "GeoPositionDifferenceSets", 
                     GeoPositionDifferenceSetsFieldId, GeoPositionDifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getMFGeoPositionDifferenceSets),
    new FieldDescription(MFGeoNormalDifferenceSetPtr::getClassType(), 
                     "GeoNormalDifferenceSets", 
                     GeoNormalDifferenceSetsFieldId, GeoNormalDifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getMFGeoNormalDifferenceSets),
    new FieldDescription(MFGeoColorDifferenceSetPtr::getClassType(), 
                     "GeoColorDifferenceSets", 
                     GeoColorDifferenceSetsFieldId, GeoColorDifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getMFGeoColorDifferenceSets),
    new FieldDescription(MFGeoColorDifferenceSetPtr::getClassType(), 
                     "GeoSecondaryColorDifferenceSets", 
                     GeoSecondaryColorDifferenceSetsFieldId, GeoSecondaryColorDifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getMFGeoSecondaryColorDifferenceSets),
    new FieldDescription(MFGeoTexCoordDifferenceSetPtr::getClassType(), 
                     "GeoTexCoordDifferenceSets", 
                     GeoTexCoordDifferenceSetsFieldId, GeoTexCoordDifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getMFGeoTexCoordDifferenceSets),
    new FieldDescription(MFGeoTexCoordDifferenceSetPtr::getClassType(), 
                     "GeoTexCoord1DifferenceSets", 
                     GeoTexCoord1DifferenceSetsFieldId, GeoTexCoord1DifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getMFGeoTexCoord1DifferenceSets),
    new FieldDescription(MFGeoTexCoordDifferenceSetPtr::getClassType(), 
                     "GeoTexCoord2DifferenceSets", 
                     GeoTexCoord2DifferenceSetsFieldId, GeoTexCoord2DifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getMFGeoTexCoord2DifferenceSets),
    new FieldDescription(MFGeoTexCoordDifferenceSetPtr::getClassType(), 
                     "GeoTexCoord3DifferenceSets", 
                     GeoTexCoord3DifferenceSetsFieldId, GeoTexCoord3DifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &BlendGeometryBase::getMFGeoTexCoord3DifferenceSets)
};


FieldContainerType BlendGeometryBase::_type(
    "BlendGeometry",
    "Geometry",
    NULL,
    (PrototypeCreateF) &BlendGeometryBase::createEmpty,
    BlendGeometry::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(BlendGeometryBase, BlendGeometryPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &BlendGeometryBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &BlendGeometryBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr BlendGeometryBase::shallowCopy(void) const 
{ 
    BlendGeometryPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const BlendGeometry *>(this)); 

    return returnValue; 
}

UInt32 BlendGeometryBase::getContainerSize(void) const 
{ 
    return sizeof(BlendGeometry); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void BlendGeometryBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((BlendGeometryBase *) &other, whichField);
}
#else
void BlendGeometryBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((BlendGeometryBase *) &other, whichField, sInfo);
}
void BlendGeometryBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BlendGeometryBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfBlendAmounts.terminateShare(uiAspect, this->getContainerSize());
    _mfGeoPositionDifferenceSets.terminateShare(uiAspect, this->getContainerSize());
    _mfGeoNormalDifferenceSets.terminateShare(uiAspect, this->getContainerSize());
    _mfGeoColorDifferenceSets.terminateShare(uiAspect, this->getContainerSize());
    _mfGeoSecondaryColorDifferenceSets.terminateShare(uiAspect, this->getContainerSize());
    _mfGeoTexCoordDifferenceSets.terminateShare(uiAspect, this->getContainerSize());
    _mfGeoTexCoord1DifferenceSets.terminateShare(uiAspect, this->getContainerSize());
    _mfGeoTexCoord2DifferenceSets.terminateShare(uiAspect, this->getContainerSize());
    _mfGeoTexCoord3DifferenceSets.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

BlendGeometryBase::BlendGeometryBase(void) :
    _mfBlendAmounts           (), 
    _sfBasePositions          (), 
    _sfBaseNormals            (), 
    _sfBaseColors             (), 
    _sfBaseSecondaryColors    (), 
    _sfBaseTexCoords          (), 
    _sfBaseTexCoords1         (), 
    _sfBaseTexCoords2         (), 
    _sfBaseTexCoords3         (), 
    _mfGeoPositionDifferenceSets(), 
    _mfGeoNormalDifferenceSets(), 
    _mfGeoColorDifferenceSets (), 
    _mfGeoSecondaryColorDifferenceSets(), 
    _mfGeoTexCoordDifferenceSets(), 
    _mfGeoTexCoord1DifferenceSets(), 
    _mfGeoTexCoord2DifferenceSets(), 
    _mfGeoTexCoord3DifferenceSets(), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

BlendGeometryBase::BlendGeometryBase(const BlendGeometryBase &source) :
    _mfBlendAmounts           (source._mfBlendAmounts           ), 
    _sfBasePositions          (source._sfBasePositions          ), 
    _sfBaseNormals            (source._sfBaseNormals            ), 
    _sfBaseColors             (source._sfBaseColors             ), 
    _sfBaseSecondaryColors    (source._sfBaseSecondaryColors    ), 
    _sfBaseTexCoords          (source._sfBaseTexCoords          ), 
    _sfBaseTexCoords1         (source._sfBaseTexCoords1         ), 
    _sfBaseTexCoords2         (source._sfBaseTexCoords2         ), 
    _sfBaseTexCoords3         (source._sfBaseTexCoords3         ), 
    _mfGeoPositionDifferenceSets(source._mfGeoPositionDifferenceSets), 
    _mfGeoNormalDifferenceSets(source._mfGeoNormalDifferenceSets), 
    _mfGeoColorDifferenceSets (source._mfGeoColorDifferenceSets ), 
    _mfGeoSecondaryColorDifferenceSets(source._mfGeoSecondaryColorDifferenceSets), 
    _mfGeoTexCoordDifferenceSets(source._mfGeoTexCoordDifferenceSets), 
    _mfGeoTexCoord1DifferenceSets(source._mfGeoTexCoord1DifferenceSets), 
    _mfGeoTexCoord2DifferenceSets(source._mfGeoTexCoord2DifferenceSets), 
    _mfGeoTexCoord3DifferenceSets(source._mfGeoTexCoord3DifferenceSets), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

BlendGeometryBase::~BlendGeometryBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 BlendGeometryBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
    {
        returnValue += _mfBlendAmounts.getBinSize();
    }

    if(FieldBits::NoField != (BasePositionsFieldMask & whichField))
    {
        returnValue += _sfBasePositions.getBinSize();
    }

    if(FieldBits::NoField != (BaseNormalsFieldMask & whichField))
    {
        returnValue += _sfBaseNormals.getBinSize();
    }

    if(FieldBits::NoField != (BaseColorsFieldMask & whichField))
    {
        returnValue += _sfBaseColors.getBinSize();
    }

    if(FieldBits::NoField != (BaseSecondaryColorsFieldMask & whichField))
    {
        returnValue += _sfBaseSecondaryColors.getBinSize();
    }

    if(FieldBits::NoField != (BaseTexCoordsFieldMask & whichField))
    {
        returnValue += _sfBaseTexCoords.getBinSize();
    }

    if(FieldBits::NoField != (BaseTexCoords1FieldMask & whichField))
    {
        returnValue += _sfBaseTexCoords1.getBinSize();
    }

    if(FieldBits::NoField != (BaseTexCoords2FieldMask & whichField))
    {
        returnValue += _sfBaseTexCoords2.getBinSize();
    }

    if(FieldBits::NoField != (BaseTexCoords3FieldMask & whichField))
    {
        returnValue += _sfBaseTexCoords3.getBinSize();
    }

    if(FieldBits::NoField != (GeoPositionDifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfGeoPositionDifferenceSets.getBinSize();
    }

    if(FieldBits::NoField != (GeoNormalDifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfGeoNormalDifferenceSets.getBinSize();
    }

    if(FieldBits::NoField != (GeoColorDifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfGeoColorDifferenceSets.getBinSize();
    }

    if(FieldBits::NoField != (GeoSecondaryColorDifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfGeoSecondaryColorDifferenceSets.getBinSize();
    }

    if(FieldBits::NoField != (GeoTexCoordDifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfGeoTexCoordDifferenceSets.getBinSize();
    }

    if(FieldBits::NoField != (GeoTexCoord1DifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfGeoTexCoord1DifferenceSets.getBinSize();
    }

    if(FieldBits::NoField != (GeoTexCoord2DifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfGeoTexCoord2DifferenceSets.getBinSize();
    }

    if(FieldBits::NoField != (GeoTexCoord3DifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfGeoTexCoord3DifferenceSets.getBinSize();
    }


    return returnValue;
}

void BlendGeometryBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
    {
        _mfBlendAmounts.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BasePositionsFieldMask & whichField))
    {
        _sfBasePositions.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BaseNormalsFieldMask & whichField))
    {
        _sfBaseNormals.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BaseColorsFieldMask & whichField))
    {
        _sfBaseColors.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BaseSecondaryColorsFieldMask & whichField))
    {
        _sfBaseSecondaryColors.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BaseTexCoordsFieldMask & whichField))
    {
        _sfBaseTexCoords.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BaseTexCoords1FieldMask & whichField))
    {
        _sfBaseTexCoords1.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BaseTexCoords2FieldMask & whichField))
    {
        _sfBaseTexCoords2.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BaseTexCoords3FieldMask & whichField))
    {
        _sfBaseTexCoords3.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeoPositionDifferenceSetsFieldMask & whichField))
    {
        _mfGeoPositionDifferenceSets.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeoNormalDifferenceSetsFieldMask & whichField))
    {
        _mfGeoNormalDifferenceSets.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeoColorDifferenceSetsFieldMask & whichField))
    {
        _mfGeoColorDifferenceSets.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeoSecondaryColorDifferenceSetsFieldMask & whichField))
    {
        _mfGeoSecondaryColorDifferenceSets.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeoTexCoordDifferenceSetsFieldMask & whichField))
    {
        _mfGeoTexCoordDifferenceSets.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeoTexCoord1DifferenceSetsFieldMask & whichField))
    {
        _mfGeoTexCoord1DifferenceSets.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeoTexCoord2DifferenceSetsFieldMask & whichField))
    {
        _mfGeoTexCoord2DifferenceSets.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GeoTexCoord3DifferenceSetsFieldMask & whichField))
    {
        _mfGeoTexCoord3DifferenceSets.copyToBin(pMem);
    }


}

void BlendGeometryBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
    {
        _mfBlendAmounts.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BasePositionsFieldMask & whichField))
    {
        _sfBasePositions.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BaseNormalsFieldMask & whichField))
    {
        _sfBaseNormals.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BaseColorsFieldMask & whichField))
    {
        _sfBaseColors.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BaseSecondaryColorsFieldMask & whichField))
    {
        _sfBaseSecondaryColors.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BaseTexCoordsFieldMask & whichField))
    {
        _sfBaseTexCoords.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BaseTexCoords1FieldMask & whichField))
    {
        _sfBaseTexCoords1.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BaseTexCoords2FieldMask & whichField))
    {
        _sfBaseTexCoords2.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BaseTexCoords3FieldMask & whichField))
    {
        _sfBaseTexCoords3.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeoPositionDifferenceSetsFieldMask & whichField))
    {
        _mfGeoPositionDifferenceSets.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeoNormalDifferenceSetsFieldMask & whichField))
    {
        _mfGeoNormalDifferenceSets.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeoColorDifferenceSetsFieldMask & whichField))
    {
        _mfGeoColorDifferenceSets.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeoSecondaryColorDifferenceSetsFieldMask & whichField))
    {
        _mfGeoSecondaryColorDifferenceSets.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeoTexCoordDifferenceSetsFieldMask & whichField))
    {
        _mfGeoTexCoordDifferenceSets.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeoTexCoord1DifferenceSetsFieldMask & whichField))
    {
        _mfGeoTexCoord1DifferenceSets.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeoTexCoord2DifferenceSetsFieldMask & whichField))
    {
        _mfGeoTexCoord2DifferenceSets.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GeoTexCoord3DifferenceSetsFieldMask & whichField))
    {
        _mfGeoTexCoord3DifferenceSets.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BlendGeometryBase::executeSyncImpl(      BlendGeometryBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
        _mfBlendAmounts.syncWith(pOther->_mfBlendAmounts);

    if(FieldBits::NoField != (BasePositionsFieldMask & whichField))
        _sfBasePositions.syncWith(pOther->_sfBasePositions);

    if(FieldBits::NoField != (BaseNormalsFieldMask & whichField))
        _sfBaseNormals.syncWith(pOther->_sfBaseNormals);

    if(FieldBits::NoField != (BaseColorsFieldMask & whichField))
        _sfBaseColors.syncWith(pOther->_sfBaseColors);

    if(FieldBits::NoField != (BaseSecondaryColorsFieldMask & whichField))
        _sfBaseSecondaryColors.syncWith(pOther->_sfBaseSecondaryColors);

    if(FieldBits::NoField != (BaseTexCoordsFieldMask & whichField))
        _sfBaseTexCoords.syncWith(pOther->_sfBaseTexCoords);

    if(FieldBits::NoField != (BaseTexCoords1FieldMask & whichField))
        _sfBaseTexCoords1.syncWith(pOther->_sfBaseTexCoords1);

    if(FieldBits::NoField != (BaseTexCoords2FieldMask & whichField))
        _sfBaseTexCoords2.syncWith(pOther->_sfBaseTexCoords2);

    if(FieldBits::NoField != (BaseTexCoords3FieldMask & whichField))
        _sfBaseTexCoords3.syncWith(pOther->_sfBaseTexCoords3);

    if(FieldBits::NoField != (GeoPositionDifferenceSetsFieldMask & whichField))
        _mfGeoPositionDifferenceSets.syncWith(pOther->_mfGeoPositionDifferenceSets);

    if(FieldBits::NoField != (GeoNormalDifferenceSetsFieldMask & whichField))
        _mfGeoNormalDifferenceSets.syncWith(pOther->_mfGeoNormalDifferenceSets);

    if(FieldBits::NoField != (GeoColorDifferenceSetsFieldMask & whichField))
        _mfGeoColorDifferenceSets.syncWith(pOther->_mfGeoColorDifferenceSets);

    if(FieldBits::NoField != (GeoSecondaryColorDifferenceSetsFieldMask & whichField))
        _mfGeoSecondaryColorDifferenceSets.syncWith(pOther->_mfGeoSecondaryColorDifferenceSets);

    if(FieldBits::NoField != (GeoTexCoordDifferenceSetsFieldMask & whichField))
        _mfGeoTexCoordDifferenceSets.syncWith(pOther->_mfGeoTexCoordDifferenceSets);

    if(FieldBits::NoField != (GeoTexCoord1DifferenceSetsFieldMask & whichField))
        _mfGeoTexCoord1DifferenceSets.syncWith(pOther->_mfGeoTexCoord1DifferenceSets);

    if(FieldBits::NoField != (GeoTexCoord2DifferenceSetsFieldMask & whichField))
        _mfGeoTexCoord2DifferenceSets.syncWith(pOther->_mfGeoTexCoord2DifferenceSets);

    if(FieldBits::NoField != (GeoTexCoord3DifferenceSetsFieldMask & whichField))
        _mfGeoTexCoord3DifferenceSets.syncWith(pOther->_mfGeoTexCoord3DifferenceSets);


}
#else
void BlendGeometryBase::executeSyncImpl(      BlendGeometryBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (BasePositionsFieldMask & whichField))
        _sfBasePositions.syncWith(pOther->_sfBasePositions);

    if(FieldBits::NoField != (BaseNormalsFieldMask & whichField))
        _sfBaseNormals.syncWith(pOther->_sfBaseNormals);

    if(FieldBits::NoField != (BaseColorsFieldMask & whichField))
        _sfBaseColors.syncWith(pOther->_sfBaseColors);

    if(FieldBits::NoField != (BaseSecondaryColorsFieldMask & whichField))
        _sfBaseSecondaryColors.syncWith(pOther->_sfBaseSecondaryColors);

    if(FieldBits::NoField != (BaseTexCoordsFieldMask & whichField))
        _sfBaseTexCoords.syncWith(pOther->_sfBaseTexCoords);

    if(FieldBits::NoField != (BaseTexCoords1FieldMask & whichField))
        _sfBaseTexCoords1.syncWith(pOther->_sfBaseTexCoords1);

    if(FieldBits::NoField != (BaseTexCoords2FieldMask & whichField))
        _sfBaseTexCoords2.syncWith(pOther->_sfBaseTexCoords2);

    if(FieldBits::NoField != (BaseTexCoords3FieldMask & whichField))
        _sfBaseTexCoords3.syncWith(pOther->_sfBaseTexCoords3);


    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
        _mfBlendAmounts.syncWith(pOther->_mfBlendAmounts, sInfo);

    if(FieldBits::NoField != (GeoPositionDifferenceSetsFieldMask & whichField))
        _mfGeoPositionDifferenceSets.syncWith(pOther->_mfGeoPositionDifferenceSets, sInfo);

    if(FieldBits::NoField != (GeoNormalDifferenceSetsFieldMask & whichField))
        _mfGeoNormalDifferenceSets.syncWith(pOther->_mfGeoNormalDifferenceSets, sInfo);

    if(FieldBits::NoField != (GeoColorDifferenceSetsFieldMask & whichField))
        _mfGeoColorDifferenceSets.syncWith(pOther->_mfGeoColorDifferenceSets, sInfo);

    if(FieldBits::NoField != (GeoSecondaryColorDifferenceSetsFieldMask & whichField))
        _mfGeoSecondaryColorDifferenceSets.syncWith(pOther->_mfGeoSecondaryColorDifferenceSets, sInfo);

    if(FieldBits::NoField != (GeoTexCoordDifferenceSetsFieldMask & whichField))
        _mfGeoTexCoordDifferenceSets.syncWith(pOther->_mfGeoTexCoordDifferenceSets, sInfo);

    if(FieldBits::NoField != (GeoTexCoord1DifferenceSetsFieldMask & whichField))
        _mfGeoTexCoord1DifferenceSets.syncWith(pOther->_mfGeoTexCoord1DifferenceSets, sInfo);

    if(FieldBits::NoField != (GeoTexCoord2DifferenceSetsFieldMask & whichField))
        _mfGeoTexCoord2DifferenceSets.syncWith(pOther->_mfGeoTexCoord2DifferenceSets, sInfo);

    if(FieldBits::NoField != (GeoTexCoord3DifferenceSetsFieldMask & whichField))
        _mfGeoTexCoord3DifferenceSets.syncWith(pOther->_mfGeoTexCoord3DifferenceSets, sInfo);


}

void BlendGeometryBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
        _mfBlendAmounts.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (GeoPositionDifferenceSetsFieldMask & whichField))
        _mfGeoPositionDifferenceSets.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (GeoNormalDifferenceSetsFieldMask & whichField))
        _mfGeoNormalDifferenceSets.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (GeoColorDifferenceSetsFieldMask & whichField))
        _mfGeoColorDifferenceSets.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (GeoSecondaryColorDifferenceSetsFieldMask & whichField))
        _mfGeoSecondaryColorDifferenceSets.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (GeoTexCoordDifferenceSetsFieldMask & whichField))
        _mfGeoTexCoordDifferenceSets.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (GeoTexCoord1DifferenceSetsFieldMask & whichField))
        _mfGeoTexCoord1DifferenceSets.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (GeoTexCoord2DifferenceSetsFieldMask & whichField))
        _mfGeoTexCoord2DifferenceSets.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (GeoTexCoord3DifferenceSetsFieldMask & whichField))
        _mfGeoTexCoord3DifferenceSets.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<BlendGeometryPtr>::_type("BlendGeometryPtr", "GeometryPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(BlendGeometryPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(BlendGeometryPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGBLENDGEOMETRYBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGBLENDGEOMETRYBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGBLENDGEOMETRYFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

