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

#include "OSGDialogCoordinator.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::DialogCoordinator
A dialog coordiantor that runs on a text script to coordinate the dialog lines of single or multiple voices/sounds
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void DialogCoordinator::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void DialogCoordinator::addSoundEmitter(const SoundEmitterPtr emitter, const char role,
										const int startDialogID){
	for (int i = 0; i < sizeof(emitters) / sizeof(SoundEmitterPtr); i++){
		if (!this->emitters[i]){
			emitters[i] = emitter;
			roles[i] = role;
			currentLine[i] = startDialogID;
			return;
		}
	}
}

void DialogCoordinator::setScript(const char* script){
	int len = strlen(script);
	this->script = (char*)malloc(len + 1);
	memcpy(this->script, script, len);
	this->script[len] = 0; //null terminated
}

void DialogCoordinator::setSoundManager(SoundManagerPtr soundManager){
	this->soundManager=soundManager;
}

void DialogCoordinator::loadNext(int index){
	SoundEmitterPtr emitter = emitters[index];
#if 0
	SoundPtr curSound = emitter->getSound();
	if (curSound != NULL){
		delete curSound;
	}
#endif
	SoundPtr newSound = this->soundManager->getSound(currentLine[index]++);
	beginEditCP(emitter, SoundEmitter::SoundFieldMask);
		emitter->setSound(newSound);			
	endEditCP(emitter, SoundEmitter::SoundFieldMask);
}

void DialogCoordinator::start(){
/*
	for (int i = 0; i < sizeof(emitters) / sizeof(SoundEmitterPtr); i++){
		if (emitters[i])
			loadNext(i);
	}
*/
	int i = getNext();
	loadNext(i);
	emitters[i]->getSound()->play();
}


int DialogCoordinator::getNext(){
	char c = script[scriptPos];
	if (c >='a' && c<='z'){
		for (int i = 0;  i < sizeof(emitters) / sizeof(SoundEmitterPtr); i++){
			if (c == roles[i]){
				scriptPos++;
				//here for further scri[t implemetation

				return i;
			}
		}
		return -1; //error in script or role not added
	}
	return -1;
}
int DialogCoordinator::getScriptPos(){
	return scriptPos;
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

DialogCoordinator::DialogCoordinator(void) :
    Inherited()
{
	scriptPos = 0;
	memset(emitters, sizeof(emitters), 0);
}

DialogCoordinator::DialogCoordinator(const DialogCoordinator &source) :
    Inherited(source)
{
}

DialogCoordinator::~DialogCoordinator(void)
{
	free(script);
}

/*----------------------------- class specific ----------------------------*/

void DialogCoordinator::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void DialogCoordinator::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump DialogCoordinator NI" << std::endl;
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
    static Char8 cvsid_hpp       [] = OSGDIALOGCOORDINATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDIALOGCOORDINATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDIALOGCOORDINATORFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

