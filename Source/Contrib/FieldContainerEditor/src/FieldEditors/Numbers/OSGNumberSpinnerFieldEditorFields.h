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


#ifndef _OSGNUMBERSPINNERFIELDEDITORFIELDS_H_
#define _OSGNUMBERSPINNERFIELDEDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribFieldContainerEditorDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class NumberSpinnerFieldEditor;

OSG_GEN_CONTAINERPTR(NumberSpinnerFieldEditor);

/*! \ingroup GrpContribFieldContainerEditorFieldTraits
    \ingroup GrpLibOSGContribFieldContainerEditor
 */
template <>
struct FieldTraits<NumberSpinnerFieldEditor *> :
    public FieldTraitsFCPtrBase<NumberSpinnerFieldEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<NumberSpinnerFieldEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBFIELDCONTAINEREDITOR_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFNumberSpinnerFieldEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFNumberSpinnerFieldEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<NumberSpinnerFieldEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecNumberSpinnerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<NumberSpinnerFieldEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecNumberSpinnerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<NumberSpinnerFieldEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakNumberSpinnerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<NumberSpinnerFieldEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdNumberSpinnerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<NumberSpinnerFieldEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecNumberSpinnerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<NumberSpinnerFieldEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecNumberSpinnerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<NumberSpinnerFieldEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakNumberSpinnerFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<NumberSpinnerFieldEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdNumberSpinnerFieldEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<NumberSpinnerFieldEditor *,
                      RecordedRefCountPolicy  > SFRecNumberSpinnerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<NumberSpinnerFieldEditor *,
                      UnrecordedRefCountPolicy> SFUnrecNumberSpinnerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<NumberSpinnerFieldEditor *,
                      WeakRefCountPolicy      > SFWeakNumberSpinnerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<NumberSpinnerFieldEditor *,
                      NoRefCountPolicy        > SFUncountedNumberSpinnerFieldEditorPtr;


/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<NumberSpinnerFieldEditor *,
                      RecordedRefCountPolicy  > MFRecNumberSpinnerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<NumberSpinnerFieldEditor *,
                      UnrecordedRefCountPolicy> MFUnrecNumberSpinnerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<NumberSpinnerFieldEditor *,
                      WeakRefCountPolicy      > MFWeakNumberSpinnerFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<NumberSpinnerFieldEditor *,
                      NoRefCountPolicy        > MFUncountedNumberSpinnerFieldEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFRecNumberSpinnerFieldEditorPtr : 
    public PointerSField<NumberSpinnerFieldEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUnrecNumberSpinnerFieldEditorPtr : 
    public PointerSField<NumberSpinnerFieldEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFWeakNumberSpinnerFieldEditorPtr :
    public PointerSField<NumberSpinnerFieldEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUncountedNumberSpinnerFieldEditorPtr :
    public PointerSField<NumberSpinnerFieldEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFRecNumberSpinnerFieldEditorPtr :
    public PointerMField<NumberSpinnerFieldEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUnrecNumberSpinnerFieldEditorPtr :
    public PointerMField<NumberSpinnerFieldEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFWeakNumberSpinnerFieldEditorPtr :
    public PointerMField<NumberSpinnerFieldEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUncountedNumberSpinnerFieldEditorPtr :
    public PointerMField<NumberSpinnerFieldEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGNUMBERSPINNERFIELDEDITORFIELDS_H_ */