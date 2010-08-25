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
 **     class PhysicsCharacteristicsDrawable!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGNode.h"                    // Root Class

#include "OSGPhysicsCharacteristicsDrawableBase.h"
#include "OSGPhysicsCharacteristicsDrawable.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PhysicsCharacteristicsDrawable
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Node *          PhysicsCharacteristicsDrawableBase::_sfRoot
    
*/

/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawGeoms
    
*/

/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfGeomColor
    
*/

/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawJoints
    
*/

/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfJointColor
    
*/

/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawBodies
    
*/

/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfBodyColor
    
*/

/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawSpaces
    
*/

/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfSpaceColor
    
*/

/*! \var bool            PhysicsCharacteristicsDrawableBase::_sfDrawWorlds
    
*/

/*! \var Color4f         PhysicsCharacteristicsDrawableBase::_sfWorldColor
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PhysicsCharacteristicsDrawable *>::_type("PhysicsCharacteristicsDrawablePtr", "DrawablePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PhysicsCharacteristicsDrawable *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PhysicsCharacteristicsDrawable *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PhysicsCharacteristicsDrawable *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PhysicsCharacteristicsDrawableBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "Root",
        "",
        RootFieldId, RootFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleRoot),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleRoot));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "DrawGeoms",
        "",
        DrawGeomsFieldId, DrawGeomsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleDrawGeoms),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleDrawGeoms));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "GeomColor",
        "",
        GeomColorFieldId, GeomColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleGeomColor),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleGeomColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "DrawJoints",
        "",
        DrawJointsFieldId, DrawJointsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleDrawJoints),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleDrawJoints));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "JointColor",
        "",
        JointColorFieldId, JointColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleJointColor),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleJointColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "DrawBodies",
        "",
        DrawBodiesFieldId, DrawBodiesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleDrawBodies),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleDrawBodies));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "BodyColor",
        "",
        BodyColorFieldId, BodyColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleBodyColor),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleBodyColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "DrawSpaces",
        "",
        DrawSpacesFieldId, DrawSpacesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleDrawSpaces),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleDrawSpaces));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "SpaceColor",
        "",
        SpaceColorFieldId, SpaceColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleSpaceColor),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleSpaceColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "DrawWorlds",
        "",
        DrawWorldsFieldId, DrawWorldsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleDrawWorlds),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleDrawWorlds));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "WorldColor",
        "",
        WorldColorFieldId, WorldColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PhysicsCharacteristicsDrawable::editHandleWorldColor),
        static_cast<FieldGetMethodSig >(&PhysicsCharacteristicsDrawable::getHandleWorldColor));

    oType.addInitialDesc(pDesc);
}


PhysicsCharacteristicsDrawableBase::TypeObject PhysicsCharacteristicsDrawableBase::_type(
    PhysicsCharacteristicsDrawableBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PhysicsCharacteristicsDrawableBase::createEmptyLocal),
    PhysicsCharacteristicsDrawable::initMethod,
    PhysicsCharacteristicsDrawable::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PhysicsCharacteristicsDrawable::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PhysicsCharacteristicsDrawable\"\n"
    "\tparent=\"Drawable\"\n"
    "    library=\"ContribPhysics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"Root\"\n"
    "\t\ttype=\"Node\"\n"
    "        category=\"weakpointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DrawGeoms\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"GeomColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,0.5\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DrawJoints\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"JointColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DrawBodies\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"BodyColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DrawSpaces\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SpaceColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,0.5\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"DrawWorlds\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"WorldColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,0.5\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsCharacteristicsDrawableBase::getType(void)
{
    return _type;
}

const FieldContainerType &PhysicsCharacteristicsDrawableBase::getType(void) const
{
    return _type;
}

UInt32 PhysicsCharacteristicsDrawableBase::getContainerSize(void) const
{
    return sizeof(PhysicsCharacteristicsDrawable);
}

/*------------------------- decorator get ------------------------------*/


//! Get the PhysicsCharacteristicsDrawable::_sfRoot field.
const SFWeakNodePtr *PhysicsCharacteristicsDrawableBase::getSFRoot(void) const
{
    return &_sfRoot;
}

SFWeakNodePtr       *PhysicsCharacteristicsDrawableBase::editSFRoot           (void)
{
    editSField(RootFieldMask);

    return &_sfRoot;
}

SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawGeoms(void)
{
    editSField(DrawGeomsFieldMask);

    return &_sfDrawGeoms;
}

