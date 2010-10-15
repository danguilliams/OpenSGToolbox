/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class RotationTransformationElement!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RotationTransformationElementBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 RotationTransformationElementBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 RotationTransformationElementBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the RotationTransformationElement::_sfAxis field.

inline
Vec3f &RotationTransformationElementBase::editAxis(void)
{
    editSField(AxisFieldMask);

    return _sfAxis.getValue();
}

//! Get the value of the RotationTransformationElement::_sfAxis field.
inline
const Vec3f &RotationTransformationElementBase::getAxis(void) const
{
    return _sfAxis.getValue();
}

//! Set the value of the RotationTransformationElement::_sfAxis field.
inline
void RotationTransformationElementBase::setAxis(const Vec3f &value)
{
    editSField(AxisFieldMask);

    _sfAxis.setValue(value);
}
//! Get the value of the RotationTransformationElement::_sfAngle field.

inline
Real32 &RotationTransformationElementBase::editAngle(void)
{
    editSField(AngleFieldMask);

    return _sfAngle.getValue();
}

//! Get the value of the RotationTransformationElement::_sfAngle field.
inline
      Real32  RotationTransformationElementBase::getAngle(void) const
{
    return _sfAngle.getValue();
}

//! Set the value of the RotationTransformationElement::_sfAngle field.
inline
void RotationTransformationElementBase::setAngle(const Real32 value)
{
    editSField(AngleFieldMask);

    _sfAngle.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void RotationTransformationElementBase::execSync (      RotationTransformationElementBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AxisFieldMask & whichField))
        _sfAxis.syncWith(pFrom->_sfAxis);

    if(FieldBits::NoField != (AngleFieldMask & whichField))
        _sfAngle.syncWith(pFrom->_sfAngle);
}
#endif


inline
const Char8 *RotationTransformationElementBase::getClassname(void)
{
    return "RotationTransformationElement";
}
OSG_GEN_CONTAINERPTR(RotationTransformationElement);

OSG_END_NAMESPACE

