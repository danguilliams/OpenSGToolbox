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
 **     Do not change this file, changes should be done in the derived      **
 **     class GradientLayer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGRADIENTLAYERBASE_H_
#define _OSGGRADIENTLAYERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGLayer.h" // Parent

#include "OSGVecFields.h"               // StartPosition type
#include "OSGBaseFields.h"              // Colors type
#include "OSGSysFields.h"               // Stops type

#include "OSGGradientLayerFields.h"

OSG_BEGIN_NAMESPACE

class GradientLayer;

//! \brief GradientLayer Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING GradientLayerBase : public Layer
{
  public:

    typedef Layer Inherited;
    typedef Layer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(GradientLayer);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        StartPositionFieldId = Inherited::NextFieldId,
        EndPositionFieldId = StartPositionFieldId + 1,
        ColorsFieldId = EndPositionFieldId + 1,
        StopsFieldId = ColorsFieldId + 1,
        SpreadMethodFieldId = StopsFieldId + 1,
        NextFieldId = SpreadMethodFieldId + 1
    };

    static const OSG::BitVector StartPositionFieldMask =
        (TypeTraits<BitVector>::One << StartPositionFieldId);
    static const OSG::BitVector EndPositionFieldMask =
        (TypeTraits<BitVector>::One << EndPositionFieldId);
    static const OSG::BitVector ColorsFieldMask =
        (TypeTraits<BitVector>::One << ColorsFieldId);
    static const OSG::BitVector StopsFieldMask =
        (TypeTraits<BitVector>::One << StopsFieldId);
    static const OSG::BitVector SpreadMethodFieldMask =
        (TypeTraits<BitVector>::One << SpreadMethodFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFPnt2f           SFStartPositionType;
    typedef SFPnt2f           SFEndPositionType;
    typedef MFColor4f         MFColorsType;
    typedef MFReal32          MFStopsType;
    typedef SFUInt32          SFSpreadMethodType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFPnt2f             *editSFStartPosition  (void);
            const SFPnt2f             *getSFStartPosition   (void) const;

                  SFPnt2f             *editSFEndPosition    (void);
            const SFPnt2f             *getSFEndPosition     (void) const;

                  MFColor4f           *editMFColors         (void);
            const MFColor4f           *getMFColors          (void) const;

                  MFReal32            *editMFStops          (void);
            const MFReal32            *getMFStops           (void) const;

                  SFUInt32            *editSFSpreadMethod   (void);
            const SFUInt32            *getSFSpreadMethod    (void) const;


                  Pnt2f               &editStartPosition  (void);
            const Pnt2f               &getStartPosition   (void) const;

                  Pnt2f               &editEndPosition    (void);
            const Pnt2f               &getEndPosition     (void) const;

                  Color4f             &editColors         (const UInt32 index);
            const Color4f             &getColors          (const UInt32 index) const;

                  Real32              &editStops          (const UInt32 index);
                  Real32               getStops           (const UInt32 index) const;

                  UInt32              &editSpreadMethod   (void);
                  UInt32               getSpreadMethod    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setStartPosition  (const Pnt2f &value);
            void setEndPosition    (const Pnt2f &value);
            void setSpreadMethod   (const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  GradientLayerTransitPtr  create          (void);
    static  GradientLayer           *createEmpty     (void);

    static  GradientLayerTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  GradientLayer            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  GradientLayerTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt2f           _sfStartPosition;
    SFPnt2f           _sfEndPosition;
    MFColor4f         _mfColors;
    MFReal32          _mfStops;
    SFUInt32          _sfSpreadMethod;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GradientLayerBase(void);
    GradientLayerBase(const GradientLayerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GradientLayerBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleStartPosition   (void) const;
    EditFieldHandlePtr editHandleStartPosition  (void);
    GetFieldHandlePtr  getHandleEndPosition     (void) const;
    EditFieldHandlePtr editHandleEndPosition    (void);
    GetFieldHandlePtr  getHandleColors          (void) const;
    EditFieldHandlePtr editHandleColors         (void);
    GetFieldHandlePtr  getHandleStops           (void) const;
    EditFieldHandlePtr editHandleStops          (void);
    GetFieldHandlePtr  getHandleSpreadMethod    (void) const;
    EditFieldHandlePtr editHandleSpreadMethod   (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      GradientLayerBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const GradientLayerBase &source);
};

typedef GradientLayerBase *GradientLayerBaseP;

OSG_END_NAMESPACE

#endif /* _OSGGRADIENTLAYERBASE_H_ */