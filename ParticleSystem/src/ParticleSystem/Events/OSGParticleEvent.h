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
#ifndef _OSGPARTICLEEVENT_H_
#define _OSGPARTICLEEVENT_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGParticleSystemDef.h"

#include <OpenSG/Input/OSGEvent.h>

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGVector.h>

OSG_BEGIN_NAMESPACE

class OSG_PARTICLESYSTEMLIB_DLLMAPPING ParticleEvent : public Event
{
  /*=========================  PUBLIC  ===============================*/
  public:

   ParticleEvent(FieldContainerPtr Source, Time TimeStamp, Pnt3f ParticlePosition);

    virtual const EventType &getType(void) const;
    const Pnt3f &getPosition(void) const;
    
    static const EventType &getClassType(void);
  private:
     static EventType _Type;
	 Pnt3f _ParticlePosition;
};

OSG_END_NAMESPACE

#include "OSGParticleEvent.inl"

#endif /* _OSGPARTICLEEVENT_H_ */
