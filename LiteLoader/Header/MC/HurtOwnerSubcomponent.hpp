// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HurtOwnerSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTOWNERSUBCOMPONENT
public:
    class HurtOwnerSubcomponent& operator=(class HurtOwnerSubcomponent const &) = delete;
    HurtOwnerSubcomponent(class HurtOwnerSubcomponent const &) = delete;
#endif

public:
    /*0*/ virtual ~HurtOwnerSubcomponent();
    /*1*/ virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /*2*/ virtual void writetoJSON(class Json::Value &) const;
    /*3*/ virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /*4*/ virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HURTOWNERSUBCOMPONENT
#endif
    MCAPI HurtOwnerSubcomponent();

protected:

private:

};