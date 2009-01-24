/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class MiniMap!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMINIMAPINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGMiniMapBase.h"
#include "OSGMiniMap.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  MiniMapBase::TransformationFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::TransformationFieldId);

const OSG::BitVector  MiniMapBase::IndicatorsFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::IndicatorsFieldId);

const OSG::BitVector  MiniMapBase::ViewPointIndicatorFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::ViewPointIndicatorFieldId);

const OSG::BitVector  MiniMapBase::MapOrientationFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::MapOrientationFieldId);

const OSG::BitVector  MiniMapBase::LockMapOrientationFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::LockMapOrientationFieldId);

const OSG::BitVector  MiniMapBase::MapScaleFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::MapScaleFieldId);

const OSG::BitVector  MiniMapBase::MapScaleParameterFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::MapScaleParameterFieldId);

const OSG::BitVector  MiniMapBase::MapSceneFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::MapSceneFieldId);

const OSG::BitVector  MiniMapBase::UnlockedMapSizeFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::UnlockedMapSizeFieldId);

const OSG::BitVector MiniMapBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var MiniMapTransformationPtr MiniMapBase::_sfTransformation
    
*/
/*! \var MiniMapIndicatorPtr MiniMapBase::_mfIndicators
    
*/
/*! \var MiniMapIndicatorPtr MiniMapBase::_sfViewPointIndicator
    
*/
/*! \var Quaternion      MiniMapBase::_sfMapOrientation
    
*/
/*! \var bool            MiniMapBase::_sfLockMapOrientation
    
*/
/*! \var UInt32          MiniMapBase::_sfMapScale
    
*/
/*! \var Vec3f           MiniMapBase::_sfMapScaleParameter
    
*/
/*! \var NodePtr         MiniMapBase::_sfMapScene
    
*/
/*! \var Vec2f           MiniMapBase::_sfUnlockedMapSize
    
*/

//! MiniMap description

FieldDescription *MiniMapBase::_desc[] = 
{
    new FieldDescription(SFMiniMapTransformationPtr::getClassType(), 
                     "Transformation", 
                     TransformationFieldId, TransformationFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getSFTransformation),
    new FieldDescription(MFMiniMapIndicatorPtr::getClassType(), 
                     "Indicators", 
                     IndicatorsFieldId, IndicatorsFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getMFIndicators),
    new FieldDescription(SFMiniMapIndicatorPtr::getClassType(), 
                     "ViewPointIndicator", 
                     ViewPointIndicatorFieldId, ViewPointIndicatorFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getSFViewPointIndicator),
    new FieldDescription(SFQuaternion::getClassType(), 
                     "MapOrientation", 
                     MapOrientationFieldId, MapOrientationFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getSFMapOrientation),
    new FieldDescription(SFBool::getClassType(), 
                     "LockMapOrientation", 
                     LockMapOrientationFieldId, LockMapOrientationFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getSFLockMapOrientation),
    new FieldDescription(SFUInt32::getClassType(), 
                     "MapScale", 
                     MapScaleFieldId, MapScaleFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getSFMapScale),
    new FieldDescription(SFVec3f::getClassType(), 
                     "MapScaleParameter", 
                     MapScaleParameterFieldId, MapScaleParameterFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getSFMapScaleParameter),
    new FieldDescription(SFNodePtr::getClassType(), 
                     "MapScene", 
                     MapSceneFieldId, MapSceneFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getSFMapScene),
    new FieldDescription(SFVec2f::getClassType(), 
                     "UnlockedMapSize", 
                     UnlockedMapSizeFieldId, UnlockedMapSizeFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getSFUnlockedMapSize)
};


FieldContainerType MiniMapBase::_type(
    "MiniMap",
    "Container",
    NULL,
    NULL, 
    MiniMap::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(MiniMapBase, MiniMapPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &MiniMapBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &MiniMapBase::getType(void) const 
{
    return _type;
} 


UInt32 MiniMapBase::getContainerSize(void) const 
{ 
    return sizeof(MiniMap); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void MiniMapBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((MiniMapBase *) &other, whichField);
}
#else
void MiniMapBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((MiniMapBase *) &other, whichField, sInfo);
}
void MiniMapBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MiniMapBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfIndicators.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

MiniMapBase::MiniMapBase(void) :
    _sfTransformation         (MiniMapTransformationPtr(NullFC)), 
    _mfIndicators             (), 
    _sfViewPointIndicator     (), 
    _sfMapOrientation         (), 
    _sfLockMapOrientation     (), 
    _sfMapScale               (), 
    _sfMapScaleParameter      (), 
    _sfMapScene               (), 
    _sfUnlockedMapSize        (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

MiniMapBase::MiniMapBase(const MiniMapBase &source) :
    _sfTransformation         (source._sfTransformation         ), 
    _mfIndicators             (source._mfIndicators             ), 
    _sfViewPointIndicator     (source._sfViewPointIndicator     ), 
    _sfMapOrientation         (source._sfMapOrientation         ), 
    _sfLockMapOrientation     (source._sfLockMapOrientation     ), 
    _sfMapScale               (source._sfMapScale               ), 
    _sfMapScaleParameter      (source._sfMapScaleParameter      ), 
    _sfMapScene               (source._sfMapScene               ), 
    _sfUnlockedMapSize        (source._sfUnlockedMapSize        ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

MiniMapBase::~MiniMapBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 MiniMapBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
    {
        returnValue += _sfTransformation.getBinSize();
    }

    if(FieldBits::NoField != (IndicatorsFieldMask & whichField))
    {
        returnValue += _mfIndicators.getBinSize();
    }

    if(FieldBits::NoField != (ViewPointIndicatorFieldMask & whichField))
    {
        returnValue += _sfViewPointIndicator.getBinSize();
    }

    if(FieldBits::NoField != (MapOrientationFieldMask & whichField))
    {
        returnValue += _sfMapOrientation.getBinSize();
    }

    if(FieldBits::NoField != (LockMapOrientationFieldMask & whichField))
    {
        returnValue += _sfLockMapOrientation.getBinSize();
    }

    if(FieldBits::NoField != (MapScaleFieldMask & whichField))
    {
        returnValue += _sfMapScale.getBinSize();
    }

    if(FieldBits::NoField != (MapScaleParameterFieldMask & whichField))
    {
        returnValue += _sfMapScaleParameter.getBinSize();
    }

    if(FieldBits::NoField != (MapSceneFieldMask & whichField))
    {
        returnValue += _sfMapScene.getBinSize();
    }

    if(FieldBits::NoField != (UnlockedMapSizeFieldMask & whichField))
    {
        returnValue += _sfUnlockedMapSize.getBinSize();
    }


    return returnValue;
}

void MiniMapBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
    {
        _sfTransformation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IndicatorsFieldMask & whichField))
    {
        _mfIndicators.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ViewPointIndicatorFieldMask & whichField))
    {
        _sfViewPointIndicator.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MapOrientationFieldMask & whichField))
    {
        _sfMapOrientation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LockMapOrientationFieldMask & whichField))
    {
        _sfLockMapOrientation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MapScaleFieldMask & whichField))
    {
        _sfMapScale.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MapScaleParameterFieldMask & whichField))
    {
        _sfMapScaleParameter.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MapSceneFieldMask & whichField))
    {
        _sfMapScene.copyToBin(pMem);
    }

    if(FieldBits::NoField != (UnlockedMapSizeFieldMask & whichField))
    {
        _sfUnlockedMapSize.copyToBin(pMem);
    }


}

void MiniMapBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
    {
        _sfTransformation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IndicatorsFieldMask & whichField))
    {
        _mfIndicators.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ViewPointIndicatorFieldMask & whichField))
    {
        _sfViewPointIndicator.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MapOrientationFieldMask & whichField))
    {
        _sfMapOrientation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LockMapOrientationFieldMask & whichField))
    {
        _sfLockMapOrientation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MapScaleFieldMask & whichField))
    {
        _sfMapScale.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MapScaleParameterFieldMask & whichField))
    {
        _sfMapScaleParameter.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MapSceneFieldMask & whichField))
    {
        _sfMapScene.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (UnlockedMapSizeFieldMask & whichField))
    {
        _sfUnlockedMapSize.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MiniMapBase::executeSyncImpl(      MiniMapBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pOther->_sfTransformation);

    if(FieldBits::NoField != (IndicatorsFieldMask & whichField))
        _mfIndicators.syncWith(pOther->_mfIndicators);

    if(FieldBits::NoField != (ViewPointIndicatorFieldMask & whichField))
        _sfViewPointIndicator.syncWith(pOther->_sfViewPointIndicator);

    if(FieldBits::NoField != (MapOrientationFieldMask & whichField))
        _sfMapOrientation.syncWith(pOther->_sfMapOrientation);

    if(FieldBits::NoField != (LockMapOrientationFieldMask & whichField))
        _sfLockMapOrientation.syncWith(pOther->_sfLockMapOrientation);

    if(FieldBits::NoField != (MapScaleFieldMask & whichField))
        _sfMapScale.syncWith(pOther->_sfMapScale);

    if(FieldBits::NoField != (MapScaleParameterFieldMask & whichField))
        _sfMapScaleParameter.syncWith(pOther->_sfMapScaleParameter);

    if(FieldBits::NoField != (MapSceneFieldMask & whichField))
        _sfMapScene.syncWith(pOther->_sfMapScene);

    if(FieldBits::NoField != (UnlockedMapSizeFieldMask & whichField))
        _sfUnlockedMapSize.syncWith(pOther->_sfUnlockedMapSize);


}
#else
void MiniMapBase::executeSyncImpl(      MiniMapBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pOther->_sfTransformation);

    if(FieldBits::NoField != (ViewPointIndicatorFieldMask & whichField))
        _sfViewPointIndicator.syncWith(pOther->_sfViewPointIndicator);

    if(FieldBits::NoField != (MapOrientationFieldMask & whichField))
        _sfMapOrientation.syncWith(pOther->_sfMapOrientation);

    if(FieldBits::NoField != (LockMapOrientationFieldMask & whichField))
        _sfLockMapOrientation.syncWith(pOther->_sfLockMapOrientation);

    if(FieldBits::NoField != (MapScaleFieldMask & whichField))
        _sfMapScale.syncWith(pOther->_sfMapScale);

    if(FieldBits::NoField != (MapScaleParameterFieldMask & whichField))
        _sfMapScaleParameter.syncWith(pOther->_sfMapScaleParameter);

    if(FieldBits::NoField != (MapSceneFieldMask & whichField))
        _sfMapScene.syncWith(pOther->_sfMapScene);

    if(FieldBits::NoField != (UnlockedMapSizeFieldMask & whichField))
        _sfUnlockedMapSize.syncWith(pOther->_sfUnlockedMapSize);


    if(FieldBits::NoField != (IndicatorsFieldMask & whichField))
        _mfIndicators.syncWith(pOther->_mfIndicators, sInfo);


}

void MiniMapBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (IndicatorsFieldMask & whichField))
        _mfIndicators.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<MiniMapPtr>::_type("MiniMapPtr", "ContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(MiniMapPtr, OSG_GAMELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(MiniMapPtr, OSG_GAMELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGMINIMAPBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGMINIMAPBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGMINIMAPFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

