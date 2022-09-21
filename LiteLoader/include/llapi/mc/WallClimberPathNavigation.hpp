/**
 * @file  MC/WallClimberPathNavigation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WallClimberPathNavigation.
 *
 */
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
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WallClimberPathNavigation();
    /**
     * @hash   790120581
     * @vftbl  2
     * @symbol ?tick@WallClimberPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @hash   -268575290
     * @vftbl  4
     * @symbol ?createPath@WallClimberPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEBVVec3@@@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Vec3 const &);
    /**
     * @hash   2080810027
     * @vftbl  5
     * @symbol ?createPath@WallClimberPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEAVActor@@@Z
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Actor &);
    /**
     * @hash   211396161
     * @vftbl  7
     * @symbol ?moveTo@WallClimberPathNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@AEAVActor@@M@Z
     */
    virtual bool moveTo(class NavigationComponent &, class Mob &, class Actor &, float);
    /**
     * @hash   63431401
     * @vftbl  11
     * @symbol ?canUpdatePath@WallClimberPathNavigation@@MEBA_NAEBVMob@@@Z
     */
    virtual bool canUpdatePath(class Mob const &) const;

};