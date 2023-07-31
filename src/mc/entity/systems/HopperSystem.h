#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HopperSystem {

public:
    // prevent constructor by default
    HopperSystem& operator=(HopperSystem const&) = delete;
    HopperSystem(HopperSystem const&)            = delete;
    HopperSystem()                               = delete;

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
     * @symbol ?tick\@HopperSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};