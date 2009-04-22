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
 **     class BoxLayout
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBOXLAYOUTBASE_H_
#define _OSGBOXLAYOUTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGLayout.h" // Parent

#include <OpenSG/OSGUInt32Fields.h> // Orientation type
#include <OpenSG/OSGReal32Fields.h> // MajorAxisAlignment type
#include <OpenSG/OSGReal32Fields.h> // MinorAxisAlignment type
#include <OpenSG/OSGReal32Fields.h> // ComponentAlignment type
#include <OpenSG/OSGReal32Fields.h> // MajorAxisMinimumGap type
#include <OpenSG/OSGReal32Fields.h> // MajorAxisMaximumGap type

#include "OSGBoxLayoutFields.h"

OSG_BEGIN_NAMESPACE

class BoxLayout;
class BinaryDataHandler;

//! \brief BoxLayout Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING BoxLayoutBase : public Layout
{
  private:

    typedef Layout    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef BoxLayoutPtr  Ptr;

    enum
    {
        OrientationFieldId         = Inherited::NextFieldId,
        MajorAxisAlignmentFieldId  = OrientationFieldId         + 1,
        MinorAxisAlignmentFieldId  = MajorAxisAlignmentFieldId  + 1,
        ComponentAlignmentFieldId  = MinorAxisAlignmentFieldId  + 1,
        MajorAxisMinimumGapFieldId = ComponentAlignmentFieldId  + 1,
        MajorAxisMaximumGapFieldId = MajorAxisMinimumGapFieldId + 1,
        NextFieldId                = MajorAxisMaximumGapFieldId + 1
    };

    static const OSG::BitVector OrientationFieldMask;
    static const OSG::BitVector MajorAxisAlignmentFieldMask;
    static const OSG::BitVector MinorAxisAlignmentFieldMask;
    static const OSG::BitVector ComponentAlignmentFieldMask;
    static const OSG::BitVector MajorAxisMinimumGapFieldMask;
    static const OSG::BitVector MajorAxisMaximumGapFieldMask;


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

           SFUInt32            *getSFOrientation    (void);
           SFReal32            *getSFMajorAxisAlignment(void);
           SFReal32            *getSFMinorAxisAlignment(void);
           SFReal32            *getSFComponentAlignment(void);
           SFReal32            *getSFMajorAxisMinimumGap(void);
           SFReal32            *getSFMajorAxisMaximumGap(void);

           UInt32              &getOrientation    (void);
     const UInt32              &getOrientation    (void) const;
           Real32              &getMajorAxisAlignment(void);
     const Real32              &getMajorAxisAlignment(void) const;
           Real32              &getMinorAxisAlignment(void);
     const Real32              &getMinorAxisAlignment(void) const;
           Real32              &getComponentAlignment(void);
     const Real32              &getComponentAlignment(void) const;
           Real32              &getMajorAxisMinimumGap(void);
     const Real32              &getMajorAxisMinimumGap(void) const;
           Real32              &getMajorAxisMaximumGap(void);
     const Real32              &getMajorAxisMaximumGap(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setOrientation    ( const UInt32 &value );
     void setMajorAxisAlignment( const Real32 &value );
     void setMinorAxisAlignment( const Real32 &value );
     void setComponentAlignment( const Real32 &value );
     void setMajorAxisMinimumGap( const Real32 &value );
     void setMajorAxisMaximumGap( const Real32 &value );

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

    static  BoxLayoutPtr      create          (void); 
    static  BoxLayoutPtr      createEmpty     (void); 

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

    SFUInt32            _sfOrientation;
    SFReal32            _sfMajorAxisAlignment;
    SFReal32            _sfMinorAxisAlignment;
    SFReal32            _sfComponentAlignment;
    SFReal32            _sfMajorAxisMinimumGap;
    SFReal32            _sfMajorAxisMaximumGap;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BoxLayoutBase(void);
    BoxLayoutBase(const BoxLayoutBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BoxLayoutBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      BoxLayoutBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      BoxLayoutBase *pOther,
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
    void operator =(const BoxLayoutBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef BoxLayoutBase *BoxLayoutBaseP;

typedef osgIF<BoxLayoutBase::isNodeCore,
              CoredNodePtr<BoxLayout>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet BoxLayoutNodePtr;

typedef RefPtr<BoxLayoutPtr> BoxLayoutRefPtr;

OSG_END_NAMESPACE

#define OSGBOXLAYOUTBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGBOXLAYOUTBASE_H_ */