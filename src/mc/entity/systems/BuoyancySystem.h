#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BuoyancySystem {

public:
    // prevent constructor by default
    BuoyancySystem& operator=(BuoyancySystem const&) = delete;
    BuoyancySystem(BuoyancySystem const&)            = delete;
    BuoyancySystem()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@BuoyancySystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};