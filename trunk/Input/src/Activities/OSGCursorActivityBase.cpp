/*---------------------------------------------------------------------------*\
 *                          OpenSG ToolBox Input                             *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class CursorActivity!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECURSORACTIVITYINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGCursorActivityBase.h"
#include "OSGCursorActivity.h"

#include <WindowSystem/OSGWindowEventProducer.h>   // CursorType default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  CursorActivityBase::WindowEventProducerFieldMask = 
    (TypeTraits<BitVector>::One << CursorActivityBase::WindowEventProducerFieldId);

const OSG::BitVector  CursorActivityBase::ActivityTypeFieldMask = 
    (TypeTraits<BitVector>::One << CursorActivityBase::ActivityTypeFieldId);

const OSG::BitVector  CursorActivityBase::CursorTypeFieldMask = 
    (TypeTraits<BitVector>::One << CursorActivityBase::CursorTypeFieldId);

const OSG::BitVector CursorActivityBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var WindowEventProducerPtr CursorActivityBase::_sfWindowEventProducer
    
*/
/*! \var UInt8           CursorActivityBase::_sfActivityType
    
*/
/*! \var UInt8           CursorActivityBase::_sfCursorType
    
*/

//! CursorActivity description

FieldDescription *CursorActivityBase::_desc[] = 
{
    new FieldDescription(SFWindowEventProducerPtr::getClassType(), 
                     "WindowEventProducer", 
                     WindowEventProducerFieldId, WindowEventProducerFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CursorActivityBase::editSFWindowEventProducer)),
    new FieldDescription(SFUInt8::getClassType(), 
                     "ActivityType", 
                     ActivityTypeFieldId, ActivityTypeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CursorActivityBase::editSFActivityType)),
    new FieldDescription(SFUInt8::getClassType(), 
                     "CursorType", 
                     CursorTypeFieldId, CursorTypeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&CursorActivityBase::editSFCursorType))
};


FieldContainerType CursorActivityBase::_type(
    "CursorActivity",
    "Activity",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&CursorActivityBase::createEmpty),
    CursorActivity::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(CursorActivityBase, CursorActivityPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &CursorActivityBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &CursorActivityBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr CursorActivityBase::shallowCopy(void) const 
{ 
    CursorActivityPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const CursorActivity *>(this)); 

    return returnValue; 
}

UInt32 CursorActivityBase::getContainerSize(void) const 
{ 
    return sizeof(CursorActivity); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void CursorActivityBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<CursorActivityBase *>(&other),
                          whichField);
}
#else
void CursorActivityBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((CursorActivityBase *) &other, whichField, sInfo);
}
void CursorActivityBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void CursorActivityBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

CursorActivityBase::CursorActivityBase(void) :
    _sfWindowEventProducer    (WindowEventProducerPtr(NullFC)), 
    _sfActivityType           (UInt8(CursorActivity::CURSOR_HIDE)), 
    _sfCursorType             (UInt8(WindowEventProducer::CURSOR_POINTER)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

CursorActivityBase::CursorActivityBase(const CursorActivityBase &source) :
    _sfWindowEventProducer    (source._sfWindowEventProducer    ), 
    _sfActivityType           (source._sfActivityType           ), 
    _sfCursorType             (source._sfCursorType             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

CursorActivityBase::~CursorActivityBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 CursorActivityBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
    {
        returnValue += _sfWindowEventProducer.getBinSize();
    }

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
    {
        returnValue += _sfActivityType.getBinSize();
    }

    if(FieldBits::NoField != (CursorTypeFieldMask & whichField))
    {
        returnValue += _sfCursorType.getBinSize();
    }


    return returnValue;
}

void CursorActivityBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
    {
        _sfWindowEventProducer.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
    {
        _sfActivityType.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CursorTypeFieldMask & whichField))
    {
        _sfCursorType.copyToBin(pMem);
    }


}

void CursorActivityBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
    {
        _sfWindowEventProducer.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
    {
        _sfActivityType.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CursorTypeFieldMask & whichField))
    {
        _sfCursorType.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void CursorActivityBase::executeSyncImpl(      CursorActivityBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
        _sfWindowEventProducer.syncWith(pOther->_sfWindowEventProducer);

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
        _sfActivityType.syncWith(pOther->_sfActivityType);

    if(FieldBits::NoField != (CursorTypeFieldMask & whichField))
        _sfCursorType.syncWith(pOther->_sfCursorType);


}
#else
void CursorActivityBase::executeSyncImpl(      CursorActivityBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (WindowEventProducerFieldMask & whichField))
        _sfWindowEventProducer.syncWith(pOther->_sfWindowEventProducer);

    if(FieldBits::NoField != (ActivityTypeFieldMask & whichField))
        _sfActivityType.syncWith(pOther->_sfActivityType);

    if(FieldBits::NoField != (CursorTypeFieldMask & whichField))
        _sfCursorType.syncWith(pOther->_sfCursorType);



}

void CursorActivityBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<CursorActivityPtr>::_type("CursorActivityPtr", "ActivityPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(CursorActivityPtr, OSG_INPUTLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(CursorActivityPtr, OSG_INPUTLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE
