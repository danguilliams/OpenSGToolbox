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


#ifndef _OSGSKELETONEVENTDETAILSFIELDS_H_
#define _OSGSKELETONEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SkeletonEventDetails;

OSG_GEN_CONTAINERPTR(SkeletonEventDetails);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<SkeletonEventDetails *> :
    public FieldTraitsFCPtrBase<SkeletonEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SkeletonEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSkeletonEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<SkeletonEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSkeletonEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSkeletonEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSkeletonEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSkeletonEventDetailsPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<SkeletonEventDetails *,
                      RecordedRefCountPolicy  > SFRecSkeletonEventDetailsPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<SkeletonEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecSkeletonEventDetailsPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<SkeletonEventDetails *,
                      WeakRefCountPolicy      > SFWeakSkeletonEventDetailsPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<SkeletonEventDetails *,
                      NoRefCountPolicy        > SFUncountedSkeletonEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecSkeletonEventDetailsPtr : 
    public PointerSField<SkeletonEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecSkeletonEventDetailsPtr : 
    public PointerSField<SkeletonEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakSkeletonEventDetailsPtr :
    public PointerSField<SkeletonEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedSkeletonEventDetailsPtr :
    public PointerSField<SkeletonEventDetails *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSKELETONEVENTDETAILSFIELDS_H_ */