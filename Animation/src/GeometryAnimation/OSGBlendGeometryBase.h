/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class BlendGeometry
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBLENDGEOMETRYBASE_H_
#define _OSGBLENDGEOMETRYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGGeometry.h> // Parent

#include <OpenSG/OSGReal32Fields.h> // BlendAmounts type
#include <OpenSG/OSGGeoPositionsFields.h> // BasePositions type
#include <OpenSG/OSGGeoNormalsFields.h> // BaseNormals type
#include <OpenSG/OSGGeoColorsFields.h> // BaseColors type
#include <OpenSG/OSGGeoColorsFields.h> // BaseSecondaryColors type
#include <OpenSG/OSGGeoTexCoordsFields.h> // BaseTexCoords type
#include <OpenSG/OSGGeoTexCoordsFields.h> // BaseTexCoords1 type
#include <OpenSG/OSGGeoTexCoordsFields.h> // BaseTexCoords2 type
#include <OpenSG/OSGGeoTexCoordsFields.h> // BaseTexCoords3 type
#include "GeometryAnimation/OSGGeoPositionDifferenceSet.h" // GeoPositionDifferenceSets type
#include "GeometryAnimation/OSGGeoNormalDifferenceSet.h" // GeoNormalDifferenceSets type
#include "GeometryAnimation/OSGGeoColorDifferenceSet.h" // GeoColorDifferenceSets type
#include "GeometryAnimation/OSGGeoColorDifferenceSet.h" // GeoSecondaryColorDifferenceSets type
#include "GeometryAnimation/OSGGeoTexCoordDifferenceSet.h" // GeoTexCoordDifferenceSets type
#include "GeometryAnimation/OSGGeoTexCoordDifferenceSet.h" // GeoTexCoord1DifferenceSets type
#include "GeometryAnimation/OSGGeoTexCoordDifferenceSet.h" // GeoTexCoord2DifferenceSets type
#include "GeometryAnimation/OSGGeoTexCoordDifferenceSet.h" // GeoTexCoord3DifferenceSets type

#include "OSGBlendGeometryFields.h"

OSG_BEGIN_NAMESPACE

class BlendGeometry;
class BinaryDataHandler;

//! \brief BlendGeometry Base Class.

class OSG_ANIMATIONLIB_DLLMAPPING BlendGeometryBase : public Geometry
{
  private:

    typedef Geometry    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef BlendGeometryPtr  Ptr;

    enum
    {
        BlendAmountsFieldId                    = Inherited::NextFieldId,
        BasePositionsFieldId                   = BlendAmountsFieldId                    + 1,
        BaseNormalsFieldId                     = BasePositionsFieldId                   + 1,
        BaseColorsFieldId                      = BaseNormalsFieldId                     + 1,
        BaseSecondaryColorsFieldId             = BaseColorsFieldId                      + 1,
        BaseTexCoordsFieldId                   = BaseSecondaryColorsFieldId             + 1,
        BaseTexCoords1FieldId                  = BaseTexCoordsFieldId                   + 1,
        BaseTexCoords2FieldId                  = BaseTexCoords1FieldId                  + 1,
        BaseTexCoords3FieldId                  = BaseTexCoords2FieldId                  + 1,
        GeoPositionDifferenceSetsFieldId       = BaseTexCoords3FieldId                  + 1,
        GeoNormalDifferenceSetsFieldId         = GeoPositionDifferenceSetsFieldId       + 1,
        GeoColorDifferenceSetsFieldId          = GeoNormalDifferenceSetsFieldId         + 1,
        GeoSecondaryColorDifferenceSetsFieldId = GeoColorDifferenceSetsFieldId          + 1,
        GeoTexCoordDifferenceSetsFieldId       = GeoSecondaryColorDifferenceSetsFieldId + 1,
        GeoTexCoord1DifferenceSetsFieldId      = GeoTexCoordDifferenceSetsFieldId       + 1,
        GeoTexCoord2DifferenceSetsFieldId      = GeoTexCoord1DifferenceSetsFieldId      + 1,
        GeoTexCoord3DifferenceSetsFieldId      = GeoTexCoord2DifferenceSetsFieldId      + 1,
        NextFieldId                            = GeoTexCoord3DifferenceSetsFieldId      + 1
    };

