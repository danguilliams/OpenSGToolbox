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


#ifndef _OSGBOUNDEDRANGEMODELFIELDS_H_
#define _OSGBOUNDEDRANGEMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class BoundedRangeModel;

OSG_GEN_CONTAINERPTR(BoundedRangeModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<BoundedRangeModel *> :
    public FieldTraitsFCPtrBase<BoundedRangeModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<BoundedRangeModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBoundedRangeModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBoundedRangeModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<BoundedRangeModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBoundedRangeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoundedRangeModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBoundedRangeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoundedRangeModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBoundedRangeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoundedRangeModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBoundedRangeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoundedRangeModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBoundedRangeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoundedRangeModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBoundedRangeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoundedRangeModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBoundedRangeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<BoundedRangeModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBoundedRangeModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BoundedRangeModel *,
                      RecordedRefCountPolicy  > SFRecBoundedRangeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BoundedRangeModel *,
                      UnrecordedRefCountPolicy> SFUnrecBoundedRangeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BoundedRangeModel *,
                      WeakRefCountPolicy      > SFWeakBoundedRangeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<BoundedRangeModel *,
                      NoRefCountPolicy        > SFUncountedBoundedRangeModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BoundedRangeModel *,
                      RecordedRefCountPolicy  > MFRecBoundedRangeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BoundedRangeModel *,
                      UnrecordedRefCountPolicy> MFUnrecBoundedRangeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BoundedRangeModel *,
                      WeakRefCountPolicy      > MFWeakBoundedRangeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<BoundedRangeModel *,
                      NoRefCountPolicy        > MFUncountedBoundedRangeModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecBoundedRangeModelPtr : 
    public PointerSField<BoundedRangeModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecBoundedRangeModelPtr : 
    public PointerSField<BoundedRangeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakBoundedRangeModelPtr :
    public PointerSField<BoundedRangeModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedBoundedRangeModelPtr :
    public PointerSField<BoundedRangeModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecBoundedRangeModelPtr :
    public PointerMField<BoundedRangeModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecBoundedRangeModelPtr :
    public PointerMField<BoundedRangeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakBoundedRangeModelPtr :
    public PointerMField<BoundedRangeModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedBoundedRangeModelPtr :
    public PointerMField<BoundedRangeModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBOUNDEDRANGEMODELFIELDS_H_ */