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


#ifndef _OSGSKEWTRANSFORMATIONELEMENTFIELDS_H_
#define _OSGSKEWTRANSFORMATIONELEMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SkewTransformationElement;

OSG_GEN_CONTAINERPTR(SkewTransformationElement);

/*! \ingroup GrpGroupFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<SkewTransformationElement *> :
    public FieldTraitsFCPtrBase<SkewTransformationElement *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SkewTransformationElement *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSkewTransformationElementPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSkewTransformationElementPtr"; }
};

template<> inline
const Char8 *FieldTraits<SkewTransformationElement *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSkewTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkewTransformationElement *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSkewTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkewTransformationElement *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSkewTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkewTransformationElement *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSkewTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkewTransformationElement *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSkewTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkewTransformationElement *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSkewTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkewTransformationElement *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSkewTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkewTransformationElement *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSkewTransformationElementPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<SkewTransformationElement *,
                      RecordedRefCountPolicy  > SFRecSkewTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<SkewTransformationElement *,
                      UnrecordedRefCountPolicy> SFUnrecSkewTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<SkewTransformationElement *,
                      WeakRefCountPolicy      > SFWeakSkewTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<SkewTransformationElement *,
                      NoRefCountPolicy        > SFUncountedSkewTransformationElementPtr;


/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<SkewTransformationElement *,
                      RecordedRefCountPolicy  > MFRecSkewTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<SkewTransformationElement *,
                      UnrecordedRefCountPolicy> MFUnrecSkewTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<SkewTransformationElement *,
                      WeakRefCountPolicy      > MFWeakSkewTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<SkewTransformationElement *,
                      NoRefCountPolicy        > MFUncountedSkewTransformationElementPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecSkewTransformationElementPtr : 
    public PointerSField<SkewTransformationElement *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecSkewTransformationElementPtr : 
    public PointerSField<SkewTransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakSkewTransformationElementPtr :
    public PointerSField<SkewTransformationElement *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedSkewTransformationElementPtr :
    public PointerSField<SkewTransformationElement *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecSkewTransformationElementPtr :
    public PointerMField<SkewTransformationElement *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecSkewTransformationElementPtr :
    public PointerMField<SkewTransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakSkewTransformationElementPtr :
    public PointerMField<SkewTransformationElement *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedSkewTransformationElementPtr :
    public PointerMField<SkewTransformationElement *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSKEWTRANSFORMATIONELEMENTFIELDS_H_ */
