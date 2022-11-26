/**
 * @file  LookAtActorGoal.hpp
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
 * @brief MC class LookAtActorGoal.
 *
 */
class LookAtActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATACTORGOAL
public:
    class LookAtActorGoal& operator=(class LookAtActorGoal const &) = delete;
    LookAtActorGoal(class LookAtActorGoal const &) = delete;
    LookAtActorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1370319644
     */
    virtual ~LookAtActorGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@LookAtActorGoal@@UEAA_NXZ
     * @hash   133137994
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@LookAtActorGoal@@UEAA_NXZ
     * @hash   873861496
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@LookAtActorGoal@@UEAAXXZ
     * @hash   2036967059
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@LookAtActorGoal@@UEAAXXZ
     * @hash   -1392097405
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@LookAtActorGoal@@UEAAXXZ
     * @hash   -1530009682
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@LookAtActorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1684117238
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0LookAtActorGoal@@QEAA@AEAVMob@@MMHHHH@Z
     * @hash   1817668375
     */
    MCAPI LookAtActorGoal(class Mob &, float, float, int, int, int, int);

//private:
    /**
     * @symbol ?_withinFieldOfView@LookAtActorGoal@@AEAA_NAEAVActor@@@Z
     * @hash   -1674978613
     */
    MCAPI bool _withinFieldOfView(class Actor &);

private:

};