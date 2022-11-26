/**
 * @file  GoalSelectorUtility.hpp
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
 * @brief MC namespace GoalSelectorUtility.
 *
 */
namespace GoalSelectorUtility {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?canUseInSystem@GoalSelectorUtility@@YA_NAEAVPrioritizedGoal@@AEAV?$vector@U?$pair@GVPrioritizedGoal@@@std@@V?$allocator@U?$pair@GVPrioritizedGoal@@@std@@@2@@std@@@Z
     * @hash   1587006800
     */
    MCAPI bool canUseInSystem(class PrioritizedGoal &, std::vector<struct std::pair<unsigned short, class PrioritizedGoal>> &);
    /**
     * @symbol ?tickGoals@GoalSelectorUtility@@YAXAEAVMob@@_N@Z
     * @hash   1687624210
     */
    MCAPI void tickGoals(class Mob &, bool);
    /**
     * @symbol ?tryStartGoals@GoalSelectorUtility@@YAXAEAVMob@@_N@Z
     * @hash   -22137998
     */
    MCAPI void tryStartGoals(class Mob &, bool);

};