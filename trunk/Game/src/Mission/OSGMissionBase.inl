/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
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
 **     class Mission!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MissionBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 MissionBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 


/*------------------------------ get -----------------------------------*/

//! Get the Mission::_mfMissions field.
inline
const MFMissionPtr *MissionBase::getMFMissions(void) const
{
    return &_mfMissions;
}

//! Get the Mission::_mfMissions field.
inline
MFMissionPtr *MissionBase::editMFMissions(void)
{
    return &_mfMissions;
}

#ifndef OSG_2_PREP
//! Get the Mission::_mfMissions field.
inline
MFMissionPtr *MissionBase::getMFMissions(void)
{
    return &_mfMissions;
}
#endif

//! Get the Mission::_mfProperties field.
inline
const MFStringToUInt32Map *MissionBase::getMFProperties(void) const
{
    return &_mfProperties;
}

//! Get the Mission::_mfProperties field.
inline
MFStringToUInt32Map *MissionBase::editMFProperties(void)
{
    return &_mfProperties;
}

#ifndef OSG_2_PREP
//! Get the Mission::_mfProperties field.
inline
MFStringToUInt32Map *MissionBase::getMFProperties(void)
{
    return &_mfProperties;
}
#endif

//! Get the Mission::_sfDescription field.
inline
const SFString *MissionBase::getSFDescription(void) const
{
    return &_sfDescription;
}

//! Get the Mission::_sfDescription field.
inline
SFString *MissionBase::editSFDescription(void)
{
    return &_sfDescription;
}

#ifndef OSG_2_PREP
//! Get the Mission::_sfDescription field.
inline
SFString *MissionBase::getSFDescription(void)
{
    return &_sfDescription;
}
#endif


//! Get the value of the Mission::_sfDescription field.
inline
std::string &MissionBase::editDescription(void)
{
    return _sfDescription.getValue();
}

//! Get the value of the Mission::_sfDescription field.
inline
const std::string &MissionBase::getDescription(void) const
{
    return _sfDescription.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the Mission::_sfDescription field.
inline
std::string &MissionBase::getDescription(void)
{
    return _sfDescription.getValue();
}
#endif

//! Set the value of the Mission::_sfDescription field.
inline
void MissionBase::setDescription(const std::string &value)
{
    _sfDescription.setValue(value);
}


//! Get the value of the \a index element the Mission::_mfMissions field.
inline
MissionPtr &MissionBase::editMissions(const UInt32 index)
{
    return _mfMissions[index];
}

//! Get the value of the \a index element the Mission::_mfMissions field.
inline
const MissionPtr &MissionBase::getMissions(const UInt32 index) const
{
    return _mfMissions[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the Mission::_mfMissions field.
inline
MissionPtr &MissionBase::getMissions(const UInt32 index)
{
    return _mfMissions[index];
}

//! Get the Mission::_mfMissions field.
inline
MFMissionPtr &MissionBase::getMissions(void)
{
    return _mfMissions;
}

//! Get the Mission::_mfMissions field.
inline
const MFMissionPtr &MissionBase::getMissions(void) const
{
    return _mfMissions;
}

#endif

//! Get the value of the \a index element the Mission::_mfProperties field.
inline
StringToUInt32Map &MissionBase::editProperties(const UInt32 index)
{
    return _mfProperties[index];
}

//! Get the value of the \a index element the Mission::_mfProperties field.
inline
const StringToUInt32Map &MissionBase::getProperties(const UInt32 index) const
{
    return _mfProperties[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the Mission::_mfProperties field.
inline
StringToUInt32Map &MissionBase::getProperties(const UInt32 index)
{
    return _mfProperties[index];
}

//! Get the Mission::_mfProperties field.
inline
MFStringToUInt32Map &MissionBase::getProperties(void)
{
    return _mfProperties;
}

//! Get the Mission::_mfProperties field.
inline
const MFStringToUInt32Map &MissionBase::getProperties(void) const
{
    return _mfProperties;
}

#endif

OSG_END_NAMESPACE

