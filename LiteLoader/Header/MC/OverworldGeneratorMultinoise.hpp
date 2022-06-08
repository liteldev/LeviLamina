// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Util.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OverworldGeneratorMultinoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDGENERATORMULTINOISE
public:
    class OverworldGeneratorMultinoise& operator=(class OverworldGeneratorMultinoise const &) = delete;
    OverworldGeneratorMultinoise(class OverworldGeneratorMultinoise const &) = delete;
    OverworldGeneratorMultinoise() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATORMULTINOISE
    MCVAPI void _prepareHeights(class BlockVolume &, class ChunkPos const &, class WorldGenCache const &, class Aquifer *, class std::function<void (class BlockPos const &, class Block const &, int)> &&, bool, std::vector<short> *, int);
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos) const;
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    MCVAPI class BlockPos findSpawnPosition() const;
    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(class ChunkPos const &) const;
    MCVAPI class BiomeSource const & getBiomeSource() const;
    MCVAPI int getLevelGenHeight() const;
    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const & getMaterialAdjNoise() const;
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
    MCVAPI class PerlinSimplexNoise const & getSurfaceNoise();
    MCVAPI class std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;
    MCVAPI std::unique_ptr<class Aquifer> tryMakeAquifer(class ChunkPos const &, class SurfaceLevelCache const &, short, short, short) const;
    MCVAPI ~OverworldGeneratorMultinoise();
#endif
    MCAPI OverworldGeneratorMultinoise(class Dimension &, class LevelSeed64, class Biome const *, std::unique_ptr<class StructureFeatureRegistry>);
    MCAPI static float _applySlides(class DimensionHeightRange const &, float, unsigned char);

protected:

private:
    MCAPI struct TerrainInfo _attenuateOffsetAndFactor(class DividedPos2d<4>, struct TerrainInfo) const;
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(class ChunkPos const &, class WorldGenCache const &, class NoodleCavifier *, class OreVeinifier *) const;
    MCAPI std::unique_ptr<class BiomeSource> _makeBiomeSource(class XoroshiroPositionalRandomFactory const &, class BiomeRegistry const &, class Biome const *);

};