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
 **     class KeyframeSequenceGeoNormalsPtr!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEKEYFRAMESEQUENCEGEONORMALSPTRINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGKeyframeSequenceGeoNormalsPtrBase.h"
#include "OSGKeyframeSequenceGeoNormalsPtr.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  KeyframeSequenceGeoNormalsPtrBase::BaseValuesFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeSequenceGeoNormalsPtrBase::BaseValuesFieldId);

const OSG::BitVector  KeyframeSequenceGeoNormalsPtrBase::KeyframeDifferenceSetsFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeSequenceGeoNormalsPtrBase::KeyframeDifferenceSetsFieldId);

const OSG::BitVector KeyframeSequenceGeoNormalsPtrBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var GeoNormalsPtr   KeyframeSequenceGeoNormalsPtrBase::_sfBaseValues
    
*/
/*! \var GeoNormalDifferenceSetPtr KeyframeSequenceGeoNormalsPtrBase::_mfKeyframeDifferenceSets
    
*/

//! KeyframeSequenceGeoNormalsPtr description

FieldDescription *KeyframeSequenceGeoNormalsPtrBase::_desc[] = 
{
    new FieldDescription(SFGeoNormalsPtr::getClassType(), 
                     "BaseValues", 
                     BaseValuesFieldId, BaseValuesFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeSequenceGeoNormalsPtrBase::getSFBaseValues),
    new FieldDescription(MFGeoNormalDifferenceSetPtr::getClassType(), 
                     "KeyframeDifferenceSets", 
                     KeyframeDifferenceSetsFieldId, KeyframeDifferenceSetsFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeSequenceGeoNormalsPtrBase::getMFKeyframeDifferenceSets)
};


FieldContainerType KeyframeSequenceGeoNormalsPtrBase::_type(
    "KeyframeSequenceGeoNormalsPtr",
    "KeyframeSequence",
    NULL,
    (PrototypeCreateF) &KeyframeSequenceGeoNormalsPtrBase::createEmpty,
    KeyframeSequenceGeoNormalsPtr::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(KeyframeSequenceGeoNormalsPtrBase, KeyframeSequenceGeoNormalsPtrPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeSequenceGeoNormalsPtrBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &KeyframeSequenceGeoNormalsPtrBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr KeyframeSequenceGeoNormalsPtrBase::shallowCopy(void) const 
{ 
    KeyframeSequenceGeoNormalsPtrPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const KeyframeSequenceGeoNormalsPtr *>(this)); 

    return returnValue; 
}

UInt32 KeyframeSequenceGeoNormalsPtrBase::getContainerSize(void) const 
{ 
    return sizeof(KeyframeSequenceGeoNormalsPtr); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceGeoNormalsPtrBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((KeyframeSequenceGeoNormalsPtrBase *) &other, whichField);
}
#else
void KeyframeSequenceGeoNormalsPtrBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((KeyframeSequenceGeoNormalsPtrBase *) &other, whichField, sInfo);
}
void KeyframeSequenceGeoNormalsPtrBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void KeyframeSequenceGeoNormalsPtrBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfKeyframeDifferenceSets.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

KeyframeSequenceGeoNormalsPtrBase::KeyframeSequenceGeoNormalsPtrBase(void) :
    _sfBaseValues             (), 
    _mfKeyframeDifferenceSets (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

KeyframeSequenceGeoNormalsPtrBase::KeyframeSequenceGeoNormalsPtrBase(const KeyframeSequenceGeoNormalsPtrBase &source) :
    _sfBaseValues             (source._sfBaseValues             ), 
    _mfKeyframeDifferenceSets (source._mfKeyframeDifferenceSets ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

KeyframeSequenceGeoNormalsPtrBase::~KeyframeSequenceGeoNormalsPtrBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 KeyframeSequenceGeoNormalsPtrBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
    {
        returnValue += _sfBaseValues.getBinSize();
    }

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
    {
        returnValue += _mfKeyframeDifferenceSets.getBinSize();
    }


    return returnValue;
}

void KeyframeSequenceGeoNormalsPtrBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
    {
        _sfBaseValues.copyToBin(pMem);
    }

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
    {
        _mfKeyframeDifferenceSets.copyToBin(pMem);
    }


}

void KeyframeSequenceGeoNormalsPtrBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
    {
        _sfBaseValues.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
    {
        _mfKeyframeDifferenceSets.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeSequenceGeoNormalsPtrBase::executeSyncImpl(      KeyframeSequenceGeoNormalsPtrBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
        _sfBaseValues.syncWith(pOther->_sfBaseValues);

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
        _mfKeyframeDifferenceSets.syncWith(pOther->_mfKeyframeDifferenceSets);


}
#else
void KeyframeSequenceGeoNormalsPtrBase::executeSyncImpl(      KeyframeSequenceGeoNormalsPtrBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (BaseValuesFieldMask & whichField))
        _sfBaseValues.syncWith(pOther->_sfBaseValues);


    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
        _mfKeyframeDifferenceSets.syncWith(pOther->_mfKeyframeDifferenceSets, sInfo);


}

void KeyframeSequenceGeoNormalsPtrBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (KeyframeDifferenceSetsFieldMask & whichField))
        _mfKeyframeDifferenceSets.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<KeyframeSequenceGeoNormalsPtrPtr>::_type("KeyframeSequenceGeoNormalsPtrPtr", "KeyframeSequencePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(KeyframeSequenceGeoNormalsPtrPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(KeyframeSequenceGeoNormalsPtrPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGKEYFRAMESEQUENCEGEONORMALSPTRBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGKEYFRAMESEQUENCEGEONORMALSPTRBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGKEYFRAMESEQUENCEGEONORMALSPTRFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