    static const OSG::BitVector BlendAmountsFieldMask;
    static const OSG::BitVector BasePositionsFieldMask;
    static const OSG::BitVector BaseNormalsFieldMask;
    static const OSG::BitVector BaseColorsFieldMask;
    static const OSG::BitVector BaseSecondaryColorsFieldMask;
    static const OSG::BitVector BaseTexCoordsFieldMask;
    static const OSG::BitVector BaseTexCoords1FieldMask;
    static const OSG::BitVector BaseTexCoords2FieldMask;
    static const OSG::BitVector BaseTexCoords3FieldMask;
    static const OSG::BitVector GeoPositionDifferenceSetsFieldMask;
    static const OSG::BitVector GeoNormalDifferenceSetsFieldMask;
    static const OSG::BitVector GeoColorDifferenceSetsFieldMask;
    static const OSG::BitVector GeoSecondaryColorDifferenceSetsFieldMask;
    static const OSG::BitVector GeoTexCoordDifferenceSetsFieldMask;
    static const OSG::BitVector GeoTexCoord1DifferenceSetsFieldMask;
    static const OSG::BitVector GeoTexCoord2DifferenceSetsFieldMask;
    static const OSG::BitVector GeoTexCoord3DifferenceSetsFieldMask;


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

           MFReal32            *getMFBlendAmounts   (void);
           SFGeoPositionsPtr   *getSFBasePositions  (void);
           SFGeoNormalsPtr     *getSFBaseNormals    (void);
           SFGeoColorsPtr      *getSFBaseColors     (void);
           SFGeoColorsPtr      *getSFBaseSecondaryColors(void);
           SFGeoTexCoordsPtr   *getSFBaseTexCoords  (void);
           SFGeoTexCoordsPtr   *getSFBaseTexCoords1 (void);
           SFGeoTexCoordsPtr   *getSFBaseTexCoords2 (void);
           SFGeoTexCoordsPtr   *getSFBaseTexCoords3 (void);
           MFGeoPositionDifferenceSetPtr *getMFGeoPositionDifferenceSets(void);
           MFGeoNormalDifferenceSetPtr *getMFGeoNormalDifferenceSets(void);
           MFGeoColorDifferenceSetPtr *getMFGeoColorDifferenceSets(void);
           MFGeoColorDifferenceSetPtr *getMFGeoSecondaryColorDifferenceSets(void);
           MFGeoTexCoordDifferenceSetPtr *getMFGeoTexCoordDifferenceSets(void);
           MFGeoTexCoordDifferenceSetPtr *getMFGeoTexCoord1DifferenceSets(void);
           MFGeoTexCoordDifferenceSetPtr *getMFGeoTexCoord2DifferenceSets(void);
           MFGeoTexCoordDifferenceSetPtr *getMFGeoTexCoord3DifferenceSets(void);

