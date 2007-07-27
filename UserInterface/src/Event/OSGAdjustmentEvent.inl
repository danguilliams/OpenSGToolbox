#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE

inline
AdjustmentEvent::EventType AdjustmentEvent::getEvent(void) const
{
    return _Event;
}

inline
UInt32 AdjustmentEvent::getValue(void) const
{
    return _Value;
}

inline
bool AdjustmentEvent::getValueIsAdjusting(void) const
{
    return _ValueIsAdjusting;
}

inline
AdjustmentEvent:: AdjustmentEvent(FieldContainerPtr Source, Time TimeStamp, EventType TheEvent, UInt32 Value, bool ValueIsAdjusting) :
   Event(Source, TimeStamp),
       _Event(TheEvent),
       _Value(Value),
       _ValueIsAdjusting(ValueIsAdjusting)
{
}

OSG_END_NAMESPACE