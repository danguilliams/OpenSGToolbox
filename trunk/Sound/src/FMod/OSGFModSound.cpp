/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILESOUNDLIB

#include <OpenSG/OSGConfig.h>

#include "OSGFModSound.h"
#include "Sound/Events/OSGSoundListener.h"
#include "Sound/Events/OSGSoundEvent.h"

OSG_BEGIN_NAMESPACE


/************************fmod callback ************************************/
FMOD_RESULT  F_CALLBACK  fmod_callback(
	FMOD_EVENT *  event, 
	FMOD_EVENT_CALLBACKTYPE  type, 
	void *  param1, 
	void *  param2, 
	void *  userdata){
	FModSound* sound = (FModSound*)userdata;
	for (int i = 0; i < 20; i++){
		if (!sound->listeners[i]) continue;
		SoundListenerPtr listener = sound->listeners[i];
		SoundPtr soundPtr(sound);
		SoundEvent event(soundPtr, Time(), soundPtr);
		switch (type){
			case (FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_START):
				listener->soundPlayed(event);
				break;
			case (FMOD_EVENT_CALLBACKTYPE_EVENTFINISHED):
			//case (FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_END):
				listener->soundEnded(event);
				break;
		}
	}
	return FMOD_OK;
}

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::FModSound
A FMod Sound Interface. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void FModSound::initMethod (void)
{
}

FMOD::Event*& FModSound::getFmodEvent(){
	return event;
}

void FModSound::setFModEvent(FMOD::Event* event){
	this->event = event;
	event->setCallback(fmod_callback, this);
}
void FModSound::play(void){
	event->start();
}
	/*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{ stop playing the sound object                                   */

void FModSound::stop(void){
	event->stop();
}
	/*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{ seek to position at pos sec                                     */

void FModSound::seek(float pos){}
	
	/*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{ set the position of the sound                                   */

void FModSound::setPosition(const Pnt3f &pos){
	FMOD_VECTOR curPos;
	FMOD_VECTOR curVec;
	event->get3DAttributes(&curPos, &curVec);
	curPos.x = pos[0];
	curPos.y = pos[1];
	curPos.z = pos[2];
	event->set3DAttributes(&curPos, &curVec);
}

void FModSound::update(){
	
}
	/*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{ set the position of the sound                                   */

void FModSound::setVelocity(const Vec3f &vec){
	FMOD_VECTOR curPos;
	FMOD_VECTOR curVec;
	event->get3DAttributes(&curPos, &curVec);
	curVec.x = vec[0];
	curVec.y = vec[1];
	curVec.z = vec[2];
	event->set3DAttributes(&curPos, &curVec);
}
/*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{ get the volumne  of the sound between 0 and 1.0                 */

float FModSound::getVolume(){
	float v;
	event->getVolume(&v);
	return v;
}

	/*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{ set the velocity of the sound between 0 and 1.0                 */

void FModSound::setVolume(const float volume){
	event->setVolume(volume);
}


float FModSound::getParameter(const int index){
	FMOD::EventParameter *p;
	float param, min, max;
	int result = event->getParameterByIndex(index, &p);
	if (result != FMOD_OK)
		return -1;
	p->getValue(&param);
	p->getRange(&min, &max);
	param = (param - min) / (max - min); //normalize to between zero and one
	return param;
}
void FModSound::setParameter(const int index, const float pp){
	FMOD::EventParameter *p;
	float param = pp, min, max;
	int result = event->getParameterByIndex(index, &p);
	if (result != FMOD_OK)
		return ;
	p->getRange(&min, &max);
	param = param * (max - min) + min; //normalize to between native range
	p->setValue(param);
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

FModSound::FModSound(void) :
    Inherited()
{
	event = NULL;
}

FModSound::FModSound(const FModSound &source) :
    Inherited(source)
{
}

FModSound::~FModSound(void)
{
}

/*----------------------------- class specific ----------------------------*/

void FModSound::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
	printf("here\n");
}

void FModSound::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump FModSound NI" << std::endl;
}



/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGFMODSOUNDBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFMODSOUNDBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFMODSOUNDFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE
