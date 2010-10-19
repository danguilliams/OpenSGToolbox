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


#ifndef _OSGSEARCHWINDOWEVENTFIELDS_H_
#define _OSGSEARCHWINDOWEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribTextDomDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SearchWindowEvent;

OSG_GEN_CONTAINERPTR(SearchWindowEvent);

/*! \ingroup GrpContribTextDomFieldTraits
    \ingroup GrpLibOSGContribTextDom
 */
template <>
struct FieldTraits<SearchWindowEvent *> :
    public FieldTraitsFCPtrBase<SearchWindowEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SearchWindowEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTEXTDOM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSearchWindowEventPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSearchWindowEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<SearchWindowEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSearchWindowEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSearchWindowEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSearchWindowEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSearchWindowEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEvent *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSearchWindowEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEvent *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSearchWindowEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEvent *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSearchWindowEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SearchWindowEvent *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSearchWindowEventPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<SearchWindowEvent *,
                      RecordedRefCountPolicy  > SFRecSearchWindowEventPtr;
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<SearchWindowEvent *,
                      UnrecordedRefCountPolicy> SFUnrecSearchWindowEventPtr;
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<SearchWindowEvent *,
                      WeakRefCountPolicy      > SFWeakSearchWindowEventPtr;
/*! \ingroup GrpContribTextDomFieldSFields */
typedef PointerSField<SearchWindowEvent *,
                      NoRefCountPolicy        > SFUncountedSearchWindowEventPtr;


/*! \ingroup GrpContribTextDomFieldMFields */
typedef PointerMField<SearchWindowEvent *,
                      RecordedRefCountPolicy  > MFRecSearchWindowEventPtr;
/*! \ingroup GrpContribTextDomFieldMFields */
typedef PointerMField<SearchWindowEvent *,
                      UnrecordedRefCountPolicy> MFUnrecSearchWindowEventPtr;
/*! \ingroup GrpContribTextDomFieldMFields */
typedef PointerMField<SearchWindowEvent *,
                      WeakRefCountPolicy      > MFWeakSearchWindowEventPtr;
/*! \ingroup GrpContribTextDomFieldMFields */
typedef PointerMField<SearchWindowEvent *,
                      NoRefCountPolicy        > MFUncountedSearchWindowEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFRecSearchWindowEventPtr : 
    public PointerSField<SearchWindowEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFUnrecSearchWindowEventPtr : 
    public PointerSField<SearchWindowEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFWeakSearchWindowEventPtr :
    public PointerSField<SearchWindowEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldSFields \ingroup GrpLibOSGContribTextDom */
struct SFUncountedSearchWindowEventPtr :
    public PointerSField<SearchWindowEvent *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribTextDomFieldMFields \ingroup GrpLibOSGContribTextDom */
struct MFRecSearchWindowEventPtr :
    public PointerMField<SearchWindowEvent *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribTextDomFieldMFields \ingroup GrpLibOSGContribTextDom */
struct MFUnrecSearchWindowEventPtr :
    public PointerMField<SearchWindowEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribTextDomFieldMFields \ingroup GrpLibOSGContribTextDom */
struct MFWeakSearchWindowEventPtr :
    public PointerMField<SearchWindowEvent *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribTextDomFieldMFields \ingroup GrpLibOSGContribTextDom */
struct MFUncountedSearchWindowEventPtr :
    public PointerMField<SearchWindowEvent *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSEARCHWINDOWEVENTFIELDS_H_ */
