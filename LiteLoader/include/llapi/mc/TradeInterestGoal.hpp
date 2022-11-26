/**
 * @file  TradeInterestGoal.hpp
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
 * @brief MC class TradeInterestGoal.
 *
 */
class TradeInterestGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEINTERESTGOAL
public:
    class TradeInterestGoal& operator=(class TradeInterestGoal const &) = delete;
    TradeInterestGoal(class TradeInterestGoal const &) = delete;
    TradeInterestGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2061398993
     */
    virtual ~TradeInterestGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@TradeInterestGoal@@UEAA_NXZ
     * @hash   1544230047
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@TradeInterestGoal@@UEAA_NXZ
     * @hash   1372839421
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@TradeInterestGoal@@UEAAXXZ
     * @hash   373827400
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@TradeInterestGoal@@UEAAXXZ
     * @hash   -714544152
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@TradeInterestGoal@@UEAAXXZ
     * @hash   400249315
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@TradeInterestGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   412963505
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0TradeInterestGoal@@QEAA@AEAVMob@@MMMMM@Z
     * @hash   -514966283
     */
    MCAPI TradeInterestGoal(class Mob &, float, float, float, float, float);

//private:
    /**
     * @symbol ?_isLookingAtMe@TradeInterestGoal@@AEBA_NAEBVPlayer@@@Z
     * @hash   -960235491
     */
    MCAPI bool _isLookingAtMe(class Player const &) const;

private:

};