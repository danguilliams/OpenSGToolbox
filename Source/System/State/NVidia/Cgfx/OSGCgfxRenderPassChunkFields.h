/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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


#ifndef _OSGCGFXRENDERPASSCHUNKFIELDS_H_
#define _OSGCGFXRENDERPASSCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "..\..\OpenGL\OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CgfxRenderPassChunk;

OSG_GEN_CONTAINERPTR(CgfxRenderPassChunk);

/*! \ingroup GrpStateFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<CgfxRenderPassChunk *> :
    public FieldTraitsFCPtrBase<CgfxRenderPassChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CgfxRenderPassChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCgfxRenderPassChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCgfxRenderPassChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<CgfxRenderPassChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCgfxRenderPassChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<CgfxRenderPassChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCgfxRenderPassChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<CgfxRenderPassChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCgfxRenderPassChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<CgfxRenderPassChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCgfxRenderPassChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<CgfxRenderPassChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCgfxRenderPassChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<CgfxRenderPassChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCgfxRenderPassChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<CgfxRenderPassChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCgfxRenderPassChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<CgfxRenderPassChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCgfxRenderPassChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<CgfxRenderPassChunk *,
                      RecordedRefCountPolicy  > SFRecCgfxRenderPassChunkPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<CgfxRenderPassChunk *,
                      UnrecordedRefCountPolicy> SFUnrecCgfxRenderPassChunkPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<CgfxRenderPassChunk *,
                      WeakRefCountPolicy      > SFWeakCgfxRenderPassChunkPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<CgfxRenderPassChunk *,
                      NoRefCountPolicy        > SFUncountedCgfxRenderPassChunkPtr;


/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<CgfxRenderPassChunk *,
                      RecordedRefCountPolicy  > MFRecCgfxRenderPassChunkPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<CgfxRenderPassChunk *,
                      UnrecordedRefCountPolicy> MFUnrecCgfxRenderPassChunkPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<CgfxRenderPassChunk *,
                      WeakRefCountPolicy      > MFWeakCgfxRenderPassChunkPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<CgfxRenderPassChunk *,
                      NoRefCountPolicy        > MFUncountedCgfxRenderPassChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFRecCgfxRenderPassChunkPtr : 
    public PointerSField<CgfxRenderPassChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecCgfxRenderPassChunkPtr : 
    public PointerSField<CgfxRenderPassChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFWeakCgfxRenderPassChunkPtr :
    public PointerSField<CgfxRenderPassChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedCgfxRenderPassChunkPtr :
    public PointerSField<CgfxRenderPassChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFRecCgfxRenderPassChunkPtr :
    public PointerMField<CgfxRenderPassChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecCgfxRenderPassChunkPtr :
    public PointerMField<CgfxRenderPassChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFWeakCgfxRenderPassChunkPtr :
    public PointerMField<CgfxRenderPassChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedCgfxRenderPassChunkPtr :
    public PointerMField<CgfxRenderPassChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCGFXRENDERPASSCHUNKFIELDS_H_ */
