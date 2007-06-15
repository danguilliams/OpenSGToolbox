/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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


#define OSG_COMPILESHADERANIMATIONINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGShaderAnimationBase.h"
#include "OSGShaderAnimation.h"


OSG_USING_NAMESPACE

const OSG::BitVector  ShaderAnimationBase::AnimatorFieldMask = 
    (TypeTraits<BitVector>::One << ShaderAnimationBase::AnimatorFieldId);

const OSG::BitVector  ShaderAnimationBase::ShaderContainerFieldMask = 
    (TypeTraits<BitVector>::One << ShaderAnimationBase::ShaderContainerFieldId);

const OSG::BitVector  ShaderAnimationBase::ParameterNameFieldMask = 
    (TypeTraits<BitVector>::One << ShaderAnimationBase::ParameterNameFieldId);

const OSG::BitVector  ShaderAnimationBase::ParameterFieldMask = 
    (TypeTraits<BitVector>::One << ShaderAnimationBase::ParameterFieldId);

const OSG::BitVector  ShaderAnimationBase::ParameterFieldIdFieldMask = 
    (TypeTraits<BitVector>::One << ShaderAnimationBase::ParameterFieldIdFieldId);

const OSG::BitVector  ShaderAnimationBase::InterpolationTypeFieldMask = 
    (TypeTraits<BitVector>::One << ShaderAnimationBase::InterpolationTypeFieldId);

const OSG::BitVector  ShaderAnimationBase::ReplacementPolicyFieldMask = 
    (TypeTraits<BitVector>::One << ShaderAnimationBase::ReplacementPolicyFieldId);

const OSG::BitVector ShaderAnimationBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var AnimatorPtr     ShaderAnimationBase::_sfAnimator
    
*/
/*! \var ShaderParameterChunkPtr ShaderAnimationBase::_sfShaderContainer
    
*/
/*! \var std::string     ShaderAnimationBase::_sfParameterName
    
*/
/*! \var ShaderParameterPtr ShaderAnimationBase::_sfParameter
    
*/
/*! \var UInt32          ShaderAnimationBase::_sfParameterFieldId
    
*/
/*! \var UInt32          ShaderAnimationBase::_sfInterpolationType
    
*/
/*! \var UInt32          ShaderAnimationBase::_sfReplacementPolicy
    
*/

//! ShaderAnimation description

FieldDescription *ShaderAnimationBase::_desc[] = 
{
    new FieldDescription(SFAnimatorPtr::getClassType(), 
                     "Animator", 
                     AnimatorFieldId, AnimatorFieldMask,
                     false,
                     (FieldAccessMethod) &ShaderAnimationBase::getSFAnimator),
    new FieldDescription(SFShaderParameterChunkPtr::getClassType(), 
                     "ShaderContainer", 
                     ShaderContainerFieldId, ShaderContainerFieldMask,
                     false,
                     (FieldAccessMethod) &ShaderAnimationBase::getSFShaderContainer),
    new FieldDescription(SFString::getClassType(), 
                     "ParameterName", 
                     ParameterNameFieldId, ParameterNameFieldMask,
                     false,
                     (FieldAccessMethod) &ShaderAnimationBase::getSFParameterName),
    new FieldDescription(SFShaderParameterPtr::getClassType(), 
                     "Parameter", 
                     ParameterFieldId, ParameterFieldMask,
                     false,
                     (FieldAccessMethod) &ShaderAnimationBase::getSFParameter),
    new FieldDescription(SFUInt32::getClassType(), 
                     "ParameterFieldId", 
                     ParameterFieldIdFieldId, ParameterFieldIdFieldMask,
                     false,
                     (FieldAccessMethod) &ShaderAnimationBase::getSFParameterFieldId),
    new FieldDescription(SFUInt32::getClassType(), 
                     "InterpolationType", 
                     InterpolationTypeFieldId, InterpolationTypeFieldMask,
                     false,
                     (FieldAccessMethod) &ShaderAnimationBase::getSFInterpolationType),
    new FieldDescription(SFUInt32::getClassType(), 
                     "ReplacementPolicy", 
                     ReplacementPolicyFieldId, ReplacementPolicyFieldMask,
                     false,
                     (FieldAccessMethod) &ShaderAnimationBase::getSFReplacementPolicy)
};


FieldContainerType ShaderAnimationBase::_type(
    "ShaderAnimation",
    "Animation",
    NULL,
    (PrototypeCreateF) &ShaderAnimationBase::createEmpty,
    ShaderAnimation::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ShaderAnimationBase, ShaderAnimationPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderAnimationBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ShaderAnimationBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ShaderAnimationBase::shallowCopy(void) const 
{ 
    ShaderAnimationPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ShaderAnimation *>(this)); 

    return returnValue; 
}

UInt32 ShaderAnimationBase::getContainerSize(void) const 
{ 
    return sizeof(ShaderAnimation); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderAnimationBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ShaderAnimationBase *) &other, whichField);
}
#else
void ShaderAnimationBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ShaderAnimationBase *) &other, whichField, sInfo);
}
void ShaderAnimationBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ShaderAnimationBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ShaderAnimationBase::ShaderAnimationBase(void) :
    _sfAnimator               (), 
    _sfShaderContainer        (), 
    _sfParameterName          (), 
    _sfParameter              (), 
    _sfParameterFieldId       (), 
    _sfInterpolationType      (), 
    _sfReplacementPolicy      (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ShaderAnimationBase::ShaderAnimationBase(const ShaderAnimationBase &source) :
    _sfAnimator               (source._sfAnimator               ), 
    _sfShaderContainer        (source._sfShaderContainer        ), 
    _sfParameterName          (source._sfParameterName          ), 
    _sfParameter              (source._sfParameter              ), 
    _sfParameterFieldId       (source._sfParameterFieldId       ), 
    _sfInterpolationType      (source._sfInterpolationType      ), 
    _sfReplacementPolicy      (source._sfReplacementPolicy      ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ShaderAnimationBase::~ShaderAnimationBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ShaderAnimationBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AnimatorFieldMask & whichField))
    {
        returnValue += _sfAnimator.getBinSize();
    }

    if(FieldBits::NoField != (ShaderContainerFieldMask & whichField))
    {
        returnValue += _sfShaderContainer.getBinSize();
    }

    if(FieldBits::NoField != (ParameterNameFieldMask & whichField))
    {
        returnValue += _sfParameterName.getBinSize();
    }

    if(FieldBits::NoField != (ParameterFieldMask & whichField))
    {
        returnValue += _sfParameter.getBinSize();
    }

    if(FieldBits::NoField != (ParameterFieldIdFieldMask & whichField))
    {
        returnValue += _sfParameterFieldId.getBinSize();
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        returnValue += _sfInterpolationType.getBinSize();
    }

    if(FieldBits::NoField != (ReplacementPolicyFieldMask & whichField))
    {
        returnValue += _sfReplacementPolicy.getBinSize();
    }


    return returnValue;
}

void ShaderAnimationBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AnimatorFieldMask & whichField))
    {
        _sfAnimator.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ShaderContainerFieldMask & whichField))
    {
        _sfShaderContainer.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ParameterNameFieldMask & whichField))
    {
        _sfParameterName.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ParameterFieldMask & whichField))
    {
        _sfParameter.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ParameterFieldIdFieldMask & whichField))
    {
        _sfParameterFieldId.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ReplacementPolicyFieldMask & whichField))
    {
        _sfReplacementPolicy.copyToBin(pMem);
    }


}

void ShaderAnimationBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AnimatorFieldMask & whichField))
    {
        _sfAnimator.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ShaderContainerFieldMask & whichField))
    {
        _sfShaderContainer.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ParameterNameFieldMask & whichField))
    {
        _sfParameterName.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ParameterFieldMask & whichField))
    {
        _sfParameter.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ParameterFieldIdFieldMask & whichField))
    {
        _sfParameterFieldId.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ReplacementPolicyFieldMask & whichField))
    {
        _sfReplacementPolicy.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderAnimationBase::executeSyncImpl(      ShaderAnimationBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AnimatorFieldMask & whichField))
        _sfAnimator.syncWith(pOther->_sfAnimator);

    if(FieldBits::NoField != (ShaderContainerFieldMask & whichField))
        _sfShaderContainer.syncWith(pOther->_sfShaderContainer);

    if(FieldBits::NoField != (ParameterNameFieldMask & whichField))
        _sfParameterName.syncWith(pOther->_sfParameterName);

    if(FieldBits::NoField != (ParameterFieldMask & whichField))
        _sfParameter.syncWith(pOther->_sfParameter);

    if(FieldBits::NoField != (ParameterFieldIdFieldMask & whichField))
        _sfParameterFieldId.syncWith(pOther->_sfParameterFieldId);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pOther->_sfInterpolationType);

    if(FieldBits::NoField != (ReplacementPolicyFieldMask & whichField))
        _sfReplacementPolicy.syncWith(pOther->_sfReplacementPolicy);


}
#else
void ShaderAnimationBase::executeSyncImpl(      ShaderAnimationBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AnimatorFieldMask & whichField))
        _sfAnimator.syncWith(pOther->_sfAnimator);

    if(FieldBits::NoField != (ShaderContainerFieldMask & whichField))
        _sfShaderContainer.syncWith(pOther->_sfShaderContainer);

    if(FieldBits::NoField != (ParameterNameFieldMask & whichField))
        _sfParameterName.syncWith(pOther->_sfParameterName);

    if(FieldBits::NoField != (ParameterFieldMask & whichField))
        _sfParameter.syncWith(pOther->_sfParameter);

    if(FieldBits::NoField != (ParameterFieldIdFieldMask & whichField))
        _sfParameterFieldId.syncWith(pOther->_sfParameterFieldId);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pOther->_sfInterpolationType);

    if(FieldBits::NoField != (ReplacementPolicyFieldMask & whichField))
        _sfReplacementPolicy.syncWith(pOther->_sfReplacementPolicy);



}

void ShaderAnimationBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ShaderAnimationPtr>::_type("ShaderAnimationPtr", "AnimationPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ShaderAnimationPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(ShaderAnimationPtr, );

OSG_END_NAMESPACE


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.45 2005/07/20 00:10:14 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGSHADERANIMATIONBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSHADERANIMATIONBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSHADERANIMATIONFIELDS_HEADER_CVSID;
}

