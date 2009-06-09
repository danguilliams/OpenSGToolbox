/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          www.vrac.iastate.edu                             *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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
 **     class CollisionContactParameters!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECOLLISIONCONTACTPARAMETERSINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGCollisionContactParametersBase.h"
#include "OSGCollisionContactParameters.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  CollisionContactParametersBase::ModeFieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::ModeFieldId);

const OSG::BitVector  CollisionContactParametersBase::MuFieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::MuFieldId);

const OSG::BitVector  CollisionContactParametersBase::Mu2FieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::Mu2FieldId);

const OSG::BitVector  CollisionContactParametersBase::BounceFieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::BounceFieldId);

const OSG::BitVector  CollisionContactParametersBase::BounceSpeedThresholdFieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::BounceSpeedThresholdFieldId);

const OSG::BitVector  CollisionContactParametersBase::SoftCFMFieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::SoftCFMFieldId);

const OSG::BitVector  CollisionContactParametersBase::SoftERPFieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::SoftERPFieldId);

const OSG::BitVector  CollisionContactParametersBase::Motion1FieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::Motion1FieldId);

const OSG::BitVector  CollisionContactParametersBase::Motion2FieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::Motion2FieldId);

const OSG::BitVector  CollisionContactParametersBase::MotionNFieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::MotionNFieldId);

const OSG::BitVector  CollisionContactParametersBase::Slip1FieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::Slip1FieldId);

const OSG::BitVector  CollisionContactParametersBase::Slip2FieldMask = 
    (TypeTraits<BitVector>::One << CollisionContactParametersBase::Slip2FieldId);

const OSG::BitVector CollisionContactParametersBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Int32           CollisionContactParametersBase::_sfMode
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfMu
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfMu2
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfBounce
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfBounceSpeedThreshold
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfSoftCFM
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfSoftERP
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfMotion1
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfMotion2
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfMotionN
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfSlip1
    
*/
/*! \var Real32          CollisionContactParametersBase::_sfSlip2
    
*/

//! CollisionContactParameters description

FieldDescription *CollisionContactParametersBase::_desc[] = 
{
    new FieldDescription(SFInt32::getClassType(), 
                     "mode", 
                     ModeFieldId, ModeFieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFMode),
    new FieldDescription(SFReal32::getClassType(), 
                     "mu", 
                     MuFieldId, MuFieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFMu),
    new FieldDescription(SFReal32::getClassType(), 
                     "mu2", 
                     Mu2FieldId, Mu2FieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFMu2),
    new FieldDescription(SFReal32::getClassType(), 
                     "bounce", 
                     BounceFieldId, BounceFieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFBounce),
    new FieldDescription(SFReal32::getClassType(), 
                     "bounceSpeedThreshold", 
                     BounceSpeedThresholdFieldId, BounceSpeedThresholdFieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFBounceSpeedThreshold),
    new FieldDescription(SFReal32::getClassType(), 
                     "softCFM", 
                     SoftCFMFieldId, SoftCFMFieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFSoftCFM),
    new FieldDescription(SFReal32::getClassType(), 
                     "softERP", 
                     SoftERPFieldId, SoftERPFieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFSoftERP),
    new FieldDescription(SFReal32::getClassType(), 
                     "motion1", 
                     Motion1FieldId, Motion1FieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFMotion1),
    new FieldDescription(SFReal32::getClassType(), 
                     "motion2", 
                     Motion2FieldId, Motion2FieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFMotion2),
    new FieldDescription(SFReal32::getClassType(), 
                     "motionN", 
                     MotionNFieldId, MotionNFieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFMotionN),
    new FieldDescription(SFReal32::getClassType(), 
                     "slip1", 
                     Slip1FieldId, Slip1FieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFSlip1),
    new FieldDescription(SFReal32::getClassType(), 
                     "slip2", 
                     Slip2FieldId, Slip2FieldMask,
                     false,
                     (FieldAccessMethod) &CollisionContactParametersBase::getSFSlip2)
};


FieldContainerType CollisionContactParametersBase::_type(
    "CollisionContactParameters",
    "AttachmentContainer",
    NULL,
    (PrototypeCreateF) &CollisionContactParametersBase::createEmpty,
    CollisionContactParameters::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(CollisionContactParametersBase, CollisionContactParametersPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &CollisionContactParametersBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &CollisionContactParametersBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr CollisionContactParametersBase::shallowCopy(void) const 
{ 
    CollisionContactParametersPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const CollisionContactParameters *>(this)); 

    return returnValue; 
}

UInt32 CollisionContactParametersBase::getContainerSize(void) const 
{ 
    return sizeof(CollisionContactParameters); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void CollisionContactParametersBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((CollisionContactParametersBase *) &other, whichField);
}
#else
void CollisionContactParametersBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((CollisionContactParametersBase *) &other, whichField, sInfo);
}
void CollisionContactParametersBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void CollisionContactParametersBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

