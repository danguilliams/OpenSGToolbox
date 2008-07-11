/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class NodeParticleSystemCore
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGNODEPARTICLESYSTEMCOREBASE_H_
#define _OSGNODEPARTICLESYSTEMCOREBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGParticleSystemDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGGroup.h> // Parent

#include "ParticleSystem/OSGParticleSystem.h" // System type
#include <OpenSG/OSGNodeFields.h> // PrototypeNode type
#include <OpenSG/OSGVec3fFields.h> // SizeScaling type
#include <OpenSG/OSGNodeFields.h> // ParticleNodes type
#include <OpenSG/OSGUInt32Fields.h> // NormalSource type
#include <OpenSG/OSGVec3fFields.h> // Normal type
#include <OpenSG/OSGUInt32Fields.h> // UpSource type
#include <OpenSG/OSGVec3fFields.h> // Up type

#include "OSGNodeParticleSystemCoreFields.h"

OSG_BEGIN_NAMESPACE

class NodeParticleSystemCore;
class BinaryDataHandler;

//! \brief NodeParticleSystemCore Base Class.

class OSG_PARTICLESYSTEMLIB_DLLMAPPING NodeParticleSystemCoreBase : public Group
{
  private:

    typedef Group    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef NodeParticleSystemCorePtr  Ptr;

    enum
    {
        SystemFieldId        = Inherited::NextFieldId,
        PrototypeNodeFieldId = SystemFieldId        + 1,
        SizeScalingFieldId   = PrototypeNodeFieldId + 1,
        ParticleNodesFieldId = SizeScalingFieldId   + 1,
        NormalSourceFieldId  = ParticleNodesFieldId + 1,
        NormalFieldId        = NormalSourceFieldId  + 1,
        UpSourceFieldId      = NormalFieldId        + 1,
        UpFieldId            = UpSourceFieldId      + 1,
        NextFieldId          = UpFieldId            + 1
    };

    static const OSG::BitVector SystemFieldMask;
    static const OSG::BitVector PrototypeNodeFieldMask;
    static const OSG::BitVector SizeScalingFieldMask;
    static const OSG::BitVector ParticleNodesFieldMask;
    static const OSG::BitVector NormalSourceFieldMask;
    static const OSG::BitVector NormalFieldMask;
    static const OSG::BitVector UpSourceFieldMask;
    static const OSG::BitVector UpFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFParticleSystemPtr *getSFSystem         (void);
           SFNodePtr           *getSFPrototypeNode  (void);
           SFVec3f             *getSFSizeScaling    (void);
           SFUInt32            *getSFNormalSource   (void);
           SFVec3f             *getSFNormal         (void);
           SFUInt32            *getSFUpSource       (void);
           SFVec3f             *getSFUp             (void);

           ParticleSystemPtr   &getSystem         (void);
     const ParticleSystemPtr   &getSystem         (void) const;
           NodePtr             &getPrototypeNode  (void);
     const NodePtr             &getPrototypeNode  (void) const;
           Vec3f               &getSizeScaling    (void);
     const Vec3f               &getSizeScaling    (void) const;
           UInt32              &getNormalSource   (void);
     const UInt32              &getNormalSource   (void) const;
           Vec3f               &getNormal         (void);
     const Vec3f               &getNormal         (void) const;
           UInt32              &getUpSource       (void);
     const UInt32              &getUpSource       (void) const;
           Vec3f               &getUp             (void);
     const Vec3f               &getUp             (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setSystem         ( const ParticleSystemPtr &value );
     void setPrototypeNode  ( const NodePtr &value );
     void setSizeScaling    ( const Vec3f &value );
     void setNormalSource   ( const UInt32 &value );
     void setNormal         ( const Vec3f &value );
     void setUpSource       ( const UInt32 &value );
     void setUp             ( const Vec3f &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  NodeParticleSystemCorePtr      create          (void); 
    static  NodeParticleSystemCorePtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFParticleSystemPtr   _sfSystem;
    SFNodePtr           _sfPrototypeNode;
    SFVec3f             _sfSizeScaling;
    MFNodePtr           _mfParticleNodes;
    SFUInt32            _sfNormalSource;
    SFVec3f             _sfNormal;
    SFUInt32            _sfUpSource;
    SFVec3f             _sfUp;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    NodeParticleSystemCoreBase(void);
    NodeParticleSystemCoreBase(const NodeParticleSystemCoreBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~NodeParticleSystemCoreBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFNodePtr           *getMFParticleNodes  (void);

           NodePtr             &getParticleNodes  (UInt32 index);
           MFNodePtr           &getParticleNodes  (void);
     const MFNodePtr           &getParticleNodes  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      NodeParticleSystemCoreBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      NodeParticleSystemCoreBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const NodeParticleSystemCoreBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef NodeParticleSystemCoreBase *NodeParticleSystemCoreBaseP;

typedef osgIF<NodeParticleSystemCoreBase::isNodeCore,
              CoredNodePtr<NodeParticleSystemCore>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet NodeParticleSystemCoreNodePtr;

typedef RefPtr<NodeParticleSystemCorePtr> NodeParticleSystemCoreRefPtr;

OSG_END_NAMESPACE

#define OSGNODEPARTICLESYSTEMCOREBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGNODEPARTICLESYSTEMCOREBASE_H_ */
