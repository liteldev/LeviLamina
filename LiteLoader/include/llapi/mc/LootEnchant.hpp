/**
 * @file  LootEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class LootEnchant.
 *
 */
class LootEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTENCHANT
public:
    class LootEnchant& operator=(class LootEnchant const &) = delete;
    LootEnchant(class LootEnchant const &) = delete;
    LootEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1808301729
     */
    virtual ~LootEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@LootEnchant@@UEBAHH@Z
     * @hash   1868824026
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@LootEnchant@@UEBAHH@Z
     * @hash   661022776
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@LootEnchant@@UEBAHXZ
     * @hash   1616227648
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  10
     * @hash   -342706045
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -334124315
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -333200794
     */
    virtual void __unk_vfn_13();
    /**
     * @symbol ??0LootEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     * @hash   288992536
     */
    MCAPI LootEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

};