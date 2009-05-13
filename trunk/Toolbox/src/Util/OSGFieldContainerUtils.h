/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Toolbox                             *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
#ifndef _OPENSG_TOOLBOX_FIELD_CONATINER_UTILS_H_
#define _OPENSG_TOOLBOX_FIELD_CONATINER_UTILS_H_

#include <OpenSG/OSGConfig.h>
#include "OSGToolboxDef.h"

#include <OpenSG/OSGFieldContainer.h>

OSG_BEGIN_NAMESPACE

FieldContainerPtr OSG_TOOLBOXLIB_DLLMAPPING getFieldContainer(const Char8 *szTypeName, const std::string &namestring);
FieldContainerPtr OSG_TOOLBOXLIB_DLLMAPPING getFieldContainer(const FieldContainerType *szType, const std::string &namestring);
FieldContainerPtr OSG_TOOLBOXLIB_DLLMAPPING getFieldContainer(const std::string &namestring);

OSG_END_NAMESPACE

#endif
