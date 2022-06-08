// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGE
public:
    class LevelStorage& operator=(class LevelStorage const &) = delete;
    LevelStorage(class LevelStorage const &) = delete;
    LevelStorage() = delete;
#endif


public:
    /*0*/ virtual ~LevelStorage();
    /*1*/ virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>) = 0;
    /*2*/ virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const &, enum DBHelpers::Category) = 0;
    /*3*/ virtual bool hasKey(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category) const = 0;
    /*4*/ virtual void forEachKeyWithPrefix(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const = 0;
    /*5*/ virtual bool loadLevelData(class LevelData &) = 0;
    /*6*/ virtual std::unique_ptr<class ChunkSource> createChunkStorage(std::unique_ptr<class ChunkSource>, enum StorageVersion) = 0;
    /*7*/ virtual void saveLevelData(class LevelData const &) = 0;
    /*8*/ virtual class Core::PathBuffer<std::string> const & getFullPath() const = 0;
    /*9*/ virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, std::string &&, enum DBHelpers::Category) = 0;
    /*10*/ virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(class LevelStorageWriteBatch const &) = 0;
    /*11*/ virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> deleteData(std::string const &, enum DBHelpers::Category) = 0;
    /*12*/ virtual void syncIO() = 0;
    /*13*/ virtual void getStatistics(std::string &) const = 0;
    /*14*/ virtual bool clonePlayerData(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    /*15*/ virtual void __unk_vfn_15() = 0;
    /*16*/ virtual void startShutdown() = 0;
    /*17*/ virtual bool isShuttingDown() const = 0;
    /*18*/ virtual bool checkShutdownDone() = 0;
    /*19*/ virtual bool loadData(class gsl::basic_string_span<char const, -1>, std::string &, enum DBHelpers::Category) const;
    /*20*/ virtual void __unk_vfn_20() = 0;
    /*21*/ virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const &) = 0;
    /*22*/ virtual void releaseSnapshot() = 0;
    /*23*/ virtual void compactStorage() = 0;
    /*24*/ virtual void syncAndSuspendStorage() = 0;
    /*25*/ virtual void resumeStorage() = 0;
    /*26*/ virtual void setFlushAllowed(bool) = 0;
    /*27*/ virtual void flushToPermanentStorage() = 0;
    /*28*/ virtual void freeCaches();
    /*29*/ virtual void setCompactionCallback(class std::function<void (enum CompactionStatus)>) = 0;
    /*30*/ virtual void setCriticalSyncSaveCallback(class std::function<void (void)>) = 0;
    /*31*/ virtual void corruptLevel();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSTORAGE
public:
#endif
    MCAPI std::string getServerId(struct PlayerStorageIds const &);
    MCAPI std::string getServerId(class Player const &, bool);
    MCAPI std::vector<std::string> loadAllPlayerIDs(bool) const;
    MCAPI std::unique_ptr<class CompoundTag> loadPlayerDataFromTag(class gsl::basic_string_span<char const, -1>);
    MCAPI std::unique_ptr<class CompoundTag> loadServerPlayerData(class Player const &, bool);
    MCAPI void save(class Actor &);
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, class CompoundTag const &, enum DBHelpers::Category);

//private:

private:
    MCAPI static std::string const LEGACY_CONSOLE_PLAYER_PREFIX;
    MCAPI static std::string const LOCAL_PLAYER_TAG;


};