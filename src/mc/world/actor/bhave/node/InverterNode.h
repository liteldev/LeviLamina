#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InverterNode {

public:
    // prevent constructor by default
    InverterNode& operator=(InverterNode const&) = delete;
    InverterNode(InverterNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@InverterNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@InverterNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0InverterNode\@\@QEAA\@XZ
     */
    MCAPI InverterNode();
    // NOLINTEND
};