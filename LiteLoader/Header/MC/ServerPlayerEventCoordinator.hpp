// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerPlayerEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYEREVENTCOORDINATOR
public:
    class ServerPlayerEventCoordinator& operator=(class ServerPlayerEventCoordinator const &) = delete;
    ServerPlayerEventCoordinator(class ServerPlayerEventCoordinator const &) = delete;
    ServerPlayerEventCoordinator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYEREVENTCOORDINATOR
#endif
    MCAPI void sendPlayerAuthInputApplied(class Player &);
    MCAPI void sendPlayerAuthInputReceived(class Player &);
    MCAPI void sendPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    MCAPI void sendPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
    MCAPI void sendPlayerOnGround(class Player &);

protected:

private:

};