/**
 * @file  FireworkChargeItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FireworkChargeItem.
 *
 */
class FireworkChargeItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
enum class Shape;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKCHARGEITEM
public:
    class FireworkChargeItem& operator=(class FireworkChargeItem const &) = delete;
    FireworkChargeItem(class FireworkChargeItem const &) = delete;
    FireworkChargeItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   72766040
     */
    virtual ~FireworkChargeItem();
    /**
     * @vftbl  7
     * @hash   -1353918777
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -332277273
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  18
     * @symbol ?isDyeable@FireworkChargeItem@@UEBA_NXZ
     * @hash   -541105430
     */
    virtual bool isDyeable() const;
    /**
     * @vftbl  52
     * @hash   -219607711
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @hash   -217760669
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@FireworkChargeItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   183502337
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  68
     * @symbol ?isValidAuxValue@FireworkChargeItem@@UEBA_NH@Z
     * @hash   -1297179244
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  71
     * @hash   -163272930
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -162349409
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  74
     * @symbol ?getColor@FireworkChargeItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     * @hash   -1636083413
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl  76
     * @hash   -158655325
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @hash   -1115441236
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @hash   -1114517715
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  117
     * @symbol ?isSameItem@FireworkChargeItem@@UEBA_NAEBVItemStackBase@@0@Z
     * @hash   -967943331
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @symbol ??0FireworkChargeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -569118196
     */
    MCAPI FireworkChargeItem(std::string const &, int);
    /**
     * @symbol ?TAG_EXPLOSION@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1796296473
     */
    MCAPI static std::string const TAG_EXPLOSION;
    /**
     * @symbol ?TAG_E_COLORS@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1278567819
     */
    MCAPI static std::string const TAG_E_COLORS;
    /**
     * @symbol ?TAG_E_FADECOLORS@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -607974387
     */
    MCAPI static std::string const TAG_E_FADECOLORS;
    /**
     * @symbol ?TAG_E_FLICKER@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   2003236939
     */
    MCAPI static std::string const TAG_E_FLICKER;
    /**
     * @symbol ?TAG_E_TRAIL@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1298301049
     */
    MCAPI static std::string const TAG_E_TRAIL;
    /**
     * @symbol ?TAG_E_TYPE@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1509666985
     */
    MCAPI static std::string const TAG_E_TYPE;
    /**
     * @symbol ?getFormattedHoverText@FireworkChargeItem@@SAXAEBVCompoundTag@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
     * @hash   1084737358
     */
    MCAPI static void getFormattedHoverText(class CompoundTag const &, std::string &, std::string const &);
    /**
     * @symbol ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemInstance@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
     * @hash   -1328237617
     */
    MCAPI static class ItemInstance const & initFireworkChargeItem(class ItemInstance &, enum class FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @symbol ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemStack@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
     * @hash   -838134514
     */
    MCAPI static class ItemStack const & initFireworkChargeItem(class ItemStack &, enum class FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @symbol ?setColor@FireworkChargeItem@@SAXAEAVItemStackBase@@@Z
     * @hash   1756559902
     */
    MCAPI static void setColor(class ItemStackBase &);

//private:
    /**
     * @symbol ?_initFireworkChargeItem@FireworkChargeItem@@CAXAEAVItemStackBase@@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
     * @hash   1574742240
     */
    MCAPI static void _initFireworkChargeItem(class ItemStackBase &, enum class FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @symbol ?appendColors@FireworkChargeItem@@CAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@EV?$allocator@E@std@@@3@@Z
     * @hash   1811674684
     */
    MCAPI static void appendColors(std::string &, std::vector<unsigned char>);

private:

};