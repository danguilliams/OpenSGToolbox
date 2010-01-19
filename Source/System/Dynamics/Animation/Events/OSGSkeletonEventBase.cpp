/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class SkeletonEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGSkeletonEventBase.h"
#include "OSGSkeletonEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SkeletonEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SkeletonEvent *>::_type("SkeletonEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SkeletonEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SkeletonEvent *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SkeletonEventBase::classDescInserter(TypeObject &oType)
{
}


SkeletonEventBase::TypeObject SkeletonEventBase::_type(
    SkeletonEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SkeletonEventBase::createEmptyLocal),
    SkeletonEvent::initMethod,
    SkeletonEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SkeletonEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SkeletonEvent\"\n"
    "\tparent=\"Event\"\n"
    "    library=\"Dynamics\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &SkeletonEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &SkeletonEventBase::getType(void) const
{
    return _type;
}

UInt32 SkeletonEventBase::getContainerSize(void) const
{
    return sizeof(SkeletonEvent);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 SkeletonEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void SkeletonEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void SkeletonEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
SkeletonEventTransitPtr SkeletonEventBase::createLocal(BitVector bFlags)
{
    SkeletonEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SkeletonEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SkeletonEventTransitPtr SkeletonEventBase::createDependent(BitVector bFlags)
{
    SkeletonEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SkeletonEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SkeletonEventTransitPtr SkeletonEventBase::create(void)
{
    SkeletonEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SkeletonEvent>(tmpPtr);
    }

    return fc;
}

SkeletonEvent *SkeletonEventBase::createEmptyLocal(BitVector bFlags)
{
    SkeletonEvent *returnValue;

    newPtr<SkeletonEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SkeletonEvent *SkeletonEventBase::createEmpty(void)
{
    SkeletonEvent *returnValue;

    newPtr<SkeletonEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SkeletonEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SkeletonEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SkeletonEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonEventBase::shallowCopy(void) const
{
    SkeletonEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SkeletonEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SkeletonEventBase::SkeletonEventBase(void) :
    Inherited()
{
}

SkeletonEventBase::SkeletonEventBase(const SkeletonEventBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

SkeletonEventBase::~SkeletonEventBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void SkeletonEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SkeletonEvent *pThis = static_cast<SkeletonEvent *>(this);

    pThis->execSync(static_cast<SkeletonEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SkeletonEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SkeletonEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SkeletonEvent *>(pRefAspect),
                  dynamic_cast<const SkeletonEvent *>(this));

    return returnValue;
}
#endif

void SkeletonEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE