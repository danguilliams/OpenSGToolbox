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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class PopupMenu!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPOPUPMENUINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGPopupMenuBase.h"
#include "OSGPopupMenu.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  PopupMenuBase::SubMenuDelayFieldMask = 
    (TypeTraits<BitVector>::One << PopupMenuBase::SubMenuDelayFieldId);

const OSG::BitVector  PopupMenuBase::InvokerFieldMask = 
    (TypeTraits<BitVector>::One << PopupMenuBase::InvokerFieldId);

const OSG::BitVector PopupMenuBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          PopupMenuBase::_sfSubMenuDelay
    
*/
/*! \var ComponentPtr    PopupMenuBase::_sfInvoker
    
*/

//! PopupMenu description

FieldDescription *PopupMenuBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "SubMenuDelay", 
                     SubMenuDelayFieldId, SubMenuDelayFieldMask,
                     false,
                     (FieldAccessMethod) &PopupMenuBase::getSFSubMenuDelay),
    new FieldDescription(SFComponentPtr::getClassType(), 
                     "Invoker", 
                     InvokerFieldId, InvokerFieldMask,
                     false,
                     (FieldAccessMethod) &PopupMenuBase::getSFInvoker)
};


FieldContainerType PopupMenuBase::_type(
    "PopupMenu",
    "Container",
    NULL,
    (PrototypeCreateF) &PopupMenuBase::createEmpty,
    PopupMenu::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PopupMenuBase, PopupMenuPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PopupMenuBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PopupMenuBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PopupMenuBase::shallowCopy(void) const 
{ 
    PopupMenuPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PopupMenu *>(this)); 

    return returnValue; 
}

UInt32 PopupMenuBase::getContainerSize(void) const 
{ 
    return sizeof(PopupMenu); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PopupMenuBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PopupMenuBase *) &other, whichField);
}
#else
void PopupMenuBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PopupMenuBase *) &other, whichField, sInfo);
}
void PopupMenuBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PopupMenuBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PopupMenuBase::PopupMenuBase(void) :
    _sfSubMenuDelay           (Real32(0.5)), 
    _sfInvoker                (ComponentPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PopupMenuBase::PopupMenuBase(const PopupMenuBase &source) :
    _sfSubMenuDelay           (source._sfSubMenuDelay           ), 
    _sfInvoker                (source._sfInvoker                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PopupMenuBase::~PopupMenuBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PopupMenuBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SubMenuDelayFieldMask & whichField))
    {
        returnValue += _sfSubMenuDelay.getBinSize();
    }

    if(FieldBits::NoField != (InvokerFieldMask & whichField))
    {
        returnValue += _sfInvoker.getBinSize();
    }


    return returnValue;
}

void PopupMenuBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SubMenuDelayFieldMask & whichField))
    {
        _sfSubMenuDelay.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InvokerFieldMask & whichField))
    {
        _sfInvoker.copyToBin(pMem);
    }


}

void PopupMenuBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SubMenuDelayFieldMask & whichField))
    {
        _sfSubMenuDelay.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InvokerFieldMask & whichField))
    {
        _sfInvoker.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PopupMenuBase::executeSyncImpl(      PopupMenuBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SubMenuDelayFieldMask & whichField))
        _sfSubMenuDelay.syncWith(pOther->_sfSubMenuDelay);

    if(FieldBits::NoField != (InvokerFieldMask & whichField))
        _sfInvoker.syncWith(pOther->_sfInvoker);


}
#else
void PopupMenuBase::executeSyncImpl(      PopupMenuBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SubMenuDelayFieldMask & whichField))
        _sfSubMenuDelay.syncWith(pOther->_sfSubMenuDelay);

    if(FieldBits::NoField != (InvokerFieldMask & whichField))
        _sfInvoker.syncWith(pOther->_sfInvoker);



}

void PopupMenuBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PopupMenuPtr>::_type("PopupMenuPtr", "ContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PopupMenuPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PopupMenuPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGPOPUPMENUBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPOPUPMENUBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPOPUPMENUFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

