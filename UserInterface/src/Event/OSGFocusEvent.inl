#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE

inline
FocusEvent::EventType FocusEvent::getEvent(void) const
{
    return _Event;
}

inline
bool FocusEvent::getTemporary(void) const
{
    return _Temporary;
}

inline
ComponentPtr FocusEvent::getOpposite(void) const
{
    return _Opposite;
}

inline
FocusEvent::FocusEvent(FieldContainerPtr Source, Time TimeStamp, EventType TheEvent, bool Temporary, ComponentPtr Opposite) :
   Event(Source, TimeStamp),
       _Event(TheEvent),
    _Temporary(Temporary),
    _Opposite(Opposite)
{
}

OSG_END_NAMESPACE