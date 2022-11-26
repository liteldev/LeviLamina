/**
 * @file  SkullItem.hpp
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
 * @brief MC class SkullItem.
 *
 */
class SkullItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKULLITEM
public:
    class SkullItem& operator=(class SkullItem const &) = delete;
    SkullItem(class SkullItem const &) = delete;
    SkullItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1132349918
     */
    virtual ~SkullItem();
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
     * @vftbl  42
     * @symbol ?getBlockShape@SkullItem@@UEBA?AW4BlockShape@@XZ
     * @hash   -1162879850
     */
    virtual enum class BlockShape getBlockShape() const;
    /**
     * @vftbl  45
     * @symbol ?getLevelDataForAuxValue@SkullItem@@UEBAHH@Z
     * @hash   -1435677628
     */
    virtual int getLevelDataForAuxValue(int) const;
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
     * @vftbl  62
     * @symbol ?getEnchantSlot@SkullItem@@UEBAHXZ
     * @hash   -1661331316
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  67
     * @symbol ?isValidAuxValue@SkullItem@@UEBA_NH@Z
     * @hash   752021350
     */
    virtual bool isValidAuxValue(int) const;
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
     * @symbol ?dispense@SkullItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -828889940
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@SkullItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -1561884294
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  113
     * @symbol ?getEquipLocation@SkullItem@@UEBA?AW4ActorLocation@@XZ
     * @hash   1357072539
     */
    virtual enum class ActorLocation getEquipLocation() const;
    /**
     * @vftbl  114
     * @symbol ?getEquipSound@SkullItem@@UEBA?AW4LevelSoundEvent@@XZ
     * @hash   570175660
     */
    virtual enum class LevelSoundEvent getEquipSound() const;
    /**
     * @vftbl  118
     * @symbol ?getIconInfo@SkullItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   2054210503
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  129
     * @symbol ?getAuxValuesDescription@SkullItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2022117126
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @vftbl  131
     * @symbol ?_calculatePlacePos@SkullItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     * @hash   -412707567
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl  132
     * @symbol ?_useOn@SkullItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   -918580098
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ??0SkullItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   108606750
     */
    MCAPI SkullItem(std::string const &, int);

};