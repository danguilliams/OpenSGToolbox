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
 **     class VideoWrapper!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &VideoWrapperBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 VideoWrapperBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &VideoWrapperBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 VideoWrapperBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 VideoWrapperBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/



#ifdef OSG_MT_CPTR_ASPECT
inline
void VideoWrapperBase::execSync (      VideoWrapperBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);
}
#endif


inline
const Char8 *VideoWrapperBase::getClassname(void)
{
    return "VideoWrapper";
}

inline
UInt32 VideoWrapperBase::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *VideoWrapperBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *VideoWrapperBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 VideoWrapperBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  VideoWrapperBase::connectStarted(const StartedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _StartedEvent.connect(listener, at);
}

inline
boost::signals2::connection  VideoWrapperBase::connectStarted(const StartedEventType::group_type &group,
                                                    const StartedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _StartedEvent.connect(group, listener, at);
}

inline
void  VideoWrapperBase::disconnectStarted(const StartedEventType::group_type &group)
{
    _StartedEvent.disconnect(group);
}

inline
void  VideoWrapperBase::disconnectAllSlotsStarted(void)
{
    _StartedEvent.disconnect_all_slots();
}

inline
bool  VideoWrapperBase::isEmptyStarted(void) const
{
    return _StartedEvent.empty();
}

inline
UInt32  VideoWrapperBase::numSlotsStarted(void) const
{
    return _StartedEvent.num_slots();
}

inline
void VideoWrapperBase::produceStarted(StartedEventDetailsType* const e)
{
    produceEvent(StartedEventId, e);
}

inline
boost::signals2::connection  VideoWrapperBase::connectStopped(const StoppedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _StoppedEvent.connect(listener, at);
}

inline
boost::signals2::connection  VideoWrapperBase::connectStopped(const StoppedEventType::group_type &group,
                                                    const StoppedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _StoppedEvent.connect(group, listener, at);
}

inline
void  VideoWrapperBase::disconnectStopped(const StoppedEventType::group_type &group)
{
    _StoppedEvent.disconnect(group);
}

inline
void  VideoWrapperBase::disconnectAllSlotsStopped(void)
{
    _StoppedEvent.disconnect_all_slots();
}

inline
bool  VideoWrapperBase::isEmptyStopped(void) const
{
    return _StoppedEvent.empty();
}

inline
UInt32  VideoWrapperBase::numSlotsStopped(void) const
{
    return _StoppedEvent.num_slots();
}

inline
void VideoWrapperBase::produceStopped(StoppedEventDetailsType* const e)
{
    produceEvent(StoppedEventId, e);
}

inline
boost::signals2::connection  VideoWrapperBase::connectPaused(const PausedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _PausedEvent.connect(listener, at);
}

inline
boost::signals2::connection  VideoWrapperBase::connectPaused(const PausedEventType::group_type &group,
                                                    const PausedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _PausedEvent.connect(group, listener, at);
}

inline
void  VideoWrapperBase::disconnectPaused(const PausedEventType::group_type &group)
{
    _PausedEvent.disconnect(group);
}

inline
void  VideoWrapperBase::disconnectAllSlotsPaused(void)
{
    _PausedEvent.disconnect_all_slots();
}

inline
bool  VideoWrapperBase::isEmptyPaused(void) const
{
    return _PausedEvent.empty();
}

inline
UInt32  VideoWrapperBase::numSlotsPaused(void) const
{
    return _PausedEvent.num_slots();
}

inline
void VideoWrapperBase::producePaused(PausedEventDetailsType* const e)
{
    produceEvent(PausedEventId, e);
}

inline
boost::signals2::connection  VideoWrapperBase::connectUnpaused(const UnpausedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _UnpausedEvent.connect(listener, at);
}

inline
boost::signals2::connection  VideoWrapperBase::connectUnpaused(const UnpausedEventType::group_type &group,
                                                    const UnpausedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _UnpausedEvent.connect(group, listener, at);
}

inline
void  VideoWrapperBase::disconnectUnpaused(const UnpausedEventType::group_type &group)
{
    _UnpausedEvent.disconnect(group);
}

inline
void  VideoWrapperBase::disconnectAllSlotsUnpaused(void)
{
    _UnpausedEvent.disconnect_all_slots();
}

inline
bool  VideoWrapperBase::isEmptyUnpaused(void) const
{
    return _UnpausedEvent.empty();
}

inline
UInt32  VideoWrapperBase::numSlotsUnpaused(void) const
{
    return _UnpausedEvent.num_slots();
}

inline
void VideoWrapperBase::produceUnpaused(UnpausedEventDetailsType* const e)
{
    produceEvent(UnpausedEventId, e);
}

inline
boost::signals2::connection  VideoWrapperBase::connectEnded(const EndedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _EndedEvent.connect(listener, at);
}

inline
boost::signals2::connection  VideoWrapperBase::connectEnded(const EndedEventType::group_type &group,
                                                    const EndedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _EndedEvent.connect(group, listener, at);
}

