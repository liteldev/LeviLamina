/**
 * @file  MC/ParticleOnHitSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ParticleOnHitSubcomponent.
 *
 */
class ParticleOnHitSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLEONHITSUBCOMPONENT
public:
    class ParticleOnHitSubcomponent& operator=(class ParticleOnHitSubcomponent const &) = delete;
    ParticleOnHitSubcomponent(class ParticleOnHitSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ParticleOnHitSubcomponent();
    /**
     * @hash   -369818627
     * @vftbl  1
     * @symbol ?readfromJSON@ParticleOnHitSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1601529444
     * @vftbl  2
     * @symbol ?writetoJSON@ParticleOnHitSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   -1766418201
     * @vftbl  3
     * @symbol ?doOnHitEffect@ParticleOnHitSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -800213294
     * @vftbl  4
     * @symbol ?getName@ParticleOnHitSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   -2002845513
     * @symbol ??0ParticleOnHitSubcomponent@@QEAA@XZ
     */
    MCAPI ParticleOnHitSubcomponent();

//private:
    /**
     * @hash   1960697766
     * @symbol ?isParticleTypeIconBreak@ParticleOnHitSubcomponent@@AEBA_NXZ
     */
    MCAPI bool isParticleTypeIconBreak() const;

private:

};