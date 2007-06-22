/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#ifndef _OSGEVENT_H_
#define _OSGEVENT_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGInputConfig.h"

OSG_BEGIN_NAMESPACE

/*! \ingroup GrpBaseBaseTypeSystem
 */

class OSG_INPUT_CLASS_API Event
{
    /*=========================  PUBLIC  ===============================*/
  public:
    FieldContainerPtr getSource() const;
    Time getTimeStamp() const;
    
  protected:
    Event(FieldContainerPtr Source, Time TimeStamp);
  
    FieldContainerPtr _Source;
    Time _TimeStamp;
};

OSG_END_NAMESPACE

#include "OSGEvent.inl"
      
#define _OSGEVENT_H_ "@(#)$Id: $"

#endif /* _OSGEVENT_H_ */
