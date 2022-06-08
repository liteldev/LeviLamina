// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldGenerator {

#define AFTER_EXTRA
// Add Member There
public:
struct BlockVolumeDimensions {
    BlockVolumeDimensions() = delete;
    BlockVolumeDimensions(BlockVolumeDimensions const&) = delete;
    BlockVolumeDimensions(BlockVolumeDimensions const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENERATOR
public:
    class WorldGenerator& operator=(class WorldGenerator const &) = delete;
    WorldGenerator(class WorldGenerator const &) = delete;
    WorldGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDGENERATOR
    MCVAPI void addHardcodedSpawnAreas(class LevelChunk &);
    MCVAPI void debugRender();
    MCVAPI bool findNearestStructureFeature(enum StructureFeatureType, class BlockPos const &, class BlockPos &, bool);
    MCVAPI enum StructureFeatureType findStructureFeatureTypeAt(class BlockPos const &);
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const &, enum StructureFeatureType) const;
    MCVAPI void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    MCVAPI ~WorldGenerator();
#endif
    MCAPI WorldGenerator(class Dimension &);
    MCAPI WorldGenerator(class Dimension &, std::unique_ptr<class StructureFeatureRegistry>);
    MCAPI class StructureFeatureRegistry & getStructureFeatureRegistry() const;

protected:
    MCAPI void postProcessStructureFeatures(class BlockSource &, class Random &, int, int);
    MCAPI void prepareStructureFeatureBlueprints(class Dimension &, class ChunkPos const &, class BiomeSource const &, class IPreliminarySurfaceProvider const &);
    MCAPI static unsigned __int64 const TICKING_QUEUE_PASS_LIMIT;

private:

};