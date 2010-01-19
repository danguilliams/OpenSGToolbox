/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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
 **     class PhysicsSimpleSpace!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGPhysicsSimpleSpaceBase.h"
#include "OSGPhysicsSimpleSpace.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PhysicsSimpleSpace
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PhysicsSimpleSpace *>::_type("PhysicsSimpleSpacePtr", "PhysicsSpacePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PhysicsSimpleSpace *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PhysicsSimpleSpace *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PhysicsSimpleSpace *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PhysicsSimpleSpaceBase::classDescInserter(TypeObject &oType)
{
}


PhysicsSimpleSpaceBase::TypeObject PhysicsSimpleSpaceBase::_type(
    PhysicsSimpleSpaceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PhysicsSimpleSpaceBase::createEmptyLocal),
    PhysicsSimpleSpace::initMethod,
    PhysicsSimpleSpace::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PhysicsSimpleSpace::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PhysicsSimpleSpace\"\n"
    "\tparent=\"PhysicsSpace\"\n"
    "    library=\"ContribPhysics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com),  Behboud Kalantary         \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsSimpleSpaceBase::getType(void)
{
    return _type;
}

const FieldContainerType &PhysicsSimpleSpaceBase::getType(void) const
{
    return _type;
}

UInt32 PhysicsSimpleSpaceBase::getContainerSize(void) const
{
    return sizeof(PhysicsSimpleSpace);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 PhysicsSimpleSpaceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void PhysicsSimpleSpaceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void PhysicsSimpleSpaceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
PhysicsSimpleSpaceTransitPtr PhysicsSimpleSpaceBase::createLocal(BitVector bFlags)
{
    PhysicsSimpleSpaceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PhysicsSimpleSpace>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PhysicsSimpleSpaceTransitPtr PhysicsSimpleSpaceBase::createDependent(BitVector bFlags)
{
    PhysicsSimpleSpaceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PhysicsSimpleSpace>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PhysicsSimpleSpaceTransitPtr PhysicsSimpleSpaceBase::create(void)
{
    PhysicsSimpleSpaceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PhysicsSimpleSpace>(tmpPtr);
    }

    return fc;
}

PhysicsSimpleSpace *PhysicsSimpleSpaceBase::createEmptyLocal(BitVector bFlags)
{
    PhysicsSimpleSpace *returnValue;

    newPtr<PhysicsSimpleSpace>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PhysicsSimpleSpace *PhysicsSimpleSpaceBase::createEmpty(void)
{
    PhysicsSimpleSpace *returnValue;

    newPtr<PhysicsSimpleSpace>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PhysicsSimpleSpaceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PhysicsSimpleSpace *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsSimpleSpace *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsSimpleSpaceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PhysicsSimpleSpace *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsSimpleSpace *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsSimpleSpaceBase::shallowCopy(void) const
{
    PhysicsSimpleSpace *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PhysicsSimpleSpace *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PhysicsSimpleSpaceBase::PhysicsSimpleSpaceBase(void) :
    Inherited()
{
}

PhysicsSimpleSpaceBase::PhysicsSimpleSpaceBase(const PhysicsSimpleSpaceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

PhysicsSimpleSpaceBase::~PhysicsSimpleSpaceBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void PhysicsSimpleSpaceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PhysicsSimpleSpace *pThis = static_cast<PhysicsSimpleSpace *>(this);

    pThis->execSync(static_cast<PhysicsSimpleSpace *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PhysicsSimpleSpaceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PhysicsSimpleSpace *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PhysicsSimpleSpace *>(pRefAspect),
                  dynamic_cast<const PhysicsSimpleSpace *>(this));

    return returnValue;
}
#endif

void PhysicsSimpleSpaceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
