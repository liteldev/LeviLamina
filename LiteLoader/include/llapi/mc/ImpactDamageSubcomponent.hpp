/**
 * @file  ImpactDamageSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class ImpactDamageSubcomponent.
 *
 */
class ImpactDamageSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMPACTDAMAGESUBCOMPONENT
public:
    class ImpactDamageSubcomponent& operator=(class ImpactDamageSubcomponent const &) = delete;
    ImpactDamageSubcomponent(class ImpactDamageSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   65987580
     */
    virtual ~ImpactDamageSubcomponent();
    /**
     * @vftbl  1
     * @symbol ?readfromJSON@ImpactDamageSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   1329069206
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  2
     * @symbol ?writetoJSON@ImpactDamageSubcomponent@@UEBAXAEAVValue@Json@@@Z
     * @hash   644774515
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl  3
     * @symbol ?doOnHitEffect@ImpactDamageSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     * @hash   -489602544
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol ?getName@ImpactDamageSubcomponent@@UEAAPEBDXZ
     * @hash   -496858453
     */
    virtual char const * getName();
    /**
     * @symbol ??0ImpactDamageSubcomponent@@QEAA@XZ
     * @hash   -1258431874
     */
    MCAPI ImpactDamageSubcomponent();

};