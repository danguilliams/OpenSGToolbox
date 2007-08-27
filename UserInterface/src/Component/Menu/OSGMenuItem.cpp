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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILEUSERINTERFACELIB

#include <OpenSG/OSGConfig.h>

#include "OSGMenuItem.h"
#include "Util/OSGUIDrawUtils.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::MenuItem
A UI MenuItem. 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void MenuItem::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void MenuItem::drawInternal(const GraphicsPtr TheGraphics) const
{
   Pnt2s TopLeft, BottomRight;
   getInsideBorderBounds(TopLeft, BottomRight);

   //If I have Text Then Draw it
   if(getText() != "" && getFont() != NullFC)
   {
      //Calculate Alignment
      Pnt2s AlignedPosition;
      Pnt2s TextTopLeft, TextBottomRight;
      getFont()->getBounds(getText(), TextTopLeft, TextBottomRight);

      AlignedPosition = calculateAlignment(TopLeft, (BottomRight-TopLeft), (TextBottomRight - TextTopLeft),0.5, 0.0);

	  //Draw the Text
      TheGraphics->drawText(AlignedPosition, getText(), getFont(), getDrawnTextColor(), getOpacity());
   }
}

Color4f MenuItem::getDrawnTextColor(void) const
{
    if(getEnabled())
    {
        //if(getFocused())
        //{
        //    return getFocusedTextColor();
        //}
        if(getArmed())
        {
            return getArmedTextColor();
        }
        if(_MouseInComponentLastMouse)
        {
            return getRolloverTextColor();
        }
        else
        {
            return getTextColor();
        }
    }
    else
    {
        return getDisabledTextColor();
    }
}

BorderPtr MenuItem::getDrawnBorder(void) const
{
    if(getEnabled())
    {
        //if(getFocused())
        //{
        //    return getFocusedTextColor();
        //}
        if(getArmed())
        {
            return getArmedBorder();
        }
        else if(_MouseInComponentLastMouse)
        {
            return getRolloverBorder();
        }
        else
        {
            return getBorder();
        }
    }
    else
    {
        return getDisabledBorder();
    }
}

UIBackgroundPtr MenuItem::getDrawnBackground(void) const
{
    if(getEnabled())
    {
        //if(getFocused())
        //{
        //    return getFocusedTextColor();
        //}
        if(getArmed())
        {
            return getArmedBackground();
        }
        else if(_MouseInComponentLastMouse)
        {
            return getRolloverBackground();
        }
        else
        {
            return getBackground();
        }
    }
    else
    {
        return getDisabledBackground();
    }
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

MenuItem::MenuItem(void) :
    Inherited()
{
}

MenuItem::MenuItem(const MenuItem &source) :
    Inherited(source)
{
}

MenuItem::~MenuItem(void)
{
}

/*----------------------------- class specific ----------------------------*/

void MenuItem::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void MenuItem::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump MenuItem NI" << std::endl;
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
    static Char8 cvsid_hpp       [] = OSGMENUITEMBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGMENUITEMBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGMENUITEMFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

