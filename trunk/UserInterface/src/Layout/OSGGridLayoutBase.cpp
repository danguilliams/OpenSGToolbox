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
 **     class GridLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGRIDLAYOUTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGridLayoutBase.h"
#include "OSGGridLayout.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  GridLayoutBase::RowsFieldMask = 
    (TypeTraits<BitVector>::One << GridLayoutBase::RowsFieldId);

const OSG::BitVector  GridLayoutBase::ColumnsFieldMask = 
    (TypeTraits<BitVector>::One << GridLayoutBase::ColumnsFieldId);

const OSG::BitVector  GridLayoutBase::HorizontalGapFieldMask = 
    (TypeTraits<BitVector>::One << GridLayoutBase::HorizontalGapFieldId);

const OSG::BitVector  GridLayoutBase::VerticalGapFieldMask = 
    (TypeTraits<BitVector>::One << GridLayoutBase::VerticalGapFieldId);

const OSG::BitVector GridLayoutBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt32          GridLayoutBase::_sfRows
    
*/
/*! \var UInt32          GridLayoutBase::_sfColumns
    
*/
/*! \var Real32          GridLayoutBase::_sfHorizontalGap
    
*/
/*! \var Real32          GridLayoutBase::_sfVerticalGap
    
*/

//! GridLayout description

FieldDescription *GridLayoutBase::_desc[] = 
{
    new FieldDescription(SFUInt32::getClassType(), 
                     "Rows", 
                     RowsFieldId, RowsFieldMask,
                     false,
                     (FieldAccessMethod) &GridLayoutBase::getSFRows),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Columns", 
                     ColumnsFieldId, ColumnsFieldMask,
                     false,
                     (FieldAccessMethod) &GridLayoutBase::getSFColumns),
    new FieldDescription(SFReal32::getClassType(), 
                     "HorizontalGap", 
                     HorizontalGapFieldId, HorizontalGapFieldMask,
                     false,
                     (FieldAccessMethod) &GridLayoutBase::getSFHorizontalGap),
    new FieldDescription(SFReal32::getClassType(), 
                     "VerticalGap", 
                     VerticalGapFieldId, VerticalGapFieldMask,
                     false,
                     (FieldAccessMethod) &GridLayoutBase::getSFVerticalGap)
};


FieldContainerType GridLayoutBase::_type(
    "GridLayout",
    "Layout",
    NULL,
    (PrototypeCreateF) &GridLayoutBase::createEmpty,
    GridLayout::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(GridLayoutBase, GridLayoutPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GridLayoutBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GridLayoutBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GridLayoutBase::shallowCopy(void) const 
{ 
    GridLayoutPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GridLayout *>(this)); 

    return returnValue; 
}

UInt32 GridLayoutBase::getContainerSize(void) const 
{ 
    return sizeof(GridLayout); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GridLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((GridLayoutBase *) &other, whichField);
}
#else
void GridLayoutBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GridLayoutBase *) &other, whichField, sInfo);
}
void GridLayoutBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GridLayoutBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GridLayoutBase::GridLayoutBase(void) :
    _sfRows                   (UInt32(2)), 
    _sfColumns                (UInt32(2)), 
    _sfHorizontalGap          (Real32(10)), 
    _sfVerticalGap            (Real32(10)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GridLayoutBase::GridLayoutBase(const GridLayoutBase &source) :
    _sfRows                   (source._sfRows                   ), 
    _sfColumns                (source._sfColumns                ), 
    _sfHorizontalGap          (source._sfHorizontalGap          ), 
    _sfVerticalGap            (source._sfVerticalGap            ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GridLayoutBase::~GridLayoutBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GridLayoutBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
    {
        returnValue += _sfRows.getBinSize();
    }

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
    {
        returnValue += _sfColumns.getBinSize();
    }

    if(FieldBits::NoField != (HorizontalGapFieldMask & whichField))
    {
        returnValue += _sfHorizontalGap.getBinSize();
    }

    if(FieldBits::NoField != (VerticalGapFieldMask & whichField))
    {
        returnValue += _sfVerticalGap.getBinSize();
    }


    return returnValue;
}

void GridLayoutBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
    {
        _sfRows.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
    {
        _sfColumns.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HorizontalGapFieldMask & whichField))
    {
        _sfHorizontalGap.copyToBin(pMem);
    }

    if(FieldBits::NoField != (VerticalGapFieldMask & whichField))
    {
        _sfVerticalGap.copyToBin(pMem);
    }


}

void GridLayoutBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
    {
        _sfRows.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
    {
        _sfColumns.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HorizontalGapFieldMask & whichField))
    {
        _sfHorizontalGap.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (VerticalGapFieldMask & whichField))
    {
        _sfVerticalGap.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GridLayoutBase::executeSyncImpl(      GridLayoutBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
        _sfRows.syncWith(pOther->_sfRows);

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
        _sfColumns.syncWith(pOther->_sfColumns);

    if(FieldBits::NoField != (HorizontalGapFieldMask & whichField))
        _sfHorizontalGap.syncWith(pOther->_sfHorizontalGap);

    if(FieldBits::NoField != (VerticalGapFieldMask & whichField))
        _sfVerticalGap.syncWith(pOther->_sfVerticalGap);


}
#else
void GridLayoutBase::executeSyncImpl(      GridLayoutBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
        _sfRows.syncWith(pOther->_sfRows);

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
        _sfColumns.syncWith(pOther->_sfColumns);

    if(FieldBits::NoField != (HorizontalGapFieldMask & whichField))
        _sfHorizontalGap.syncWith(pOther->_sfHorizontalGap);

    if(FieldBits::NoField != (VerticalGapFieldMask & whichField))
        _sfVerticalGap.syncWith(pOther->_sfVerticalGap);



}

void GridLayoutBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<GridLayoutPtr>::_type("GridLayoutPtr", "LayoutPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GridLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(GridLayoutPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGGRIDLAYOUTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGRIDLAYOUTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGRIDLAYOUTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
