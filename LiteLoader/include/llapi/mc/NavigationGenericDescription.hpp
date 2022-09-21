/**
 * @file  MC/NavigationGenericDescription.hpp
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
 * @brief MC class NavigationGenericDescription.
 *
 */
class NavigationGenericDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONGENERICDESCRIPTION
public:
    class NavigationGenericDescription& operator=(class NavigationGenericDescription const &) = delete;
    NavigationGenericDescription(class NavigationGenericDescription const &) = delete;
    NavigationGenericDescription() = delete;
#endif

public:
    /**
     * @hash   -1195301781
     * @vftbl  0
     * @symbol ?getJsonName@NavigationGenericDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~NavigationGenericDescription();

};