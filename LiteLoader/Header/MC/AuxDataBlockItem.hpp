// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AuxDataBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUXDATABLOCKITEM
public:
    class AuxDataBlockItem& operator=(class AuxDataBlockItem const &) = delete;
    AuxDataBlockItem(class AuxDataBlockItem const &) = delete;
    AuxDataBlockItem() = delete;
#endif

public:
    /*0*/ virtual ~AuxDataBlockItem();
    /*2*/ virtual void tearDown();
    /*3*/ virtual int getMaxUseDuration(class ItemInstance const *) const;
    /*4*/ virtual int getMaxUseDuration(class ItemStack const *) const;
    /*5*/ virtual bool isMusicDisk() const;
    /*6*/ virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /*7*/ virtual bool isComponentBased() const;
    /*8*/ virtual bool isArmor() const;
    /*9*/ virtual bool isBlockPlanterItem() const;
    /*10*/ virtual bool isMultiColorTinted(class ItemStack const &) const;
    /*12*/ virtual bool isCandle() const;
    /*14*/ virtual bool isDyeable() const;
    /*15*/ virtual bool isDye() const;
    /*16*/ virtual enum ItemColor getItemColor() const;
    /*17*/ virtual bool isFertilizer() const;
    /*18*/ virtual bool isFood() const;
    /*19*/ virtual bool isThrowable() const;
    /*20*/ virtual bool isUseable() const;
    /*21*/ virtual class ItemComponent * getComponent(class HashedString const &) const;
    /*24*/ virtual class FuelItemComponent * getFuel() const;
    /*38*/ virtual enum BlockShape getBlockShape() const;
    /*40*/ virtual bool canDestroySpecial(class Block const &) const;
    /*41*/ virtual int getLevelDataForAuxValue(int) const;
    /*43*/ virtual short getMaxDamage() const;
    /*44*/ virtual int getAttackDamage() const;
    /*46*/ virtual bool isGlint(class ItemStackBase const &) const;
    /*47*/ virtual bool isPattern() const;
    /*48*/ virtual int getPatternIndex() const;
    /*49*/ virtual bool showsDurabilityInCreative() const;
    /*50*/ virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /*51*/ virtual bool canDestroyInCreative() const;
    /*53*/ virtual bool isLiquidClipItem(int) const;
    /*54*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /*55*/ virtual bool requiresInteract() const;
    /*57*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /*58*/ virtual int getEnchantSlot() const;
    /*59*/ virtual int getEnchantValue() const;
    /*60*/ virtual int getArmorValue() const;
    /*61*/ virtual int getToughnessValue() const;
    /*62*/ virtual bool isComplex() const;
    /*65*/ virtual float getViewDamping() const;
    /*66*/ virtual bool uniqueAuxValues() const;
    /*67*/ virtual bool isActorPlacerItem() const;
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /*70*/ virtual bool hasCustomColor(class CompoundTag const *) const;
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void clearColor(class ItemStackBase &) const;
    /*73*/ virtual void clearColor(class CompoundTag *) const;
    /*74*/ virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*79*/ virtual bool canUseOnSimTick() const;
    /*84*/ virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /*86*/ virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /*87*/ virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /*88*/ virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /*89*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*90*/ virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /*91*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*96*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /*97*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*98*/ virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /*102*/ virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /*105*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /*106*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /*107*/ virtual bool validFishInteraction(int) const;
    /*110*/ virtual std::string getInteractText(class Player const &) const;
    /*111*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /*119*/ virtual bool canBeCharged() const;
    /*120*/ virtual void playSoundIncrementally(class ItemInstance const &, class Mob &) const;
    /*121*/ virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /*124*/ virtual std::string getAuxValuesDescription() const;
    MCAPI AuxDataBlockItem(std::string const &, int, class Block const *);

protected:

private:

};