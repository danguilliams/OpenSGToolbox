/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                 Authors: David Kabala, Daniel Guilliams                   *
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
 **     class VLCVideoWrapper!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEVLCVIDEOWRAPPERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGVLCVideoWrapperBase.h"
#include "OSGVLCVideoWrapper.h"

#ifdef _OSGTOOLBOX_VIDEO_USE_VLC

OSG_BEGIN_NAMESPACE

const OSG::BitVector VLCVideoWrapperBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType VLCVideoWrapperBase::_type(
    "VLCVideoWrapper",
    "VideoWrapper",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&VLCVideoWrapperBase::createEmpty),
    VLCVideoWrapper::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(VLCVideoWrapperBase, VLCVideoWrapperPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &VLCVideoWrapperBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &VLCVideoWrapperBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr VLCVideoWrapperBase::shallowCopy(void) const 
{ 
    VLCVideoWrapperPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const VLCVideoWrapper *>(this)); 

    return returnValue; 
}

UInt32 VLCVideoWrapperBase::getContainerSize(void) const 
{ 
    return sizeof(VLCVideoWrapper); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void VLCVideoWrapperBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<VLCVideoWrapperBase *>(&other),
                          whichField);
}
#else
void VLCVideoWrapperBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((VLCVideoWrapperBase *) &other, whichField, sInfo);
}
void VLCVideoWrapperBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void VLCVideoWrapperBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

VLCVideoWrapperBase::VLCVideoWrapperBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

VLCVideoWrapperBase::VLCVideoWrapperBase(const VLCVideoWrapperBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

VLCVideoWrapperBase::~VLCVideoWrapperBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 VLCVideoWrapperBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void VLCVideoWrapperBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void VLCVideoWrapperBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void VLCVideoWrapperBase::executeSyncImpl(      VLCVideoWrapperBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void VLCVideoWrapperBase::executeSyncImpl(      VLCVideoWrapperBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void VLCVideoWrapperBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<VLCVideoWrapperPtr>::_type("VLCVideoWrapperPtr", "VideoWrapperPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(VLCVideoWrapperPtr, OSG_VIDEOLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(VLCVideoWrapperPtr, OSG_VIDEOLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

#endif
