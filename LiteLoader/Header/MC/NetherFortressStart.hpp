// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetherFortressStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSSTART
public:
    class NetherFortressStart& operator=(class NetherFortressStart const &) = delete;
    NetherFortressStart(class NetherFortressStart const &) = delete;
    NetherFortressStart() = delete;
#endif

public:
    /*0*/ virtual ~NetherFortressStart();
    MCAPI NetherFortressStart(class Random &, short, int, int);

protected:

private:

};