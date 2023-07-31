#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemRandomDifficultyChanceCondition {

public:
    // prevent constructor by default
    LootItemRandomDifficultyChanceCondition& operator=(LootItemRandomDifficultyChanceCondition const&) = delete;
    LootItemRandomDifficultyChanceCondition(LootItemRandomDifficultyChanceCondition const&)            = delete;
    LootItemRandomDifficultyChanceCondition()                                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemRandomDifficultyChanceCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
    // NOLINTEND
};