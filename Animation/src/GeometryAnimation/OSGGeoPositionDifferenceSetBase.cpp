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
 **     class GeoPositionDifferenceSet!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOPOSITIONDIFFERENCESETINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGeoPositionDifferenceSetBase.h"
#include "OSGGeoPositionDifferenceSet.h"


OSG_USING_NAMESPACE

const OSG::BitVector  GeoPositionDifferenceSetBase::PositionsFieldMask = 
    (TypeTraits<BitVector>::One << GeoPositionDifferenceSetBase::PositionsFieldId);

const OSG::BitVector  GeoPositionDifferenceSetBase::IndicesFieldMask = 
    (TypeTraits<BitVector>::One << GeoPositionDifferenceSetBase::IndicesFieldId);

const OSG::BitVector GeoPositionDifferenceSetBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var GeoPositionsPtr GeoPositionDifferenceSetBase::_sfPositions
    
*/
/*! \var GeoIndicesPtr   GeoPositionDifferenceSetBase::_sfIndices
    
*/

//! GeoPositionDifferenceSet description

FieldDescription *GeoPositionDifferenceSetBase::_desc[] = 
{
    new FieldDescription(SFGeoPositionsPtr::getClassType(), 
                     "Positions", 
                     PositionsFieldId, PositionsFieldMask,
                     false,
                     (FieldAccessMethod) &GeoPositionDifferenceSetBase::getSFPositions),
    new FieldDescription(SFGeoIndicesPtr::getClassType(), 
                     "Indices", 
                     IndicesFieldId, IndicesFieldMask,
                     false,
                     (FieldAccessMethod) &GeoPositionDifferenceSetBase::getSFIndices)
};


FieldContainerType GeoPositionDifferenceSetBase::_type(
    "GeoPositionDifferenceSet",
    "GeoDifferenceSet",
    NULL,
    (PrototypeCreateF) &GeoPositionDifferenceSetBase::createEmpty,
    GeoPositionDifferenceSet::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(GeoPositionDifferenceSetBase, GeoPositionDifferenceSetPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoPositionDifferenceSetBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GeoPositionDifferenceSetBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GeoPositionDifferenceSetBase::shallowCopy(void) const 
{ 
    GeoPositionDifferenceSetPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GeoPositionDifferenceSet *>(this)); 

    return returnValue; 
}

UInt32 GeoPositionDifferenceSetBase::getContainerSize(void) const 
{ 
    return sizeof(GeoPositionDifferenceSet); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GeoPositionDifferenceSetBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((GeoPositionDifferenceSetBase *) &other, whichField);
}
#else
void GeoPositionDifferenceSetBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GeoPositionDifferenceSetBase *) &other, whichField, sInfo);
}
void GeoPositionDifferenceSetBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GeoPositionDifferenceSetBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GeoPositionDifferenceSetBase::GeoPositionDifferenceSetBase(void) :
    _sfPositions              (), 
    _sfIndices                (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GeoPositionDifferenceSetBase::GeoPositionDifferenceSetBase(const GeoPositionDifferenceSetBase &source) :
    _sfPositions              (source._sfPositions              ), 
    _sfIndices                (source._sfIndices                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GeoPositionDifferenceSetBase::~GeoPositionDifferenceSetBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GeoPositionDifferenceSetBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _sfPositions.getBinSize();
    }

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        returnValue += _sfIndices.getBinSize();
    }


    return returnValue;
}

void GeoPositionDifferenceSetBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _sfPositions.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        _sfIndices.copyToBin(pMem);
    }


}

void GeoPositionDifferenceSetBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _sfPositions.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        _sfIndices.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GeoPositionDifferenceSetBase::executeSyncImpl(      GeoPositionDifferenceSetBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _sfPositions.syncWith(pOther->_sfPositions);

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
        _sfIndices.syncWith(pOther->_sfIndices);


}
#else
void GeoPositionDifferenceSetBase::executeSyncImpl(      GeoPositionDifferenceSetBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _sfPositions.syncWith(pOther->_sfPositions);

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
        _sfIndices.syncWith(pOther->_sfIndices);



}

void GeoPositionDifferenceSetBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<GeoPositionDifferenceSetPtr>::_type("GeoPositionDifferenceSetPtr", "GeoDifferenceSetPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GeoPositionDifferenceSetPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(GeoPositionDifferenceSetPtr, );

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
    static Char8 cvsid_hpp       [] = OSGGEOPOSITIONDIFFERENCESETBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGEOPOSITIONDIFFERENCESETBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGEOPOSITIONDIFFERENCESETFIELDS_HEADER_CVSID;
}

