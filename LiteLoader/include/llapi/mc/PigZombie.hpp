/**
 * @file  PigZombie.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"
#include "../../Zombie.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PigZombie.
 *
 */
class PigZombie : public Zombie {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PIGZOMBIE
public:
    class PigZombie& operator=(class PigZombie const &) = delete;
    PigZombie(class PigZombie const &) = delete;
    PigZombie() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~PigZombie();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   1499474487
     * @vftbl  49
     * @symbol  ?normalTick\@PigZombie\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   1109992556
     * @vftbl  263
     * @symbol  ?_hurt\@PigZombie\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   959190412
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@PigZombie\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   2109663809
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@PigZombie\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   804727587
     * @vftbl  296
     * @symbol  ?checkSpawnRules\@PigZombie\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   1592318771
     * @vftbl  339
     * @symbol  ?getAttackTime\@PigZombie\@\@UEAAHXZ
     */
    virtual int getAttackTime();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   -1931527312
     * @symbol  ??0PigZombie\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI PigZombie(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:

private:
    /**
     * @hash   507453600
     * @symbol  ?SPEED_MODIFIER_ATTACK_UUID\@PigZombie\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

};