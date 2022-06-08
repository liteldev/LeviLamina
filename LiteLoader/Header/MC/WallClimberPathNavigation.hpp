// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WallClimberPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALLCLIMBERPATHNAVIGATION
public:
    class WallClimberPathNavigation& operator=(class WallClimberPathNavigation const &) = delete;
    WallClimberPathNavigation(class WallClimberPathNavigation const &) = delete;
    WallClimberPathNavigation() = delete;
#endif

public:
    /*0*/ virtual ~WallClimberPathNavigation();
    /*2*/ virtual void tick(class NavigationComponent &, class Mob &);
    /*4*/ virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Vec3 const &);
    /*5*/ virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Actor &);
    /*7*/ virtual bool moveTo(class NavigationComponent &, class Mob &, class Actor &, float);
    /*10*/ virtual bool travel(class NavigationComponent &, class Mob &, float &, float &, float &);
    /*11*/ virtual bool canUpdatePath(class Mob const &) const;

protected:

private:

};