inline
void  VideoWrapperBase::disconnectEnded(const EndedEventType::group_type &group)
{
    _EndedEvent.disconnect(group);
}

inline
void  VideoWrapperBase::disconnectAllSlotsEnded(void)
{
    _EndedEvent.disconnect_all_slots();
}

inline
bool  VideoWrapperBase::isEmptyEnded(void) const
{
    return _EndedEvent.empty();
}

inline
UInt32  VideoWrapperBase::numSlotsEnded(void) const
{
    return _EndedEvent.num_slots();
}

inline
void VideoWrapperBase::produceEnded(EndedEventDetailsType* const e)
{
    produceEvent(EndedEventId, e);
}

inline
boost::signals2::connection  VideoWrapperBase::connectCycled(const CycledEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _CycledEvent.connect(listener, at);
}

inline
boost::signals2::connection  VideoWrapperBase::connectCycled(const CycledEventType::group_type &group,
                                                    const CycledEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _CycledEvent.connect(group, listener, at);
}

inline
void  VideoWrapperBase::disconnectCycled(const CycledEventType::group_type &group)
{
    _CycledEvent.disconnect(group);
}

inline
void  VideoWrapperBase::disconnectAllSlotsCycled(void)
{
    _CycledEvent.disconnect_all_slots();
}

inline
bool  VideoWrapperBase::isEmptyCycled(void) const
{
    return _CycledEvent.empty();
}

inline
UInt32  VideoWrapperBase::numSlotsCycled(void) const
{
    return _CycledEvent.num_slots();
}

inline
void VideoWrapperBase::produceCycled(CycledEventDetailsType* const e)
{
    produceEvent(CycledEventId, e);
}

inline
boost::signals2::connection  VideoWrapperBase::connectOpened(const OpenedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _OpenedEvent.connect(listener, at);
}

inline
boost::signals2::connection  VideoWrapperBase::connectOpened(const OpenedEventType::group_type &group,
                                                    const OpenedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _OpenedEvent.connect(group, listener, at);
}

inline
void  VideoWrapperBase::disconnectOpened(const OpenedEventType::group_type &group)
{
    _OpenedEvent.disconnect(group);
}

inline
void  VideoWrapperBase::disconnectAllSlotsOpened(void)
{
    _OpenedEvent.disconnect_all_slots();
}

inline
bool  VideoWrapperBase::isEmptyOpened(void) const
{
    return _OpenedEvent.empty();
}

inline
UInt32  VideoWrapperBase::numSlotsOpened(void) const
{
    return _OpenedEvent.num_slots();
}

inline
void VideoWrapperBase::produceOpened(OpenedEventDetailsType* const e)
{
    produceEvent(OpenedEventId, e);
}

inline
boost::signals2::connection  VideoWrapperBase::connectClosed(const ClosedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ClosedEvent.connect(listener, at);
}

inline
boost::signals2::connection  VideoWrapperBase::connectClosed(const ClosedEventType::group_type &group,
                                                    const ClosedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ClosedEvent.connect(group, listener, at);
}

inline
void  VideoWrapperBase::disconnectClosed(const ClosedEventType::group_type &group)
{
    _ClosedEvent.disconnect(group);
}

inline
void  VideoWrapperBase::disconnectAllSlotsClosed(void)
{
    _ClosedEvent.disconnect_all_slots();
}

inline
bool  VideoWrapperBase::isEmptyClosed(void) const
{
    return _ClosedEvent.empty();
}

inline
UInt32  VideoWrapperBase::numSlotsClosed(void) const
{
    return _ClosedEvent.num_slots();
}

inline
void VideoWrapperBase::produceClosed(ClosedEventDetailsType* const e)
{
    produceEvent(ClosedEventId, e);
}

inline
boost::signals2::connection  VideoWrapperBase::connectSeeked(const SeekedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SeekedEvent.connect(listener, at);
}

inline
boost::signals2::connection  VideoWrapperBase::connectSeeked(const SeekedEventType::group_type &group,
                                                    const SeekedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SeekedEvent.connect(group, listener, at);
}

inline
void  VideoWrapperBase::disconnectSeeked(const SeekedEventType::group_type &group)
{
    _SeekedEvent.disconnect(group);
}

inline
void  VideoWrapperBase::disconnectAllSlotsSeeked(void)
{
    _SeekedEvent.disconnect_all_slots();
}

inline
bool  VideoWrapperBase::isEmptySeeked(void) const
{
    return _SeekedEvent.empty();
}

inline
UInt32  VideoWrapperBase::numSlotsSeeked(void) const
{
    return _SeekedEvent.num_slots();
}

inline
void VideoWrapperBase::produceSeeked(SeekedEventDetailsType* const e)
{
    produceEvent(SeekedEventId, e);
}

OSG_GEN_CONTAINERPTR(VideoWrapper);

OSG_END_NAMESPACE

