/**
 * @file  RaidTriggerComponent.hpp
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
 * @brief MC class RaidTriggerComponent.
 *
 */
class RaidTriggerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDTRIGGERCOMPONENT
public:
    class RaidTriggerComponent& operator=(class RaidTriggerComponent const &) = delete;
    RaidTriggerComponent(class RaidTriggerComponent const &) = delete;
    RaidTriggerComponent() = delete;
#endif

public:
    /**
     * @symbol ?initFromDefinition@RaidTriggerComponent@@QEAAXAEAVActor@@@Z
     * @hash   181521082
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?reloadComponent@RaidTriggerComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1170779492
     */
    MCAPI void reloadComponent(class Actor &);

};