const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawGeoms(void) const
{
    return &_sfDrawGeoms;
}


SFColor4f *PhysicsCharacteristicsDrawableBase::editSFGeomColor(void)
{
    editSField(GeomColorFieldMask);

    return &_sfGeomColor;
}

const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFGeomColor(void) const
{
    return &_sfGeomColor;
}


SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawJoints(void)
{
    editSField(DrawJointsFieldMask);

    return &_sfDrawJoints;
}

const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawJoints(void) const
{
    return &_sfDrawJoints;
}


SFColor4f *PhysicsCharacteristicsDrawableBase::editSFJointColor(void)
{
    editSField(JointColorFieldMask);

    return &_sfJointColor;
}

const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFJointColor(void) const
{
    return &_sfJointColor;
}


SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawBodies(void)
{
    editSField(DrawBodiesFieldMask);

    return &_sfDrawBodies;
}

const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawBodies(void) const
{
    return &_sfDrawBodies;
}


SFColor4f *PhysicsCharacteristicsDrawableBase::editSFBodyColor(void)
{
    editSField(BodyColorFieldMask);

    return &_sfBodyColor;
}

const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFBodyColor(void) const
{
    return &_sfBodyColor;
}


SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawSpaces(void)
{
    editSField(DrawSpacesFieldMask);

    return &_sfDrawSpaces;
}

const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawSpaces(void) const
{
    return &_sfDrawSpaces;
}


SFColor4f *PhysicsCharacteristicsDrawableBase::editSFSpaceColor(void)
{
    editSField(SpaceColorFieldMask);

    return &_sfSpaceColor;
}

const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFSpaceColor(void) const
{
    return &_sfSpaceColor;
}


SFBool *PhysicsCharacteristicsDrawableBase::editSFDrawWorlds(void)
{
    editSField(DrawWorldsFieldMask);

    return &_sfDrawWorlds;
}

const SFBool *PhysicsCharacteristicsDrawableBase::getSFDrawWorlds(void) const
{
    return &_sfDrawWorlds;
}


SFColor4f *PhysicsCharacteristicsDrawableBase::editSFWorldColor(void)
{
    editSField(WorldColorFieldMask);

    return &_sfWorldColor;
}

const SFColor4f *PhysicsCharacteristicsDrawableBase::getSFWorldColor(void) const
{
    return &_sfWorldColor;
}






/*------------------------------ access -----------------------------------*/

UInt32 PhysicsCharacteristicsDrawableBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
    }
    if(FieldBits::NoField != (DrawGeomsFieldMask & whichField))
    {
        returnValue += _sfDrawGeoms.getBinSize();
    }
    if(FieldBits::NoField != (GeomColorFieldMask & whichField))
    {
        returnValue += _sfGeomColor.getBinSize();
    }
    if(FieldBits::NoField != (DrawJointsFieldMask & whichField))
    {
        returnValue += _sfDrawJoints.getBinSize();
    }
    if(FieldBits::NoField != (JointColorFieldMask & whichField))
    {
        returnValue += _sfJointColor.getBinSize();
    }
    if(FieldBits::NoField != (DrawBodiesFieldMask & whichField))
    {
        returnValue += _sfDrawBodies.getBinSize();
    }
    if(FieldBits::NoField != (BodyColorFieldMask & whichField))
    {
        returnValue += _sfBodyColor.getBinSize();
    }
    if(FieldBits::NoField != (DrawSpacesFieldMask & whichField))
    {
        returnValue += _sfDrawSpaces.getBinSize();
    }
    if(FieldBits::NoField != (SpaceColorFieldMask & whichField))
    {
        returnValue += _sfSpaceColor.getBinSize();
    }
    if(FieldBits::NoField != (DrawWorldsFieldMask & whichField))
    {
        returnValue += _sfDrawWorlds.getBinSize();
    }
    if(FieldBits::NoField != (WorldColorFieldMask & whichField))
    {
        returnValue += _sfWorldColor.getBinSize();
    }

    return returnValue;
}

void PhysicsCharacteristicsDrawableBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawGeomsFieldMask & whichField))
    {
        _sfDrawGeoms.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeomColorFieldMask & whichField))
    {
        _sfGeomColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawJointsFieldMask & whichField))
    {
        _sfDrawJoints.copyToBin(pMem);
    }
    if(FieldBits::NoField != (JointColorFieldMask & whichField))
    {
        _sfJointColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawBodiesFieldMask & whichField))
    {
        _sfDrawBodies.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BodyColorFieldMask & whichField))
    {
        _sfBodyColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawSpacesFieldMask & whichField))
    {
        _sfDrawSpaces.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpaceColorFieldMask & whichField))
    {
        _sfSpaceColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawWorldsFieldMask & whichField))
    {
        _sfDrawWorlds.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WorldColorFieldMask & whichField))
    {
        _sfWorldColor.copyToBin(pMem);
    }
}

void PhysicsCharacteristicsDrawableBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawGeomsFieldMask & whichField))
    {
        _sfDrawGeoms.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeomColorFieldMask & whichField))
    {
        _sfGeomColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawJointsFieldMask & whichField))
    {
        _sfDrawJoints.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (JointColorFieldMask & whichField))
    {
        _sfJointColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawBodiesFieldMask & whichField))
    {
        _sfDrawBodies.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BodyColorFieldMask & whichField))
    {
        _sfBodyColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawSpacesFieldMask & whichField))
    {
        _sfDrawSpaces.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpaceColorFieldMask & whichField))
    {
        _sfSpaceColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawWorldsFieldMask & whichField))
    {
        _sfDrawWorlds.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WorldColorFieldMask & whichField))
    {
        _sfWorldColor.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PhysicsCharacteristicsDrawableTransitPtr PhysicsCharacteristicsDrawableBase::createLocal(BitVector bFlags)
{
    PhysicsCharacteristicsDrawableTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PhysicsCharacteristicsDrawable>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PhysicsCharacteristicsDrawableTransitPtr PhysicsCharacteristicsDrawableBase::createDependent(BitVector bFlags)
{
    PhysicsCharacteristicsDrawableTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PhysicsCharacteristicsDrawable>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PhysicsCharacteristicsDrawableTransitPtr PhysicsCharacteristicsDrawableBase::create(void)
{
    PhysicsCharacteristicsDrawableTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PhysicsCharacteristicsDrawable>(tmpPtr);
    }

    return fc;
}

PhysicsCharacteristicsDrawable *PhysicsCharacteristicsDrawableBase::createEmptyLocal(BitVector bFlags)
{
    PhysicsCharacteristicsDrawable *returnValue;

    newPtr<PhysicsCharacteristicsDrawable>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PhysicsCharacteristicsDrawable *PhysicsCharacteristicsDrawableBase::createEmpty(void)
{
    PhysicsCharacteristicsDrawable *returnValue;

    newPtr<PhysicsCharacteristicsDrawable>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PhysicsCharacteristicsDrawableBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PhysicsCharacteristicsDrawable *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsCharacteristicsDrawable *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsCharacteristicsDrawableBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PhysicsCharacteristicsDrawable *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PhysicsCharacteristicsDrawable *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PhysicsCharacteristicsDrawableBase::shallowCopy(void) const
{
    PhysicsCharacteristicsDrawable *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PhysicsCharacteristicsDrawable *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PhysicsCharacteristicsDrawableBase::PhysicsCharacteristicsDrawableBase(void) :
    Inherited(),
    _sfRoot                   (NULL),
    _sfDrawGeoms              (bool(true)),
    _sfGeomColor              (Color4f(1.0,1.0,1.0,0.5)),
    _sfDrawJoints             (bool(true)),
    _sfJointColor             (Color4f(1.0,1.0,1.0,1.0)),
    _sfDrawBodies             (bool(true)),
    _sfBodyColor              (Color4f(1.0,1.0,1.0,1.0)),
    _sfDrawSpaces             (bool(true)),
    _sfSpaceColor             (Color4f(1.0,1.0,1.0,0.5)),
    _sfDrawWorlds             (bool(true)),
    _sfWorldColor             (Color4f(1.0,1.0,1.0,0.5))
{
}

PhysicsCharacteristicsDrawableBase::PhysicsCharacteristicsDrawableBase(const PhysicsCharacteristicsDrawableBase &source) :
    Inherited(source),
    _sfRoot                   (NULL),
    _sfDrawGeoms              (source._sfDrawGeoms              ),
    _sfGeomColor              (source._sfGeomColor              ),
    _sfDrawJoints             (source._sfDrawJoints             ),
    _sfJointColor             (source._sfJointColor             ),
    _sfDrawBodies             (source._sfDrawBodies             ),
    _sfBodyColor              (source._sfBodyColor              ),
    _sfDrawSpaces             (source._sfDrawSpaces             ),
    _sfSpaceColor             (source._sfSpaceColor             ),
    _sfDrawWorlds             (source._sfDrawWorlds             ),
    _sfWorldColor             (source._sfWorldColor             )
{
}


/*-------------------------- destructors ----------------------------------*/

PhysicsCharacteristicsDrawableBase::~PhysicsCharacteristicsDrawableBase(void)
{
}

void PhysicsCharacteristicsDrawableBase::onCreate(const PhysicsCharacteristicsDrawable *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        PhysicsCharacteristicsDrawable *pThis = static_cast<PhysicsCharacteristicsDrawable *>(this);

        pThis->setRoot(source->getRoot());
    }
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleRoot            (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfRoot,
             this->getType().getFieldDesc(RootFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleRoot           (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfRoot,
             this->getType().getFieldDesc(RootFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&PhysicsCharacteristicsDrawable::setRoot,
                    static_cast<PhysicsCharacteristicsDrawable *>(this), _1));

    editSField(RootFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleDrawGeoms       (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfDrawGeoms,
             this->getType().getFieldDesc(DrawGeomsFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleDrawGeoms      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfDrawGeoms,
             this->getType().getFieldDesc(DrawGeomsFieldId),
             this));


    editSField(DrawGeomsFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleGeomColor       (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfGeomColor,
             this->getType().getFieldDesc(GeomColorFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleGeomColor      (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfGeomColor,
             this->getType().getFieldDesc(GeomColorFieldId),
             this));


    editSField(GeomColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleDrawJoints      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfDrawJoints,
             this->getType().getFieldDesc(DrawJointsFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleDrawJoints     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfDrawJoints,
             this->getType().getFieldDesc(DrawJointsFieldId),
             this));


    editSField(DrawJointsFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleJointColor      (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfJointColor,
             this->getType().getFieldDesc(JointColorFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleJointColor     (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfJointColor,
             this->getType().getFieldDesc(JointColorFieldId),
             this));


    editSField(JointColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleDrawBodies      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfDrawBodies,
             this->getType().getFieldDesc(DrawBodiesFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleDrawBodies     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfDrawBodies,
             this->getType().getFieldDesc(DrawBodiesFieldId),
             this));


    editSField(DrawBodiesFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleBodyColor       (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfBodyColor,
             this->getType().getFieldDesc(BodyColorFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleBodyColor      (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfBodyColor,
             this->getType().getFieldDesc(BodyColorFieldId),
             this));


    editSField(BodyColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleDrawSpaces      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfDrawSpaces,
             this->getType().getFieldDesc(DrawSpacesFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleDrawSpaces     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfDrawSpaces,
             this->getType().getFieldDesc(DrawSpacesFieldId),
             this));


    editSField(DrawSpacesFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleSpaceColor      (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfSpaceColor,
             this->getType().getFieldDesc(SpaceColorFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleSpaceColor     (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfSpaceColor,
             this->getType().getFieldDesc(SpaceColorFieldId),
             this));


    editSField(SpaceColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleDrawWorlds      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfDrawWorlds,
             this->getType().getFieldDesc(DrawWorldsFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleDrawWorlds     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfDrawWorlds,
             this->getType().getFieldDesc(DrawWorldsFieldId),
             this));


    editSField(DrawWorldsFieldMask);

    return returnValue;
}

GetFieldHandlePtr PhysicsCharacteristicsDrawableBase::getHandleWorldColor      (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfWorldColor,
             this->getType().getFieldDesc(WorldColorFieldId),
             const_cast<PhysicsCharacteristicsDrawableBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PhysicsCharacteristicsDrawableBase::editHandleWorldColor     (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfWorldColor,
             this->getType().getFieldDesc(WorldColorFieldId),
             this));


    editSField(WorldColorFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void PhysicsCharacteristicsDrawableBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PhysicsCharacteristicsDrawable *pThis = static_cast<PhysicsCharacteristicsDrawable *>(this);

    pThis->execSync(static_cast<PhysicsCharacteristicsDrawable *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PhysicsCharacteristicsDrawableBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PhysicsCharacteristicsDrawable *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PhysicsCharacteristicsDrawable *>(pRefAspect),
                  dynamic_cast<const PhysicsCharacteristicsDrawable *>(this));

    return returnValue;
}
#endif

void PhysicsCharacteristicsDrawableBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<PhysicsCharacteristicsDrawable *>(this)->setRoot(NULL);


}


OSG_END_NAMESPACE
