#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BonusChestFeature : public ::Feature {

public:
    // prevent constructor by default
    BonusChestFeature& operator=(BonusChestFeature const&) = delete;
    BonusChestFeature(BonusChestFeature const&)            = delete;
    BonusChestFeature()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@BonusChestFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BONUSCHESTFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BonusChestFeature();
#endif
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_place\@BonusChestFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI bool _place(class BlockSource&, class BlockPos const&, class Random&) const;
    // NOLINTEND
};