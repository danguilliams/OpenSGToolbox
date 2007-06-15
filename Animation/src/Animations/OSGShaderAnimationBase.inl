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
 **     class ShaderAnimation!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderAnimationBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShaderAnimationBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ShaderAnimationPtr ShaderAnimationBase::create(void) 
{
    ShaderAnimationPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ShaderAnimationPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ShaderAnimationPtr ShaderAnimationBase::createEmpty(void) 
{ 
    ShaderAnimationPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ShaderAnimation::_sfAnimator field.
inline
SFAnimatorPtr *ShaderAnimationBase::getSFAnimator(void)
{
    return &_sfAnimator;
}

//! Get the ShaderAnimation::_sfShaderContainer field.
inline
SFShaderParameterChunkPtr *ShaderAnimationBase::getSFShaderContainer(void)
{
    return &_sfShaderContainer;
}

//! Get the ShaderAnimation::_sfParameterName field.
inline
SFString *ShaderAnimationBase::getSFParameterName(void)
{
    return &_sfParameterName;
}

//! Get the ShaderAnimation::_sfParameter field.
inline
SFShaderParameterPtr *ShaderAnimationBase::getSFParameter(void)
{
    return &_sfParameter;
}

//! Get the ShaderAnimation::_sfParameterFieldId field.
inline
SFUInt32 *ShaderAnimationBase::getSFParameterFieldId(void)
{
    return &_sfParameterFieldId;
}

//! Get the ShaderAnimation::_sfInterpolationType field.
inline
SFUInt32 *ShaderAnimationBase::getSFInterpolationType(void)
{
    return &_sfInterpolationType;
}

//! Get the ShaderAnimation::_sfReplacementPolicy field.
inline
SFUInt32 *ShaderAnimationBase::getSFReplacementPolicy(void)
{
    return &_sfReplacementPolicy;
}


//! Get the value of the ShaderAnimation::_sfAnimator field.
inline
AnimatorPtr &ShaderAnimationBase::getAnimator(void)
{
    return _sfAnimator.getValue();
}

//! Get the value of the ShaderAnimation::_sfAnimator field.
inline
const AnimatorPtr &ShaderAnimationBase::getAnimator(void) const
{
    return _sfAnimator.getValue();
}

//! Set the value of the ShaderAnimation::_sfAnimator field.
inline
void ShaderAnimationBase::setAnimator(const AnimatorPtr &value)
{
    _sfAnimator.setValue(value);
}

//! Get the value of the ShaderAnimation::_sfShaderContainer field.
inline
ShaderParameterChunkPtr &ShaderAnimationBase::getShaderContainer(void)
{
    return _sfShaderContainer.getValue();
}

//! Get the value of the ShaderAnimation::_sfShaderContainer field.
inline
const ShaderParameterChunkPtr &ShaderAnimationBase::getShaderContainer(void) const
{
    return _sfShaderContainer.getValue();
}

//! Set the value of the ShaderAnimation::_sfShaderContainer field.
inline
void ShaderAnimationBase::setShaderContainer(const ShaderParameterChunkPtr &value)
{
    _sfShaderContainer.setValue(value);
}

//! Get the value of the ShaderAnimation::_sfParameterName field.
inline
std::string &ShaderAnimationBase::getParameterName(void)
{
    return _sfParameterName.getValue();
}

//! Get the value of the ShaderAnimation::_sfParameterName field.
inline
const std::string &ShaderAnimationBase::getParameterName(void) const
{
    return _sfParameterName.getValue();
}

//! Set the value of the ShaderAnimation::_sfParameterName field.
inline
void ShaderAnimationBase::setParameterName(const std::string &value)
{
    _sfParameterName.setValue(value);
}

//! Get the value of the ShaderAnimation::_sfParameter field.
inline
ShaderParameterPtr &ShaderAnimationBase::getParameter(void)
{
    return _sfParameter.getValue();
}

//! Get the value of the ShaderAnimation::_sfParameter field.
inline
const ShaderParameterPtr &ShaderAnimationBase::getParameter(void) const
{
    return _sfParameter.getValue();
}

//! Set the value of the ShaderAnimation::_sfParameter field.
inline
void ShaderAnimationBase::setParameter(const ShaderParameterPtr &value)
{
    _sfParameter.setValue(value);
}

//! Get the value of the ShaderAnimation::_sfParameterFieldId field.
inline
UInt32 &ShaderAnimationBase::getParameterFieldId(void)
{
    return _sfParameterFieldId.getValue();
}

//! Get the value of the ShaderAnimation::_sfParameterFieldId field.
inline
const UInt32 &ShaderAnimationBase::getParameterFieldId(void) const
{
    return _sfParameterFieldId.getValue();
}

//! Set the value of the ShaderAnimation::_sfParameterFieldId field.
inline
void ShaderAnimationBase::setParameterFieldId(const UInt32 &value)
{
    _sfParameterFieldId.setValue(value);
}

//! Get the value of the ShaderAnimation::_sfInterpolationType field.
inline
UInt32 &ShaderAnimationBase::getInterpolationType(void)
{
    return _sfInterpolationType.getValue();
}

//! Get the value of the ShaderAnimation::_sfInterpolationType field.
inline
const UInt32 &ShaderAnimationBase::getInterpolationType(void) const
{
    return _sfInterpolationType.getValue();
}

//! Set the value of the ShaderAnimation::_sfInterpolationType field.
inline
void ShaderAnimationBase::setInterpolationType(const UInt32 &value)
{
    _sfInterpolationType.setValue(value);
}

//! Get the value of the ShaderAnimation::_sfReplacementPolicy field.
inline
UInt32 &ShaderAnimationBase::getReplacementPolicy(void)
{
    return _sfReplacementPolicy.getValue();
}

//! Get the value of the ShaderAnimation::_sfReplacementPolicy field.
inline
const UInt32 &ShaderAnimationBase::getReplacementPolicy(void) const
{
    return _sfReplacementPolicy.getValue();
}

//! Set the value of the ShaderAnimation::_sfReplacementPolicy field.
inline
void ShaderAnimationBase::setReplacementPolicy(const UInt32 &value)
{
    _sfReplacementPolicy.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSHADERANIMATIONBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

