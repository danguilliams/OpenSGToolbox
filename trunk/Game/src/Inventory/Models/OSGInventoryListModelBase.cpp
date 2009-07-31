/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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
 **     class InventoryListModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEINVENTORYLISTMODELINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGInventoryListModelBase.h"
#include "OSGInventoryListModel.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  InventoryListModelBase::ComparitorFieldMask = 
    (TypeTraits<BitVector>::One << InventoryListModelBase::ComparitorFieldId);

const OSG::BitVector  InventoryListModelBase::CurrentInventoryFieldMask = 
    (TypeTraits<BitVector>::One << InventoryListModelBase::CurrentInventoryFieldId);

const OSG::BitVector InventoryListModelBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var InventoryListComparitorPtr InventoryListModelBase::_sfComparitor
    
*/
/*! \var InventoryPtr    InventoryListModelBase::_sfCurrentInventory
    
*/

//! InventoryListModel description

FieldDescription *InventoryListModelBase::_desc[] = 
{
    new FieldDescription(SFInventoryListComparitorPtr::getClassType(), 
                     "Comparitor", 
                     ComparitorFieldId, ComparitorFieldMask,
                     false,
                     (FieldAccessMethod) &InventoryListModelBase::getSFComparitor),
    new FieldDescription(SFInventoryPtr::getClassType(), 
                     "CurrentInventory", 
                     CurrentInventoryFieldId, CurrentInventoryFieldMask,
                     false,
                     (FieldAccessMethod) &InventoryListModelBase::getSFCurrentInventory)
};


FieldContainerType InventoryListModelBase::_type(
    "InventoryListModel",
    "AbstractListModel",
    NULL,
    (PrototypeCreateF) &InventoryListModelBase::createEmpty,
    InventoryListModel::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(InventoryListModelBase, InventoryListModelPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &InventoryListModelBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &InventoryListModelBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr InventoryListModelBase::shallowCopy(void) const 
{ 
    InventoryListModelPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const InventoryListModel *>(this)); 

    return returnValue; 
}

UInt32 InventoryListModelBase::getContainerSize(void) const 
{ 
    return sizeof(InventoryListModel); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void InventoryListModelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((InventoryListModelBase *) &other, whichField);
}
#else
void InventoryListModelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((InventoryListModelBase *) &other, whichField, sInfo);
}
void InventoryListModelBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void InventoryListModelBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

InventoryListModelBase::InventoryListModelBase(void) :
    _sfComparitor             (), 
    _sfCurrentInventory       (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

InventoryListModelBase::InventoryListModelBase(const InventoryListModelBase &source) :
    _sfComparitor             (source._sfComparitor             ), 
    _sfCurrentInventory       (source._sfCurrentInventory       ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

InventoryListModelBase::~InventoryListModelBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 InventoryListModelBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ComparitorFieldMask & whichField))
    {
        returnValue += _sfComparitor.getBinSize();
    }

    if(FieldBits::NoField != (CurrentInventoryFieldMask & whichField))
    {
        returnValue += _sfCurrentInventory.getBinSize();
    }


    return returnValue;
}

void InventoryListModelBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ComparitorFieldMask & whichField))
    {
        _sfComparitor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CurrentInventoryFieldMask & whichField))
    {
        _sfCurrentInventory.copyToBin(pMem);
    }


}

void InventoryListModelBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ComparitorFieldMask & whichField))
    {
        _sfComparitor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CurrentInventoryFieldMask & whichField))
    {
        _sfCurrentInventory.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void InventoryListModelBase::executeSyncImpl(      InventoryListModelBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ComparitorFieldMask & whichField))
        _sfComparitor.syncWith(pOther->_sfComparitor);

    if(FieldBits::NoField != (CurrentInventoryFieldMask & whichField))
        _sfCurrentInventory.syncWith(pOther->_sfCurrentInventory);


}
#else
void InventoryListModelBase::executeSyncImpl(      InventoryListModelBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ComparitorFieldMask & whichField))
        _sfComparitor.syncWith(pOther->_sfComparitor);

    if(FieldBits::NoField != (CurrentInventoryFieldMask & whichField))
        _sfCurrentInventory.syncWith(pOther->_sfCurrentInventory);



}

void InventoryListModelBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<InventoryListModelPtr>::_type("InventoryListModelPtr", "AbstractListModelPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(InventoryListModelPtr, OSG_GAMELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(InventoryListModelPtr, OSG_GAMELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGINVENTORYLISTMODELBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGINVENTORYLISTMODELBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGINVENTORYLISTMODELFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
