// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PanicGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PANICGOAL
public:
    class PanicGoal& operator=(class PanicGoal const &) = delete;
    PanicGoal(class PanicGoal const &) = delete;
    PanicGoal() = delete;
#endif

public:
    /*0*/ virtual ~PanicGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PANICGOAL
#endif
    MCAPI PanicGoal(class Mob &, float, bool, enum LevelSoundEvent, struct FloatRange, bool, bool, std::vector<enum ActorDamageCause>);

protected:

private:
    MCAPI bool _tryGeneratePathEnd();

};