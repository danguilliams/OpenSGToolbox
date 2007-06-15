/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class FieldAnimationAdvancer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FieldAnimationAdvancerBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 FieldAnimationAdvancerBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
FieldAnimationAdvancerPtr FieldAnimationAdvancerBase::create(void) 
{
    FieldAnimationAdvancerPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = FieldAnimationAdvancerPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
FieldAnimationAdvancerPtr FieldAnimationAdvancerBase::createEmpty(void) 
{ 
    FieldAnimationAdvancerPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the FieldAnimationAdvancer::_sfContainer field.
inline
SFFieldContainerPtr *FieldAnimationAdvancerBase::getSFContainer(void)
{
    return &_sfContainer;
}

//! Get the FieldAnimationAdvancer::_sfFieldName field.
inline
SFString *FieldAnimationAdvancerBase::getSFFieldName(void)
{
    return &_sfFieldName;
}

//! Get the FieldAnimationAdvancer::_sfFieldId field.
inline
SFUInt32 *FieldAnimationAdvancerBase::getSFFieldId(void)
{
    return &_sfFieldId;
}

//! Get the FieldAnimationAdvancer::_sfPrevFieldValue field.
inline
SFReal32 *FieldAnimationAdvancerBase::getSFPrevFieldValue(void)
{
    return &_sfPrevFieldValue;
}


//! Get the value of the FieldAnimationAdvancer::_sfContainer field.
inline
FieldContainerPtr &FieldAnimationAdvancerBase::getContainer(void)
{
    return _sfContainer.getValue();
}

//! Get the value of the FieldAnimationAdvancer::_sfContainer field.
inline
const FieldContainerPtr &FieldAnimationAdvancerBase::getContainer(void) const
{
    return _sfContainer.getValue();
}

//! Set the value of the FieldAnimationAdvancer::_sfContainer field.
inline
void FieldAnimationAdvancerBase::setContainer(const FieldContainerPtr &value)
{
    _sfContainer.setValue(value);
}

//! Get the value of the FieldAnimationAdvancer::_sfFieldName field.
inline
std::string &FieldAnimationAdvancerBase::getFieldName(void)
{
    return _sfFieldName.getValue();
}

//! Get the value of the FieldAnimationAdvancer::_sfFieldName field.
inline
const std::string &FieldAnimationAdvancerBase::getFieldName(void) const
{
    return _sfFieldName.getValue();
}

//! Set the value of the FieldAnimationAdvancer::_sfFieldName field.
inline
void FieldAnimationAdvancerBase::setFieldName(const std::string &value)
{
    _sfFieldName.setValue(value);
}

//! Get the value of the FieldAnimationAdvancer::_sfFieldId field.
inline
UInt32 &FieldAnimationAdvancerBase::getFieldId(void)
{
    return _sfFieldId.getValue();
}

//! Get the value of the FieldAnimationAdvancer::_sfFieldId field.
inline
const UInt32 &FieldAnimationAdvancerBase::getFieldId(void) const
{
    return _sfFieldId.getValue();
}

//! Set the value of the FieldAnimationAdvancer::_sfFieldId field.
inline
void FieldAnimationAdvancerBase::setFieldId(const UInt32 &value)
{
    _sfFieldId.setValue(value);
}

//! Get the value of the FieldAnimationAdvancer::_sfPrevFieldValue field.
inline
Real32 &FieldAnimationAdvancerBase::getPrevFieldValue(void)
{
    return _sfPrevFieldValue.getValue();
}

//! Get the value of the FieldAnimationAdvancer::_sfPrevFieldValue field.
inline
const Real32 &FieldAnimationAdvancerBase::getPrevFieldValue(void) const
{
    return _sfPrevFieldValue.getValue();
}

//! Set the value of the FieldAnimationAdvancer::_sfPrevFieldValue field.
inline
void FieldAnimationAdvancerBase::setPrevFieldValue(const Real32 &value)
{
    _sfPrevFieldValue.setValue(value);
}


OSG_END_NAMESPACE

#define OSGFIELDANIMATIONADVANCERBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

