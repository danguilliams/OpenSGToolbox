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
 **     class Tree!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETREEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGTreeBase.h"
#include "OSGTree.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TreeBase::EditableFieldMask = 
    (TypeTraits<BitVector>::One << TreeBase::EditableFieldId);

const OSG::BitVector  TreeBase::InvokesStopCellEditingFieldMask = 
    (TypeTraits<BitVector>::One << TreeBase::InvokesStopCellEditingFieldId);

const OSG::BitVector  TreeBase::RootVisibleFieldMask = 
    (TypeTraits<BitVector>::One << TreeBase::RootVisibleFieldId);

const OSG::BitVector  TreeBase::RowHeightFieldMask = 
    (TypeTraits<BitVector>::One << TreeBase::RowHeightFieldId);

const OSG::BitVector  TreeBase::ScrollsOnExpandFieldMask = 
    (TypeTraits<BitVector>::One << TreeBase::ScrollsOnExpandFieldId);

const OSG::BitVector  TreeBase::ShowsRootHandlesFieldMask = 
    (TypeTraits<BitVector>::One << TreeBase::ShowsRootHandlesFieldId);

const OSG::BitVector  TreeBase::ToggleClickCountFieldMask = 
    (TypeTraits<BitVector>::One << TreeBase::ToggleClickCountFieldId);

const OSG::BitVector  TreeBase::VisibleRowCountFieldMask = 
    (TypeTraits<BitVector>::One << TreeBase::VisibleRowCountFieldId);

const OSG::BitVector  TreeBase::CellEditorFieldMask = 
    (TypeTraits<BitVector>::One << TreeBase::CellEditorFieldId);

const OSG::BitVector TreeBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            TreeBase::_sfEditable
    Is the tree editable
*/
/*! \var bool            TreeBase::_sfInvokesStopCellEditing
    If true, when editing is to be stopped by way of selection changing, data in tree changing or other means stopCellEditing  is invoked, and changes are saved.
*/
/*! \var bool            TreeBase::_sfRootVisible
    True if the root node is displayed, false if its children are the highest visible nodes
*/
/*! \var UInt32          TreeBase::_sfRowHeight
    Height to use for each display row.
*/
/*! \var bool            TreeBase::_sfScrollsOnExpand
    If true, when a node is expanded, as many of the descendants are scrolled to be visible.
*/
/*! \var bool            TreeBase::_sfShowsRootHandles
    True if handles are displayed at the topmost level of the tree.
*/
/*! \var UInt32          TreeBase::_sfToggleClickCount
    Number of mouse clicks before a node is expanded.
*/
/*! \var UInt32          TreeBase::_sfVisibleRowCount
    Number of rows to make visible at one time.
*/
/*! \var TreeCellEditorPtr TreeBase::_sfCellEditor
    
*/

//! Tree description

FieldDescription *TreeBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "Editable", 
                     EditableFieldId, EditableFieldMask,
                     false,
                     (FieldAccessMethod) &TreeBase::getSFEditable),
    new FieldDescription(SFBool::getClassType(), 
                     "InvokesStopCellEditing", 
                     InvokesStopCellEditingFieldId, InvokesStopCellEditingFieldMask,
                     false,
                     (FieldAccessMethod) &TreeBase::getSFInvokesStopCellEditing),
    new FieldDescription(SFBool::getClassType(), 
                     "RootVisible", 
                     RootVisibleFieldId, RootVisibleFieldMask,
                     false,
                     (FieldAccessMethod) &TreeBase::getSFRootVisible),
    new FieldDescription(SFUInt32::getClassType(), 
                     "RowHeight", 
                     RowHeightFieldId, RowHeightFieldMask,
                     false,
                     (FieldAccessMethod) &TreeBase::getSFRowHeight),
    new FieldDescription(SFBool::getClassType(), 
                     "ScrollsOnExpand", 
                     ScrollsOnExpandFieldId, ScrollsOnExpandFieldMask,
                     false,
                     (FieldAccessMethod) &TreeBase::getSFScrollsOnExpand),
    new FieldDescription(SFBool::getClassType(), 
                     "ShowsRootHandles", 
                     ShowsRootHandlesFieldId, ShowsRootHandlesFieldMask,
                     false,
                     (FieldAccessMethod) &TreeBase::getSFShowsRootHandles),
    new FieldDescription(SFUInt32::getClassType(), 
                     "ToggleClickCount", 
                     ToggleClickCountFieldId, ToggleClickCountFieldMask,
                     false,
                     (FieldAccessMethod) &TreeBase::getSFToggleClickCount),
    new FieldDescription(SFUInt32::getClassType(), 
                     "VisibleRowCount", 
                     VisibleRowCountFieldId, VisibleRowCountFieldMask,
                     false,
                     (FieldAccessMethod) &TreeBase::getSFVisibleRowCount),
    new FieldDescription(SFTreeCellEditorPtr::getClassType(), 
                     "CellEditor", 
                     CellEditorFieldId, CellEditorFieldMask,
                     false,
                     (FieldAccessMethod) &TreeBase::getSFCellEditor)
};


