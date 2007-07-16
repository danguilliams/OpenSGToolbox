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
 **     class KeyframeAnimator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEKEYFRAMEANIMATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGKeyframeAnimatorBase.h"
#include "OSGKeyframeAnimator.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  KeyframeAnimatorBase::ValuesFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeAnimatorBase::ValuesFieldId);

const OSG::BitVector  KeyframeAnimatorBase::KeysFieldMask = 
    (TypeTraits<BitVector>::One << KeyframeAnimatorBase::KeysFieldId);

const OSG::BitVector KeyframeAnimatorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var KeyframeSequencePtr KeyframeAnimatorBase::_sfValues
    
*/
/*! \var Real32          KeyframeAnimatorBase::_mfKeys
    
*/

//! KeyframeAnimator description

FieldDescription *KeyframeAnimatorBase::_desc[] = 
{
    new FieldDescription(SFKeyframeSequencePtr::getClassType(), 
                     "Values", 
                     ValuesFieldId, ValuesFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeAnimatorBase::getSFValues),
    new FieldDescription(MFReal32::getClassType(), 
                     "Keys", 
                     KeysFieldId, KeysFieldMask,
                     false,
                     (FieldAccessMethod) &KeyframeAnimatorBase::getMFKeys)
};


FieldContainerType KeyframeAnimatorBase::_type(
    "KeyframeAnimator",
    "Animator",
    NULL,
    (PrototypeCreateF) &KeyframeAnimatorBase::createEmpty,
    KeyframeAnimator::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(KeyframeAnimatorBase, KeyframeAnimatorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &KeyframeAnimatorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &KeyframeAnimatorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr KeyframeAnimatorBase::shallowCopy(void) const 
{ 
    KeyframeAnimatorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const KeyframeAnimator *>(this)); 

    return returnValue; 
}

UInt32 KeyframeAnimatorBase::getContainerSize(void) const 
{ 
    return sizeof(KeyframeAnimator); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeAnimatorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((KeyframeAnimatorBase *) &other, whichField);
}
#else
void KeyframeAnimatorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((KeyframeAnimatorBase *) &other, whichField, sInfo);
}
void KeyframeAnimatorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void KeyframeAnimatorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfKeys.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

KeyframeAnimatorBase::KeyframeAnimatorBase(void) :
    _sfValues                 (), 
    _mfKeys                   (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

KeyframeAnimatorBase::KeyframeAnimatorBase(const KeyframeAnimatorBase &source) :
    _sfValues                 (source._sfValues                 ), 
    _mfKeys                   (source._mfKeys                   ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

KeyframeAnimatorBase::~KeyframeAnimatorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 KeyframeAnimatorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        returnValue += _sfValues.getBinSize();
    }

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        returnValue += _mfKeys.getBinSize();
    }


    return returnValue;
}

void KeyframeAnimatorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _sfValues.copyToBin(pMem);
    }

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        _mfKeys.copyToBin(pMem);
    }


}

void KeyframeAnimatorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _sfValues.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        _mfKeys.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void KeyframeAnimatorBase::executeSyncImpl(      KeyframeAnimatorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _sfValues.syncWith(pOther->_sfValues);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
        _mfKeys.syncWith(pOther->_mfKeys);


}
#else
void KeyframeAnimatorBase::executeSyncImpl(      KeyframeAnimatorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _sfValues.syncWith(pOther->_sfValues);


    if(FieldBits::NoField != (KeysFieldMask & whichField))
        _mfKeys.syncWith(pOther->_mfKeys, sInfo);


}

void KeyframeAnimatorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
        _mfKeys.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<KeyframeAnimatorPtr>::_type("KeyframeAnimatorPtr", "AnimatorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(KeyframeAnimatorPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(KeyframeAnimatorPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGKEYFRAMEANIMATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGKEYFRAMEANIMATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGKEYFRAMEANIMATORFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

