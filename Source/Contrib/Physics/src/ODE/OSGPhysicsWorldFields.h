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


#ifndef _OSGPHYSICSWORLDFIELDS_H_
#define _OSGPHYSICSWORLDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PhysicsWorld;

OSG_GEN_CONTAINERPTR(PhysicsWorld);

/*! \ingroup GrpContribPhysicsFieldTraits
    \ingroup GrpLibOSGContribPhysics
 */
template <>
struct FieldTraits<PhysicsWorld *> :
    public FieldTraitsFCPtrBase<PhysicsWorld *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PhysicsWorld *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPHYSICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPhysicsWorldPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPhysicsWorldPtr"; }
};

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPhysicsWorldPtr"; 
}


/*! \ingroup GrpContribPhysicsFieldTraits
 */
template <>
struct FieldTraits<PhysicsWorld *, 1> :
    public FieldTraitsFCPtrBase<PhysicsWorld *, 1>
{
  private:

  public:
    typedef FieldTraits<PhysicsWorld *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPHYSICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildPhysicsWorldPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsWorld *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildPhysicsWorldPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsWorld *,
                      RecordedRefCountPolicy  > SFRecPhysicsWorldPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsWorld *,
                      UnrecordedRefCountPolicy> SFUnrecPhysicsWorldPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsWorld *,
                      WeakRefCountPolicy      > SFWeakPhysicsWorldPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsWorld *,
                      NoRefCountPolicy        > SFUncountedPhysicsWorldPtr;


/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsWorld *,
                      RecordedRefCountPolicy  > MFRecPhysicsWorldPtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsWorld *,
                      UnrecordedRefCountPolicy> MFUnrecPhysicsWorldPtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsWorld *,
                      WeakRefCountPolicy      > MFWeakPhysicsWorldPtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsWorld *,
                      NoRefCountPolicy        > MFUncountedPhysicsWorldPtr;



/*! \ingroup GrpContribPhysicsFieldSFields */
typedef ChildPointerSField<
          PhysicsWorld *, 
          UnrecordedRefCountPolicy,
          1             > SFUnrecChildPhysicsWorldPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFRecPhysicsWorldPtr : 
    public PointerSField<PhysicsWorld *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUnrecPhysicsWorldPtr : 
    public PointerSField<PhysicsWorld *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFWeakPhysicsWorldPtr :
    public PointerSField<PhysicsWorld *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUncountedPhysicsWorldPtr :
    public PointerSField<PhysicsWorld *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFRecPhysicsWorldPtr :
    public PointerMField<PhysicsWorld *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUnrecPhysicsWorldPtr :
    public PointerMField<PhysicsWorld *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFWeakPhysicsWorldPtr :
    public PointerMField<PhysicsWorld *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUncountedPhysicsWorldPtr :
    public PointerMField<PhysicsWorld *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUnrecChildPhysicsWorldPtr :
    public ChildPointerSField<
        PhysicsWorld *, 
        UnrecordedRefCountPolicy,
        1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSWORLDFIELDS_H_ */
