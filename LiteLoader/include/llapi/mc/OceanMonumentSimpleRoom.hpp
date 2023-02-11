/**
 * @file  OceanMonumentSimpleRoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentSimpleRoom.
 *
 */
class OceanMonumentSimpleRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTSIMPLEROOM
public:
    class OceanMonumentSimpleRoom& operator=(class OceanMonumentSimpleRoom const &) = delete;
    OceanMonumentSimpleRoom(class OceanMonumentSimpleRoom const &) = delete;
    OceanMonumentSimpleRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OceanMonumentSimpleRoom();
    /**
     * @hash   1773869561
     * @vftbl  2
     * @symbol  ?getType\@OceanMonumentSimpleRoom\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   -1694184289
     * @vftbl  4
     * @symbol  ?postProcess\@OceanMonumentSimpleRoom\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};