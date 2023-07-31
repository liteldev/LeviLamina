#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FindActorNode {

public:
    // prevent constructor by default
    FindActorNode& operator=(FindActorNode const&) = delete;
    FindActorNode(FindActorNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@FindActorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@FindActorNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0FindActorNode\@\@QEAA\@XZ
     */
    MCAPI FindActorNode();
    // NOLINTEND
};