/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class TextDomArea!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextDomAreaBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TextDomAreaBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &TextDomAreaBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TextDomAreaBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 TextDomAreaBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the TextDomArea::_sfDocumentModel field.
inline
Document * TextDomAreaBase::getDocumentModel(void) const
{
    return _sfDocumentModel.getValue();
}

//! Set the value of the TextDomArea::_sfDocumentModel field.
inline
void TextDomAreaBase::setDocumentModel(Document * const value)
{
    editSField(DocumentModelFieldMask);

    _sfDocumentModel.setValue(value);
}

//! Get the value of the TextDomArea::_sfFont field.
inline
UIFont * TextDomAreaBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the TextDomArea::_sfFont field.
inline
void TextDomAreaBase::setFont(UIFont * const value)
{
    editSField(FontFieldMask);

    _sfFont.setValue(value);
}
//! Get the value of the TextDomArea::_sfCaretPosition field.

inline
UInt32 &TextDomAreaBase::editCaretPosition(void)
{
    editSField(CaretPositionFieldMask);

    return _sfCaretPosition.getValue();
}

//! Get the value of the TextDomArea::_sfCaretPosition field.
inline
      UInt32  TextDomAreaBase::getCaretPosition(void) const
{
    return _sfCaretPosition.getValue();
}

//! Set the value of the TextDomArea::_sfCaretPosition field.
inline
void TextDomAreaBase::setCaretPosition(const UInt32 value)
{
    editSField(CaretPositionFieldMask);

    _sfCaretPosition.setValue(value);
}
//! Get the value of the TextDomArea::_sfLineWrap field.

inline
bool &TextDomAreaBase::editLineWrap(void)
{
    editSField(LineWrapFieldMask);

    return _sfLineWrap.getValue();
}

//! Get the value of the TextDomArea::_sfLineWrap field.
inline
      bool  TextDomAreaBase::getLineWrap(void) const
{
    return _sfLineWrap.getValue();
}

//! Set the value of the TextDomArea::_sfLineWrap field.
inline
void TextDomAreaBase::setLineWrap(const bool value)
{
    editSField(LineWrapFieldMask);

    _sfLineWrap.setValue(value);
}
//! Get the value of the TextDomArea::_sfWrapStyleWord field.

inline
bool &TextDomAreaBase::editWrapStyleWord(void)
{
    editSField(WrapStyleWordFieldMask);

    return _sfWrapStyleWord.getValue();
}

//! Get the value of the TextDomArea::_sfWrapStyleWord field.
inline
      bool  TextDomAreaBase::getWrapStyleWord(void) const
{
    return _sfWrapStyleWord.getValue();
}

//! Set the value of the TextDomArea::_sfWrapStyleWord field.
inline
void TextDomAreaBase::setWrapStyleWord(const bool value)
{
    editSField(WrapStyleWordFieldMask);

    _sfWrapStyleWord.setValue(value);
}
//! Get the value of the TextDomArea::_sfTabSize field.

inline
UInt32 &TextDomAreaBase::editTabSize(void)
{
    editSField(TabSizeFieldMask);

    return _sfTabSize.getValue();
}

//! Get the value of the TextDomArea::_sfTabSize field.
inline
      UInt32  TextDomAreaBase::getTabSize(void) const
{
    return _sfTabSize.getValue();
}

//! Set the value of the TextDomArea::_sfTabSize field.
inline
void TextDomAreaBase::setTabSize(const UInt32 value)
{
    editSField(TabSizeFieldMask);

    _sfTabSize.setValue(value);
}
//! Get the value of the TextDomArea::_sfLineSpacing field.

inline
Int32 &TextDomAreaBase::editLineSpacing(void)
{
    editSField(LineSpacingFieldMask);

    return _sfLineSpacing.getValue();
}

//! Get the value of the TextDomArea::_sfLineSpacing field.
inline
      Int32  TextDomAreaBase::getLineSpacing(void) const
{
    return _sfLineSpacing.getValue();
}

//! Set the value of the TextDomArea::_sfLineSpacing field.
inline
void TextDomAreaBase::setLineSpacing(const Int32 value)
{
    editSField(LineSpacingFieldMask);

    _sfLineSpacing.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TextDomAreaBase::execSync (      TextDomAreaBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DocumentModelFieldMask & whichField))
        _sfDocumentModel.syncWith(pFrom->_sfDocumentModel);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pFrom->_sfFont);

    if(FieldBits::NoField != (CaretPositionFieldMask & whichField))
        _sfCaretPosition.syncWith(pFrom->_sfCaretPosition);

    if(FieldBits::NoField != (LineWrapFieldMask & whichField))
        _sfLineWrap.syncWith(pFrom->_sfLineWrap);

    if(FieldBits::NoField != (WrapStyleWordFieldMask & whichField))
        _sfWrapStyleWord.syncWith(pFrom->_sfWrapStyleWord);

    if(FieldBits::NoField != (TabSizeFieldMask & whichField))
        _sfTabSize.syncWith(pFrom->_sfTabSize);

    if(FieldBits::NoField != (LineSpacingFieldMask & whichField))
        _sfLineSpacing.syncWith(pFrom->_sfLineSpacing);
}
#endif


inline
const Char8 *TextDomAreaBase::getClassname(void)
{
    return "TextDomArea";
}
OSG_GEN_CONTAINERPTR(TextDomArea);

OSG_END_NAMESPACE

