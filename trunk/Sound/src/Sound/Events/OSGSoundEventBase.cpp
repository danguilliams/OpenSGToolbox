/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class SoundEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESOUNDEVENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGSoundEventBase.h"
#include "OSGSoundEvent.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SoundEventBase::ChannelFieldMask = 
    (TypeTraits<BitVector>::One << SoundEventBase::ChannelFieldId);

const OSG::BitVector SoundEventBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt32          SoundEventBase::_sfChannel
    
*/

//! SoundEvent description

FieldDescription *SoundEventBase::_desc[] = 
{
    new FieldDescription(SFUInt32::getClassType(), 
                     "Channel", 
                     ChannelFieldId, ChannelFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&SoundEventBase::editSFChannel))
};


FieldContainerType SoundEventBase::_type(
    "SoundEvent",
    "Event",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&SoundEventBase::createEmpty),
    SoundEvent::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SoundEventBase, SoundEventPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SoundEventBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SoundEventBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SoundEventBase::shallowCopy(void) const 
{ 
    SoundEventPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SoundEvent *>(this)); 

    return returnValue; 
}

UInt32 SoundEventBase::getContainerSize(void) const 
{ 
    return sizeof(SoundEvent); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SoundEventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<SoundEventBase *>(&other),
                          whichField);
}
#else
void SoundEventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SoundEventBase *) &other, whichField, sInfo);
}
void SoundEventBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SoundEventBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SoundEventBase::SoundEventBase(void) :
    _sfChannel                (UInt32(0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SoundEventBase::SoundEventBase(const SoundEventBase &source) :
    _sfChannel                (source._sfChannel                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SoundEventBase::~SoundEventBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SoundEventBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChannelFieldMask & whichField))
    {
        returnValue += _sfChannel.getBinSize();
    }


    return returnValue;
}

void SoundEventBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChannelFieldMask & whichField))
    {
        _sfChannel.copyToBin(pMem);
    }


}

void SoundEventBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChannelFieldMask & whichField))
    {
        _sfChannel.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SoundEventBase::executeSyncImpl(      SoundEventBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ChannelFieldMask & whichField))
        _sfChannel.syncWith(pOther->_sfChannel);


}
#else
void SoundEventBase::executeSyncImpl(      SoundEventBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ChannelFieldMask & whichField))
        _sfChannel.syncWith(pOther->_sfChannel);



}

void SoundEventBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SoundEventPtr>::_type("SoundEventPtr", "EventPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SoundEventPtr, OSG_SOUNDLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE
