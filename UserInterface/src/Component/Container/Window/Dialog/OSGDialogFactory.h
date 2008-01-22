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
#ifndef _OSG_DIALOG_FACTORY_H_
#define _OSG_DIALOG_FACTORY_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include "Component/Container/Window/OSGInternalWindowFields.h"
#include "Component/Container/OSGContainerFields.h"

OSG_BEGIN_NAMESPACE

class OSG_USERINTERFACELIB_DLLMAPPING DialogFactory
{
/*=========================  PUBLIC  ===============================*/
public:
    static InternalWindowPtr createMessageDialog(const std::string& Title, const std::string& Message, const std::string& ConfirmButtonText);
    
    static ContainerPtr createMessagePanel(const std::string& Message, const std::string& ConfirmButtonText);

private:

    DialogFactory(void);
};

OSG_END_NAMESPACE

#include "OSGDialogFactory.inl"

#endif /* _OSG_DIALOG_FACTORY_H_ */