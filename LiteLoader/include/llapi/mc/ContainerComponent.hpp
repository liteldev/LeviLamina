/**
 * @file  ContainerComponent.hpp
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
 * @brief MC class ContainerComponent.
 *
 */
class ContainerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCOMPONENT
public:
    class ContainerComponent& operator=(class ContainerComponent const &) = delete;
    ContainerComponent(class ContainerComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?containerContentChanged@ContainerComponent@@UEAAXH@Z
     * @hash   -1677701080
     */
    virtual void containerContentChanged(int);
    /**
     * @symbol ??0ContainerComponent@@QEAA@XZ
     * @hash   466970952
     */
    MCAPI ContainerComponent();
    /**
     * @symbol ??0ContainerComponent@@QEAA@$$QEAV0@@Z
     * @hash   534252913
     */
    MCAPI ContainerComponent(class ContainerComponent &&);
    /**
     * @symbol ?_getRawContainerPtr@ContainerComponent@@QEAAPEAVFillingContainer@@XZ
     * @hash   1045886969
     */
    MCAPI class FillingContainer * _getRawContainerPtr();
    /**
     * @symbol ?addAdditionalSaveData@ContainerComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -496690664
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVItemActor@@@Z
     * @hash   -513691803
     */
    MCAPI bool addItem(class ItemActor &);
    /**
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVItemStack@@@Z
     * @hash   746782559
     */
    MCAPI bool addItem(class ItemStack &);
    /**
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVItemStack@@HH@Z
     * @hash   710898207
     */
    MCAPI bool addItem(class ItemStack &, int, int);
    /**
     * @symbol ?canBeSiphonedFrom@ContainerComponent@@QEBA_NXZ
     * @hash   388374970
     */
    MCAPI bool canBeSiphonedFrom() const;
    /**
     * @symbol ?canOpenContainer@ContainerComponent@@QEBA_NAEBVActor@@AEAVPlayer@@@Z
     * @hash   -1943579620
     */
    MCAPI bool canOpenContainer(class Actor const &, class Player &) const;
    /**
     * @symbol ?countItemsOfType@ContainerComponent@@QEBAHAEBVItemStack@@@Z
     * @hash   -590776511
     */
    MCAPI int countItemsOfType(class ItemStack const &) const;
    /**
     * @symbol ?dropContents@ContainerComponent@@QEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
     * @hash   -773412568
     */
    MCAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @symbol ?findFirstSlotForItem@ContainerComponent@@QEBAHAEBVItemStack@@@Z
     * @hash   1473703457
     */
    MCAPI int findFirstSlotForItem(class ItemStack const &) const;
    /**
     * @symbol ?getContainerSize@ContainerComponent@@QEBAHXZ
     * @hash   -801219016
     */
    MCAPI int getContainerSize() const;
    /**
     * @symbol ?getItem@ContainerComponent@@QEBAAEBVItemStack@@H@Z
     * @hash   -1673251933
     */
    MCAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol ?getSlots@ContainerComponent@@QEBA?BV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     * @hash   -1430921726
     */
    MCAPI std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @symbol ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemActor@@@Z
     * @hash   -420693827
     */
    MCAPI bool hasRoomForItem(class ItemActor const &);
    /**
     * @symbol ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemStack@@@Z
     * @hash   -1131664777
     */
    MCAPI bool hasRoomForItem(class ItemStack const &);
    /**
     * @symbol ?initFromDefinition@ContainerComponent@@QEAAXAEAVActor@@@Z
     * @hash   1207445050
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?isEmpty@ContainerComponent@@QEBA_NXZ
     * @hash   1824134110
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?isPrivate@ContainerComponent@@QEBA_NXZ
     * @hash   -538477766
     */
    MCAPI bool isPrivate() const;
    /**
     * @symbol ?openContainer@ContainerComponent@@QEAA_NAEAVActor@@AEAVPlayer@@@Z
     * @hash   1203426474
     */
    MCAPI bool openContainer(class Actor &, class Player &);
    /**
     * @symbol ??4ContainerComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1758343012
     */
    MCAPI class ContainerComponent & operator=(class ContainerComponent &&);
    /**
     * @symbol ?readAdditionalSaveData@ContainerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1345933442
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?rebuildContainer@ContainerComponent@@QEAAXAEAVActor@@W4ContainerType@@H_NH2@Z
     * @hash   1513309354
     */
    MCAPI void rebuildContainer(class Actor &, enum class ContainerType, int, bool, int, bool);
    /**
     * @symbol ?removeItem@ContainerComponent@@QEAAXHH@Z
     * @hash   -2057847667
     */
    MCAPI void removeItem(int, int);
    /**
     * @symbol ?removeItemsOfType@ContainerComponent@@QEAAXAEBVItemStack@@H@Z
     * @hash   -1165104549
     */
    MCAPI void removeItemsOfType(class ItemStack const &, int);
    /**
     * @symbol ?serverInitItemStackIds@ContainerComponent@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   1145014184
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setCustomName@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1742060398
     */
    MCAPI void setCustomName(std::string const &);
    /**
     * @symbol ?setItem@ContainerComponent@@QEAA_NHAEBVItemStack@@@Z
     * @hash   373638106
     */
    MCAPI bool setItem(int, class ItemStack const &);
    /**
     * @symbol ?setLootTable@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -252468153
     */
    MCAPI void setLootTable(std::string const &, int);
    /**
     * @symbol ?unpackLootTable@ContainerComponent@@QEAAXAEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   -1611129897
     */
    MCAPI void unpackLootTable(class Level &, class AutomaticID<class Dimension, int>);

};