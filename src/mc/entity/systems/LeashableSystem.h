#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LeashableSystem {

public:
    // prevent constructor by default
    LeashableSystem& operator=(LeashableSystem const&) = delete;
    LeashableSystem(LeashableSystem const&)            = delete;
    LeashableSystem()                                  = delete;

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
     * @symbol ?tick\@LeashableSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};