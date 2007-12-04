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
 **     class Slider
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSLIDERBASE_H_
#define _OSGSLIDERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Component/Container/OSGContainer.h" // Parent

#include "Component/Button/OSGButton.h" // KnobButton type
#include "Util/OSGUIDefines.h" // Orientation type
#include <OpenSG/OSGUInt32Fields.h> // MajorTickSpacing type
#include <OpenSG/OSGVec2sFields.h> // MajorTickPositions type
#include <OpenSG/OSGUInt32Fields.h> // MinorTickSpacing type
#include <OpenSG/OSGVec2sFields.h> // MinorTickPositions type
#include <OpenSG/OSGBoolFields.h> // SnapToTicks type
#include <OpenSG/OSGBoolFields.h> // DrawMajorTicks type
#include <OpenSG/OSGBoolFields.h> // DrawTrack type
#include <OpenSG/OSGBoolFields.h> // DrawMinorTicks type
#include <OpenSG/OSGBoolFields.h> // DrawLabels type
#include <OpenSG/OSGBoolFields.h> // Inverted type
#include <OpenSG/Toolbox/OSGFieldContainerMapType.h> // LabelMap type
#include "Component/Text/OSGLabelFields.h" // LabelPrototype type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // TrackDrawObject type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // MinTrackDrawObject type
#include "Component/Misc/OSGUIDrawObjectCanvas.h" // MaxTrackDrawObject type
#include "Graphics/UIDrawObjects/OSGUIDrawObject.h" // MajorTickDrawObjects type
#include "Graphics/UIDrawObjects/OSGUIDrawObject.h" // MinorTickDrawObjects type
#include <OpenSG/OSGInt32Fields.h> // TrackInset type
#include <OpenSG/OSGInt32Fields.h> // TrackToTickOffset type
#include <OpenSG/OSGInt32Fields.h> // TrackToLabelOffset type

#include "OSGSliderFields.h"

OSG_BEGIN_NAMESPACE

class Slider;
class BinaryDataHandler;

