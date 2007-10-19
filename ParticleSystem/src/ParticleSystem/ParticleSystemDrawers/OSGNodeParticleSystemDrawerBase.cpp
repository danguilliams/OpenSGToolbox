/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class NodeParticleSystemDrawer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILENODEPARTICLESYSTEMDRAWERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGNodeParticleSystemDrawerBase.h"
#include "OSGNodeParticleSystemDrawer.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  NodeParticleSystemDrawerBase::PrototypeNodeFieldMask = 
    (TypeTraits<BitVector>::One << NodeParticleSystemDrawerBase::PrototypeNodeFieldId);

const OSG::BitVector  NodeParticleSystemDrawerBase::SizeScalingFieldMask = 
    (TypeTraits<BitVector>::One << NodeParticleSystemDrawerBase::SizeScalingFieldId);

const OSG::BitVector  NodeParticleSystemDrawerBase::NodesFieldMask = 
    (TypeTraits<BitVector>::One << NodeParticleSystemDrawerBase::NodesFieldId);

const OSG::BitVector NodeParticleSystemDrawerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var NodePtr         NodeParticleSystemDrawerBase::_sfPrototypeNode
    PrototypeNode is the node that clones are made of for each particle.
*/
/*! \var Vec3f           NodeParticleSystemDrawerBase::_sfSizeScaling
    This value is used to scale the size of the particle and apply that size to the transformation of the node for that particle.
*/
/*! \var NodePtr         NodeParticleSystemDrawerBase::_mfNodes
    Internal list of the Nodes.
*/

//! NodeParticleSystemDrawer description

FieldDescription *NodeParticleSystemDrawerBase::_desc[] = 
{
    new FieldDescription(SFNodePtr::getClassType(), 
                     "PrototypeNode", 
                     PrototypeNodeFieldId, PrototypeNodeFieldMask,
                     false,
                     (FieldAccessMethod) &NodeParticleSystemDrawerBase::getSFPrototypeNode),
    new FieldDescription(SFVec3f::getClassType(), 
                     "SizeScaling", 
                     SizeScalingFieldId, SizeScalingFieldMask,
                     false,
                     (FieldAccessMethod) &NodeParticleSystemDrawerBase::getSFSizeScaling),
    new FieldDescription(MFNodePtr::getClassType(), 
                     "Nodes", 
                     NodesFieldId, NodesFieldMask,
                     false,
                     (FieldAccessMethod) &NodeParticleSystemDrawerBase::getMFNodes)
};


FieldContainerType NodeParticleSystemDrawerBase::_type(
    "NodeParticleSystemDrawer",
    "ParticleSystemDrawer",
    NULL,
    (PrototypeCreateF) &NodeParticleSystemDrawerBase::createEmpty,
    NodeParticleSystemDrawer::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(NodeParticleSystemDrawerBase, NodeParticleSystemDrawerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &NodeParticleSystemDrawerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &NodeParticleSystemDrawerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr NodeParticleSystemDrawerBase::shallowCopy(void) const 
{ 
    NodeParticleSystemDrawerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const NodeParticleSystemDrawer *>(this)); 

    return returnValue; 
}

UInt32 NodeParticleSystemDrawerBase::getContainerSize(void) const 
{ 
    return sizeof(NodeParticleSystemDrawer); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void NodeParticleSystemDrawerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((NodeParticleSystemDrawerBase *) &other, whichField);
}
#else
void NodeParticleSystemDrawerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((NodeParticleSystemDrawerBase *) &other, whichField, sInfo);
}
void NodeParticleSystemDrawerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void NodeParticleSystemDrawerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfNodes.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

NodeParticleSystemDrawerBase::NodeParticleSystemDrawerBase(void) :
    _sfPrototypeNode          (NodePtr(NullFC)), 
    _sfSizeScaling            (Vec3f(1.0,1.0,1.0)), 
    _mfNodes                  (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

NodeParticleSystemDrawerBase::NodeParticleSystemDrawerBase(const NodeParticleSystemDrawerBase &source) :
    _sfPrototypeNode          (source._sfPrototypeNode          ), 
    _sfSizeScaling            (source._sfSizeScaling            ), 
    _mfNodes                  (source._mfNodes                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

NodeParticleSystemDrawerBase::~NodeParticleSystemDrawerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 NodeParticleSystemDrawerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PrototypeNodeFieldMask & whichField))
    {
        returnValue += _sfPrototypeNode.getBinSize();
    }

    if(FieldBits::NoField != (SizeScalingFieldMask & whichField))
    {
        returnValue += _sfSizeScaling.getBinSize();
    }

    if(FieldBits::NoField != (NodesFieldMask & whichField))
    {
        returnValue += _mfNodes.getBinSize();
    }


    return returnValue;
}

void NodeParticleSystemDrawerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PrototypeNodeFieldMask & whichField))
    {
        _sfPrototypeNode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SizeScalingFieldMask & whichField))
    {
        _sfSizeScaling.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NodesFieldMask & whichField))
    {
        _mfNodes.copyToBin(pMem);
    }


}

void NodeParticleSystemDrawerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PrototypeNodeFieldMask & whichField))
    {
        _sfPrototypeNode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SizeScalingFieldMask & whichField))
    {
        _sfSizeScaling.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NodesFieldMask & whichField))
    {
        _mfNodes.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void NodeParticleSystemDrawerBase::executeSyncImpl(      NodeParticleSystemDrawerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PrototypeNodeFieldMask & whichField))
        _sfPrototypeNode.syncWith(pOther->_sfPrototypeNode);

    if(FieldBits::NoField != (SizeScalingFieldMask & whichField))
        _sfSizeScaling.syncWith(pOther->_sfSizeScaling);

    if(FieldBits::NoField != (NodesFieldMask & whichField))
        _mfNodes.syncWith(pOther->_mfNodes);


}
#else
void NodeParticleSystemDrawerBase::executeSyncImpl(      NodeParticleSystemDrawerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PrototypeNodeFieldMask & whichField))
        _sfPrototypeNode.syncWith(pOther->_sfPrototypeNode);

    if(FieldBits::NoField != (SizeScalingFieldMask & whichField))
        _sfSizeScaling.syncWith(pOther->_sfSizeScaling);


    if(FieldBits::NoField != (NodesFieldMask & whichField))
        _mfNodes.syncWith(pOther->_mfNodes, sInfo);


}

void NodeParticleSystemDrawerBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (NodesFieldMask & whichField))
        _mfNodes.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<NodeParticleSystemDrawerPtr>::_type("NodeParticleSystemDrawerPtr", "ParticleSystemDrawerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(NodeParticleSystemDrawerPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(NodeParticleSystemDrawerPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGNODEPARTICLESYSTEMDRAWERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGNODEPARTICLESYSTEMDRAWERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGNODEPARTICLESYSTEMDRAWERFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
