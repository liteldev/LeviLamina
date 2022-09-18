/**
 * @file  ShieldItem.hpp
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
 * @brief MC class ShieldItem.
 *
 */
class ShieldItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIELDITEM
public:
    class ShieldItem& operator=(class ShieldItem const &) = delete;
    ShieldItem(class ShieldItem const &) = delete;
    ShieldItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   506024422
     */
    virtual ~ShieldItem();
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
     * @vftbl  50
     * @symbol ?isHandEquipped@ShieldItem@@UEBA_NXZ
     * @hash   -1550008940
     */
    virtual bool isHandEquipped() const;
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
     * @vftbl  62
     * @symbol ?isValidRepairItem@ShieldItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     * @hash   -735137292
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  63
     * @symbol ?getEnchantSlot@ShieldItem@@UEBAHXZ
     * @hash   97109072
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
     * @symbol ?use@ShieldItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   -1473303006
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  86
     * @symbol ?dispense@ShieldItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -639649528
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  90
     * @symbol ?hurtActor@ShieldItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   -2059562790
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  99
     * @symbol ?readUserData@ShieldItem@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1501992995
     */
    virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /**
     * @vftbl  100
     * @symbol ?writeUserData@ShieldItem@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
     * @hash   1887251795
     */
    virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /**
     * @vftbl  102
     * @symbol ?inventoryTick@ShieldItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     * @hash   306729292
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @vftbl  104
     * @symbol ?getCooldownType@ShieldItem@@UEBAAEBVHashedString@@XZ
     * @hash   1965016270
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @vftbl  105
     * @symbol ?getCooldownTime@ShieldItem@@UEBAHXZ
     * @hash   -477153091
     */
    virtual int getCooldownTime() const;
    /**
     * @vftbl  111
     * @symbol ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
     * @hash   137080580
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /**
     * @vftbl  112
     * @symbol ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
     * @hash   -936681316
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /**
     * @symbol ??0ShieldItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -437856646
     */
    MCAPI ShieldItem(std::string const &, int);
    /**
     * @symbol ?playBlockSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
     * @hash   906200783
     */
    MCAPI void playBlockSound(class Player *) const;
    /**
     * @symbol ?playBreakSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
     * @hash   546911347
     */
    MCAPI void playBreakSound(class Player *) const;
    /**
     * @symbol ?EFFECTIVE_BLOCK_DELAY@ShieldItem@@2HB
     * @hash   1455609359
     */
    MCAPI static int const EFFECTIVE_BLOCK_DELAY;
    /**
     * @symbol ?IN_HAND_BLOCK_DURATION@ShieldItem@@2HB
     * @hash   -1712844843
     */
    MCAPI static int const IN_HAND_BLOCK_DURATION;
    /**
     * @symbol ?TIMESTAMP_TAG@ShieldItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -256107433
     */
    MCAPI static std::string const TIMESTAMP_TAG;

//private:
    /**
     * @symbol ?_getInHandUpdateType@ShieldItem@@AEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
     * @hash   29309278
     */
    MCAPI enum class InHandUpdateType _getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;

private:

};