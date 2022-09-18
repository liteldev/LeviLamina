/**
 * @file  MobEffectInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "MobEffect.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEffectInstance.
 *
 */
class MobEffectInstance {

#define AFTER_EXTRA
// Add Member There
public:
char filler[122];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTINSTANCE
public:
    MobEffectInstance() = delete;
#endif

public:
    /**
     * @symbol ??0MobEffectInstance@@QEAA@IHH_N00@Z
     * @hash   -608575944
     */
    MCAPI MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@IHHHHH_N00@Z
     * @hash   1877157527
     */
    MCAPI MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@IHH@Z
     * @hash   1643537907
     */
    MCAPI MobEffectInstance(unsigned int, int, int);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@IH@Z
     * @hash   1697926384
     */
    MCAPI MobEffectInstance(unsigned int, int);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@I@Z
     * @hash   1699576691
     */
    MCAPI MobEffectInstance(unsigned int);
    /**
     * @symbol ??0MobEffectInstance@@QEAA@AEBV0@@Z
     * @hash   -1922287151
     */
    MCAPI MobEffectInstance(class MobEffectInstance const &);
    /**
     * @symbol ?applyEffects@MobEffectInstance@@QEAAXPEAVActor@@@Z
     * @hash   -937101071
     */
    MCAPI void applyEffects(class Actor *);
    /**
     * @symbol ?displaysOnScreenTextureAnimation@MobEffectInstance@@QEBA_NXZ
     * @hash   610807140
     */
    MCAPI bool displaysOnScreenTextureAnimation() const;
    /**
     * @symbol ?getAmplifier@MobEffectInstance@@QEBAHXZ
     * @hash   -349005620
     */
    MCAPI int getAmplifier() const;
    /**
     * @symbol ?getComponentName@MobEffectInstance@@QEBAAEBVHashedString@@XZ
     * @hash   -563794124
     */
    MCAPI class HashedString const & getComponentName() const;
    /**
     * @symbol ?getDifficulityDuration@MobEffectInstance@@QEBAHW4Difficulty@@@Z
     * @hash   -1925711371
     */
    MCAPI int getDifficulityDuration(enum class Difficulty) const;
    /**
     * @symbol ?getDisplayName@MobEffectInstance@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   477040162
     */
    MCAPI std::string getDisplayName() const;
    /**
     * @symbol ?getDuration@MobEffectInstance@@QEBAHXZ
     * @hash   467361340
     */
    MCAPI int getDuration() const;
    /**
     * @symbol ?getId@MobEffectInstance@@QEBAIXZ
     * @hash   -368374428
     */
    MCAPI unsigned int getId() const;
    /**
     * @symbol ?getLingerDuration@MobEffectInstance@@QEBAHXZ
     * @hash   1931880610
     */
    MCAPI int getLingerDuration() const;
    /**
     * @symbol ?getSplashDuration@MobEffectInstance@@QEBAHXZ
     * @hash   1750970186
     */
    MCAPI int getSplashDuration() const;
    /**
     * @symbol ?getSplashEffect@MobEffectInstance@@QEBA?AV1@XZ
     * @hash   -720343449
     */
    MCAPI class MobEffectInstance getSplashEffect() const;
    /**
     * @symbol ?isAmbient@MobEffectInstance@@QEBA_NXZ
     * @hash   468017346
     */
    MCAPI bool isAmbient() const;
    /**
     * @symbol ?isEffectVisible@MobEffectInstance@@QEBA_NXZ
     * @hash   -483144270
     */
    MCAPI bool isEffectVisible() const;
    /**
     * @symbol ??9MobEffectInstance@@QEBA_NAEBV0@@Z
     * @hash   2126342294
     */
    MCAPI bool operator!=(class MobEffectInstance const &) const;
    /**
     * @symbol ??4MobEffectInstance@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   2134591184
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance &&);
    /**
     * @symbol ??4MobEffectInstance@@QEAAAEAV0@AEBV0@@Z
     * @hash   -797809860
     */
    MCAPI class MobEffectInstance & operator=(class MobEffectInstance const &);
    /**
     * @symbol ??8MobEffectInstance@@QEBA_NAEBV0@@Z
     * @hash   269062273
     */
    MCAPI bool operator==(class MobEffectInstance const &) const;
    /**
     * @symbol ?removeEffects@MobEffectInstance@@QEBAXPEAVActor@@@Z
     * @hash   1210228507
     */
    MCAPI void removeEffects(class Actor *) const;
    /**
     * @symbol ?save@MobEffectInstance@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   647907384
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ?setDifficulityDuration@MobEffectInstance@@QEAAXW4Difficulty@@H@Z
     * @hash   -430586553
     */
    MCAPI void setDifficulityDuration(enum class Difficulty, int);
    /**
     * @symbol ?setDuration@MobEffectInstance@@QEAAXH@Z
     * @hash   1780782490
     */
    MCAPI void setDuration(int);
    /**
     * @symbol ?tick@MobEffectInstance@@QEAA_NPEAVActor@@@Z
     * @hash   814966296
     */
    MCAPI bool tick(class Actor *);
    /**
     * @symbol ?tryInitializeMobEffectData@MobEffectInstance@@QEAAXXZ
     * @hash   188357139
     */
    MCAPI void tryInitializeMobEffectData();
    /**
     * @symbol ?update@MobEffectInstance@@QEAAXAEBV1@@Z
     * @hash   -1141822145
     */
    MCAPI void update(class MobEffectInstance const &);
    /**
     * @symbol ?updateEffects@MobEffectInstance@@QEBAXPEAVActor@@@Z
     * @hash   -171163595
     */
    MCAPI void updateEffects(class Actor *) const;
    /**
     * @symbol ??1MobEffectInstance@@QEAA@XZ
     * @hash   -1360952478
     */
    MCAPI ~MobEffectInstance();
    /**
     * @symbol ?MAX_AMPLIFIER_COUNT@MobEffectInstance@@2HB
     * @hash   145510333
     */
    MCAPI static int const MAX_AMPLIFIER_COUNT;
    /**
     * @symbol ?NO_EFFECT@MobEffectInstance@@2V1@B
     * @hash   -1417045990
     */
    MCAPI static class MobEffectInstance const NO_EFFECT;
    /**
     * @symbol ?areAllEffectsAmbient@MobEffectInstance@@SA_NAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
     * @hash   1763174405
     */
    MCAPI static bool areAllEffectsAmbient(std::vector<class MobEffectInstance> const &);
    /**
     * @symbol ?getColorValue@MobEffectInstance@@SA?AVColor@mce@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
     * @hash   1587872087
     */
    MCAPI static class mce::Color getColorValue(std::vector<class MobEffectInstance> const &);
    /**
     * @symbol ?load@MobEffectInstance@@SA?AV1@AEBVCompoundTag@@@Z
     * @hash   -951157690
     */
    MCAPI static class MobEffectInstance load(class CompoundTag const &);

};