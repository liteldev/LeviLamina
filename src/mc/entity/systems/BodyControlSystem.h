#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BodyControlSystem {

public:
    // prevent constructor by default
    BodyControlSystem& operator=(BodyControlSystem const&) = delete;
    BodyControlSystem(BodyControlSystem const&)            = delete;
    BodyControlSystem()                                    = delete;

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
     * @symbol ?tick\@BodyControlSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};