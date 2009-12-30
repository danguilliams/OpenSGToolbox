/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, David Oluwatimi                                  *
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
 **     class DistanceAttractRepelParticleAffector
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISTANCEATTRACTREPELPARTICLEAFFECTORBASE_H_
#define _OSGDISTANCEATTRACTREPELPARTICLEAFFECTORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGParticleSystemDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGDistanceParticleAffector.h" // Parent

#include <OpenSG/OSGReal32Fields.h> // MinDistance type
#include <OpenSG/OSGReal32Fields.h> // MaxDistance type
#include <OpenSG/OSGReal32Fields.h> // Quadratic type
#include <OpenSG/OSGReal32Fields.h> // Linear type
#include <OpenSG/OSGReal32Fields.h> // Constant type

#include "OSGDistanceAttractRepelParticleAffectorFields.h"

OSG_BEGIN_NAMESPACE

class DistanceAttractRepelParticleAffector;
class BinaryDataHandler;

//! \brief DistanceAttractRepelParticleAffector Base Class.

class OSG_PARTICLESYSTEMLIB_DLLMAPPING DistanceAttractRepelParticleAffectorBase : public DistanceParticleAffector
{
  private:

    typedef DistanceParticleAffector    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DistanceAttractRepelParticleAffectorPtr  Ptr;

    enum
    {
        MinDistanceFieldId = Inherited::NextFieldId,
        MaxDistanceFieldId = MinDistanceFieldId + 1,
        QuadraticFieldId   = MaxDistanceFieldId + 1,
        LinearFieldId      = QuadraticFieldId   + 1,
        ConstantFieldId    = LinearFieldId      + 1,
        NextFieldId        = ConstantFieldId    + 1
    };

    static const OSG::BitVector MinDistanceFieldMask;
    static const OSG::BitVector MaxDistanceFieldMask;
    static const OSG::BitVector QuadraticFieldMask;
    static const OSG::BitVector LinearFieldMask;
    static const OSG::BitVector ConstantFieldMask;


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

           SFReal32            *getSFMinDistance    (void);
           SFReal32            *getSFMaxDistance    (void);
           SFReal32            *getSFQuadratic      (void);
           SFReal32            *getSFLinear         (void);
           SFReal32            *getSFConstant       (void);

           Real32              &getMinDistance    (void);
     const Real32              &getMinDistance    (void) const;
           Real32              &getMaxDistance    (void);
     const Real32              &getMaxDistance    (void) const;
           Real32              &getQuadratic      (void);
     const Real32              &getQuadratic      (void) const;
           Real32              &getLinear         (void);
     const Real32              &getLinear         (void) const;
           Real32              &getConstant       (void);
     const Real32              &getConstant       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setMinDistance    ( const Real32 &value );
     void setMaxDistance    ( const Real32 &value );
     void setQuadratic      ( const Real32 &value );
     void setLinear         ( const Real32 &value );
     void setConstant       ( const Real32 &value );

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

    static  DistanceAttractRepelParticleAffectorPtr      create          (void); 
    static  DistanceAttractRepelParticleAffectorPtr      createEmpty     (void); 

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

    SFReal32            _sfMinDistance;
    SFReal32            _sfMaxDistance;
    SFReal32            _sfQuadratic;
    SFReal32            _sfLinear;
    SFReal32            _sfConstant;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DistanceAttractRepelParticleAffectorBase(void);
    DistanceAttractRepelParticleAffectorBase(const DistanceAttractRepelParticleAffectorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DistanceAttractRepelParticleAffectorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DistanceAttractRepelParticleAffectorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DistanceAttractRepelParticleAffectorBase *pOther,
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
    void operator =(const DistanceAttractRepelParticleAffectorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DistanceAttractRepelParticleAffectorBase *DistanceAttractRepelParticleAffectorBaseP;

typedef osgIF<DistanceAttractRepelParticleAffectorBase::isNodeCore,
              CoredNodePtr<DistanceAttractRepelParticleAffector>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DistanceAttractRepelParticleAffectorNodePtr;

typedef RefPtr<DistanceAttractRepelParticleAffectorPtr> DistanceAttractRepelParticleAffectorRefPtr;

OSG_END_NAMESPACE

#define OSGDISTANCEATTRACTREPELPARTICLEAFFECTORBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGDISTANCEATTRACTREPELPARTICLEAFFECTORBASE_H_ */