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

#ifndef _OSG_UI_DEFINES_H_
#define _OSG_UI_DEFINES_H_

#ifdef __sgi
#pragma once
#endif
 
#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#define OSG_UI_BEGIN_NAMESPACE namespace OSG { namespace ui
#define OSG_UI_END_NAMESPACE } }

#define OSG_UI_USING_NAMESPACE namespace OSG {} namespace ui using namespace OSG::ui;


OSG_BEGIN_NAMESPACE

enum HorizontalAlignment {HORIZONTAL_CENTER=0, HORIZONTAL_LEFT, HORIZONTAL_RIGHT};
enum VerticalAlignment {VERTICAL_CENTER=0, VERTICAL_TOP, VERTICAL_BOTTOM};

enum Alignment {HORIZONTAL_ALIGNMENT=0, VERTICAL_ALIGNMENT=1};
enum AxisAlignment {AXIS_MIN_ALIGNMENT=0, AXIS_CENTER_ALIGNMENT, AXIS_MAX_ALIGNMENT};
enum TabRotation {CLOCKWISE_0=0, CLOCKWISE_90=1, CLOCKWISE_180=2, CLOCKWISE_270=3};
enum Scale {SCALE_NONE=0, SCALE_STRETCH, SCALE_MIN_AXIS, SCALE_MAX_AXIS, SCALE_ABSOLUTE};
	 
OSG_END_NAMESPACE

#endif /* _OSG_UI_DEFINES_H_ */