#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SelectorBehaviorNode {

public:
    // prevent constructor by default
    SelectorBehaviorNode& operator=(SelectorBehaviorNode const&) = delete;
    SelectorBehaviorNode(SelectorBehaviorNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@SelectorBehaviorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@SelectorBehaviorNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0SelectorBehaviorNode\@\@QEAA\@XZ
     */
    MCAPI SelectorBehaviorNode();
    // NOLINTEND
};