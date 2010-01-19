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
 **     class PhysicsHandler!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGPhysicsWorld.h"            // World Class
#include "OSGPhysicsSpace.h"            // Spaces Class
#include "OSGNode.h"                    // UpdateNode Class

#include "OSGPhysicsHandlerBase.h"
#include "OSGPhysicsHandler.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PhysicsHandler
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var PhysicsWorld *  PhysicsHandlerBase::_sfWorld
    
*/

/*! \var PhysicsSpace *  PhysicsHandlerBase::_mfSpaces
    
*/

/*! \var Node *          PhysicsHandlerBase::_sfUpdateNode
    
*/

/*! \var Real32          PhysicsHandlerBase::_sfStepSize
    
*/

/*! \var UInt32          PhysicsHandlerBase::_sfMaxStepsPerUpdate
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PhysicsHandler *>::_type("PhysicsHandlerPtr", "AttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PhysicsHandler *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PhysicsHandler *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PhysicsHandler *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PhysicsHandlerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecPhysicsWorldPtr::Description(
        SFUnrecPhysicsWorldPtr::getClassType(),
        "world",
        "",
        WorldFieldId, WorldFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsHandler::editHandleWorld),
        static_cast<FieldGetMethodSig >(&PhysicsHandler::getHandleWorld));

    oType.addInitialDesc(pDesc);


    pDesc = new MFUnrecPhysicsSpacePtr::Description(
        MFUnrecPhysicsSpacePtr::getClassType(),
        "spaces",
        "",
        SpacesFieldId, SpacesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsHandler::editHandleSpaces),
        static_cast<FieldGetMethodSig >(&PhysicsHandler::getHandleSpaces));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "UpdateNode",
        "",
        UpdateNodeFieldId, UpdateNodeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsHandler::editHandleUpdateNode),
        static_cast<FieldGetMethodSig >(&PhysicsHandler::getHandleUpdateNode));

    oType.addInitialDesc(pDesc);


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "StepSize",
        "",
        StepSizeFieldId, StepSizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsHandler::editHandleStepSize),
        static_cast<FieldGetMethodSig >(&PhysicsHandler::getHandleStepSize));

    oType.addInitialDesc(pDesc);


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "MaxStepsPerUpdate",
        "",
        MaxStepsPerUpdateFieldId, MaxStepsPerUpdateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsHandler::editHandleMaxStepsPerUpdate),
        static_cast<FieldGetMethodSig >(&PhysicsHandler::getHandleMaxStepsPerUpdate));

    oType.addInitialDesc(pDesc);

}


PhysicsHandlerBase::TypeObject PhysicsHandlerBase::_type(
    PhysicsHandlerBase::getClassname(),
    Inherited::getClassname(),
    "PhysicsHandler",
    0,
    reinterpret_cast<PrototypeCreateF>(&PhysicsHandlerBase::createEmptyLocal),
    PhysicsHandler::initMethod,
    PhysicsHandler::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PhysicsHandler::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PhysicsHandler\"\n"
    "\tparent=\"Attachment\"\n"
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
    "\t<Field\n"
    "\t\tname=\"world\"\n"
    "\t\ttype=\"PhysicsWorld\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"spaces\"\n"
    "\t\ttype=\"PhysicsSpace\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"UpdateNode\"\n"
    "\t\ttype=\"Node\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"StepSize\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.001\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"MaxStepsPerUpdate\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"75\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsHandlerBase::getType(void)
{
    return _type;
}

const FieldContainerType &PhysicsHandlerBase::getType(void) const
{
    return _type;
}

UInt32 PhysicsHandlerBase::getContainerSize(void) const
{
    return sizeof(PhysicsHandler);
}

/*------------------------- decorator get ------------------------------*/


//! Get the PhysicsHandler::_sfWorld field.
const SFUnrecPhysicsWorldPtr *PhysicsHandlerBase::getSFWorld(void) const
{
    return &_sfWorld;
}

SFUnrecPhysicsWorldPtr *PhysicsHandlerBase::editSFWorld          (void)
{
    editSField(WorldFieldMask);

    return &_sfWorld;
}

//! Get the PhysicsHandler::_mfSpaces field.
const MFUnrecPhysicsSpacePtr *PhysicsHandlerBase::getMFSpaces(void) const
{
    return &_mfSpaces;
}

MFUnrecPhysicsSpacePtr *PhysicsHandlerBase::editMFSpaces         (void)
{
    editMField(SpacesFieldMask, _mfSpaces);

    return &_mfSpaces;
}

//! Get the PhysicsHandler::_sfUpdateNode field.
const SFUnrecNodePtr *PhysicsHandlerBase::getSFUpdateNode(void) const
{
    return &_sfUpdateNode;
}

SFUnrecNodePtr      *PhysicsHandlerBase::editSFUpdateNode     (void)
{
    editSField(UpdateNodeFieldMask);

    return &_sfUpdateNode;
}

