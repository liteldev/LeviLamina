/**
 * @file  EduSharedUriResource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure EduSharedUriResource.
 *
 */
struct EduSharedUriResource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUSHAREDURIRESOURCE
public:
    struct EduSharedUriResource& operator=(struct EduSharedUriResource const &) = delete;
    EduSharedUriResource(struct EduSharedUriResource const &) = delete;
#endif

public:
    /**
     * @symbol ??0EduSharedUriResource@@QEAA@XZ
     * @hash   2010320635
     */
    MCAPI EduSharedUriResource();
    /**
     * @symbol ??0EduSharedUriResource@@QEAA@AEBVCompoundTag@@@Z
     * @hash   1224205388
     */
    MCAPI EduSharedUriResource(class CompoundTag const &);
    /**
     * @symbol ??1EduSharedUriResource@@QEAA@XZ
     * @hash   904319785
     */
    MCAPI ~EduSharedUriResource();
    /**
     * @symbol ?toTag@EduSharedUriResource@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBU1@@Z
     * @hash   230932073
     */
    MCAPI static std::unique_ptr<class CompoundTag> toTag(struct EduSharedUriResource const &);

};