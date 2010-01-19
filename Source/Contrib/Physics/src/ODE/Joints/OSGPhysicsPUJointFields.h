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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSPUJOINTFIELDS_H_
#define _OSGPHYSICSPUJOINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PhysicsPUJoint;

OSG_GEN_CONTAINERPTR(PhysicsPUJoint);

/*! \ingroup GrpContribPhysicsFieldTraits
    \ingroup GrpLibOSGContribPhysics
 */
template <>
struct FieldTraits<PhysicsPUJoint *> :
    public FieldTraitsFCPtrBase<PhysicsPUJoint *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PhysicsPUJoint *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPHYSICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPhysicsPUJointPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPhysicsPUJointPtr"; }
};

template<> inline
const Char8 *FieldTraits<PhysicsPUJoint *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPhysicsPUJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPUJoint *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPhysicsPUJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPUJoint *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPhysicsPUJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPUJoint *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPhysicsPUJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPUJoint *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPhysicsPUJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPUJoint *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPhysicsPUJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPUJoint *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPhysicsPUJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPUJoint *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPhysicsPUJointPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsPUJoint *,
                      RecordedRefCountPolicy  > SFRecPhysicsPUJointPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsPUJoint *,
                      UnrecordedRefCountPolicy> SFUnrecPhysicsPUJointPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsPUJoint *,
                      WeakRefCountPolicy      > SFWeakPhysicsPUJointPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsPUJoint *,
                      NoRefCountPolicy        > SFUncountedPhysicsPUJointPtr;


/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsPUJoint *,
                      RecordedRefCountPolicy  > MFRecPhysicsPUJointPtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsPUJoint *,
                      UnrecordedRefCountPolicy> MFUnrecPhysicsPUJointPtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsPUJoint *,
                      WeakRefCountPolicy      > MFWeakPhysicsPUJointPtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsPUJoint *,
                      NoRefCountPolicy        > MFUncountedPhysicsPUJointPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFRecPhysicsPUJointPtr : 
    public PointerSField<PhysicsPUJoint *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUnrecPhysicsPUJointPtr : 
    public PointerSField<PhysicsPUJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFWeakPhysicsPUJointPtr :
    public PointerSField<PhysicsPUJoint *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUncountedPhysicsPUJointPtr :
    public PointerSField<PhysicsPUJoint *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFRecPhysicsPUJointPtr :
    public PointerMField<PhysicsPUJoint *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUnrecPhysicsPUJointPtr :
    public PointerMField<PhysicsPUJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFWeakPhysicsPUJointPtr :
    public PointerMField<PhysicsPUJoint *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUncountedPhysicsPUJointPtr :
    public PointerMField<PhysicsPUJoint *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSPUJOINTFIELDS_H_ */
