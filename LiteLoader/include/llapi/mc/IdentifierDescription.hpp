/**
 * @file  IdentifierDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IdentifierDescription.
 *
 */
class IdentifierDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTIFIERDESCRIPTION
public:
    class IdentifierDescription& operator=(class IdentifierDescription const &) = delete;
    IdentifierDescription(class IdentifierDescription const &) = delete;
    IdentifierDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1179117793
     */
    virtual ~IdentifierDescription();
    /**
     * @vftbl  1
     * @symbol ?getJsonName@IdentifierDescription@@UEBAPEBDXZ
     * @hash   -1908189407
     */
    virtual char const * getJsonName() const;

};