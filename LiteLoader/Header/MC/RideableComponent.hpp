// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RideableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEABLECOMPONENT
public:
    class RideableComponent& operator=(class RideableComponent const &) = delete;
    RideableComponent(class RideableComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RIDEABLECOMPONENT
#endif
    MCAPI RideableComponent(class RideableComponent &&);
    MCAPI RideableComponent();
    MCAPI bool areSeatsFull(class Actor const &) const;
    MCAPI bool canAddPassenger(class Actor const &, class Actor &) const;
    MCAPI bool getFirstAvailableSeatPosition(class Actor const &, class Actor &, class Vec3 &) const;
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    MCAPI class RideableComponent & operator=(class RideableComponent &&);
    MCAPI void positionPassenger(class Actor &, class Actor &);
    MCAPI bool pullInEntity(class Actor &, class Actor &);

protected:

private:
    MCAPI void _setCanPlayerRide(class Player &, bool);
    MCAPI struct SeatDescription getValidSeat(class Actor const &, int) const;

};