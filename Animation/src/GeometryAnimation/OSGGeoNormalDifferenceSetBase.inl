/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class GeoNormalDifferenceSet!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GeoNormalDifferenceSetBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GeoNormalDifferenceSetBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
GeoNormalDifferenceSetPtr GeoNormalDifferenceSetBase::create(void) 
{
    GeoNormalDifferenceSetPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = GeoNormalDifferenceSetPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
GeoNormalDifferenceSetPtr GeoNormalDifferenceSetBase::createEmpty(void) 
{ 
    GeoNormalDifferenceSetPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the GeoNormalDifferenceSet::_sfNormals field.
inline
SFGeoNormalsPtr *GeoNormalDifferenceSetBase::getSFNormals(void)
{
    return &_sfNormals;
}

//! Get the GeoNormalDifferenceSet::_sfIndices field.
inline
SFGeoIndicesPtr *GeoNormalDifferenceSetBase::getSFIndices(void)
{
    return &_sfIndices;
}


//! Get the value of the GeoNormalDifferenceSet::_sfNormals field.
inline
GeoNormalsPtr &GeoNormalDifferenceSetBase::getNormals(void)
{
    return _sfNormals.getValue();
}

//! Get the value of the GeoNormalDifferenceSet::_sfNormals field.
inline
const GeoNormalsPtr &GeoNormalDifferenceSetBase::getNormals(void) const
{
    return _sfNormals.getValue();
}

//! Set the value of the GeoNormalDifferenceSet::_sfNormals field.
inline
void GeoNormalDifferenceSetBase::setNormals(const GeoNormalsPtr &value)
{
    _sfNormals.setValue(value);
}

//! Get the value of the GeoNormalDifferenceSet::_sfIndices field.
inline
GeoIndicesPtr &GeoNormalDifferenceSetBase::getIndices(void)
{
    return _sfIndices.getValue();
}

//! Get the value of the GeoNormalDifferenceSet::_sfIndices field.
inline
const GeoIndicesPtr &GeoNormalDifferenceSetBase::getIndices(void) const
{
    return _sfIndices.getValue();
}

//! Set the value of the GeoNormalDifferenceSet::_sfIndices field.
inline
void GeoNormalDifferenceSetBase::setIndices(const GeoIndicesPtr &value)
{
    _sfIndices.setValue(value);
}


OSG_END_NAMESPACE

#define OSGGEONORMALDIFFERENCESETBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

