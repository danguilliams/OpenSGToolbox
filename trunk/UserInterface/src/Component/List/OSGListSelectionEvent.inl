#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

OSG_BEGIN_NAMESPACE

inline
const EventType &ListSelectionEvent::getClassType(void)
{
    return _Type;
}

inline
Int32 	ListSelectionEvent::getFirstIndex() const
{
   return _FirstIndex;
}

inline
Int32 	ListSelectionEvent::getLastIndex() const
{
   return _LastIndex;
}

inline
bool 	ListSelectionEvent::getValueIsAdjusting() const
{
   return _ValueIsAdjusting;
}

inline
ListSelectionEvent::ListSelectionEvent(FieldContainerPtr Source, Time TimeStamp, Int32 FirstIndex, Int32 LastIndex, bool ValueIsAdjusting)
 : Event(Source, TimeStamp),
   _FirstIndex(FirstIndex),
   _LastIndex(LastIndex),
   _ValueIsAdjusting(ValueIsAdjusting)
{
}
    
OSG_END_NAMESPACE