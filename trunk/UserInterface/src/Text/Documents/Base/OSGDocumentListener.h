/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

#ifndef _OSG_UI_DOCUMENT_LISTENER_H_
#define _OSG_UI_DOCUMENT_LISTENER_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include "OSGDocumentEvent.h"

#include <OpenSG/Input/OSGEventListener.h>

OSG_BEGIN_NAMESPACE

class OSG_USERINTERFACELIB_DLLMAPPING DocumentListener : public EventListener
{
    /*=========================  PUBLIC  ===============================*/
  public: 
    //Gives notification that an attribute or set of attributes changed.
    virtual void changedUpdate(const DocumentEvent& e)  = 0;

    //Gives notification that there was an insert into the document.
    virtual void insertUpdate(const DocumentEvent& e)  = 0;

    //Gives notification that a portion of the document has been removed.
    virtual void removeUpdate(const DocumentEvent& e)  = 0;

};

typedef DocumentListener* DocumentListenerPtr;

OSG_END_NAMESPACE

#endif /* _OSG_UI_DOCUMENT_LISTENER_H_ */