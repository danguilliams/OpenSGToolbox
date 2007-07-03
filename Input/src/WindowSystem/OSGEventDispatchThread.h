/*---------------------------------------------------------------------------*\
 *                            OpenSGToolbox                                  *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   contact: dkabala@vrac.iastate.edu                                       *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 3.                               *
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
#ifndef _OSG_EVENT_DISPATCH_THREAD_H_
#define _OSG_EVENT_DISPATCH_THREAD_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGInputConfig.h"

#include <OpenSG/OSGThread.h>

OSG_BEGIN_NAMESPACE

class OSG_INPUT_CLASS_API EventDispatchThread : public Thread
{
   /*=========================  PUBLIC  ===============================*/
public:
    bool _EventDispatchThreadFinish;
    void setEventDispatchThreadFinish(void);

    virtual void workProc(void);

    EventDispatchThread(const Char8 *szName, UInt32 uiId);
    ~EventDispatchThread(void);
protected:
   static MPThreadType _type;
   static EventDispatchThread *create       (const Char8 *szName, UInt32 uiId);
};

OSG_END_NAMESPACE

#include "OSGEventDispatchThread.inl"

#endif /* _OSG_EVENT_DISPATCH_THREAD_H_ */