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
 **     class MatrixTransformationElement!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGMatrixTransformationElementBase.h"
#include "OSGMatrixTransformationElement.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MatrixTransformationElement
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Matrix          MatrixTransformationElementBase::_sfMatrix
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MatrixTransformationElement *>::_type("MatrixTransformationElementPtr", "TransformationElementPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MatrixTransformationElement *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MatrixTransformationElement *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MatrixTransformationElement *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MatrixTransformationElementBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "Matrix",
        "",
        MatrixFieldId, MatrixFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MatrixTransformationElement::editHandleMatrix),
        static_cast<FieldGetMethodSig >(&MatrixTransformationElement::getHandleMatrix));

    oType.addInitialDesc(pDesc);
}


MatrixTransformationElementBase::TypeObject MatrixTransformationElementBase::_type(
    MatrixTransformationElementBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&MatrixTransformationElementBase::createEmptyLocal),
    MatrixTransformationElement::initMethod,
    MatrixTransformationElement::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MatrixTransformationElement::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MatrixTransformationElement\"\n"
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
    "\t\tname=\"Matrix\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MatrixTransformationElementBase::getType(void)
{
    return _type;
}

const FieldContainerType &MatrixTransformationElementBase::getType(void) const
{
    return _type;
}

UInt32 MatrixTransformationElementBase::getContainerSize(void) const
{
    return sizeof(MatrixTransformationElement);
}

/*------------------------- decorator get ------------------------------*/


SFMatrix *MatrixTransformationElementBase::editSFMatrix(void)
{
    editSField(MatrixFieldMask);

    return &_sfMatrix;
}

const SFMatrix *MatrixTransformationElementBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}






/*------------------------------ access -----------------------------------*/

UInt32 MatrixTransformationElementBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        returnValue += _sfMatrix.getBinSize();
    }

    return returnValue;
}

void MatrixTransformationElementBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyToBin(pMem);
    }
}

void MatrixTransformationElementBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MatrixTransformationElementTransitPtr MatrixTransformationElementBase::createLocal(BitVector bFlags)
{
    MatrixTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MatrixTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MatrixTransformationElementTransitPtr MatrixTransformationElementBase::createDependent(BitVector bFlags)
{
    MatrixTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MatrixTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MatrixTransformationElementTransitPtr MatrixTransformationElementBase::create(void)
{
    MatrixTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MatrixTransformationElement>(tmpPtr);
    }

    return fc;
}

MatrixTransformationElement *MatrixTransformationElementBase::createEmptyLocal(BitVector bFlags)
{
    MatrixTransformationElement *returnValue;

    newPtr<MatrixTransformationElement>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MatrixTransformationElement *MatrixTransformationElementBase::createEmpty(void)
{
    MatrixTransformationElement *returnValue;

    newPtr<MatrixTransformationElement>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr MatrixTransformationElementBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MatrixTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MatrixTransformationElement *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MatrixTransformationElementBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MatrixTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MatrixTransformationElement *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MatrixTransformationElementBase::shallowCopy(void) const
{
    MatrixTransformationElement *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MatrixTransformationElement *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MatrixTransformationElementBase::MatrixTransformationElementBase(void) :
    Inherited(),
    _sfMatrix                 ()
{
}

MatrixTransformationElementBase::MatrixTransformationElementBase(const MatrixTransformationElementBase &source) :
    Inherited(source),
    _sfMatrix                 (source._sfMatrix                 )
{
}


/*-------------------------- destructors ----------------------------------*/

MatrixTransformationElementBase::~MatrixTransformationElementBase(void)
{
}


GetFieldHandlePtr MatrixTransformationElementBase::getHandleMatrix          (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             const_cast<MatrixTransformationElementBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MatrixTransformationElementBase::editHandleMatrix         (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             this));


    editSField(MatrixFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void MatrixTransformationElementBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MatrixTransformationElement *pThis = static_cast<MatrixTransformationElement *>(this);

    pThis->execSync(static_cast<MatrixTransformationElement *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MatrixTransformationElementBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MatrixTransformationElement *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MatrixTransformationElement *>(pRefAspect),
                  dynamic_cast<const MatrixTransformationElement *>(this));

    return returnValue;
}
#endif

void MatrixTransformationElementBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
