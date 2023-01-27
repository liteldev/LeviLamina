/**
 * @file  HumanoidMonster.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"
#include "../../Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HumanoidMonster.
 *
 */
class HumanoidMonster : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUMANOIDMONSTER
public:
    class HumanoidMonster& operator=(class HumanoidMonster const &) = delete;
    HumanoidMonster(class HumanoidMonster const &) = delete;
    HumanoidMonster() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~HumanoidMonster();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   1040254942
     * @vftbl  49
     * @symbol  ?normalTick\@HumanoidMonster\@\@UEAAXXZ
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
     * @hash   -935188989
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@HumanoidMonster\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1020088326
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@HumanoidMonster\@\@MEBAXAEAVCompoundTag\@\@\@Z
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
     * @hash   -1144129536
     * @vftbl  299
     * @symbol  ?getItemUseDuration\@HumanoidMonster\@\@UEBAHXZ
     */
    virtual int getItemUseDuration() const;
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @hash   2093218337
     * @vftbl  307
     * @symbol  ?doHurtTarget\@HumanoidMonster\@\@UEAA_NPEAVActor\@\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool doHurtTarget(class Actor *, enum class ActorDamageCause const &);
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   1358238249
     * @symbol  ??0HumanoidMonster\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI HumanoidMonster(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:

private:
    /**
     * @hash   427896704
     * @symbol  ?MAX_ENCHANTED_ARMOR_CHANCE\@HumanoidMonster\@\@0MB
     */
    MCAPI static float const MAX_ENCHANTED_ARMOR_CHANCE;
    /**
     * @hash   -923460541
     * @symbol  ?MAX_ENCHANTED_WEAPON_CHANCE\@HumanoidMonster\@\@0MB
     */
    MCAPI static float const MAX_ENCHANTED_WEAPON_CHANCE;
    /**
     * @hash   -740734807
     * @symbol  ?MAX_PICKUP_LOOT_CHANCE\@HumanoidMonster\@\@0MB
     */
    MCAPI static float const MAX_PICKUP_LOOT_CHANCE;
    /**
     * @hash   679969709
     * @symbol  ?MAX_WEARING_ARMOR_CHANCE\@HumanoidMonster\@\@0MB
     */
    MCAPI static float const MAX_WEARING_ARMOR_CHANCE;

};