// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MobEffect.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AbsorptionMobEffect : public MobEffect {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSORPTIONMOBEFFECT
public:
    class AbsorptionMobEffect& operator=(class AbsorptionMobEffect const &) = delete;
    AbsorptionMobEffect(class AbsorptionMobEffect const &) = delete;
    AbsorptionMobEffect() = delete;
#endif

public:
    /*0*/ virtual ~AbsorptionMobEffect();
    /*1*/ virtual void applyEffects(class Actor *, int, int) const;
    /*2*/ virtual void removeEffects(class Actor *);
    MCAPI AbsorptionMobEffect(int, std::string const &, std::string const &, bool, int, int);

protected:

private:

};