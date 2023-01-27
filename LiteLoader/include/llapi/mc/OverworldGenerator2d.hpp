/**
 * @file  OverworldGenerator2d.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Util.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OverworldGenerator2d.
 *
 */
class OverworldGenerator2d {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDGENERATOR2D
public:
    class OverworldGenerator2d& operator=(class OverworldGenerator2d const &) = delete;
    OverworldGenerator2d(class OverworldGenerator2d const &) = delete;
    OverworldGenerator2d() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATOR2D
    /**
     * @hash   -1768561169
     * @symbol  ?_prepareHeights\@OverworldGenerator2d\@\@EEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEBVWorldGenCache\@\@PEAVAquifer\@\@$$QEAV?$function\@$$A6AXAEBVBlockPos\@\@AEBVBlock\@\@H\@Z\@std\@\@_NPEAV?$vector\@FV?$allocator\@F\@std\@\@\@7\@H\@Z
     */
    MCVAPI void _prepareHeights(class BlockVolume &, class ChunkPos const &, class WorldGenCache const &, class Aquifer *, class std::function<void (class BlockPos const &, class Block const &, int)> &&, bool, std::vector<short> *, int);
    /**
     * @hash   647416641
     * @symbol  ?decorateWorldGenPostProcess\@OverworldGenerator2d\@\@EEBAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @hash   1070269324
     * @symbol  ?findSpawnPosition\@OverworldGenerator2d\@\@UEBA?AVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @hash   117420036
     * @symbol  ?generateDensityCellsForChunk\@OverworldGenerator2d\@\@UEBA?AV?$MultidimensionalArray\@M$04$04$0CJ\@\@Util\@\@AEBVChunkPos\@\@\@Z
     */
    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(class ChunkPos const &) const;
    /**
     * @hash   -99599176
     * @symbol  ?getBiomeSource\@OverworldGenerator2d\@\@UEBAAEBVBiomeSource\@\@XZ
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @hash   734128685
     * @symbol  ?getLevelGenHeight\@OverworldGenerator2d\@\@UEBAHXZ
     */
    MCVAPI int getLevelGenHeight() const;
    /**
     * @hash   379795769
     * @symbol  ?getMaterialAdjNoise\@OverworldGenerator2d\@\@MEBAAEBV?$unique_ptr\@VPerlinSimplexNoise\@\@U?$default_delete\@VPerlinSimplexNoise\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const & getMaterialAdjNoise() const;
    /**
     * @hash   -411537653
     * @symbol  ?getSurfaceNoise\@OverworldGenerator2d\@\@MEAAAEBVPerlinSimplexNoise\@\@XZ
     */
    MCVAPI class PerlinSimplexNoise const & getSurfaceNoise();
    /**
     * @hash   -1891194113
     * @symbol  ?getXoroshiroPositionalRandomFactory\@OverworldGenerator2d\@\@EEBA?AV?$optional\@VXoroshiroPositionalRandomFactory\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;
#endif
    /**
     * @hash   -1913217017
     * @symbol  ??0OverworldGenerator2d\@\@QEAA\@AEAVDimension\@\@I_NPEBVBiome\@\@V?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OverworldGenerator2d(class Dimension &, unsigned int, bool, class Biome const *, std::unique_ptr<class StructureFeatureRegistry>);

//private:
    /**
     * @hash   2025228384
     * @symbol  ?_generateDensityCellsForChunk\@OverworldGenerator2d\@\@AEBA?AV?$MultidimensionalArray\@M$04$04$0CJ\@\@Util\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(class ChunkPos const &) const;
    /**
     * @hash   -313435581
     * @symbol  ?_makeBiomeSource\@OverworldGenerator2d\@\@CA?AV?$unique_ptr\@VBiomeSource\@\@U?$default_delete\@VBiomeSource\@\@\@std\@\@\@std\@\@IAEBVDimension\@\@\@Z
     */
    MCAPI static std::unique_ptr<class BiomeSource> _makeBiomeSource(unsigned int, class Dimension const &);
    /**
     * @hash   -1549260035
     * @symbol  ?_makeCommonNodeGraph\@OverworldGenerator2d\@\@CA?AV?$shared_ptr\@V?$OperationNode\@PEAVBiome\@\@VPos2d\@\@\@\@\@std\@\@W4GeneratorType\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class OperationNode<class Biome *, class Pos2d>> _makeCommonNodeGraph(enum class GeneratorType, class BiomeRegistry const &);

private:

};