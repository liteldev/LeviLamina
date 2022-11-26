/**
 * @file  ExhaustionComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExhaustionComponent.
 *
 */
class ExhaustionComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXHAUSTIONCOMPONENT
public:
    class ExhaustionComponent& operator=(class ExhaustionComponent const &) = delete;
    ExhaustionComponent(class ExhaustionComponent const &) = delete;
    ExhaustionComponent() = delete;
#endif

public:
    /**
     * @symbol ?getAttackValue@ExhaustionComponent@@QEBAMXZ
     * @hash   122232762
     */
    MCAPI float getAttackValue() const;
    /**
     * @symbol ?getHealValue@ExhaustionComponent@@QEBAMXZ
     * @hash   437491706
     */
    MCAPI float getHealValue() const;
    /**
     * @symbol ?getJumpValue@ExhaustionComponent@@QEBAMXZ
     * @hash   -1575427970
     */
    MCAPI float getJumpValue() const;
    /**
     * @symbol ?getMiningValue@ExhaustionComponent@@QEBAMXZ
     * @hash   -1295575926
     */
    MCAPI float getMiningValue() const;
    /**
     * @symbol ?getSprintJumpValue@ExhaustionComponent@@QEBAMXZ
     * @hash   -767889206
     */
    MCAPI float getSprintJumpValue() const;
    /**
     * @symbol ?getSprintValue@ExhaustionComponent@@QEBAMXZ
     * @hash   -972829194
     */
    MCAPI float getSprintValue() const;
    /**
     * @symbol ?getSwimValue@ExhaustionComponent@@QEBAMXZ
     * @hash   -212454742
     */
    MCAPI float getSwimValue() const;
    /**
     * @symbol ?getWalkValue@ExhaustionComponent@@QEBAMXZ
     * @hash   -997501464
     */
    MCAPI float getWalkValue() const;

};