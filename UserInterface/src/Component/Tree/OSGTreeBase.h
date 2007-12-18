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
 **     class Tree
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTREEBASE_H_
#define _OSGTREEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Component/Container/OSGContainer.h" // Parent

#include <OpenSG/OSGBoolFields.h> // Editable type
#include <OpenSG/OSGBoolFields.h> // InvokesStopCellEditing type
#include <OpenSG/OSGBoolFields.h> // RootVisible type
#include <OpenSG/OSGUInt32Fields.h> // RowHeight type
#include <OpenSG/OSGBoolFields.h> // ScrollsOnExpand type
#include <OpenSG/OSGBoolFields.h> // ShowsRootHandles type
#include <OpenSG/OSGUInt32Fields.h> // ToggleClickCount type
#include <OpenSG/OSGUInt32Fields.h> // VisibleRowCount type
#include "Component/Tree/Editors/OSGTreeCellEditorFields.h" // CellEditor type

#include "OSGTreeFields.h"

OSG_BEGIN_NAMESPACE

class Tree;
class BinaryDataHandler;

//! \brief Tree Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING TreeBase : public Container
{
  private:

    typedef Container    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TreePtr  Ptr;

    enum
    {
        EditableFieldId               = Inherited::NextFieldId,
        InvokesStopCellEditingFieldId = EditableFieldId               + 1,
        RootVisibleFieldId            = InvokesStopCellEditingFieldId + 1,
        RowHeightFieldId              = RootVisibleFieldId            + 1,
        ScrollsOnExpandFieldId        = RowHeightFieldId              + 1,
        ShowsRootHandlesFieldId       = ScrollsOnExpandFieldId        + 1,
        ToggleClickCountFieldId       = ShowsRootHandlesFieldId       + 1,
        VisibleRowCountFieldId        = ToggleClickCountFieldId       + 1,
        CellEditorFieldId             = VisibleRowCountFieldId        + 1,
        NextFieldId                   = CellEditorFieldId             + 1
    };

    static const OSG::BitVector EditableFieldMask;
    static const OSG::BitVector InvokesStopCellEditingFieldMask;
    static const OSG::BitVector RootVisibleFieldMask;
    static const OSG::BitVector RowHeightFieldMask;
    static const OSG::BitVector ScrollsOnExpandFieldMask;
    static const OSG::BitVector ShowsRootHandlesFieldMask;
    static const OSG::BitVector ToggleClickCountFieldMask;
    static const OSG::BitVector VisibleRowCountFieldMask;
    static const OSG::BitVector CellEditorFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFBool              *getSFEditable       (void);
           SFBool              *getSFInvokesStopCellEditing(void);
           SFBool              *getSFRootVisible    (void);
           SFUInt32            *getSFRowHeight      (void);
           SFBool              *getSFScrollsOnExpand(void);
           SFBool              *getSFShowsRootHandles(void);
           SFUInt32            *getSFToggleClickCount(void);
           SFUInt32            *getSFVisibleRowCount(void);
           SFTreeCellEditorPtr *getSFCellEditor     (void);

           bool                &getEditable       (void);
     const bool                &getEditable       (void) const;
           bool                &getInvokesStopCellEditing(void);
     const bool                &getInvokesStopCellEditing(void) const;
           bool                &getRootVisible    (void);
     const bool                &getRootVisible    (void) const;
           UInt32              &getRowHeight      (void);
     const UInt32              &getRowHeight      (void) const;
           bool                &getScrollsOnExpand(void);
     const bool                &getScrollsOnExpand(void) const;
           bool                &getShowsRootHandles(void);
     const bool                &getShowsRootHandles(void) const;
           UInt32              &getToggleClickCount(void);
     const UInt32              &getToggleClickCount(void) const;
           UInt32              &getVisibleRowCount(void);
     const UInt32              &getVisibleRowCount(void) const;
           TreeCellEditorPtr   &getCellEditor     (void);
     const TreeCellEditorPtr   &getCellEditor     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setEditable       ( const bool &value );
     void setInvokesStopCellEditing( const bool &value );
     void setRootVisible    ( const bool &value );
     void setRowHeight      ( const UInt32 &value );
     void setScrollsOnExpand( const bool &value );
     void setShowsRootHandles( const bool &value );
     void setToggleClickCount( const UInt32 &value );
     void setVisibleRowCount( const UInt32 &value );
     void setCellEditor     ( const TreeCellEditorPtr &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TreePtr      create          (void); 
    static  TreePtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFBool              _sfEditable;
    SFBool              _sfInvokesStopCellEditing;
    SFBool              _sfRootVisible;
    SFUInt32            _sfRowHeight;
    SFBool              _sfScrollsOnExpand;
    SFBool              _sfShowsRootHandles;
    SFUInt32            _sfToggleClickCount;
    SFUInt32            _sfVisibleRowCount;
    SFTreeCellEditorPtr   _sfCellEditor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TreeBase(void);
    TreeBase(const TreeBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TreeBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TreeBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TreeBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TreeBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TreeBase *TreeBaseP;

typedef osgIF<TreeBase::isNodeCore,
              CoredNodePtr<Tree>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TreeNodePtr;

typedef RefPtr<TreePtr> TreeRefPtr;

OSG_END_NAMESPACE

#define OSGTREEBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGTREEBASE_H_ */
