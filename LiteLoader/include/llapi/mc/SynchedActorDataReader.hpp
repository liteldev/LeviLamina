/**
 * @file  SynchedActorDataReader.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SynchedActorDataReader.
 *
 */
class SynchedActorDataReader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCHEDACTORDATAREADER
public:
    class SynchedActorDataReader& operator=(class SynchedActorDataReader const &) = delete;
    SynchedActorDataReader(class SynchedActorDataReader const &) = delete;
    SynchedActorDataReader() = delete;
#endif

public:
    /**
     * @symbol ?getInt@SynchedActorDataReader@@QEBAHG@Z
     * @hash   -2040306384
     */
    MCAPI int getInt(unsigned short) const;
    /**
     * @symbol ?getPosition@SynchedActorDataReader@@QEBA?AVBlockPos@@G@Z
     * @hash   626528424
     */
    MCAPI class BlockPos getPosition(unsigned short) const;
    /**
     * @symbol ?getStatusFlag@SynchedActorDataReader@@QEBA_NW4ActorFlags@@@Z
     * @hash   922989019
     */
    MCAPI bool getStatusFlag(enum class ActorFlags) const;
    /**
     * @symbol ?getVec3@SynchedActorDataReader@@QEBA?AVVec3@@G@Z
     * @hash   -1114128792
     */
    MCAPI class Vec3 getVec3(unsigned short) const;

};