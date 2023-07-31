#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookControlSystem {

public:
    // prevent constructor by default
    LookControlSystem& operator=(LookControlSystem const&) = delete;
    LookControlSystem(LookControlSystem const&)            = delete;
    LookControlSystem()                                    = delete;

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
     * @symbol ?tick\@LookControlSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};