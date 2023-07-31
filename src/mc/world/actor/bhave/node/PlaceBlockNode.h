#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlaceBlockNode {

public:
    // prevent constructor by default
    PlaceBlockNode& operator=(PlaceBlockNode const&) = delete;
    PlaceBlockNode(PlaceBlockNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@PlaceBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @symbol ??0PlaceBlockNode\@\@QEAA\@XZ
     */
    MCAPI PlaceBlockNode();
    // NOLINTEND
};