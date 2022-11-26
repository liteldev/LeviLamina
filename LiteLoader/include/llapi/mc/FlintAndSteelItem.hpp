/**
 * @file  FlintAndSteelItem.hpp
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
 * @brief MC class FlintAndSteelItem.
 *
 */
class FlintAndSteelItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLINTANDSTEELITEM
public:
    class FlintAndSteelItem& operator=(class FlintAndSteelItem const &) = delete;
    FlintAndSteelItem(class FlintAndSteelItem const &) = delete;
    FlintAndSteelItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1018142526
     */
    virtual ~FlintAndSteelItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  56
     * @symbol ?isDestructive@FlintAndSteelItem@@UEBA_NH@Z
     * @hash   1126159517
     */
    virtual bool isDestructive(int) const;
    /**
     * @vftbl  62
     * @symbol ?getEnchantSlot@FlintAndSteelItem@@UEBAHXZ
     * @hash   1822485036
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -61728865
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -276670826
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -256353364
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  85
     * @symbol ?dispense@FlintAndSteelItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   1333576124
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  89
     * @symbol ?hurtActor@FlintAndSteelItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   -1674005586
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  131
     * @symbol ?_calculatePlacePos@FlintAndSteelItem@@MEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     * @hash   -849181688
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl  132
     * @symbol ?_useOn@FlintAndSteelItem@@MEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   1390388775
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ??0FlintAndSteelItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1593509198
     */
    MCAPI FlintAndSteelItem(std::string const &, int);

};