/**
 * @file  CrossbowItem.hpp
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
 * @brief MC class CrossbowItem.
 *
 */
class CrossbowItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROSSBOWITEM
public:
    class CrossbowItem& operator=(class CrossbowItem const &) = delete;
    CrossbowItem(class CrossbowItem const &) = delete;
    CrossbowItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   79622023
     */
    virtual ~CrossbowItem();
    /**
     * @vftbl  6
     * @symbol ?getMaxUseDuration@CrossbowItem@@UEBAHPEBVItemStack@@@Z
     * @hash   1481369491
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
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
     * @vftbl  63
     * @symbol ?getEnchantSlot@CrossbowItem@@UEBAHXZ
     * @hash   -68605761
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
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
     * @vftbl  85
     * @symbol ?use@CrossbowItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   -1455630303
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  87
     * @symbol ?useTimeDepleted@CrossbowItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     * @hash   -1323110803
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl  88
     * @symbol ?releaseUsing@CrossbowItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     * @hash   -393144081
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @vftbl  114
     * @symbol ?enchantProjectile@CrossbowItem@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
     * @hash   -1542654353
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /**
     * @vftbl  120
     * @symbol ?getAnimationFrameFor@CrossbowItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     * @hash   -1204717000
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @vftbl  123
     * @symbol ?getIcon@CrossbowItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     * @hash   405704976
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  125
     * @symbol ?setIcon@CrossbowItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1714456735
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @vftbl  128
     * @symbol ?canBeCharged@CrossbowItem@@UEBA_NXZ
     * @hash   1261487960
     */
    virtual bool canBeCharged() const;
    /**
     * @vftbl  130
     * @symbol ?playSoundIncrementally@CrossbowItem@@UEBAXAEBVItemStack@@AEAVMob@@@Z
     * @hash   -2097363891
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /**
     * @symbol ??0CrossbowItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1224650517
     */
    MCAPI CrossbowItem(std::string const &, int);

//private:
    /**
     * @symbol ?_getShootDir@CrossbowItem@@AEBA?AVVec3@@AEBVPlayer@@M@Z
     * @hash   343378999
     */
    MCAPI class Vec3 _getShootDir(class Player const &, float) const;
    /**
     * @symbol ?_shootArrow@CrossbowItem@@AEBAXAEBVItemInstance@@0AEAVPlayer@@@Z
     * @hash   482486066
     */
    MCAPI void _shootArrow(class ItemInstance const &, class ItemInstance const &, class Player &) const;
    /**
     * @symbol ?_shootFirework@CrossbowItem@@AEBAXAEBVItemInstance@@AEAVPlayer@@@Z
     * @hash   800128303
     */
    MCAPI void _shootFirework(class ItemInstance const &, class Player &) const;

private:
    /**
     * @symbol ?DEFAULT_USE_DURATION@CrossbowItem@@0HB
     * @hash   -177414527
     */
    MCAPI static int const DEFAULT_USE_DURATION;

};