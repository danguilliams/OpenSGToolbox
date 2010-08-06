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
 **     class GenericMultiFieldEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGGenericMultiFieldEditorBase.h"
#include "OSGGenericMultiFieldEditor.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GenericMultiFieldEditor
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GenericMultiFieldEditor *>::_type("GenericMultiFieldEditorPtr", "MultiFieldEditorComponentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GenericMultiFieldEditor *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GenericMultiFieldEditor *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GenericMultiFieldEditor *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GenericMultiFieldEditorBase::classDescInserter(TypeObject &oType)
{
}


GenericMultiFieldEditorBase::TypeObject GenericMultiFieldEditorBase::_type(
    GenericMultiFieldEditorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&GenericMultiFieldEditorBase::createEmptyLocal),
    GenericMultiFieldEditor::initMethod,
    GenericMultiFieldEditor::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GenericMultiFieldEditor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GenericMultiFieldEditor\"\n"
    "\tparent=\"MultiFieldEditorComponent\"\n"
    "    library=\"ContribFieldContainerEditor\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GenericMultiFieldEditorBase::getType(void)
{
    return _type;
}

const FieldContainerType &GenericMultiFieldEditorBase::getType(void) const
{
    return _type;
}

UInt32 GenericMultiFieldEditorBase::getContainerSize(void) const
{
    return sizeof(GenericMultiFieldEditor);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 GenericMultiFieldEditorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GenericMultiFieldEditorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GenericMultiFieldEditorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
GenericMultiFieldEditorTransitPtr GenericMultiFieldEditorBase::createLocal(BitVector bFlags)
{
    GenericMultiFieldEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GenericMultiFieldEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GenericMultiFieldEditorTransitPtr GenericMultiFieldEditorBase::createDependent(BitVector bFlags)
{
    GenericMultiFieldEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GenericMultiFieldEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GenericMultiFieldEditorTransitPtr GenericMultiFieldEditorBase::create(void)
{
    GenericMultiFieldEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GenericMultiFieldEditor>(tmpPtr);
    }

    return fc;
}

GenericMultiFieldEditor *GenericMultiFieldEditorBase::createEmptyLocal(BitVector bFlags)
{
    GenericMultiFieldEditor *returnValue;

    newPtr<GenericMultiFieldEditor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GenericMultiFieldEditor *GenericMultiFieldEditorBase::createEmpty(void)
{
    GenericMultiFieldEditor *returnValue;

    newPtr<GenericMultiFieldEditor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GenericMultiFieldEditorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GenericMultiFieldEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GenericMultiFieldEditor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GenericMultiFieldEditorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GenericMultiFieldEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GenericMultiFieldEditor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GenericMultiFieldEditorBase::shallowCopy(void) const
{
    GenericMultiFieldEditor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GenericMultiFieldEditor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GenericMultiFieldEditorBase::GenericMultiFieldEditorBase(void) :
    Inherited()
{
}

GenericMultiFieldEditorBase::GenericMultiFieldEditorBase(const GenericMultiFieldEditorBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GenericMultiFieldEditorBase::~GenericMultiFieldEditorBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GenericMultiFieldEditorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GenericMultiFieldEditor *pThis = static_cast<GenericMultiFieldEditor *>(this);

    pThis->execSync(static_cast<GenericMultiFieldEditor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GenericMultiFieldEditorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GenericMultiFieldEditor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GenericMultiFieldEditor *>(pRefAspect),
                  dynamic_cast<const GenericMultiFieldEditor *>(this));

    return returnValue;
}
#endif

void GenericMultiFieldEditorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
