/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGDEFAULTSTRINGTABLECELLRENDERER_H_
#define _OSGDEFAULTSTRINGTABLECELLRENDERER_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include "Component/Table/OSGTableCellRenderer.h"

OSG_BEGIN_NAMESPACE

/*! \brief DefaultStringTableCellRenderer class. See \ref
           PageUserInterfaceDefaultStringTableCellRenderer for a description.
*/

class OSG_USERINTERFACELIB_DLLMAPPING DefaultStringTableCellRenderer : public TableCellRenderer
{
    /*==========================  PUBLIC  =================================*/
  public:
	virtual ComponentPtr getTableCellRendererComponent(TablePtr table, SharedFieldPtr value, bool isSelected, bool hasFocus, UInt32 row, UInt32 column);

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DefaultStringTableCellRenderer(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultStringTableCellRenderer(void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:
    
    /*==========================  PRIVATE  ================================*/
  private:
};

typedef boost::intrusive_ptr<DefaultStringTableCellRenderer> DefaultStringTableCellRendererPtr;

OSG_END_NAMESPACE

#endif /* _OSGDEFAULTSTRINGTABLECELLRENDERER_H_ */