//! \brief Slider Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING SliderBase : public Container
{
  private:

    typedef Container    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef SliderPtr  Ptr;

    enum
    {
        KnobButtonFieldId           = Inherited::NextFieldId,
        OrientationFieldId          = KnobButtonFieldId           + 1,
        MajorTickSpacingFieldId     = OrientationFieldId          + 1,
        MajorTickPositionsFieldId   = MajorTickSpacingFieldId     + 1,
        MinorTickSpacingFieldId     = MajorTickPositionsFieldId   + 1,
        MinorTickPositionsFieldId   = MinorTickSpacingFieldId     + 1,
        SnapToTicksFieldId          = MinorTickPositionsFieldId   + 1,
        DrawMajorTicksFieldId       = SnapToTicksFieldId          + 1,
        DrawTrackFieldId            = DrawMajorTicksFieldId       + 1,
        DrawMinorTicksFieldId       = DrawTrackFieldId            + 1,
        DrawLabelsFieldId           = DrawMinorTicksFieldId       + 1,
        InvertedFieldId             = DrawLabelsFieldId           + 1,
        LabelMapFieldId             = InvertedFieldId             + 1,
        LabelPrototypeFieldId       = LabelMapFieldId             + 1,
        TrackDrawObjectFieldId      = LabelPrototypeFieldId       + 1,
        MinTrackDrawObjectFieldId   = TrackDrawObjectFieldId      + 1,
        MaxTrackDrawObjectFieldId   = MinTrackDrawObjectFieldId   + 1,
        MajorTickDrawObjectsFieldId = MaxTrackDrawObjectFieldId   + 1,
        MinorTickDrawObjectsFieldId = MajorTickDrawObjectsFieldId + 1,
        TrackInsetFieldId           = MinorTickDrawObjectsFieldId + 1,
        TrackToTickOffsetFieldId    = TrackInsetFieldId           + 1,
        TrackToLabelOffsetFieldId   = TrackToTickOffsetFieldId    + 1,
        NextFieldId                 = TrackToLabelOffsetFieldId   + 1
    };

    static const OSG::BitVector KnobButtonFieldMask;
    static const OSG::BitVector OrientationFieldMask;
    static const OSG::BitVector MajorTickSpacingFieldMask;
    static const OSG::BitVector MajorTickPositionsFieldMask;
    static const OSG::BitVector MinorTickSpacingFieldMask;
    static const OSG::BitVector MinorTickPositionsFieldMask;
    static const OSG::BitVector SnapToTicksFieldMask;
    static const OSG::BitVector DrawMajorTicksFieldMask;
    static const OSG::BitVector DrawTrackFieldMask;
    static const OSG::BitVector DrawMinorTicksFieldMask;
    static const OSG::BitVector DrawLabelsFieldMask;
    static const OSG::BitVector InvertedFieldMask;
    static const OSG::BitVector LabelMapFieldMask;
    static const OSG::BitVector LabelPrototypeFieldMask;
    static const OSG::BitVector TrackDrawObjectFieldMask;
    static const OSG::BitVector MinTrackDrawObjectFieldMask;
    static const OSG::BitVector MaxTrackDrawObjectFieldMask;
    static const OSG::BitVector MajorTickDrawObjectsFieldMask;
    static const OSG::BitVector MinorTickDrawObjectsFieldMask;
    static const OSG::BitVector TrackInsetFieldMask;
    static const OSG::BitVector TrackToTickOffsetFieldMask;
    static const OSG::BitVector TrackToLabelOffsetFieldMask;


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

           SFButtonPtr         *getSFKnobButton     (void);
           SFUInt32            *getSFOrientation    (void);
           SFUInt32            *getSFMajorTickSpacing(void);
           SFUInt32            *getSFMinorTickSpacing(void);
           SFBool              *getSFSnapToTicks    (void);
           SFBool              *getSFDrawMajorTicks (void);
           SFBool              *getSFDrawTrack      (void);
           SFBool              *getSFDrawMinorTicks (void);
           SFBool              *getSFDrawLabels     (void);
           SFBool              *getSFInverted       (void);
           SFFieldContainerMap *getSFLabelMap       (void);
           SFLabelPtr          *getSFLabelPrototype (void);
           SFUIDrawObjectCanvasPtr *getSFTrackDrawObject(void);
           SFUIDrawObjectCanvasPtr *getSFMinTrackDrawObject(void);
           SFUIDrawObjectCanvasPtr *getSFMaxTrackDrawObject(void);
           MFUIDrawObjectPtr   *getMFMajorTickDrawObjects(void);
           MFUIDrawObjectPtr   *getMFMinorTickDrawObjects(void);
           SFInt32             *getSFTrackInset     (void);
           SFInt32             *getSFTrackToTickOffset(void);
           SFInt32             *getSFTrackToLabelOffset(void);

           ButtonPtr           &getKnobButton     (void);
     const ButtonPtr           &getKnobButton     (void) const;
           UInt32              &getOrientation    (void);
     const UInt32              &getOrientation    (void) const;
           UInt32              &getMajorTickSpacing(void);
     const UInt32              &getMajorTickSpacing(void) const;
           UInt32              &getMinorTickSpacing(void);
     const UInt32              &getMinorTickSpacing(void) const;
           bool                &getSnapToTicks    (void);
     const bool                &getSnapToTicks    (void) const;
           bool                &getDrawMajorTicks (void);
     const bool                &getDrawMajorTicks (void) const;
           bool                &getDrawTrack      (void);
     const bool                &getDrawTrack      (void) const;
           bool                &getDrawMinorTicks (void);
     const bool                &getDrawMinorTicks (void) const;
           bool                &getDrawLabels     (void);
     const bool                &getDrawLabels     (void) const;
           bool                &getInverted       (void);
     const bool                &getInverted       (void) const;
           FieldContainerMap   &getLabelMap       (void);
     const FieldContainerMap   &getLabelMap       (void) const;
           LabelPtr            &getLabelPrototype (void);
     const LabelPtr            &getLabelPrototype (void) const;
           UIDrawObjectCanvasPtr &getTrackDrawObject(void);
     const UIDrawObjectCanvasPtr &getTrackDrawObject(void) const;
           UIDrawObjectCanvasPtr &getMinTrackDrawObject(void);
     const UIDrawObjectCanvasPtr &getMinTrackDrawObject(void) const;
           UIDrawObjectCanvasPtr &getMaxTrackDrawObject(void);
     const UIDrawObjectCanvasPtr &getMaxTrackDrawObject(void) const;
           Int32               &getTrackInset     (void);
     const Int32               &getTrackInset     (void) const;
           Int32               &getTrackToTickOffset(void);
     const Int32               &getTrackToTickOffset(void) const;
           Int32               &getTrackToLabelOffset(void);
     const Int32               &getTrackToLabelOffset(void) const;
           UIDrawObjectPtr     &getMajorTickDrawObjects(const UInt32 index);
           MFUIDrawObjectPtr   &getMajorTickDrawObjects(void);
     const MFUIDrawObjectPtr   &getMajorTickDrawObjects(void) const;
           UIDrawObjectPtr     &getMinorTickDrawObjects(const UInt32 index);
           MFUIDrawObjectPtr   &getMinorTickDrawObjects(void);
     const MFUIDrawObjectPtr   &getMinorTickDrawObjects(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setKnobButton     ( const ButtonPtr &value );
     void setOrientation    ( const UInt32 &value );
     void setMajorTickSpacing( const UInt32 &value );
     void setMinorTickSpacing( const UInt32 &value );
     void setSnapToTicks    ( const bool &value );
     void setDrawMajorTicks ( const bool &value );
     void setDrawTrack      ( const bool &value );
     void setDrawMinorTicks ( const bool &value );
     void setDrawLabels     ( const bool &value );
     void setInverted       ( const bool &value );
     void setLabelMap       ( const FieldContainerMap &value );
     void setLabelPrototype ( const LabelPtr &value );
     void setTrackDrawObject( const UIDrawObjectCanvasPtr &value );
     void setMinTrackDrawObject( const UIDrawObjectCanvasPtr &value );
     void setMaxTrackDrawObject( const UIDrawObjectCanvasPtr &value );
     void setTrackInset     ( const Int32 &value );
     void setTrackToTickOffset( const Int32 &value );
     void setTrackToLabelOffset( const Int32 &value );

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

    static  SliderPtr      create          (void); 
    static  SliderPtr      createEmpty     (void); 

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

    SFButtonPtr         _sfKnobButton;
    SFUInt32            _sfOrientation;
    SFUInt32            _sfMajorTickSpacing;
    MFPnt2s             _mfMajorTickPositions;
    SFUInt32            _sfMinorTickSpacing;
    MFPnt2s             _mfMinorTickPositions;
    SFBool              _sfSnapToTicks;
    SFBool              _sfDrawMajorTicks;
    SFBool              _sfDrawTrack;
    SFBool              _sfDrawMinorTicks;
    SFBool              _sfDrawLabels;
    SFBool              _sfInverted;
    SFFieldContainerMap   _sfLabelMap;
    SFLabelPtr          _sfLabelPrototype;
    SFUIDrawObjectCanvasPtr   _sfTrackDrawObject;
    SFUIDrawObjectCanvasPtr   _sfMinTrackDrawObject;
    SFUIDrawObjectCanvasPtr   _sfMaxTrackDrawObject;
    MFUIDrawObjectPtr   _mfMajorTickDrawObjects;
    MFUIDrawObjectPtr   _mfMinorTickDrawObjects;
    SFInt32             _sfTrackInset;
    SFInt32             _sfTrackToTickOffset;
    SFInt32             _sfTrackToLabelOffset;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SliderBase(void);
    SliderBase(const SliderBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SliderBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFPnt2s             *getMFMajorTickPositions(void);
           MFPnt2s             *getMFMinorTickPositions(void);

           Pnt2s               &getMajorTickPositions(UInt32 index);
           MFPnt2s             &getMajorTickPositions(void);
     const MFPnt2s             &getMajorTickPositions(void) const;
           Pnt2s               &getMinorTickPositions(UInt32 index);
           MFPnt2s             &getMinorTickPositions(void);
     const MFPnt2s             &getMinorTickPositions(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      SliderBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      SliderBase *pOther,
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
    void operator =(const SliderBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef SliderBase *SliderBaseP;

typedef osgIF<SliderBase::isNodeCore,
              CoredNodePtr<Slider>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet SliderNodePtr;

typedef RefPtr<SliderPtr> SliderRefPtr;

OSG_END_NAMESPACE

#define OSGSLIDERBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGSLIDERBASE_H_ */
