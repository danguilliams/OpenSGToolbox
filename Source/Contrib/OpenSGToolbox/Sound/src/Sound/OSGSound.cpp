/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Sound                               *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILESOUNDLIB

#include <OpenSG/OSGConfig.h>

#include "OSGSound.h"
#include "OSGSoundManager.h"
#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::Sound
A Sound Interface. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void Sound::initMethod (void)
{
}


//! create a new instance of the class
SoundPtr Sound::create(void)
{
    return SoundManager::the()->createSound(); 
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

EventConnection Sound::addSoundListener(SoundListenerPtr Listener)
{
   _SoundListeners.insert(Listener);
   return EventConnection(
       boost::bind(&Sound::isSoundListenerAttached, this, Listener),
       boost::bind(&Sound::removeSoundListener, this, Listener));
}

void Sound::removeSoundListener(SoundListenerPtr Listener)
{
   SoundListenerSetItor EraseIter(_SoundListeners.find(Listener));
   if(EraseIter != _SoundListeners.end())
   {
      _SoundListeners.erase(EraseIter);
   }
}

void Sound::produceSoundPlayed(UInt32 TheChannel)
{
    const SoundEventPtr e = SoundEvent::create(SoundPtr(this), getTimeStamp(), TheChannel);
    SoundListenerSet ListenerSet(_SoundListeners);
    for(SoundListenerSetConstItor SetItor(ListenerSet.begin()) ; SetItor != ListenerSet.end() ; ++SetItor)
    {
        (*SetItor)->soundPlayed(e);
    }
    _Producer.produceEvent(SoundPlayedMethodId,e);
}

void Sound::produceSoundStopped(UInt32 TheChannel)
{
    const SoundEventPtr e = SoundEvent::create(SoundPtr(this), getTimeStamp(), TheChannel);
    SoundListenerSet ListenerSet(_SoundListeners);
    for(SoundListenerSetConstItor SetItor(ListenerSet.begin()) ; SetItor != ListenerSet.end() ; ++SetItor)
    {
        (*SetItor)->soundStopped(e);
    }
    _Producer.produceEvent(SoundStoppedMethodId,e);
}

void Sound::produceSoundPaused(UInt32 TheChannel)
{
    const SoundEventPtr e = SoundEvent::create(SoundPtr(this), getTimeStamp(), TheChannel);
    SoundListenerSet ListenerSet(_SoundListeners);
    for(SoundListenerSetConstItor SetItor(ListenerSet.begin()) ; SetItor != ListenerSet.end() ; ++SetItor)
    {
        (*SetItor)->soundPaused(e);
    }
    _Producer.produceEvent(SoundPausedMethodId,e);
}

void Sound::produceSoundUnpaused(UInt32 TheChannel)
{
    const SoundEventPtr e = SoundEvent::create(SoundPtr(this), getTimeStamp(), TheChannel);
    SoundListenerSet ListenerSet(_SoundListeners);
    for(SoundListenerSetConstItor SetItor(ListenerSet.begin()) ; SetItor != ListenerSet.end() ; ++SetItor)
    {
        (*SetItor)->soundUnpaused(e);
    }
    _Producer.produceEvent(SoundUnpausedMethodId,e);
}

void Sound::produceSoundLooped(UInt32 TheChannel)
{
    const SoundEventPtr e = SoundEvent::create(SoundPtr(this), getTimeStamp(), TheChannel);
    SoundListenerSet ListenerSet(_SoundListeners);
    for(SoundListenerSetConstItor SetItor(ListenerSet.begin()) ; SetItor != ListenerSet.end() ; ++SetItor)
    {
        (*SetItor)->soundLooped(e);
    }
    _Producer.produceEvent(SoundLoopedMethodId,e);
}

void Sound::produceSoundEnded(UInt32 TheChannel)
{
    const SoundEventPtr e = SoundEvent::create(SoundPtr(this), getTimeStamp(), TheChannel);
    SoundListenerSet ListenerSet(_SoundListeners);
    for(SoundListenerSetConstItor SetItor(ListenerSet.begin()) ; SetItor != ListenerSet.end() ; ++SetItor)
    {
        (*SetItor)->soundEnded(e);
    }
    _Producer.produceEvent(SoundEndedMethodId,e);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

Sound::Sound(void) :
    Inherited()
{
}

Sound::Sound(const Sound &source) :
    Inherited(source)
{
}

Sound::~Sound(void)
{
}

/*----------------------------- class specific ----------------------------*/

void Sound::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void Sound::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump Sound NI" << std::endl;
}

OSG_END_NAMESPACE
