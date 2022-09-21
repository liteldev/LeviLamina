/**
 * @file  MC/WorldLimitChunkSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldLimitChunkSource.
 *
 */
class WorldLimitChunkSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDLIMITCHUNKSOURCE
public:
    class WorldLimitChunkSource& operator=(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WorldLimitChunkSource();
    /**
     * @hash   1151061781
     * @vftbl  3
     * @symbol ?getExistingChunk@WorldLimitChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /**
     * @hash   -1009412045
     * @vftbl  7
     * @symbol ?createNewChunk@WorldLimitChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
     */
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum ChunkSource::LoadMode, bool);
    /**
     * @hash   2125313793
     * @vftbl  22
     * @symbol ?isWithinWorldLimit@WorldLimitChunkSource@@UEBA_NAEBVChunkPos@@@Z
     */
    virtual bool isWithinWorldLimit(class ChunkPos const &) const;
    /**
     * @hash   2044363899
     * @vftbl  26
     * @symbol ?canCreateViews@WorldLimitChunkSource@@UEBA_NXZ
     */
    virtual bool canCreateViews() const;
    /**
     * @hash   -656210441
     * @symbol ??0WorldLimitChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@AEBVBlockPos@@HH@Z
     */
    MCAPI WorldLimitChunkSource(std::unique_ptr<class ChunkSource>, class BlockPos const &, int, int);

};