/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
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
 **     class GenericMissionTreeModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GenericMissionTreeModelBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GenericMissionTreeModelBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
GenericMissionTreeModelPtr GenericMissionTreeModelBase::create(void) 
{
    GenericMissionTreeModelPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = GenericMissionTreeModelPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
GenericMissionTreeModelPtr GenericMissionTreeModelBase::createEmpty(void) 
{ 
    GenericMissionTreeModelPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the GenericMissionTreeModel::_sfInternalRoot field.
inline
const SFMissionPtr *GenericMissionTreeModelBase::getSFInternalRoot(void) const
{
    return &_sfInternalRoot;
}

//! Get the GenericMissionTreeModel::_sfInternalRoot field.
inline
SFMissionPtr *GenericMissionTreeModelBase::editSFInternalRoot(void)
{
    return &_sfInternalRoot;
}

#ifndef OSG_2_PREP
//! Get the GenericMissionTreeModel::_sfInternalRoot field.
inline
SFMissionPtr *GenericMissionTreeModelBase::getSFInternalRoot(void)
{
    return &_sfInternalRoot;
}
#endif


//! Get the value of the GenericMissionTreeModel::_sfInternalRoot field.
inline
MissionPtr &GenericMissionTreeModelBase::editInternalRoot(void)
{
    return _sfInternalRoot.getValue();
}

//! Get the value of the GenericMissionTreeModel::_sfInternalRoot field.
inline
const MissionPtr &GenericMissionTreeModelBase::getInternalRoot(void) const
{
    return _sfInternalRoot.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the GenericMissionTreeModel::_sfInternalRoot field.
inline
MissionPtr &GenericMissionTreeModelBase::getInternalRoot(void)
{
    return _sfInternalRoot.getValue();
}
#endif

//! Set the value of the GenericMissionTreeModel::_sfInternalRoot field.
inline
void GenericMissionTreeModelBase::setInternalRoot(const MissionPtr &value)
{
    _sfInternalRoot.setValue(value);
}


OSG_END_NAMESPACE

