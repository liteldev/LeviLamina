/**
 * @file  MobEffectSystem.hpp
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
 * @brief MC class MobEffectSystem.
 *
 */
class MobEffectSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTSYSTEM
public:
    class MobEffectSystem& operator=(class MobEffectSystem const &) = delete;
    MobEffectSystem(class MobEffectSystem const &) = delete;
    MobEffectSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1419969166
     */
    virtual ~MobEffectSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@MobEffectSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   978618176
     */
    virtual void tick(class EntityRegistry &);

};