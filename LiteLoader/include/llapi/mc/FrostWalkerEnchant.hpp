/**
 * @file  MC/FrostWalkerEnchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FrostWalkerEnchant.
 *
 */
class FrostWalkerEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FROSTWALKERENCHANT
public:
    class FrostWalkerEnchant& operator=(class FrostWalkerEnchant const &) = delete;
    FrostWalkerEnchant(class FrostWalkerEnchant const &) = delete;
    FrostWalkerEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FrostWalkerEnchant();
    /**
     * @hash   1048060152
     * @vftbl  2
     * @symbol ?getMinCost@FrostWalkerEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   -1322916922
     * @vftbl  3
     * @symbol ?getMaxCost@FrostWalkerEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @hash   2115606226
     * @vftbl  5
     * @symbol ?getMaxLevel@FrostWalkerEnchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FROSTWALKERENCHANT
    /**
     * @hash   -2095316610
     * @symbol ?isTreasureOnly@FrostWalkerEnchant@@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @hash   1722326106
     * @symbol ??0FrostWalkerEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     */
    MCAPI FrostWalkerEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

};