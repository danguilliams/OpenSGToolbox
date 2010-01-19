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


#ifndef _OSGPHYSICSHASHSPACEFIELDS_H_
#define _OSGPHYSICSHASHSPACEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PhysicsHashSpace;

OSG_GEN_CONTAINERPTR(PhysicsHashSpace);

/*! \ingroup GrpContribPhysicsFieldTraits
    \ingroup GrpLibOSGContribPhysics
 */
template <>
struct FieldTraits<PhysicsHashSpace *> :
    public FieldTraitsFCPtrBase<PhysicsHashSpace *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PhysicsHashSpace *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPHYSICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPhysicsHashSpacePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPhysicsHashSpacePtr"; }
};

template<> inline
const Char8 *FieldTraits<PhysicsHashSpace *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPhysicsHashSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsHashSpace *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPhysicsHashSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsHashSpace *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPhysicsHashSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsHashSpace *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPhysicsHashSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsHashSpace *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPhysicsHashSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsHashSpace *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPhysicsHashSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsHashSpace *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPhysicsHashSpacePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsHashSpace *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPhysicsHashSpacePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsHashSpace *,
                      RecordedRefCountPolicy  > SFRecPhysicsHashSpacePtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsHashSpace *,
                      UnrecordedRefCountPolicy> SFUnrecPhysicsHashSpacePtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsHashSpace *,
                      WeakRefCountPolicy      > SFWeakPhysicsHashSpacePtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsHashSpace *,
                      NoRefCountPolicy        > SFUncountedPhysicsHashSpacePtr;


/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsHashSpace *,
                      RecordedRefCountPolicy  > MFRecPhysicsHashSpacePtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsHashSpace *,
                      UnrecordedRefCountPolicy> MFUnrecPhysicsHashSpacePtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsHashSpace *,
                      WeakRefCountPolicy      > MFWeakPhysicsHashSpacePtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsHashSpace *,
                      NoRefCountPolicy        > MFUncountedPhysicsHashSpacePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFRecPhysicsHashSpacePtr : 
    public PointerSField<PhysicsHashSpace *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUnrecPhysicsHashSpacePtr : 
    public PointerSField<PhysicsHashSpace *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFWeakPhysicsHashSpacePtr :
    public PointerSField<PhysicsHashSpace *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUncountedPhysicsHashSpacePtr :
    public PointerSField<PhysicsHashSpace *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFRecPhysicsHashSpacePtr :
    public PointerMField<PhysicsHashSpace *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUnrecPhysicsHashSpacePtr :
    public PointerMField<PhysicsHashSpace *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFWeakPhysicsHashSpacePtr :
    public PointerMField<PhysicsHashSpace *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUncountedPhysicsHashSpacePtr :
    public PointerMField<PhysicsHashSpace *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSHASHSPACEFIELDS_H_ */
