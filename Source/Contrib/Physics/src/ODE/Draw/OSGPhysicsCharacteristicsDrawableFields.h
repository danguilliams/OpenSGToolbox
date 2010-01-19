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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSCHARACTERISTICSDRAWABLEFIELDS_H_
#define _OSGPHYSICSCHARACTERISTICSDRAWABLEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PhysicsCharacteristicsDrawable;

OSG_GEN_CONTAINERPTR(PhysicsCharacteristicsDrawable);

/*! \ingroup GrpContribPhysicsFieldTraits
    \ingroup GrpLibOSGContribPhysics
 */
template <>
struct FieldTraits<PhysicsCharacteristicsDrawable *> :
    public FieldTraitsFCPtrBase<PhysicsCharacteristicsDrawable *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PhysicsCharacteristicsDrawable *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPHYSICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPhysicsCharacteristicsDrawablePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPhysicsCharacteristicsDrawablePtr"; }
};

template<> inline
const Char8 *FieldTraits<PhysicsCharacteristicsDrawable *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPhysicsCharacteristicsDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsCharacteristicsDrawable *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPhysicsCharacteristicsDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsCharacteristicsDrawable *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPhysicsCharacteristicsDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsCharacteristicsDrawable *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPhysicsCharacteristicsDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsCharacteristicsDrawable *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPhysicsCharacteristicsDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsCharacteristicsDrawable *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPhysicsCharacteristicsDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsCharacteristicsDrawable *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPhysicsCharacteristicsDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsCharacteristicsDrawable *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPhysicsCharacteristicsDrawablePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsCharacteristicsDrawable *,
                      RecordedRefCountPolicy  > SFRecPhysicsCharacteristicsDrawablePtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsCharacteristicsDrawable *,
                      UnrecordedRefCountPolicy> SFUnrecPhysicsCharacteristicsDrawablePtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsCharacteristicsDrawable *,
                      WeakRefCountPolicy      > SFWeakPhysicsCharacteristicsDrawablePtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsCharacteristicsDrawable *,
                      NoRefCountPolicy        > SFUncountedPhysicsCharacteristicsDrawablePtr;


/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsCharacteristicsDrawable *,
                      RecordedRefCountPolicy  > MFRecPhysicsCharacteristicsDrawablePtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsCharacteristicsDrawable *,
                      UnrecordedRefCountPolicy> MFUnrecPhysicsCharacteristicsDrawablePtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsCharacteristicsDrawable *,
                      WeakRefCountPolicy      > MFWeakPhysicsCharacteristicsDrawablePtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsCharacteristicsDrawable *,
                      NoRefCountPolicy        > MFUncountedPhysicsCharacteristicsDrawablePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFRecPhysicsCharacteristicsDrawablePtr : 
    public PointerSField<PhysicsCharacteristicsDrawable *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUnrecPhysicsCharacteristicsDrawablePtr : 
    public PointerSField<PhysicsCharacteristicsDrawable *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFWeakPhysicsCharacteristicsDrawablePtr :
    public PointerSField<PhysicsCharacteristicsDrawable *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUncountedPhysicsCharacteristicsDrawablePtr :
    public PointerSField<PhysicsCharacteristicsDrawable *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFRecPhysicsCharacteristicsDrawablePtr :
    public PointerMField<PhysicsCharacteristicsDrawable *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUnrecPhysicsCharacteristicsDrawablePtr :
    public PointerMField<PhysicsCharacteristicsDrawable *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFWeakPhysicsCharacteristicsDrawablePtr :
    public PointerMField<PhysicsCharacteristicsDrawable *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUncountedPhysicsCharacteristicsDrawablePtr :
    public PointerMField<PhysicsCharacteristicsDrawable *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSCHARACTERISTICSDRAWABLEFIELDS_H_ */
