/**
 * @file  OceanMonumentDoubleYRoom.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentDoubleYRoom.
 *
 */
class OceanMonumentDoubleYRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEYROOM
public:
    class OceanMonumentDoubleYRoom& operator=(class OceanMonumentDoubleYRoom const &) = delete;
    OceanMonumentDoubleYRoom(class OceanMonumentDoubleYRoom const &) = delete;
    OceanMonumentDoubleYRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -436873784
     */
    virtual ~OceanMonumentDoubleYRoom();
    /**
     * @vftbl  2
     * @symbol ?getType@OceanMonumentDoubleYRoom@@UEBA?AW4StructurePieceType@@XZ
     * @hash   372205293
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentDoubleYRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -890182117
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};