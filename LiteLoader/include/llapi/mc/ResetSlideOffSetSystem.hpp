/**
 * @file  ResetSlideOffSetSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ResetSlideOffSetSystem.
 *
 */
class ResetSlideOffSetSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETSLIDEOFFSETSYSTEM
public:
    class ResetSlideOffSetSystem& operator=(class ResetSlideOffSetSystem const &) = delete;
    ResetSlideOffSetSystem(class ResetSlideOffSetSystem const &) = delete;
    ResetSlideOffSetSystem() = delete;
#endif

public:
    /**
     * @symbol ?createResetSlideOffSetSystem\@ResetSlideOffSetSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetSlideOffSetSystem();
    /**
     * @symbol ?tickResetSlideOffSetSystem\@ResetSlideOffSetSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Exclude\@V?$FlagComponent\@UAutoStepRequestFlag\@\@\@\@\@\@$$CBUMoveRequestComponent\@\@USlideOffsetComponent\@\@\@\@\@Z
     */
    MCAPI static void tickResetSlideOffSetSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Exclude<class FlagComponent<struct AutoStepRequestFlag>>, struct MoveRequestComponent const, struct SlideOffsetComponent>);

};
