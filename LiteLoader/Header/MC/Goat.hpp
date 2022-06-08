// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Goat : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOAT
public:
    class Goat& operator=(class Goat const &) = delete;
    Goat(class Goat const &) = delete;
    Goat() = delete;
#endif

public:
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Goat();
    /*16*/ virtual void resetUserPos(bool);
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*40*/ virtual bool breaksFallingBlocks() const;
    /*61*/ virtual bool canExistInPeaceful() const;
    /*68*/ virtual bool canMakeStepSound() const;
    /*78*/ virtual float getCameraOffset() const;
    /*82*/ virtual bool canSeeInvisible() const;
    /*85*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*88*/ virtual bool interactPreventDefault();
    /*89*/ virtual void playerTouch(class Player &);
    /*95*/ virtual bool isFishable() const;
    /*98*/ virtual bool useNewAi() const;
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual bool shouldBurn();
    /*107*/ virtual bool isTargetable() const;
    /*108*/ virtual bool canBeControlledByPassenger();
    /*109*/ virtual bool isLeashableType();
    /*113*/ virtual class Actor * findAttackTarget();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*133*/ virtual enum LevelSoundEvent getAmbientSound() const;
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*142*/ virtual float getPickRadius();
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*170*/ virtual class HashedString const & queryEntityRenderer() const;
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void onHit(class HitResult const &);
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual bool stopUponGroundCollision() const;
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual unsigned int getUserId() const;
    /*227*/ virtual float getYHeadRotO() const;
    /*228*/ virtual bool isWorldBuilder() const;
    /*229*/ virtual bool isCreative() const;
    /*230*/ virtual bool isAdventure() const;
    /*231*/ virtual bool isSurvival() const;
    /*232*/ virtual bool isSpectator() const;
    /*237*/ virtual bool canDestroyBlock(class Block const &) const;
    /*238*/ virtual void setAuxValue(int);
    /*244*/ virtual void stopSpinAttack();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual float getDeletionDelayTimeSeconds() const;
    /*259*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*261*/ virtual bool shouldAlwaysRender();
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual bool _makeFlySound() const;
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void __unk_vfn_280();
    /*282*/ virtual enum LevelSoundEvent getHurtSound();
    /*283*/ virtual enum LevelSoundEvent getDeathSound();
    /*302*/ virtual int getItemUseDuration() const;
    /*303*/ virtual float getItemUseStartupProgress() const;
    /*304*/ virtual float getItemUseIntervalProgress() const;
    /*307*/ virtual void __unk_vfn_307();
    /*309*/ virtual bool isAlliedTo(class Mob *);
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void sendArmorDamage(class std::bitset<4> const &);
    /*338*/ virtual void onBorn(class Actor &, class Actor &);
    /*342*/ virtual int getAttackTime();
    /*345*/ virtual bool isSimulated() const;
    /*355*/ virtual void _serverAiMobStep();
    /*359*/ virtual void __unk_vfn_359();
    MCAPI Goat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI int getHornCount() const;
    MCAPI bool isScreaming();
    MCAPI void reduceHornCount();

protected:

private:
    MCAPI static int DEFAULT_HORN_COUNT;
    MCAPI static int SCREAMING_GOAT_VARIANT;

};