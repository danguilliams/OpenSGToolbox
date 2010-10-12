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
 **     class RotationTransformationElement!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGRotationTransformationElementBase.h"
#include "OSGRotationTransformationElement.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RotationTransformationElement
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Quaternion      RotationTransformationElementBase::_sfRotation
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RotationTransformationElement *>::_type("RotationTransformationElementPtr", "TransformationElementPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RotationTransformationElement *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RotationTransformationElement *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RotationTransformationElement *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RotationTransformationElementBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFQuaternion::Description(
        SFQuaternion::getClassType(),
        "Rotation",
        "",
        RotationFieldId, RotationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RotationTransformationElement::editHandleRotation),
        static_cast<FieldGetMethodSig >(&RotationTransformationElement::getHandleRotation));

    oType.addInitialDesc(pDesc);
}


RotationTransformationElementBase::TypeObject RotationTransformationElementBase::_type(
    RotationTransformationElementBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RotationTransformationElementBase::createEmptyLocal),
    RotationTransformationElement::initMethod,
    RotationTransformationElement::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RotationTransformationElement::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RotationTransformationElement\"\n"
    "\tparent=\"TransformationElement\"\n"
    "\tlibrary=\"Group\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"Rotation\"\n"
    "\t\ttype=\"Quaternion\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.0f,0.0f,0.0f,1.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RotationTransformationElementBase::getType(void)
{
    return _type;
}

const FieldContainerType &RotationTransformationElementBase::getType(void) const
{
    return _type;
}

UInt32 RotationTransformationElementBase::getContainerSize(void) const
{
    return sizeof(RotationTransformationElement);
}

/*------------------------- decorator get ------------------------------*/


SFQuaternion *RotationTransformationElementBase::editSFRotation(void)
{
    editSField(RotationFieldMask);

    return &_sfRotation;
}

const SFQuaternion *RotationTransformationElementBase::getSFRotation(void) const
{
    return &_sfRotation;
}






/*------------------------------ access -----------------------------------*/

UInt32 RotationTransformationElementBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        returnValue += _sfRotation.getBinSize();
    }

    return returnValue;
}

void RotationTransformationElementBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        _sfRotation.copyToBin(pMem);
    }
}

void RotationTransformationElementBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        _sfRotation.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RotationTransformationElementTransitPtr RotationTransformationElementBase::createLocal(BitVector bFlags)
{
    RotationTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RotationTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RotationTransformationElementTransitPtr RotationTransformationElementBase::createDependent(BitVector bFlags)
{
    RotationTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RotationTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RotationTransformationElementTransitPtr RotationTransformationElementBase::create(void)
{
    RotationTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RotationTransformationElement>(tmpPtr);
    }

    return fc;
}

RotationTransformationElement *RotationTransformationElementBase::createEmptyLocal(BitVector bFlags)
{
    RotationTransformationElement *returnValue;

    newPtr<RotationTransformationElement>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RotationTransformationElement *RotationTransformationElementBase::createEmpty(void)
{
    RotationTransformationElement *returnValue;

    newPtr<RotationTransformationElement>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr RotationTransformationElementBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RotationTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RotationTransformationElement *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RotationTransformationElementBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RotationTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RotationTransformationElement *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RotationTransformationElementBase::shallowCopy(void) const
{
    RotationTransformationElement *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RotationTransformationElement *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

RotationTransformationElementBase::RotationTransformationElementBase(void) :
    Inherited(),
    _sfRotation               (Quaternion(0.0f,0.0f,0.0f,1.0f))
{
}

RotationTransformationElementBase::RotationTransformationElementBase(const RotationTransformationElementBase &source) :
    Inherited(source),
    _sfRotation               (source._sfRotation               )
{
}


/*-------------------------- destructors ----------------------------------*/

RotationTransformationElementBase::~RotationTransformationElementBase(void)
{
}


GetFieldHandlePtr RotationTransformationElementBase::getHandleRotation        (void) const
{
    SFQuaternion::GetHandlePtr returnValue(
        new  SFQuaternion::GetHandle(
             &_sfRotation,
             this->getType().getFieldDesc(RotationFieldId),
             const_cast<RotationTransformationElementBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RotationTransformationElementBase::editHandleRotation       (void)
{
    SFQuaternion::EditHandlePtr returnValue(
        new  SFQuaternion::EditHandle(
             &_sfRotation,
             this->getType().getFieldDesc(RotationFieldId),
             this));


    editSField(RotationFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void RotationTransformationElementBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RotationTransformationElement *pThis = static_cast<RotationTransformationElement *>(this);

    pThis->execSync(static_cast<RotationTransformationElement *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RotationTransformationElementBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RotationTransformationElement *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RotationTransformationElement *>(pRefAspect),
                  dynamic_cast<const RotationTransformationElement *>(this));

    return returnValue;
}
#endif

void RotationTransformationElementBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