           GeoPositionsPtr     &getBasePositions  (void);
     const GeoPositionsPtr     &getBasePositions  (void) const;
           GeoNormalsPtr       &getBaseNormals    (void);
     const GeoNormalsPtr       &getBaseNormals    (void) const;
           GeoColorsPtr        &getBaseColors     (void);
     const GeoColorsPtr        &getBaseColors     (void) const;
           GeoColorsPtr        &getBaseSecondaryColors(void);
     const GeoColorsPtr        &getBaseSecondaryColors(void) const;
           GeoTexCoordsPtr     &getBaseTexCoords  (void);
     const GeoTexCoordsPtr     &getBaseTexCoords  (void) const;
           GeoTexCoordsPtr     &getBaseTexCoords1 (void);
     const GeoTexCoordsPtr     &getBaseTexCoords1 (void) const;
           GeoTexCoordsPtr     &getBaseTexCoords2 (void);
     const GeoTexCoordsPtr     &getBaseTexCoords2 (void) const;
           GeoTexCoordsPtr     &getBaseTexCoords3 (void);
     const GeoTexCoordsPtr     &getBaseTexCoords3 (void) const;
           Real32              &getBlendAmounts   (const UInt32 index);
           MFReal32            &getBlendAmounts   (void);
     const MFReal32            &getBlendAmounts   (void) const;
           GeoPositionDifferenceSetPtr &getGeoPositionDifferenceSets(const UInt32 index);
           MFGeoPositionDifferenceSetPtr &getGeoPositionDifferenceSets(void);
     const MFGeoPositionDifferenceSetPtr &getGeoPositionDifferenceSets(void) const;
           GeoNormalDifferenceSetPtr &getGeoNormalDifferenceSets(const UInt32 index);
           MFGeoNormalDifferenceSetPtr &getGeoNormalDifferenceSets(void);
     const MFGeoNormalDifferenceSetPtr &getGeoNormalDifferenceSets(void) const;
           GeoColorDifferenceSetPtr &getGeoColorDifferenceSets(const UInt32 index);
           MFGeoColorDifferenceSetPtr &getGeoColorDifferenceSets(void);
     const MFGeoColorDifferenceSetPtr &getGeoColorDifferenceSets(void) const;
           GeoColorDifferenceSetPtr &getGeoSecondaryColorDifferenceSets(const UInt32 index);
           MFGeoColorDifferenceSetPtr &getGeoSecondaryColorDifferenceSets(void);
     const MFGeoColorDifferenceSetPtr &getGeoSecondaryColorDifferenceSets(void) const;
           GeoTexCoordDifferenceSetPtr &getGeoTexCoordDifferenceSets(const UInt32 index);
           MFGeoTexCoordDifferenceSetPtr &getGeoTexCoordDifferenceSets(void);
     const MFGeoTexCoordDifferenceSetPtr &getGeoTexCoordDifferenceSets(void) const;
           GeoTexCoordDifferenceSetPtr &getGeoTexCoord1DifferenceSets(const UInt32 index);
           MFGeoTexCoordDifferenceSetPtr &getGeoTexCoord1DifferenceSets(void);
     const MFGeoTexCoordDifferenceSetPtr &getGeoTexCoord1DifferenceSets(void) const;
           GeoTexCoordDifferenceSetPtr &getGeoTexCoord2DifferenceSets(const UInt32 index);
           MFGeoTexCoordDifferenceSetPtr &getGeoTexCoord2DifferenceSets(void);
     const MFGeoTexCoordDifferenceSetPtr &getGeoTexCoord2DifferenceSets(void) const;
           GeoTexCoordDifferenceSetPtr &getGeoTexCoord3DifferenceSets(const UInt32 index);
           MFGeoTexCoordDifferenceSetPtr &getGeoTexCoord3DifferenceSets(void);
     const MFGeoTexCoordDifferenceSetPtr &getGeoTexCoord3DifferenceSets(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setBasePositions  ( const GeoPositionsPtr &value );
     void setBaseNormals    ( const GeoNormalsPtr &value );
     void setBaseColors     ( const GeoColorsPtr &value );
     void setBaseSecondaryColors( const GeoColorsPtr &value );
     void setBaseTexCoords  ( const GeoTexCoordsPtr &value );
     void setBaseTexCoords1 ( const GeoTexCoordsPtr &value );
     void setBaseTexCoords2 ( const GeoTexCoordsPtr &value );
     void setBaseTexCoords3 ( const GeoTexCoordsPtr &value );

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

    static  BlendGeometryPtr      create          (void); 
    static  BlendGeometryPtr      createEmpty     (void); 

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

    MFReal32            _mfBlendAmounts;
    SFGeoPositionsPtr   _sfBasePositions;
    SFGeoNormalsPtr     _sfBaseNormals;
    SFGeoColorsPtr      _sfBaseColors;
    SFGeoColorsPtr      _sfBaseSecondaryColors;
    SFGeoTexCoordsPtr   _sfBaseTexCoords;
    SFGeoTexCoordsPtr   _sfBaseTexCoords1;
    SFGeoTexCoordsPtr   _sfBaseTexCoords2;
    SFGeoTexCoordsPtr   _sfBaseTexCoords3;
    MFGeoPositionDifferenceSetPtr   _mfGeoPositionDifferenceSets;
    MFGeoNormalDifferenceSetPtr   _mfGeoNormalDifferenceSets;
    MFGeoColorDifferenceSetPtr   _mfGeoColorDifferenceSets;
    MFGeoColorDifferenceSetPtr   _mfGeoSecondaryColorDifferenceSets;
    MFGeoTexCoordDifferenceSetPtr   _mfGeoTexCoordDifferenceSets;
    MFGeoTexCoordDifferenceSetPtr   _mfGeoTexCoord1DifferenceSets;
    MFGeoTexCoordDifferenceSetPtr   _mfGeoTexCoord2DifferenceSets;
    MFGeoTexCoordDifferenceSetPtr   _mfGeoTexCoord3DifferenceSets;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BlendGeometryBase(void);
    BlendGeometryBase(const BlendGeometryBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BlendGeometryBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      BlendGeometryBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      BlendGeometryBase *pOther,
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
    void operator =(const BlendGeometryBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef BlendGeometryBase *BlendGeometryBaseP;

typedef osgIF<BlendGeometryBase::isNodeCore,
              CoredNodePtr<BlendGeometry>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet BlendGeometryNodePtr;

typedef RefPtr<BlendGeometryPtr> BlendGeometryRefPtr;

OSG_END_NAMESPACE

#define OSGBLENDGEOMETRYBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGBLENDGEOMETRYBASE_H_ */
