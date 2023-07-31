#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScatterFeature {

public:
    // prevent constructor by default
    ScatterFeature& operator=(ScatterFeature const&) = delete;
    ScatterFeature(ScatterFeature const&)            = delete;

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
     * ?place\@ScatterFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0ScatterFeature\@\@QEAA\@XZ
     */
    MCAPI ScatterFeature();
    // NOLINTEND
};