SFReal32 *PhysicsHandlerBase::editSFStepSize(void)
{
    editSField(StepSizeFieldMask);

    return &_sfStepSize;
}

const SFReal32 *PhysicsHandlerBase::getSFStepSize(void) const
{
    return &_sfStepSize;
}


SFUInt32 *PhysicsHandlerBase::editSFMaxStepsPerUpdate(void)
{
    editSField(MaxStepsPerUpdateFieldMask);

    return &_sfMaxStepsPerUpdate;
}

const SFUInt32 *PhysicsHandlerBase::getSFMaxStepsPerUpdate(void) const
{
    return &_sfMaxStepsPerUpdate;
}




void PhysicsHandlerBase::pushToSpaces(PhysicsSpace * const value)
{
    editMField(SpacesFieldMask, _mfSpaces);

    _mfSpaces.push_back(value);
}

void PhysicsHandlerBase::assignSpaces   (const MFUnrecPhysicsSpacePtr &value)
{
    MFUnrecPhysicsSpacePtr::const_iterator elemIt  =
        value.begin();
    MFUnrecPhysicsSpacePtr::const_iterator elemEnd =
        value.end  ();

    static_cast<PhysicsHandler *>(this)->clearSpaces();

    while(elemIt != elemEnd)
    {
        this->pushToSpaces(*elemIt);

        ++elemIt;
    }
}

void PhysicsHandlerBase::removeFromSpaces(UInt32 uiIndex)
{
    if(uiIndex < _mfSpaces.size())
    {
        editMField(SpacesFieldMask, _mfSpaces);

        _mfSpaces.erase(uiIndex);
    }
}

void PhysicsHandlerBase::removeObjFromSpaces(PhysicsSpace * const value)
{
    Int32 iElemIdx = _mfSpaces.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(SpacesFieldMask, _mfSpaces);

        _mfSpaces.erase(iElemIdx);
    }
}
void PhysicsHandlerBase::clearSpaces(void)
{
    editMField(SpacesFieldMask, _mfSpaces);


    _mfSpaces.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 PhysicsHandlerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
    {
        returnValue += _sfWorld.getBinSize();
    }
    if(FieldBits::NoField != (SpacesFieldMask & whichField))
    {
        returnValue += _mfSpaces.getBinSize();
    }
    if(FieldBits::NoField != (UpdateNodeFieldMask & whichField))
    {
        returnValue += _sfUpdateNode.getBinSize();
    }
    if(FieldBits::NoField != (StepSizeFieldMask & whichField))
    {
        returnValue += _sfStepSize.getBinSize();
    }
    if(FieldBits::NoField != (MaxStepsPerUpdateFieldMask & whichField))
    {
        returnValue += _sfMaxStepsPerUpdate.getBinSize();
    }

    return returnValue;
}

void PhysicsHandlerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
    {
        _sfWorld.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpacesFieldMask & whichField))
    {
        _mfSpaces.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UpdateNodeFieldMask & whichField))
    {
        _sfUpdateNode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StepSizeFieldMask & whichField))
    {
        _sfStepSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxStepsPerUpdateFieldMask & whichField))
    {
        _sfMaxStepsPerUpdate.copyToBin(pMem);
    }
}

void PhysicsHandlerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WorldFieldMask & whichField))
    {
        _sfWorld.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpacesFieldMask & whichField))
    {
        _mfSpaces.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UpdateNodeFieldMask & whichField))
    {
        _sfUpdateNode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StepSizeFieldMask & whichField))
    {
        _sfStepSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxStepsPerUpdateFieldMask & whichField))
    {
        _sfMaxStepsPerUpdate.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PhysicsHandlerTransitPtr PhysicsHandlerBase::createLocal(BitVector bFlags)
{
    PhysicsHandlerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PhysicsHandler>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PhysicsHandlerTransitPtr PhysicsHandlerBase::createDependent(BitVector bFlags)
{
    PhysicsHandlerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PhysicsHandler>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PhysicsHandlerTransitPtr PhysicsHandlerBase::create(void)
{
    PhysicsHandlerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PhysicsHandler>(tmpPtr);
    }

    return fc;
}

PhysicsHandler *PhysicsHandlerBase::createEmptyLocal(BitVector bFlags)
{
    PhysicsHandler *returnValue;

    newPtr<PhysicsHandler>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PhysicsHandler *PhysicsHandlerBase::createEmpty(void)
{
    PhysicsHandler *returnValue;

    newPtr<PhysicsHandler>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PhysicsHandlerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PhysicsHandler *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsHandler *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsHandlerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PhysicsHandler *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsHandler *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsHandlerBase::shallowCopy(void) const
{
    PhysicsHandler *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PhysicsHandler *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PhysicsHandlerBase::PhysicsHandlerBase(void) :
    Inherited(),
    _sfWorld                  (NULL),
    _mfSpaces                 (),
    _sfUpdateNode             (NULL),
    _sfStepSize               (Real32(0.001)),
    _sfMaxStepsPerUpdate      (UInt32(75))
{
}

PhysicsHandlerBase::PhysicsHandlerBase(const PhysicsHandlerBase &source) :
    Inherited(source),
    _sfWorld                  (NULL),
    _mfSpaces                 (),
    _sfUpdateNode             (NULL),
    _sfStepSize               (source._sfStepSize               ),
    _sfMaxStepsPerUpdate      (source._sfMaxStepsPerUpdate      )
{
}


/*-------------------------- destructors ----------------------------------*/

PhysicsHandlerBase::~PhysicsHandlerBase(void)
{
}

void PhysicsHandlerBase::onCreate(const PhysicsHandler *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        PhysicsHandler *pThis = static_cast<PhysicsHandler *>(this);

        pThis->setWorld(source->getWorld());

        MFUnrecPhysicsSpacePtr::const_iterator SpacesIt  =
            source->_mfSpaces.begin();
        MFUnrecPhysicsSpacePtr::const_iterator SpacesEnd =
            source->_mfSpaces.end  ();

        while(SpacesIt != SpacesEnd)
        {
            pThis->pushToSpaces(*SpacesIt);

            ++SpacesIt;
        }

        pThis->setUpdateNode(source->getUpdateNode());
    }
}

GetFieldHandlePtr PhysicsHandlerBase::getHandleWorld           (void) const
{
    SFUnrecPhysicsWorldPtr::GetHandlePtr returnValue(
        new  SFUnrecPhysicsWorldPtr::GetHandle(
             &_sfWorld,
             this->getType().getFieldDesc(WorldFieldId),
             const_cast<PhysicsHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsHandlerBase::editHandleWorld          (void)
{
    SFUnrecPhysicsWorldPtr::EditHandlePtr returnValue(
        new  SFUnrecPhysicsWorldPtr::EditHandle(
             &_sfWorld,
             this->getType().getFieldDesc(WorldFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&PhysicsHandler::setWorld,
                    static_cast<PhysicsHandler *>(this), _1));

    editSField(WorldFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsHandlerBase::getHandleSpaces          (void) const
{
    MFUnrecPhysicsSpacePtr::GetHandlePtr returnValue(
        new  MFUnrecPhysicsSpacePtr::GetHandle(
             &_mfSpaces,
             this->getType().getFieldDesc(SpacesFieldId),
             const_cast<PhysicsHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsHandlerBase::editHandleSpaces         (void)
{
    MFUnrecPhysicsSpacePtr::EditHandlePtr returnValue(
        new  MFUnrecPhysicsSpacePtr::EditHandle(
             &_mfSpaces,
             this->getType().getFieldDesc(SpacesFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&PhysicsHandler::pushToSpaces,
                    static_cast<PhysicsHandler *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&PhysicsHandler::removeFromSpaces,
                    static_cast<PhysicsHandler *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&PhysicsHandler::removeObjFromSpaces,
                    static_cast<PhysicsHandler *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&PhysicsHandler::clearSpaces,
                    static_cast<PhysicsHandler *>(this)));

    editMField(SpacesFieldMask, _mfSpaces);

    return returnValue;
}

GetFieldHandlePtr PhysicsHandlerBase::getHandleUpdateNode      (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfUpdateNode,
             this->getType().getFieldDesc(UpdateNodeFieldId),
             const_cast<PhysicsHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsHandlerBase::editHandleUpdateNode     (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfUpdateNode,
             this->getType().getFieldDesc(UpdateNodeFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&PhysicsHandler::setUpdateNode,
                    static_cast<PhysicsHandler *>(this), _1));

    editSField(UpdateNodeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsHandlerBase::getHandleStepSize        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStepSize,
             this->getType().getFieldDesc(StepSizeFieldId),
             const_cast<PhysicsHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsHandlerBase::editHandleStepSize       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStepSize,
             this->getType().getFieldDesc(StepSizeFieldId),
             this));


    editSField(StepSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsHandlerBase::getHandleMaxStepsPerUpdate (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfMaxStepsPerUpdate,
             this->getType().getFieldDesc(MaxStepsPerUpdateFieldId),
             const_cast<PhysicsHandlerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsHandlerBase::editHandleMaxStepsPerUpdate(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfMaxStepsPerUpdate,
             this->getType().getFieldDesc(MaxStepsPerUpdateFieldId),
             this));


    editSField(MaxStepsPerUpdateFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PhysicsHandlerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PhysicsHandler *pThis = static_cast<PhysicsHandler *>(this);

    pThis->execSync(static_cast<PhysicsHandler *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PhysicsHandlerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PhysicsHandler *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PhysicsHandler *>(pRefAspect),
                  dynamic_cast<const PhysicsHandler *>(this));

    return returnValue;
}
#endif

void PhysicsHandlerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<PhysicsHandler *>(this)->setWorld(NULL);

    static_cast<PhysicsHandler *>(this)->clearSpaces();

    static_cast<PhysicsHandler *>(this)->setUpdateNode(NULL);


}


OSG_END_NAMESPACE
