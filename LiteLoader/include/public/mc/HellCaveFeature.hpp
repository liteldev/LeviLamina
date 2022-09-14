/**
 * @file  HellCaveFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CaveFeatureutils.hpp"
#include "CaveFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HellCaveFeature.
 *
 */
class HellCaveFeature : public CaveFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HELLCAVEFEATURE
public:
    class HellCaveFeature& operator=(class HellCaveFeature const &) = delete;
    HellCaveFeature(class HellCaveFeature const &) = delete;
    HellCaveFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1838737030
     */
    virtual ~HellCaveFeature();
    /**
     * @vftbl  1
     * @symbol ?place@HellCaveFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     * @hash   890315297
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @vftbl  3
     * @symbol ?addRoom@HellCaveFeature@@MEBAXAEAVIBlockWorldGenAPI@@AEBUCarverConfiguration@CaveFeatureUtils@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@AEAVRenderParams@@AEBUCarvingParameters@4@AEAV?$vector@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@V?$allocator@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@@std@@@std@@@Z
     * @hash   2088757359
     */
    virtual void addRoom(class IBlockWorldGenAPI &, struct CaveFeatureUtils::CarverConfiguration const &, class Random &, class ChunkPos const &, class Vec3 const &, class RenderParams &, struct CaveFeatureUtils::CarvingParameters const &, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams> &) const;
    /**
     * @vftbl  4
     * @symbol ?addTunnel@HellCaveFeature@@MEBAXAEAVIBlockWorldGenAPI@@AEBUCarverConfiguration@CaveFeatureUtils@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@MMMHHMAEAVRenderParams@@AEBUCarvingParameters@4@AEAV?$vector@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@V?$allocator@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@@std@@@std@@@Z
     * @hash   -476755476
     */
    virtual void addTunnel(class IBlockWorldGenAPI &, struct CaveFeatureUtils::CarverConfiguration const &, class Random &, class ChunkPos const &, class Vec3 const &, float, float, float, int, int, float, class RenderParams &, struct CaveFeatureUtils::CarvingParameters const &, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams> &) const;
    /**
     * @vftbl  6
     * @symbol ?addFeature@HellCaveFeature@@MEBAXAEAVIBlockWorldGenAPI@@AEBVChunkPos@@AEAVRandom@@1AEAVRenderParams@@AEAV?$vector@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@V?$allocator@UCarveEllipsoidParams@CachedMetaData@CaveFeature@@@std@@@std@@@Z
     * @hash   -1780814151
     */
    virtual void addFeature(class IBlockWorldGenAPI &, class ChunkPos const &, class Random &, class ChunkPos const &, class RenderParams &, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams> &) const;

};