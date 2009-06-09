/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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
 **     class PhysicsPistonJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsPistonJointBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsPistonJointBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsPistonJointPtr PhysicsPistonJointBase::create(void) 
{
    PhysicsPistonJointPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsPistonJointPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsPistonJointPtr PhysicsPistonJointBase::createEmpty(void) 
{ 
    PhysicsPistonJointPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsPistonJoint::_sfAnchor field.
inline
SFVec3f *PhysicsPistonJointBase::getSFAnchor(void)
{
    return &_sfAnchor;
}

//! Get the PhysicsPistonJoint::_sfAxis field.
inline
SFVec3f *PhysicsPistonJointBase::getSFAxis(void)
{
    return &_sfAxis;
}

//! Get the PhysicsPistonJoint::_sfHiStop field.
inline
SFReal32 *PhysicsPistonJointBase::getSFHiStop(void)
{
    return &_sfHiStop;
}

//! Get the PhysicsPistonJoint::_sfLoStop field.
inline
SFReal32 *PhysicsPistonJointBase::getSFLoStop(void)
{
    return &_sfLoStop;
}

//! Get the PhysicsPistonJoint::_sfBounce field.
inline
SFReal32 *PhysicsPistonJointBase::getSFBounce(void)
{
    return &_sfBounce;
}

//! Get the PhysicsPistonJoint::_sfCFM field.
inline
SFReal32 *PhysicsPistonJointBase::getSFCFM(void)
{
    return &_sfCFM;
}

//! Get the PhysicsPistonJoint::_sfStopERP field.
inline
SFReal32 *PhysicsPistonJointBase::getSFStopERP(void)
{
    return &_sfStopERP;
}

//! Get the PhysicsPistonJoint::_sfStopCFM field.
inline
SFReal32 *PhysicsPistonJointBase::getSFStopCFM(void)
{
    return &_sfStopCFM;
}

//! Get the PhysicsPistonJoint::_sfHiStop2 field.
inline
SFReal32 *PhysicsPistonJointBase::getSFHiStop2(void)
{
    return &_sfHiStop2;
}

//! Get the PhysicsPistonJoint::_sfLoStop2 field.
inline
SFReal32 *PhysicsPistonJointBase::getSFLoStop2(void)
{
    return &_sfLoStop2;
}

//! Get the PhysicsPistonJoint::_sfBounce2 field.
inline
SFReal32 *PhysicsPistonJointBase::getSFBounce2(void)
{
    return &_sfBounce2;
}

//! Get the PhysicsPistonJoint::_sfCFM2 field.
inline
SFReal32 *PhysicsPistonJointBase::getSFCFM2(void)
{
    return &_sfCFM2;
}

//! Get the PhysicsPistonJoint::_sfStopERP2 field.
inline
SFReal32 *PhysicsPistonJointBase::getSFStopERP2(void)
{
    return &_sfStopERP2;
}

//! Get the PhysicsPistonJoint::_sfStopCFM2 field.
inline
SFReal32 *PhysicsPistonJointBase::getSFStopCFM2(void)
{
    return &_sfStopCFM2;
}


//! Get the value of the PhysicsPistonJoint::_sfAnchor field.
inline
Vec3f &PhysicsPistonJointBase::getAnchor(void)
{
    return _sfAnchor.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfAnchor field.
inline
const Vec3f &PhysicsPistonJointBase::getAnchor(void) const
{
    return _sfAnchor.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfAnchor field.
inline
void PhysicsPistonJointBase::setAnchor(const Vec3f &value)
{
    _sfAnchor.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfAxis field.
inline
Vec3f &PhysicsPistonJointBase::getAxis(void)
{
    return _sfAxis.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfAxis field.
inline
const Vec3f &PhysicsPistonJointBase::getAxis(void) const
{
    return _sfAxis.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfAxis field.
inline
void PhysicsPistonJointBase::setAxis(const Vec3f &value)
{
    _sfAxis.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfHiStop field.
inline
Real32 &PhysicsPistonJointBase::getHiStop(void)
{
    return _sfHiStop.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfHiStop field.
inline
const Real32 &PhysicsPistonJointBase::getHiStop(void) const
{
    return _sfHiStop.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfHiStop field.
inline
void PhysicsPistonJointBase::setHiStop(const Real32 &value)
{
    _sfHiStop.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfLoStop field.
inline
Real32 &PhysicsPistonJointBase::getLoStop(void)
{
    return _sfLoStop.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfLoStop field.
inline
const Real32 &PhysicsPistonJointBase::getLoStop(void) const
{
    return _sfLoStop.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfLoStop field.
inline
void PhysicsPistonJointBase::setLoStop(const Real32 &value)
{
    _sfLoStop.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfBounce field.
inline
Real32 &PhysicsPistonJointBase::getBounce(void)
{
    return _sfBounce.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfBounce field.
inline
const Real32 &PhysicsPistonJointBase::getBounce(void) const
{
    return _sfBounce.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfBounce field.
inline
void PhysicsPistonJointBase::setBounce(const Real32 &value)
{
    _sfBounce.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfCFM field.
inline
Real32 &PhysicsPistonJointBase::getCFM(void)
{
    return _sfCFM.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfCFM field.
inline
const Real32 &PhysicsPistonJointBase::getCFM(void) const
{
    return _sfCFM.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfCFM field.
inline
void PhysicsPistonJointBase::setCFM(const Real32 &value)
{
    _sfCFM.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfStopERP field.
inline
Real32 &PhysicsPistonJointBase::getStopERP(void)
{
    return _sfStopERP.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfStopERP field.
inline
const Real32 &PhysicsPistonJointBase::getStopERP(void) const
{
    return _sfStopERP.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfStopERP field.
inline
void PhysicsPistonJointBase::setStopERP(const Real32 &value)
{
    _sfStopERP.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfStopCFM field.
inline
Real32 &PhysicsPistonJointBase::getStopCFM(void)
{
    return _sfStopCFM.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfStopCFM field.
inline
const Real32 &PhysicsPistonJointBase::getStopCFM(void) const
{
    return _sfStopCFM.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfStopCFM field.
inline
void PhysicsPistonJointBase::setStopCFM(const Real32 &value)
{
    _sfStopCFM.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfHiStop2 field.
inline
Real32 &PhysicsPistonJointBase::getHiStop2(void)
{
    return _sfHiStop2.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfHiStop2 field.
inline
const Real32 &PhysicsPistonJointBase::getHiStop2(void) const
{
    return _sfHiStop2.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfHiStop2 field.
inline
void PhysicsPistonJointBase::setHiStop2(const Real32 &value)
{
    _sfHiStop2.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfLoStop2 field.
inline
Real32 &PhysicsPistonJointBase::getLoStop2(void)
{
    return _sfLoStop2.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfLoStop2 field.
inline
const Real32 &PhysicsPistonJointBase::getLoStop2(void) const
{
    return _sfLoStop2.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfLoStop2 field.
inline
void PhysicsPistonJointBase::setLoStop2(const Real32 &value)
{
    _sfLoStop2.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfBounce2 field.
inline
Real32 &PhysicsPistonJointBase::getBounce2(void)
{
    return _sfBounce2.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfBounce2 field.
inline
const Real32 &PhysicsPistonJointBase::getBounce2(void) const
{
    return _sfBounce2.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfBounce2 field.
inline
void PhysicsPistonJointBase::setBounce2(const Real32 &value)
{
    _sfBounce2.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfCFM2 field.
inline
Real32 &PhysicsPistonJointBase::getCFM2(void)
{
    return _sfCFM2.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfCFM2 field.
inline
const Real32 &PhysicsPistonJointBase::getCFM2(void) const
{
    return _sfCFM2.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfCFM2 field.
inline
void PhysicsPistonJointBase::setCFM2(const Real32 &value)
{
    _sfCFM2.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfStopERP2 field.
inline
Real32 &PhysicsPistonJointBase::getStopERP2(void)
{
    return _sfStopERP2.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfStopERP2 field.
inline
const Real32 &PhysicsPistonJointBase::getStopERP2(void) const
{
    return _sfStopERP2.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfStopERP2 field.
inline
void PhysicsPistonJointBase::setStopERP2(const Real32 &value)
{
    _sfStopERP2.setValue(value);
}

//! Get the value of the PhysicsPistonJoint::_sfStopCFM2 field.
inline
Real32 &PhysicsPistonJointBase::getStopCFM2(void)
{
    return _sfStopCFM2.getValue();
}

//! Get the value of the PhysicsPistonJoint::_sfStopCFM2 field.
inline
const Real32 &PhysicsPistonJointBase::getStopCFM2(void) const
{
    return _sfStopCFM2.getValue();
}

//! Set the value of the PhysicsPistonJoint::_sfStopCFM2 field.
inline
void PhysicsPistonJointBase::setStopCFM2(const Real32 &value)
{
    _sfStopCFM2.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPHYSICSPISTONJOINTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
