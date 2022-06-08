// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Minecart : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECART
public:
    class Minecart& operator=(class Minecart const &) = delete;
    Minecart(class Minecart const &) = delete;
    Minecart() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*9*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Minecart();
    /*16*/ virtual void __unk_vfn_16();
    /*20*/ virtual void __unk_vfn_20();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual float getInterpolatedBodyYaw(float) const;
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual void __unk_vfn_78();
    /*79*/ virtual float getShadowHeightOffs();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*94*/ virtual bool isPickable();
    /*95*/ virtual void __unk_vfn_95();
    /*96*/ virtual void __unk_vfn_96();
    /*97*/ virtual void __unk_vfn_97();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual void __unk_vfn_113();
    /*114*/ virtual void __unk_vfn_114();
    /*120*/ virtual void __unk_vfn_120();
    /*121*/ virtual void __unk_vfn_121();
    /*128*/ virtual void __unk_vfn_128();
    /*130*/ virtual void __unk_vfn_130();
    /*134*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*136*/ virtual void __unk_vfn_136();
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*142*/ virtual float getPickRadius();
    /*151*/ virtual void __unk_vfn_151();
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*159*/ virtual void __unk_vfn_159();
    /*170*/ virtual class HashedString const & queryEntityRenderer() const;
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*173*/ virtual void __unk_vfn_173();
    /*178*/ virtual void __unk_vfn_178();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual void __unk_vfn_183();
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*194*/ virtual void __unk_vfn_194();
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual void __unk_vfn_198();
    /*202*/ virtual void __unk_vfn_202();
    /*207*/ virtual void __unk_vfn_207();
    /*218*/ virtual void __unk_vfn_218();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*225*/ virtual void __unk_vfn_225();
    /*226*/ virtual void __unk_vfn_226();
    /*227*/ virtual void __unk_vfn_227();
    /*228*/ virtual void __unk_vfn_228();
    /*229*/ virtual void __unk_vfn_229();
    /*230*/ virtual void __unk_vfn_230();
    /*231*/ virtual void __unk_vfn_231();
    /*232*/ virtual void __unk_vfn_232();
    /*237*/ virtual void __unk_vfn_237();
    /*238*/ virtual void __unk_vfn_238();
    /*244*/ virtual void __unk_vfn_244();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*250*/ virtual void kill();
    /*258*/ virtual void interpolatorTick();
    /*259*/ virtual void __unk_vfn_259();
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*277*/ virtual void _onSizeUpdated();
    /*278*/ virtual void __unk_vfn_278();
    /*279*/ virtual void destroy(class ActorDamageSource const &, bool);
    /*280*/ virtual enum MinecartType getType() = 0;
    /*281*/ virtual class Block const * getDefaultDisplayBlock() const;
    /*282*/ virtual void __unk_vfn_282();
    /*283*/ virtual int getDefaultDisplayOffset() const;
    /*284*/ virtual void applyNaturalSlowdown(class BlockSource &);
    /*285*/ virtual void _lazyInitDisplayBlock();
    /*
    inline bool canMakeStepSound() const{
        bool (Minecart::*rv)() const;
        *((void**)&rv) = dlsym("?canMakeStepSound@Minecart@@EEBA_NXZ");
        return (this->*rv)();
    }
    inline int getDefaultDisplayData() const{
        int (Minecart::*rv)() const;
        *((void**)&rv) = dlsym("?getDefaultDisplayData@Minecart@@UEBAHXZ");
        return (this->*rv)();
    }
    inline struct ActorUniqueID getControllingPlayer() const{
        struct ActorUniqueID (Minecart::*rv)() const;
        *((void**)&rv) = dlsym("?getControllingPlayer@Minecart@@UEBA?AUActorUniqueID@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI Minecart(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void setCustomDisplay(bool);
    MCAPI void setDisplayBlock(class Block const &);

protected:

private:
    MCAPI void _registerLoopingSounds();

};