/**
 * @file  SilverfishWakeUpFriendsGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SilverfishWakeUpFriendsGoal.
 *
 */
class SilverfishWakeUpFriendsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISHWAKEUPFRIENDSGOAL
public:
    class SilverfishWakeUpFriendsGoal& operator=(class SilverfishWakeUpFriendsGoal const &) = delete;
    SilverfishWakeUpFriendsGoal(class SilverfishWakeUpFriendsGoal const &) = delete;
    SilverfishWakeUpFriendsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SilverfishWakeUpFriendsGoal();
    /**
     * @hash   -1408456644
     * @vftbl  1
     * @symbol  ?canUse\@SilverfishWakeUpFriendsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -1860386816
     * @vftbl  6
     * @symbol  ?tick\@SilverfishWakeUpFriendsGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1427867948
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SilverfishWakeUpFriendsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -299593139
     * @symbol  ??0SilverfishWakeUpFriendsGoal\@\@QEAA\@AEAVSilverfish\@\@\@Z
     */
    MCAPI SilverfishWakeUpFriendsGoal(class Silverfish &);

};