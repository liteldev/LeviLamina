/**
 * @file  MC/MoveControlDolphinDescription.hpp
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
 * @brief MC class MoveControlDolphinDescription.
 *
 */
class MoveControlDolphinDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLDOLPHINDESCRIPTION
public:
    class MoveControlDolphinDescription& operator=(class MoveControlDolphinDescription const &) = delete;
    MoveControlDolphinDescription(class MoveControlDolphinDescription const &) = delete;
    MoveControlDolphinDescription() = delete;
#endif

public:
    /**
     * @hash   374745674
     * @vftbl  0
     * @symbol ?getJsonName@MoveControlDolphinDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~MoveControlDolphinDescription();
    /**
     * @hash   1472653817
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   373834883
     * @vftbl  3
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};