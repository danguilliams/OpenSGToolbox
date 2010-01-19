/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class AnimationGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AnimationGroupBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 AnimationGroupBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &AnimationGroupBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 AnimationGroupBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 AnimationGroupBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the AnimationGroup::_sfScale field.

inline
Real32 &AnimationGroupBase::editScale(void)
{
    editSField(ScaleFieldMask);

    return _sfScale.getValue();
}

//! Get the value of the AnimationGroup::_sfScale field.
inline
      Real32  AnimationGroupBase::getScale(void) const
{
    return _sfScale.getValue();
}

//! Set the value of the AnimationGroup::_sfScale field.
inline
void AnimationGroupBase::setScale(const Real32 value)
{
    editSField(ScaleFieldMask);

    _sfScale.setValue(value);
}
//! Get the value of the AnimationGroup::_sfOffset field.

inline
Real32 &AnimationGroupBase::editOffset(void)
{
    editSField(OffsetFieldMask);

    return _sfOffset.getValue();
}

//! Get the value of the AnimationGroup::_sfOffset field.
inline
      Real32  AnimationGroupBase::getOffset(void) const
{
    return _sfOffset.getValue();
}

//! Set the value of the AnimationGroup::_sfOffset field.
inline
void AnimationGroupBase::setOffset(const Real32 value)
{
    editSField(OffsetFieldMask);

    _sfOffset.setValue(value);
}
//! Get the value of the AnimationGroup::_sfSpan field.

inline
Real32 &AnimationGroupBase::editSpan(void)
{
    editSField(SpanFieldMask);

    return _sfSpan.getValue();
}

//! Get the value of the AnimationGroup::_sfSpan field.
inline
      Real32  AnimationGroupBase::getSpan(void) const
{
    return _sfSpan.getValue();
}

//! Set the value of the AnimationGroup::_sfSpan field.
inline
void AnimationGroupBase::setSpan(const Real32 value)
{
    editSField(SpanFieldMask);

    _sfSpan.setValue(value);
}

//! Get the value of the \a index element the AnimationGroup::_mfAnimations field.
inline
Animation * AnimationGroupBase::getAnimations(const UInt32 index) const
{
    return _mfAnimations[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void AnimationGroupBase::execSync (      AnimationGroupBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AnimationsFieldMask & whichField))
        _mfAnimations.syncWith(pFrom->_mfAnimations,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pFrom->_sfScale);

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
        _sfOffset.syncWith(pFrom->_sfOffset);

    if(FieldBits::NoField != (SpanFieldMask & whichField))
        _sfSpan.syncWith(pFrom->_sfSpan);
}
#endif


inline
const Char8 *AnimationGroupBase::getClassname(void)
{
    return "AnimationGroup";
}

inline
EventConnection AnimationGroupBase::attachActivity(ActivityRefPtr TheActivity, UInt32 ProducedEventId)
{
    return _Producer.attachActivity(TheActivity, ProducedEventId);
}

inline
bool AnimationGroupBase::isActivityAttached(ActivityRefPtr TheActivity, UInt32 ProducedEventId) const
{
    return _Producer.isActivityAttached(TheActivity, ProducedEventId);
}

inline
UInt32 AnimationGroupBase::getNumActivitiesAttached(UInt32 ProducedEventId) const
{
    return _Producer.getNumActivitiesAttached(ProducedEventId);
}

inline
ActivityRefPtr AnimationGroupBase::getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const
{
    return _Producer.getAttachedActivity(ProducedEventId,ActivityIndex);
}

inline
void AnimationGroupBase::detachActivity(ActivityRefPtr TheActivity, UInt32 ProducedEventId)
{
    _Producer.detachActivity(TheActivity, ProducedEventId);
}

inline
UInt32 AnimationGroupBase::getNumProducedEvents(void) const
{
    return _Producer.getNumProducedEvents();
}

inline
const MethodDescription *AnimationGroupBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return _Producer.getProducedEventDescription(ProducedEventName);
}

inline
const MethodDescription *AnimationGroupBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return _Producer.getProducedEventDescription(ProducedEventId);
}

inline
UInt32 AnimationGroupBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return _Producer.getProducedEventId(ProducedEventName);
}

inline
SFEventProducerPtr *AnimationGroupBase::editSFEventProducer(void)
{
    return &_sfEventProducer;
}

//! Get the value of the AnimationGroup::_sfEventProducer field.
inline
EventProducerPtr &AnimationGroupBase::editEventProducer(void)
{
    return _sfEventProducer.getValue();
}

OSG_GEN_CONTAINERPTR(AnimationGroup);

OSG_END_NAMESPACE
