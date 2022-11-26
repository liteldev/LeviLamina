/**
 * @file  NavigationFlyDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NavigationFlyDescription.
 *
 */
class NavigationFlyDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONFLYDESCRIPTION
public:
    class NavigationFlyDescription& operator=(class NavigationFlyDescription const &) = delete;
    NavigationFlyDescription(class NavigationFlyDescription const &) = delete;
    NavigationFlyDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@NavigationFlyDescription@@UEBAPEBDXZ
     * @hash   -761584441
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -321034361
     */
    virtual ~NavigationFlyDescription();

};