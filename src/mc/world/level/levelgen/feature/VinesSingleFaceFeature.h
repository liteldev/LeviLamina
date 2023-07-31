#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VinesSingleFaceFeature {

public:
    // prevent constructor by default
    VinesSingleFaceFeature& operator=(VinesSingleFaceFeature const&) = delete;
    VinesSingleFaceFeature(VinesSingleFaceFeature const&)            = delete;
    VinesSingleFaceFeature()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?place\@VinesSingleFaceFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    // NOLINTEND
};