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
 **     class PolygonBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGPolygonBorderBase.h"
#include "OSGPolygonBorder.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PolygonBorder
    UI Polygon Border.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          PolygonBorderBase::_sfWidth
    
*/

/*! \var Color4f         PolygonBorderBase::_sfColor
    
*/

/*! \var Pnt2f           PolygonBorderBase::_mfVertices
    
*/

/*! \var Pnt2f           PolygonBorderBase::_mfDrawnQuads
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PolygonBorder *>::_type("PolygonBorderPtr", "BorderPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PolygonBorder *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PolygonBorder *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PolygonBorder *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PolygonBorderBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBorder::editHandleWidth),
        static_cast<FieldGetMethodSig >(&PolygonBorder::getHandleWidth));

    oType.addInitialDesc(pDesc);


    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "Color",
        "",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBorder::editHandleColor),
        static_cast<FieldGetMethodSig >(&PolygonBorder::getHandleColor));

    oType.addInitialDesc(pDesc);


    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "Vertices",
        "",
        VerticesFieldId, VerticesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBorder::editHandleVertices),
        static_cast<FieldGetMethodSig >(&PolygonBorder::getHandleVertices));

    oType.addInitialDesc(pDesc);


    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "DrawnQuads",
        "",
        DrawnQuadsFieldId, DrawnQuadsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonBorder::editHandleDrawnQuads),
        static_cast<FieldGetMethodSig >(&PolygonBorder::getHandleDrawnQuads));

    oType.addInitialDesc(pDesc);

}


PolygonBorderBase::TypeObject PolygonBorderBase::_type(
    PolygonBorderBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PolygonBorderBase::createEmptyLocal),
    PolygonBorder::initMethod,
    PolygonBorder::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PolygonBorder::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PolygonBorder\"\n"
    "\tparent=\"Border\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "UI Polygon Border.\n"
    "\t<Field\n"
    "\t\tname=\"Width\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Color\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,0.0,1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Vertices\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DrawnQuads\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "UI Polygon Border.\n"
    );


/*------------------------------ get -----------------------------------*/

FieldContainerType &PolygonBorderBase::getType(void)
{
    return _type;
}

const FieldContainerType &PolygonBorderBase::getType(void) const
{
    return _type;
}

UInt32 PolygonBorderBase::getContainerSize(void) const
{
    return sizeof(PolygonBorder);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *PolygonBorderBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFReal32 *PolygonBorderBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFColor4f *PolygonBorderBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor4f *PolygonBorderBase::getSFColor(void) const
{
    return &_sfColor;
}


MFPnt2f *PolygonBorderBase::editMFVertices(void)
{
    editMField(VerticesFieldMask, _mfVertices);

    return &_mfVertices;
}

const MFPnt2f *PolygonBorderBase::getMFVertices(void) const
{
    return &_mfVertices;
}


MFPnt2f *PolygonBorderBase::editMFDrawnQuads(void)
{
    editMField(DrawnQuadsFieldMask, _mfDrawnQuads);

    return &_mfDrawnQuads;
}

const MFPnt2f *PolygonBorderBase::getMFDrawnQuads(void) const
{
    return &_mfDrawnQuads;
}






/*------------------------------ access -----------------------------------*/

UInt32 PolygonBorderBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (VerticesFieldMask & whichField))
    {
        returnValue += _mfVertices.getBinSize();
    }
    if(FieldBits::NoField != (DrawnQuadsFieldMask & whichField))
    {
        returnValue += _mfDrawnQuads.getBinSize();
    }

    return returnValue;
}

void PolygonBorderBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VerticesFieldMask & whichField))
    {
        _mfVertices.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawnQuadsFieldMask & whichField))
    {
        _mfDrawnQuads.copyToBin(pMem);
    }
}

void PolygonBorderBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VerticesFieldMask & whichField))
    {
        _mfVertices.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawnQuadsFieldMask & whichField))
    {
        _mfDrawnQuads.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PolygonBorderTransitPtr PolygonBorderBase::createLocal(BitVector bFlags)
{
    PolygonBorderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PolygonBorder>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PolygonBorderTransitPtr PolygonBorderBase::createDependent(BitVector bFlags)
{
    PolygonBorderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PolygonBorder>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PolygonBorderTransitPtr PolygonBorderBase::create(void)
{
    PolygonBorderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PolygonBorder>(tmpPtr);
    }

    return fc;
}

PolygonBorder *PolygonBorderBase::createEmptyLocal(BitVector bFlags)
{
    PolygonBorder *returnValue;

    newPtr<PolygonBorder>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PolygonBorder *PolygonBorderBase::createEmpty(void)
{
    PolygonBorder *returnValue;

    newPtr<PolygonBorder>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PolygonBorderBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PolygonBorder *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PolygonBorder *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PolygonBorderBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PolygonBorder *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PolygonBorder *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PolygonBorderBase::shallowCopy(void) const
{
    PolygonBorder *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PolygonBorder *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PolygonBorderBase::PolygonBorderBase(void) :
    Inherited(),
    _sfWidth                  (Real32(1)),
    _sfColor                  (Color4f(0.0,0.0,0.0,1.0)),
    _mfVertices               (),
    _mfDrawnQuads             ()
{
}

PolygonBorderBase::PolygonBorderBase(const PolygonBorderBase &source) :
    Inherited(source),
    _sfWidth                  (source._sfWidth                  ),
    _sfColor                  (source._sfColor                  ),
    _mfVertices               (source._mfVertices               ),
    _mfDrawnQuads             (source._mfDrawnQuads             )
{
}


/*-------------------------- destructors ----------------------------------*/

PolygonBorderBase::~PolygonBorderBase(void)
{
}


GetFieldHandlePtr PolygonBorderBase::getHandleWidth           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             const_cast<PolygonBorderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBorderBase::editHandleWidth          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             this));


    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBorderBase::getHandleColor           (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             const_cast<PolygonBorderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBorderBase::editHandleColor          (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             this));


    editSField(ColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonBorderBase::getHandleVertices        (void) const
{
    MFPnt2f::GetHandlePtr returnValue(
        new  MFPnt2f::GetHandle(
             &_mfVertices,
             this->getType().getFieldDesc(VerticesFieldId),
             const_cast<PolygonBorderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBorderBase::editHandleVertices       (void)
{
    MFPnt2f::EditHandlePtr returnValue(
        new  MFPnt2f::EditHandle(
             &_mfVertices,
             this->getType().getFieldDesc(VerticesFieldId),
             this));


    editMField(VerticesFieldMask, _mfVertices);

    return returnValue;
}

GetFieldHandlePtr PolygonBorderBase::getHandleDrawnQuads      (void) const
{
    MFPnt2f::GetHandlePtr returnValue(
        new  MFPnt2f::GetHandle(
             &_mfDrawnQuads,
             this->getType().getFieldDesc(DrawnQuadsFieldId),
             const_cast<PolygonBorderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonBorderBase::editHandleDrawnQuads     (void)
{
    MFPnt2f::EditHandlePtr returnValue(
        new  MFPnt2f::EditHandle(
             &_mfDrawnQuads,
             this->getType().getFieldDesc(DrawnQuadsFieldId),
             this));


    editMField(DrawnQuadsFieldMask, _mfDrawnQuads);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PolygonBorderBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PolygonBorder *pThis = static_cast<PolygonBorder *>(this);

    pThis->execSync(static_cast<PolygonBorder *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PolygonBorderBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PolygonBorder *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PolygonBorder *>(pRefAspect),
                  dynamic_cast<const PolygonBorder *>(this));

    return returnValue;
}
#endif

void PolygonBorderBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfVertices.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfDrawnQuads.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE