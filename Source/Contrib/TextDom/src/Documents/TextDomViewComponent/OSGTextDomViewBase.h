/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)*
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
 **     class TextDomView
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTDOMVIEWBASE_H_
#define _OSGTEXTDOMVIEWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribTextDomDef.h"

//#include "OSGBaseTypes.h"

#include "OSGFieldContainer.h" // Parent

#include "OSGElementFields.h"    // Element type
#include "OSGVecFields.h"        // StartingPosition type
#include "OSGUIFontFields.h"     // Font type
#include "OSGBaseFields.h"       // SelectionBoxColor type

#include "OSGTextDomViewFields.h"

OSG_BEGIN_NAMESPACE

class TextDomView;

//! \brief TextDomView Base Class.

class OSG_CONTRIBTEXTDOM_DLLMAPPING TextDomViewBase : public FieldContainer
{
  public:

    typedef FieldContainer Inherited;
    typedef FieldContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TextDomView);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ElementFieldId = Inherited::NextFieldId,
        StartingPositionFieldId = ElementFieldId + 1,
        FontFieldId = StartingPositionFieldId + 1,
        SelectionBoxColorFieldId = FontFieldId + 1,
        SelectionTextColorFieldId = SelectionBoxColorFieldId + 1,
        ActiveTextColorFieldId = SelectionTextColorFieldId + 1,
        FocusedTextColorFieldId = ActiveTextColorFieldId + 1,
        RolloverTextColorFieldId = FocusedTextColorFieldId + 1,
        DisabledTextColorFieldId = RolloverTextColorFieldId + 1,
        TextColorFieldId = DisabledTextColorFieldId + 1,
        NextFieldId = TextColorFieldId + 1
    };

    static const OSG::BitVector ElementFieldMask =
        (TypeTraits<BitVector>::One << ElementFieldId);
    static const OSG::BitVector StartingPositionFieldMask =
        (TypeTraits<BitVector>::One << StartingPositionFieldId);
    static const OSG::BitVector FontFieldMask =
        (TypeTraits<BitVector>::One << FontFieldId);
    static const OSG::BitVector SelectionBoxColorFieldMask =
        (TypeTraits<BitVector>::One << SelectionBoxColorFieldId);
    static const OSG::BitVector SelectionTextColorFieldMask =
        (TypeTraits<BitVector>::One << SelectionTextColorFieldId);
    static const OSG::BitVector ActiveTextColorFieldMask =
        (TypeTraits<BitVector>::One << ActiveTextColorFieldId);
    static const OSG::BitVector FocusedTextColorFieldMask =
        (TypeTraits<BitVector>::One << FocusedTextColorFieldId);
    static const OSG::BitVector RolloverTextColorFieldMask =
        (TypeTraits<BitVector>::One << RolloverTextColorFieldId);
    static const OSG::BitVector DisabledTextColorFieldMask =
        (TypeTraits<BitVector>::One << DisabledTextColorFieldId);
    static const OSG::BitVector TextColorFieldMask =
        (TypeTraits<BitVector>::One << TextColorFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecElementPtr SFElementType;
    typedef SFVec2f           SFStartingPositionType;
    typedef SFUnrecUIFontPtr  SFFontType;
    typedef SFColor4f         SFSelectionBoxColorType;
    typedef SFColor4f         SFSelectionTextColorType;
    typedef SFColor4f         SFActiveTextColorType;
    typedef SFColor4f         SFFocusedTextColorType;
    typedef SFColor4f         SFRolloverTextColorType;
    typedef SFColor4f         SFDisabledTextColorType;
    typedef SFColor4f         SFTextColorType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecElementPtr _sfElement;
    SFVec2f           _sfStartingPosition;
    SFUnrecUIFontPtr  _sfFont;
    SFColor4f         _sfSelectionBoxColor;
    SFColor4f         _sfSelectionTextColor;
    SFColor4f         _sfActiveTextColor;
    SFColor4f         _sfFocusedTextColor;
    SFColor4f         _sfRolloverTextColor;
    SFColor4f         _sfDisabledTextColor;
    SFColor4f         _sfTextColor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextDomViewBase(void);
    TextDomViewBase(const TextDomViewBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextDomViewBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextDomView *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleElement         (void) const;
    EditFieldHandlePtr editHandleElement        (void);
    GetFieldHandlePtr  getHandleStartingPosition (void) const;
    EditFieldHandlePtr editHandleStartingPosition(void);
    GetFieldHandlePtr  getHandleFont            (void) const;
    EditFieldHandlePtr editHandleFont           (void);
    GetFieldHandlePtr  getHandleSelectionBoxColor (void) const;
    EditFieldHandlePtr editHandleSelectionBoxColor(void);
    GetFieldHandlePtr  getHandleSelectionTextColor (void) const;
    EditFieldHandlePtr editHandleSelectionTextColor(void);
    GetFieldHandlePtr  getHandleActiveTextColor (void) const;
    EditFieldHandlePtr editHandleActiveTextColor(void);
    GetFieldHandlePtr  getHandleFocusedTextColor (void) const;
    EditFieldHandlePtr editHandleFocusedTextColor(void);
    GetFieldHandlePtr  getHandleRolloverTextColor (void) const;
    EditFieldHandlePtr editHandleRolloverTextColor(void);
    GetFieldHandlePtr  getHandleDisabledTextColor (void) const;
    EditFieldHandlePtr editHandleDisabledTextColor(void);
    GetFieldHandlePtr  getHandleTextColor       (void) const;
    EditFieldHandlePtr editHandleTextColor      (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecElementPtr   *getSFElement         (void) const;
                  SFUnrecElementPtr   *editSFElement        (void);

                  SFVec2f             *editSFStartingPosition(void);
            const SFVec2f             *getSFStartingPosition (void) const;
            const SFUnrecUIFontPtr    *getSFFont            (void) const;
                  SFUnrecUIFontPtr    *editSFFont           (void);

                  SFColor4f           *editSFSelectionBoxColor(void);
            const SFColor4f           *getSFSelectionBoxColor (void) const;

                  SFColor4f           *editSFSelectionTextColor(void);
            const SFColor4f           *getSFSelectionTextColor (void) const;

                  SFColor4f           *editSFActiveTextColor(void);
            const SFColor4f           *getSFActiveTextColor (void) const;

                  SFColor4f           *editSFFocusedTextColor(void);
            const SFColor4f           *getSFFocusedTextColor (void) const;

                  SFColor4f           *editSFRolloverTextColor(void);
            const SFColor4f           *getSFRolloverTextColor (void) const;

                  SFColor4f           *editSFDisabledTextColor(void);
            const SFColor4f           *getSFDisabledTextColor (void) const;

                  SFColor4f           *editSFTextColor      (void);
            const SFColor4f           *getSFTextColor       (void) const;


                  Element * getElement        (void) const;

                  Vec2f               &editStartingPosition(void);
            const Vec2f               &getStartingPosition (void) const;

                  UIFont * getFont           (void) const;

                  Color4f             &editSelectionBoxColor(void);
            const Color4f             &getSelectionBoxColor (void) const;

                  Color4f             &editSelectionTextColor(void);
            const Color4f             &getSelectionTextColor (void) const;

                  Color4f             &editActiveTextColor(void);
            const Color4f             &getActiveTextColor (void) const;

                  Color4f             &editFocusedTextColor(void);
            const Color4f             &getFocusedTextColor (void) const;

                  Color4f             &editRolloverTextColor(void);
            const Color4f             &getRolloverTextColor (void) const;

                  Color4f             &editDisabledTextColor(void);
            const Color4f             &getDisabledTextColor (void) const;

                  Color4f             &editTextColor      (void);
            const Color4f             &getTextColor       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setElement        (Element * const value);
            void setStartingPosition(const Vec2f &value);
            void setFont           (UIFont * const value);
            void setSelectionBoxColor(const Color4f &value);
            void setSelectionTextColor(const Color4f &value);
            void setActiveTextColor(const Color4f &value);
            void setFocusedTextColor(const Color4f &value);
            void setRolloverTextColor(const Color4f &value);
            void setDisabledTextColor(const Color4f &value);
            void setTextColor      (const Color4f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      TextDomViewBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextDomViewBase &source);
};

typedef TextDomViewBase *TextDomViewBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTEXTDOMVIEWBASE_H_ */
