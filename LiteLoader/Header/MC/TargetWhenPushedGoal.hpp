// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TargetWhenPushedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETWHENPUSHEDGOAL
public:
    class TargetWhenPushedGoal& operator=(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal(class TargetWhenPushedGoal const &) = delete;
    TargetWhenPushedGoal() = delete;
#endif

public:
    /*0*/ virtual ~TargetWhenPushedGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*
    inline bool canBeInterrupted(){
        bool (TargetWhenPushedGoal::*rv)();
        *((void**)&rv) = dlsym("?canBeInterrupted@TargetWhenPushedGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canContinueToUse(){
        bool (TargetWhenPushedGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@TargetWhenPushedGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void appendDebugInfo(std::string & a0) const{
        void (TargetWhenPushedGoal::*rv)(std::string &) const;
        *((void**)&rv) = dlsym("?appendDebugInfo@TargetWhenPushedGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string &>(a0));
    }
    */
    MCAPI TargetWhenPushedGoal(class Mob &, std::vector<struct MobDescriptor>, float);

protected:

private:

};