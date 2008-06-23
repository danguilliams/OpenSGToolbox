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
 **     class RungeKuttaIntegration!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILERUNGEKUTTAINTEGRATIONINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGRungeKuttaIntegrationBase.h"
#include "OSGRungeKuttaIntegration.h"


OSG_USING_NAMESPACE

const OSG::BitVector RungeKuttaIntegrationBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType RungeKuttaIntegrationBase::_type(
    "RungeKuttaIntegration",
    "Integration",
    NULL,
    (PrototypeCreateF) &RungeKuttaIntegrationBase::createEmpty,
    RungeKuttaIntegration::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(RungeKuttaIntegrationBase, RungeKuttaIntegrationPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &RungeKuttaIntegrationBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &RungeKuttaIntegrationBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr RungeKuttaIntegrationBase::shallowCopy(void) const 
{ 
    RungeKuttaIntegrationPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const RungeKuttaIntegration *>(this)); 

    return returnValue; 
}

UInt32 RungeKuttaIntegrationBase::getContainerSize(void) const 
{ 
    return sizeof(RungeKuttaIntegration); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void RungeKuttaIntegrationBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((RungeKuttaIntegrationBase *) &other, whichField);
}
#else
void RungeKuttaIntegrationBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((RungeKuttaIntegrationBase *) &other, whichField, sInfo);
}
void RungeKuttaIntegrationBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void RungeKuttaIntegrationBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

RungeKuttaIntegrationBase::RungeKuttaIntegrationBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

RungeKuttaIntegrationBase::RungeKuttaIntegrationBase(const RungeKuttaIntegrationBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

RungeKuttaIntegrationBase::~RungeKuttaIntegrationBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 RungeKuttaIntegrationBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void RungeKuttaIntegrationBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void RungeKuttaIntegrationBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void RungeKuttaIntegrationBase::executeSyncImpl(      RungeKuttaIntegrationBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void RungeKuttaIntegrationBase::executeSyncImpl(      RungeKuttaIntegrationBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void RungeKuttaIntegrationBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<RungeKuttaIntegrationPtr>::_type("RungeKuttaIntegrationPtr", "IntegrationPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(RungeKuttaIntegrationPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(RungeKuttaIntegrationPtr, );

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
    static Char8 cvsid_hpp       [] = OSGRUNGEKUTTAINTEGRATIONBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGRUNGEKUTTAINTEGRATIONBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGRUNGEKUTTAINTEGRATIONFIELDS_HEADER_CVSID;
}