CollisionContactParametersBase::CollisionContactParametersBase(void) :
    _sfMode                   (), 
    _sfMu                     (), 
    _sfMu2                    (), 
    _sfBounce                 (), 
    _sfBounceSpeedThreshold   (), 
    _sfSoftCFM                (), 
    _sfSoftERP                (), 
    _sfMotion1                (), 
    _sfMotion2                (), 
    _sfMotionN                (), 
    _sfSlip1                  (), 
    _sfSlip2                  (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

CollisionContactParametersBase::CollisionContactParametersBase(const CollisionContactParametersBase &source) :
    _sfMode                   (source._sfMode                   ), 
    _sfMu                     (source._sfMu                     ), 
    _sfMu2                    (source._sfMu2                    ), 
    _sfBounce                 (source._sfBounce                 ), 
    _sfBounceSpeedThreshold   (source._sfBounceSpeedThreshold   ), 
    _sfSoftCFM                (source._sfSoftCFM                ), 
    _sfSoftERP                (source._sfSoftERP                ), 
    _sfMotion1                (source._sfMotion1                ), 
    _sfMotion2                (source._sfMotion2                ), 
    _sfMotionN                (source._sfMotionN                ), 
    _sfSlip1                  (source._sfSlip1                  ), 
    _sfSlip2                  (source._sfSlip2                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

CollisionContactParametersBase::~CollisionContactParametersBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 CollisionContactParametersBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        returnValue += _sfMode.getBinSize();
    }

    if(FieldBits::NoField != (MuFieldMask & whichField))
    {
        returnValue += _sfMu.getBinSize();
    }

    if(FieldBits::NoField != (Mu2FieldMask & whichField))
    {
        returnValue += _sfMu2.getBinSize();
    }

    if(FieldBits::NoField != (BounceFieldMask & whichField))
    {
        returnValue += _sfBounce.getBinSize();
    }

    if(FieldBits::NoField != (BounceSpeedThresholdFieldMask & whichField))
    {
        returnValue += _sfBounceSpeedThreshold.getBinSize();
    }

    if(FieldBits::NoField != (SoftCFMFieldMask & whichField))
    {
        returnValue += _sfSoftCFM.getBinSize();
    }

    if(FieldBits::NoField != (SoftERPFieldMask & whichField))
    {
        returnValue += _sfSoftERP.getBinSize();
    }

    if(FieldBits::NoField != (Motion1FieldMask & whichField))
    {
        returnValue += _sfMotion1.getBinSize();
    }

    if(FieldBits::NoField != (Motion2FieldMask & whichField))
    {
        returnValue += _sfMotion2.getBinSize();
    }

    if(FieldBits::NoField != (MotionNFieldMask & whichField))
    {
        returnValue += _sfMotionN.getBinSize();
    }

    if(FieldBits::NoField != (Slip1FieldMask & whichField))
    {
        returnValue += _sfSlip1.getBinSize();
    }

    if(FieldBits::NoField != (Slip2FieldMask & whichField))
    {
        returnValue += _sfSlip2.getBinSize();
    }


    return returnValue;
}

void CollisionContactParametersBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MuFieldMask & whichField))
    {
        _sfMu.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Mu2FieldMask & whichField))
    {
        _sfMu2.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BounceFieldMask & whichField))
    {
        _sfBounce.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BounceSpeedThresholdFieldMask & whichField))
    {
        _sfBounceSpeedThreshold.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SoftCFMFieldMask & whichField))
    {
        _sfSoftCFM.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SoftERPFieldMask & whichField))
    {
        _sfSoftERP.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Motion1FieldMask & whichField))
    {
        _sfMotion1.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Motion2FieldMask & whichField))
    {
        _sfMotion2.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MotionNFieldMask & whichField))
    {
        _sfMotionN.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Slip1FieldMask & whichField))
    {
        _sfSlip1.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Slip2FieldMask & whichField))
    {
        _sfSlip2.copyToBin(pMem);
    }


}

void CollisionContactParametersBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MuFieldMask & whichField))
    {
        _sfMu.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Mu2FieldMask & whichField))
    {
        _sfMu2.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BounceFieldMask & whichField))
    {
        _sfBounce.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BounceSpeedThresholdFieldMask & whichField))
    {
        _sfBounceSpeedThreshold.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SoftCFMFieldMask & whichField))
    {
        _sfSoftCFM.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SoftERPFieldMask & whichField))
    {
        _sfSoftERP.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Motion1FieldMask & whichField))
    {
        _sfMotion1.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Motion2FieldMask & whichField))
    {
        _sfMotion2.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MotionNFieldMask & whichField))
    {
        _sfMotionN.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Slip1FieldMask & whichField))
    {
        _sfSlip1.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Slip2FieldMask & whichField))
    {
        _sfSlip2.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void CollisionContactParametersBase::executeSyncImpl(      CollisionContactParametersBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pOther->_sfMode);

    if(FieldBits::NoField != (MuFieldMask & whichField))
        _sfMu.syncWith(pOther->_sfMu);

    if(FieldBits::NoField != (Mu2FieldMask & whichField))
        _sfMu2.syncWith(pOther->_sfMu2);

    if(FieldBits::NoField != (BounceFieldMask & whichField))
        _sfBounce.syncWith(pOther->_sfBounce);

    if(FieldBits::NoField != (BounceSpeedThresholdFieldMask & whichField))
        _sfBounceSpeedThreshold.syncWith(pOther->_sfBounceSpeedThreshold);

    if(FieldBits::NoField != (SoftCFMFieldMask & whichField))
        _sfSoftCFM.syncWith(pOther->_sfSoftCFM);

    if(FieldBits::NoField != (SoftERPFieldMask & whichField))
        _sfSoftERP.syncWith(pOther->_sfSoftERP);

    if(FieldBits::NoField != (Motion1FieldMask & whichField))
        _sfMotion1.syncWith(pOther->_sfMotion1);

    if(FieldBits::NoField != (Motion2FieldMask & whichField))
        _sfMotion2.syncWith(pOther->_sfMotion2);

    if(FieldBits::NoField != (MotionNFieldMask & whichField))
        _sfMotionN.syncWith(pOther->_sfMotionN);

    if(FieldBits::NoField != (Slip1FieldMask & whichField))
        _sfSlip1.syncWith(pOther->_sfSlip1);

    if(FieldBits::NoField != (Slip2FieldMask & whichField))
        _sfSlip2.syncWith(pOther->_sfSlip2);


}
#else
void CollisionContactParametersBase::executeSyncImpl(      CollisionContactParametersBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pOther->_sfMode);

    if(FieldBits::NoField != (MuFieldMask & whichField))
        _sfMu.syncWith(pOther->_sfMu);

    if(FieldBits::NoField != (Mu2FieldMask & whichField))
        _sfMu2.syncWith(pOther->_sfMu2);

    if(FieldBits::NoField != (BounceFieldMask & whichField))
        _sfBounce.syncWith(pOther->_sfBounce);

    if(FieldBits::NoField != (BounceSpeedThresholdFieldMask & whichField))
        _sfBounceSpeedThreshold.syncWith(pOther->_sfBounceSpeedThreshold);

    if(FieldBits::NoField != (SoftCFMFieldMask & whichField))
        _sfSoftCFM.syncWith(pOther->_sfSoftCFM);

    if(FieldBits::NoField != (SoftERPFieldMask & whichField))
        _sfSoftERP.syncWith(pOther->_sfSoftERP);

    if(FieldBits::NoField != (Motion1FieldMask & whichField))
        _sfMotion1.syncWith(pOther->_sfMotion1);

    if(FieldBits::NoField != (Motion2FieldMask & whichField))
        _sfMotion2.syncWith(pOther->_sfMotion2);

    if(FieldBits::NoField != (MotionNFieldMask & whichField))
        _sfMotionN.syncWith(pOther->_sfMotionN);

    if(FieldBits::NoField != (Slip1FieldMask & whichField))
        _sfSlip1.syncWith(pOther->_sfSlip1);

    if(FieldBits::NoField != (Slip2FieldMask & whichField))
        _sfSlip2.syncWith(pOther->_sfSlip2);



}

void CollisionContactParametersBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<CollisionContactParametersPtr>::_type("CollisionContactParametersPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(CollisionContactParametersPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(CollisionContactParametersPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGCOLLISIONCONTACTPARAMETERSBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCOLLISIONCONTACTPARAMETERSBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCOLLISIONCONTACTPARAMETERSFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
