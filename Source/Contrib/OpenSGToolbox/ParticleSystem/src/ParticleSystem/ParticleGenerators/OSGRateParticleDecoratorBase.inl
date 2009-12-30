/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class RateParticleDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RateParticleDecoratorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 RateParticleDecoratorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
RateParticleDecoratorPtr RateParticleDecoratorBase::create(void) 
{
    RateParticleDecoratorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = RateParticleDecoratorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
RateParticleDecoratorPtr RateParticleDecoratorBase::createEmpty(void) 
{ 
    RateParticleDecoratorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the RateParticleDecorator::_sfGenerationRate field.
inline
SFReal32 *RateParticleDecoratorBase::getSFGenerationRate(void)
{
    return &_sfGenerationRate;
}

//! Get the RateParticleDecorator::_sfTimeSinceLastGeneration field.
inline
SFReal32 *RateParticleDecoratorBase::getSFTimeSinceLastGeneration(void)
{
    return &_sfTimeSinceLastGeneration;
}


//! Get the value of the RateParticleDecorator::_sfGenerationRate field.
inline
Real32 &RateParticleDecoratorBase::getGenerationRate(void)
{
    return _sfGenerationRate.getValue();
}

//! Get the value of the RateParticleDecorator::_sfGenerationRate field.
inline
const Real32 &RateParticleDecoratorBase::getGenerationRate(void) const
{
    return _sfGenerationRate.getValue();
}

//! Set the value of the RateParticleDecorator::_sfGenerationRate field.
inline
void RateParticleDecoratorBase::setGenerationRate(const Real32 &value)
{
    _sfGenerationRate.setValue(value);
}

//! Get the value of the RateParticleDecorator::_sfTimeSinceLastGeneration field.
inline
Real32 &RateParticleDecoratorBase::getTimeSinceLastGeneration(void)
{
    return _sfTimeSinceLastGeneration.getValue();
}

//! Get the value of the RateParticleDecorator::_sfTimeSinceLastGeneration field.
inline
const Real32 &RateParticleDecoratorBase::getTimeSinceLastGeneration(void) const
{
    return _sfTimeSinceLastGeneration.getValue();
}

//! Set the value of the RateParticleDecorator::_sfTimeSinceLastGeneration field.
inline
void RateParticleDecoratorBase::setTimeSinceLastGeneration(const Real32 &value)
{
    _sfTimeSinceLastGeneration.setValue(value);
}


OSG_END_NAMESPACE

#define OSGRATEPARTICLEDECORATORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
