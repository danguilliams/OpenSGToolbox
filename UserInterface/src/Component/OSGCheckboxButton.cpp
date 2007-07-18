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

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"
#include "OSGCheckboxButton.h"
#include "Util/OSGUIDrawUtils.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::CheckboxButton
A UI Checkbox Button. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void CheckboxButton::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void CheckboxButton::drawInternal(const GraphicsPtr TheGraphics) const
{
	Pnt2s TopLeft, BottomRight;
	Pnt2s drawObjectTopLeft;
	Vec2s drawObjectSize;
	Pnt2s TempPos;
	Int32 totalWidth;
	Int32 yAdj = 0;
	getInsideBorderSizing(TopLeft, BottomRight);

   if(getActive()){
	   if(getChecked()){
		   getActiveCheckedDrawObject()->getDrawObjectBounds(drawObjectTopLeft, drawObjectSize);
		   totalWidth =	drawObjectSize.x()+5+TheGraphics->getTextBounds(getText(), getFont()).x();
		   TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, Vec2s(totalWidth, drawObjectSize.y()), getVerticalAlignment(), getHorizontalAlignment());
		   getActiveCheckedDrawObject()->setPosition(TempPos);
		   getActiveCheckedDrawObject()->draw(TheGraphics);

	   }
	   else
	   {
		   getActiveDrawObject()->getDrawObjectBounds(drawObjectTopLeft, drawObjectSize);
		   totalWidth = drawObjectSize.x()+5+TheGraphics->getTextBounds(getText(), getFont()).x();
		   TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, Vec2s(totalWidth, drawObjectSize.y()), getVerticalAlignment(), getHorizontalAlignment());
		   getActiveDrawObject()->setPosition(TempPos);
		   getActiveDrawObject()->draw(TheGraphics);
	   }
   }
   else if(getChecked()){
	   getCheckedDrawObject()->getDrawObjectBounds(drawObjectTopLeft, drawObjectSize);
	   totalWidth =	drawObjectSize.x()+5+TheGraphics->getTextBounds(getText(), getFont()).x();
	   TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, Vec2s(totalWidth, drawObjectSize.y()), getVerticalAlignment(), getHorizontalAlignment());
	   getCheckedDrawObject()->setPosition(TempPos);
 	   getCheckedDrawObject()->draw(TheGraphics);
  }
   else{
		getDrawObject()->getDrawObjectBounds(drawObjectTopLeft, drawObjectSize);
		totalWidth = drawObjectSize.x()+5+TheGraphics->getTextBounds(getText(), getFont()).x();
		TempPos = calculateAlignment(TopLeft, BottomRight-TopLeft, Vec2s(totalWidth, drawObjectSize.y()), getVerticalAlignment(), getHorizontalAlignment());
   	    getDrawObject()->setPosition(TempPos);
		getDrawObject()->draw(TheGraphics);
   }
   if(drawObjectSize.y()> TheGraphics->getTextBounds(getText(), getFont()).y())
	   yAdj = (drawObjectSize.y()-TheGraphics->getTextBounds(getText(), getFont()).x())/2.0;
   TheGraphics->drawText(Pnt2s(TempPos.x()+drawObjectSize.x()+5, TempPos.y()-yAdj),   getText(), getFont(), getForegroundColor(), getOpacity());

}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

CheckboxButton::CheckboxButton(void) :
    Inherited()
{
}

CheckboxButton::CheckboxButton(const CheckboxButton &source) :
    Inherited(source)
{
}

CheckboxButton::~CheckboxButton(void)
{
}

/*----------------------------- class specific ----------------------------*/

void CheckboxButton::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
	
}

void CheckboxButton::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump CheckboxButton NI" << std::endl;
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
    static Char8 cvsid_hpp       [] = OSGCHECKBOXBUTTONBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCHECKBOXBUTTONBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCHECKBOXBUTTONFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

