// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetworkChunkSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKSOURCE
public:
    class NetworkChunkSource& operator=(class NetworkChunkSource const &) = delete;
    NetworkChunkSource(class NetworkChunkSource const &) = delete;
    NetworkChunkSource() = delete;
#endif

public:
    /*0*/ virtual ~NetworkChunkSource();
    /*3*/ virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /*4*/ virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random &);
    /*6*/ virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum ChunkSource::LoadMode, bool);
    /*7*/ virtual class std::shared_ptr<class LevelChunk> getOrLoadChunk(class ChunkPos const &, enum ChunkSource::LoadMode, bool);
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*17*/ virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const * getChunkMap();
    /*23*/ virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const & getStorage() const;
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual bool canCreateViews() const;
    MCAPI NetworkChunkSource(class Dimension &);

protected:

private:

};