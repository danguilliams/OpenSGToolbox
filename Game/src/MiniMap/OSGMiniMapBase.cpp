/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *					Authors: David Kabala, Eric Langkamp					 *
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

const OSG::BitVector  MiniMapBase::IndicatorFieldMask = 
    (TypeTraits<BitVector>::One << MiniMapBase::IndicatorFieldId);

const OSG::BitVector MiniMapBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var MiniMapTransformationPtr MiniMapBase::_sfTransformation
    
*/
/*! \var MiniMapIndicatorPtr MiniMapBase::_mfIndicator
    
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
                     "Indicator", 
                     IndicatorFieldId, IndicatorFieldMask,
                     false,
                     (FieldAccessMethod) &MiniMapBase::getMFIndicator)
};


FieldContainerType MiniMapBase::_type(
    "MiniMap",
    "Component",
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

    _mfIndicator.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

MiniMapBase::MiniMapBase(void) :
    _sfTransformation         (MiniMapTransformationPtr(NullFC)), 
    _mfIndicator              (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

MiniMapBase::MiniMapBase(const MiniMapBase &source) :
    _sfTransformation         (source._sfTransformation         ), 
    _mfIndicator              (source._mfIndicator              ), 
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

    if(FieldBits::NoField != (IndicatorFieldMask & whichField))
    {
        returnValue += _mfIndicator.getBinSize();
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

    if(FieldBits::NoField != (IndicatorFieldMask & whichField))
    {
        _mfIndicator.copyToBin(pMem);
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

    if(FieldBits::NoField != (IndicatorFieldMask & whichField))
    {
        _mfIndicator.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MiniMapBase::executeSyncImpl(      MiniMapBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pOther->_sfTransformation);

    if(FieldBits::NoField != (IndicatorFieldMask & whichField))
        _mfIndicator.syncWith(pOther->_mfIndicator);


}
#else
void MiniMapBase::executeSyncImpl(      MiniMapBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pOther->_sfTransformation);


    if(FieldBits::NoField != (IndicatorFieldMask & whichField))
        _mfIndicator.syncWith(pOther->_mfIndicator, sInfo);


}

void MiniMapBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (IndicatorFieldMask & whichField))
        _mfIndicator.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<MiniMapPtr>::_type("MiniMapPtr", "ComponentPtr");
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

