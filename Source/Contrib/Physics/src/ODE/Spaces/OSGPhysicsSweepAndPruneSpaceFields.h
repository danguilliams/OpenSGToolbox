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


#ifndef _OSGPHYSICSSWEEPANDPRUNESPACEFIELDS_H_
#define _OSGPHYSICSSWEEPANDPRUNESPACEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PhysicsSweepAndPruneSpace;

OSG_GEN_CONTAINERPTR(PhysicsSweepAndPruneSpace);

/*! \ingroup GrpContribPhysicsFieldTraits
    \ingroup GrpLibOSGContribPhysics
 */
template <>
struct FieldTraits<PhysicsSweepAndPruneSpace *> :
    public FieldTraitsFCPtrBase<PhysicsSweepAndPruneSpace *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PhysicsSweepAndPruneSpace *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPHYSICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPhysicsSweepAndPruneSpacePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPhysicsSweepAndPruneSpacePtr"; }
};

template<> inline
const Char8 *FieldTraits<PhysicsSweepAndPruneSpace *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPhysicsSweepAndPruneSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsSweepAndPruneSpace *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPhysicsSweepAndPruneSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsSweepAndPruneSpace *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPhysicsSweepAndPruneSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsSweepAndPruneSpace *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPhysicsSweepAndPruneSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsSweepAndPruneSpace *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPhysicsSweepAndPruneSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsSweepAndPruneSpace *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPhysicsSweepAndPruneSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsSweepAndPruneSpace *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPhysicsSweepAndPruneSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsSweepAndPruneSpace *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPhysicsSweepAndPruneSpacePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsSweepAndPruneSpace *,
                      RecordedRefCountPolicy  > SFRecPhysicsSweepAndPruneSpacePtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsSweepAndPruneSpace *,
                      UnrecordedRefCountPolicy> SFUnrecPhysicsSweepAndPruneSpacePtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsSweepAndPruneSpace *,
                      WeakRefCountPolicy      > SFWeakPhysicsSweepAndPruneSpacePtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsSweepAndPruneSpace *,
                      NoRefCountPolicy        > SFUncountedPhysicsSweepAndPruneSpacePtr;


/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsSweepAndPruneSpace *,
                      RecordedRefCountPolicy  > MFRecPhysicsSweepAndPruneSpacePtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsSweepAndPruneSpace *,
                      UnrecordedRefCountPolicy> MFUnrecPhysicsSweepAndPruneSpacePtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsSweepAndPruneSpace *,
                      WeakRefCountPolicy      > MFWeakPhysicsSweepAndPruneSpacePtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsSweepAndPruneSpace *,
                      NoRefCountPolicy        > MFUncountedPhysicsSweepAndPruneSpacePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFRecPhysicsSweepAndPruneSpacePtr : 
    public PointerSField<PhysicsSweepAndPruneSpace *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUnrecPhysicsSweepAndPruneSpacePtr : 
    public PointerSField<PhysicsSweepAndPruneSpace *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFWeakPhysicsSweepAndPruneSpacePtr :
    public PointerSField<PhysicsSweepAndPruneSpace *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUncountedPhysicsSweepAndPruneSpacePtr :
    public PointerSField<PhysicsSweepAndPruneSpace *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFRecPhysicsSweepAndPruneSpacePtr :
    public PointerMField<PhysicsSweepAndPruneSpace *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUnrecPhysicsSweepAndPruneSpacePtr :
    public PointerMField<PhysicsSweepAndPruneSpace *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFWeakPhysicsSweepAndPruneSpacePtr :
    public PointerMField<PhysicsSweepAndPruneSpace *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUncountedPhysicsSweepAndPruneSpacePtr :
    public PointerMField<PhysicsSweepAndPruneSpace *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSSWEEPANDPRUNESPACEFIELDS_H_ */
