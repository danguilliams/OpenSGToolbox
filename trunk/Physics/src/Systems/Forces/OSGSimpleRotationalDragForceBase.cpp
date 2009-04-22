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
 **     class SimpleRotationalDragForce!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESIMPLEROTATIONALDRAGFORCEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGSimpleRotationalDragForceBase.h"
#include "OSGSimpleRotationalDragForce.h"


OSG_USING_NAMESPACE

const OSG::BitVector  SimpleRotationalDragForceBase::FluidFieldMask = 
    (TypeTraits<BitVector>::One << SimpleRotationalDragForceBase::FluidFieldId);

const OSG::BitVector SimpleRotationalDragForceBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var FluidPtr        SimpleRotationalDragForceBase::_sfFluid
    
*/

//! SimpleRotationalDragForce description

FieldDescription *SimpleRotationalDragForceBase::_desc[] = 
{
    new FieldDescription(SFFluidPtr::getClassType(), 
                     "Fluid", 
                     FluidFieldId, FluidFieldMask,
                     false,
                     (FieldAccessMethod) &SimpleRotationalDragForceBase::getSFFluid)
};


FieldContainerType SimpleRotationalDragForceBase::_type(
    "SimpleRotationalDragForce",
    "Force",
    NULL,
    (PrototypeCreateF) &SimpleRotationalDragForceBase::createEmpty,
    SimpleRotationalDragForce::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SimpleRotationalDragForceBase, SimpleRotationalDragForcePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleRotationalDragForceBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SimpleRotationalDragForceBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SimpleRotationalDragForceBase::shallowCopy(void) const 
{ 
    SimpleRotationalDragForcePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SimpleRotationalDragForce *>(this)); 

    return returnValue; 
}

UInt32 SimpleRotationalDragForceBase::getContainerSize(void) const 
{ 
    return sizeof(SimpleRotationalDragForce); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SimpleRotationalDragForceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SimpleRotationalDragForceBase *) &other, whichField);
}
#else
void SimpleRotationalDragForceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SimpleRotationalDragForceBase *) &other, whichField, sInfo);
}
void SimpleRotationalDragForceBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SimpleRotationalDragForceBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SimpleRotationalDragForceBase::SimpleRotationalDragForceBase(void) :
    _sfFluid                  (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SimpleRotationalDragForceBase::SimpleRotationalDragForceBase(const SimpleRotationalDragForceBase &source) :
    _sfFluid                  (source._sfFluid                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SimpleRotationalDragForceBase::~SimpleRotationalDragForceBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SimpleRotationalDragForceBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FluidFieldMask & whichField))
    {
        returnValue += _sfFluid.getBinSize();
    }


    return returnValue;
}

void SimpleRotationalDragForceBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FluidFieldMask & whichField))
    {
        _sfFluid.copyToBin(pMem);
    }


}

void SimpleRotationalDragForceBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FluidFieldMask & whichField))
    {
        _sfFluid.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SimpleRotationalDragForceBase::executeSyncImpl(      SimpleRotationalDragForceBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (FluidFieldMask & whichField))
        _sfFluid.syncWith(pOther->_sfFluid);


}
#else
void SimpleRotationalDragForceBase::executeSyncImpl(      SimpleRotationalDragForceBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (FluidFieldMask & whichField))
        _sfFluid.syncWith(pOther->_sfFluid);



}

void SimpleRotationalDragForceBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<SimpleRotationalDragForcePtr>::_type("SimpleRotationalDragForcePtr", "ForcePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SimpleRotationalDragForcePtr, );
OSG_DLLEXPORT_MFIELD_DEF1(SimpleRotationalDragForcePtr, );

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
    static Char8 cvsid_hpp       [] = OSGSIMPLEROTATIONALDRAGFORCEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSIMPLEROTATIONALDRAGFORCEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSIMPLEROTATIONALDRAGFORCEFIELDS_HEADER_CVSID;
}
