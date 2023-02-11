/**
 * @file  Guardian.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Guardian.
 *
 */
class Guardian : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIAN
public:
    class Guardian& operator=(class Guardian const &) = delete;
    Guardian(class Guardian const &) = delete;
    Guardian() = delete;
#endif

public:
    /**
     * @hash   -1555606980
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Guardian\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -914994681
     * @vftbl  11
     * @symbol  ?reloadHardcodedClient\@Guardian\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Guardian();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
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
     * @hash   1336601306
     * @vftbl  115
     * @symbol  ?setTarget\@Guardian\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void setTarget(class Actor *);
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
     * @hash   -257970577
     * @vftbl  263
     * @symbol  ?_hurt\@Guardian\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   1459351535
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Guardian\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -849901202
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Guardian\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   785561748
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@Guardian\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
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
     * @hash   -1305065638
     * @vftbl  291
     * @symbol  ?aiStep\@Guardian\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   1486783840
     * @vftbl  296
     * @symbol  ?checkSpawnRules\@Guardian\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @hash   -105849541
     * @vftbl  305
     * @symbol  ?getMaxHeadXRot\@Guardian\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
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
     * @hash   -493004992
     * @vftbl  356
     * @symbol  ?isDarkEnoughToSpawn\@Guardian\@\@MEBA_NXZ
     */
    virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GUARDIAN
    /**
     * @hash   -2136249791
     * @symbol  ?canSeeInvisible\@Guardian\@\@UEBA_NXZ
     */
    MCVAPI bool canSeeInvisible() const;
#endif
    /**
     * @hash   1036359629
     * @symbol  ??0Guardian\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Guardian(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -477888696
     * @symbol  ?getAttackDuration\@Guardian\@\@QEAAHXZ
     */
    MCAPI int getAttackDuration();
    /**
     * @hash   1427778900
     * @symbol  ?getMoveEyeVector\@Guardian\@\@QEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getMoveEyeVector();
    /**
     * @hash   -1818451657
     * @symbol  ?getTargetEntity\@Guardian\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getTargetEntity() const;
    /**
     * @hash   -1783207362
     * @symbol  ?isElder\@Guardian\@\@QEBA_NXZ
     */
    MCAPI bool isElder() const;
    /**
     * @hash   291729946
     * @symbol  ?isElderGhost\@Guardian\@\@QEBA_NXZ
     */
    MCAPI bool isElderGhost() const;
    /**
     * @hash   2063112035
     * @symbol  ?preAiStep\@Guardian\@\@QEAAXXZ
     */
    MCAPI void preAiStep();
    /**
     * @hash   -1467106728
     * @symbol  ?setAttackTime\@Guardian\@\@QEAAXH\@Z
     */
    MCAPI void setAttackTime(int);
    /**
     * @hash   -1271423056
     * @symbol  ?setElder\@Guardian\@\@QEAAX_N\@Z
     */
    MCAPI void setElder(bool);

//protected:
    /**
     * @hash   -1756077695
     * @symbol  ?registerLoopingSounds\@Guardian\@\@IEAAXXZ
     */
    MCAPI void registerLoopingSounds();

//private:

protected:

private:
    /**
     * @hash   -846046645
     * @symbol  ?ATTACK_TIME\@Guardian\@\@0HB
     */
    MCAPI static int const ATTACK_TIME;
    /**
     * @hash   -431722087
     * @symbol  ?FIRST_DAMAGE_TIME\@Guardian\@\@0HB
     */
    MCAPI static int const FIRST_DAMAGE_TIME;

};