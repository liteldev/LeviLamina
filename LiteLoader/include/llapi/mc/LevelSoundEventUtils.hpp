/**
 * @file  MC/LevelSoundEventUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelSoundEventUtils.
 *
 */
class LevelSoundEventUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTUTILS
public:
    class LevelSoundEventUtils& operator=(class LevelSoundEventUtils const &) = delete;
    LevelSoundEventUtils(class LevelSoundEventUtils const &) = delete;
    LevelSoundEventUtils() = delete;
#endif

public:
    /**
     * @hash   -811734633
     * @symbol ?serializePercentageToData@LevelSoundEventUtils@@SAHM@Z
     */
    MCAPI static int serializePercentageToData(float);

//private:

private:
    /**
     * @hash   -468502111
     * @symbol ?MAX_INT_REPRESENTABLE_AS_FLOAT@LevelSoundEventUtils@@0HB
     */
    MCAPI static int const MAX_INT_REPRESENTABLE_AS_FLOAT;

};