FieldContainerType TreeBase::_type(
    "Tree",
    "Container",
    NULL,
    (PrototypeCreateF) &TreeBase::createEmpty,
    Tree::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TreeBase, TreePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TreeBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TreeBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TreeBase::shallowCopy(void) const 
{ 
    TreePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Tree *>(this)); 

    return returnValue; 
}

UInt32 TreeBase::getContainerSize(void) const 
{ 
    return sizeof(Tree); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TreeBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((TreeBase *) &other, whichField);
}
#else
void TreeBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TreeBase *) &other, whichField, sInfo);
}
void TreeBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TreeBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TreeBase::TreeBase(void) :
    _sfEditable               (bool(false)), 
    _sfInvokesStopCellEditing (bool(false)), 
    _sfRootVisible            (bool(false)), 
    _sfRowHeight              (UInt32(false)), 
    _sfScrollsOnExpand        (bool(true)), 
    _sfShowsRootHandles       (bool(true)), 
    _sfToggleClickCount       (UInt32(2)), 
    _sfVisibleRowCount        (UInt32(10)), 
    _sfCellEditor             (TreeCellEditorPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TreeBase::TreeBase(const TreeBase &source) :
    _sfEditable               (source._sfEditable               ), 
    _sfInvokesStopCellEditing (source._sfInvokesStopCellEditing ), 
    _sfRootVisible            (source._sfRootVisible            ), 
    _sfRowHeight              (source._sfRowHeight              ), 
    _sfScrollsOnExpand        (source._sfScrollsOnExpand        ), 
    _sfShowsRootHandles       (source._sfShowsRootHandles       ), 
    _sfToggleClickCount       (source._sfToggleClickCount       ), 
    _sfVisibleRowCount        (source._sfVisibleRowCount        ), 
    _sfCellEditor             (source._sfCellEditor             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TreeBase::~TreeBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TreeBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EditableFieldMask & whichField))
    {
        returnValue += _sfEditable.getBinSize();
    }

    if(FieldBits::NoField != (InvokesStopCellEditingFieldMask & whichField))
    {
        returnValue += _sfInvokesStopCellEditing.getBinSize();
    }

    if(FieldBits::NoField != (RootVisibleFieldMask & whichField))
    {
        returnValue += _sfRootVisible.getBinSize();
    }

    if(FieldBits::NoField != (RowHeightFieldMask & whichField))
    {
        returnValue += _sfRowHeight.getBinSize();
    }

    if(FieldBits::NoField != (ScrollsOnExpandFieldMask & whichField))
    {
        returnValue += _sfScrollsOnExpand.getBinSize();
    }

    if(FieldBits::NoField != (ShowsRootHandlesFieldMask & whichField))
    {
        returnValue += _sfShowsRootHandles.getBinSize();
    }

    if(FieldBits::NoField != (ToggleClickCountFieldMask & whichField))
    {
        returnValue += _sfToggleClickCount.getBinSize();
    }

    if(FieldBits::NoField != (VisibleRowCountFieldMask & whichField))
    {
        returnValue += _sfVisibleRowCount.getBinSize();
    }

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
    {
        returnValue += _sfCellEditor.getBinSize();
    }


    return returnValue;
}

void TreeBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EditableFieldMask & whichField))
    {
        _sfEditable.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InvokesStopCellEditingFieldMask & whichField))
    {
        _sfInvokesStopCellEditing.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RootVisibleFieldMask & whichField))
    {
        _sfRootVisible.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RowHeightFieldMask & whichField))
    {
        _sfRowHeight.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ScrollsOnExpandFieldMask & whichField))
    {
        _sfScrollsOnExpand.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ShowsRootHandlesFieldMask & whichField))
    {
        _sfShowsRootHandles.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ToggleClickCountFieldMask & whichField))
    {
        _sfToggleClickCount.copyToBin(pMem);
    }

    if(FieldBits::NoField != (VisibleRowCountFieldMask & whichField))
    {
        _sfVisibleRowCount.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
    {
        _sfCellEditor.copyToBin(pMem);
    }


}

void TreeBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EditableFieldMask & whichField))
    {
        _sfEditable.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InvokesStopCellEditingFieldMask & whichField))
    {
        _sfInvokesStopCellEditing.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RootVisibleFieldMask & whichField))
    {
        _sfRootVisible.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RowHeightFieldMask & whichField))
    {
        _sfRowHeight.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ScrollsOnExpandFieldMask & whichField))
    {
        _sfScrollsOnExpand.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ShowsRootHandlesFieldMask & whichField))
    {
        _sfShowsRootHandles.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ToggleClickCountFieldMask & whichField))
    {
        _sfToggleClickCount.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (VisibleRowCountFieldMask & whichField))
    {
        _sfVisibleRowCount.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
    {
        _sfCellEditor.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TreeBase::executeSyncImpl(      TreeBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (EditableFieldMask & whichField))
        _sfEditable.syncWith(pOther->_sfEditable);

    if(FieldBits::NoField != (InvokesStopCellEditingFieldMask & whichField))
        _sfInvokesStopCellEditing.syncWith(pOther->_sfInvokesStopCellEditing);

    if(FieldBits::NoField != (RootVisibleFieldMask & whichField))
        _sfRootVisible.syncWith(pOther->_sfRootVisible);

    if(FieldBits::NoField != (RowHeightFieldMask & whichField))
        _sfRowHeight.syncWith(pOther->_sfRowHeight);

    if(FieldBits::NoField != (ScrollsOnExpandFieldMask & whichField))
        _sfScrollsOnExpand.syncWith(pOther->_sfScrollsOnExpand);

    if(FieldBits::NoField != (ShowsRootHandlesFieldMask & whichField))
        _sfShowsRootHandles.syncWith(pOther->_sfShowsRootHandles);

    if(FieldBits::NoField != (ToggleClickCountFieldMask & whichField))
        _sfToggleClickCount.syncWith(pOther->_sfToggleClickCount);

    if(FieldBits::NoField != (VisibleRowCountFieldMask & whichField))
        _sfVisibleRowCount.syncWith(pOther->_sfVisibleRowCount);

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
        _sfCellEditor.syncWith(pOther->_sfCellEditor);


}
#else
void TreeBase::executeSyncImpl(      TreeBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (EditableFieldMask & whichField))
        _sfEditable.syncWith(pOther->_sfEditable);

    if(FieldBits::NoField != (InvokesStopCellEditingFieldMask & whichField))
        _sfInvokesStopCellEditing.syncWith(pOther->_sfInvokesStopCellEditing);

    if(FieldBits::NoField != (RootVisibleFieldMask & whichField))
        _sfRootVisible.syncWith(pOther->_sfRootVisible);

    if(FieldBits::NoField != (RowHeightFieldMask & whichField))
        _sfRowHeight.syncWith(pOther->_sfRowHeight);

    if(FieldBits::NoField != (ScrollsOnExpandFieldMask & whichField))
        _sfScrollsOnExpand.syncWith(pOther->_sfScrollsOnExpand);

    if(FieldBits::NoField != (ShowsRootHandlesFieldMask & whichField))
        _sfShowsRootHandles.syncWith(pOther->_sfShowsRootHandles);

    if(FieldBits::NoField != (ToggleClickCountFieldMask & whichField))
        _sfToggleClickCount.syncWith(pOther->_sfToggleClickCount);

    if(FieldBits::NoField != (VisibleRowCountFieldMask & whichField))
        _sfVisibleRowCount.syncWith(pOther->_sfVisibleRowCount);

    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
        _sfCellEditor.syncWith(pOther->_sfCellEditor);



}

void TreeBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<TreePtr>::_type("TreePtr", "ContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TreePtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TreePtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGTREEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTREEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTREEFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

