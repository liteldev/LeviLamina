/**
 * @file  MoveControlHoverDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveControlHoverDescription.
 *
 */
class MoveControlHoverDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLHOVERDESCRIPTION
public:
    class MoveControlHoverDescription& operator=(class MoveControlHoverDescription const &) = delete;
    MoveControlHoverDescription(class MoveControlHoverDescription const &) = delete;
    MoveControlHoverDescription() = delete;
#endif

public:
    /**
     * @hash   2071677368
     * @vftbl  0
     * @symbol  ?getJsonName\@MoveControlHoverDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~MoveControlHoverDescription();
    /**
     * @hash   79327243
     * @vftbl  2
     * @symbol  ?deserializeData\@MoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1019491691
     * @vftbl  3
     * @symbol  ?serializeData\@MoveControlDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};