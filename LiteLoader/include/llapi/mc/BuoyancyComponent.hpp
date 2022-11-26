/**
 * @file  BuoyancyComponent.hpp
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
 * @brief MC class BuoyancyComponent.
 *
 */
class BuoyancyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUOYANCYCOMPONENT
public:
    class BuoyancyComponent& operator=(class BuoyancyComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0BuoyancyComponent@@QEAA@XZ
     * @hash   -2021106311
     */
    MCAPI BuoyancyComponent();
    /**
     * @symbol ??0BuoyancyComponent@@QEAA@AEBV0@@Z
     * @hash   -1615353007
     */
    MCAPI BuoyancyComponent(class BuoyancyComponent const &);
    /**
     * @symbol ?canFloat@BuoyancyComponent@@QEBA_NAEBVActor@@@Z
     * @hash   1754524195
     */
    MCAPI bool canFloat(class Actor const &) const;
    /**
     * @symbol ?getBaseBuoyancy@BuoyancyComponent@@QEBAMXZ
     * @hash   1012557060
     */
    MCAPI float getBaseBuoyancy() const;
    /**
     * @symbol ?getBigWaveProbability@BuoyancyComponent@@QEBAMXZ
     * @hash   1524774250
     */
    MCAPI float getBigWaveProbability() const;
    /**
     * @symbol ?getBigWaveSpeedMultiplier@BuoyancyComponent@@QEBAMXZ
     * @hash   2049174112
     */
    MCAPI float getBigWaveSpeedMultiplier() const;
    /**
     * @symbol ?getTimer@BuoyancyComponent@@QEBANXZ
     * @hash   -1715227492
     */
    MCAPI double getTimer() const;
    /**
     * @symbol ?increaseTimer@BuoyancyComponent@@QEAAXM@Z
     * @hash   536593326
     */
    MCAPI void increaseTimer(float);
    /**
     * @symbol ?loadData@BuoyancyComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@@Z
     * @hash   232655559
     */
    MCAPI void loadData(std::string const &, class SemVersion const &);
    /**
     * @symbol ?needToResurface@BuoyancyComponent@@QEBA_NAEBVActor@@@Z
     * @hash   235739157
     */
    MCAPI bool needToResurface(class Actor const &) const;
    /**
     * @symbol ??4BuoyancyComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -657026642
     */
    MCAPI class BuoyancyComponent & operator=(class BuoyancyComponent &&);
    /**
     * @symbol ?shouldApplyGravity@BuoyancyComponent@@QEBA_NXZ
     * @hash   -975617434
     */
    MCAPI bool shouldApplyGravity() const;
    /**
     * @symbol ?shouldSimulateWaves@BuoyancyComponent@@QEBA_NXZ
     * @hash   2128139796
     */
    MCAPI bool shouldSimulateWaves() const;

};