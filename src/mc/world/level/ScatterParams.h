#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/ExpressionNode.h"

class ScatterParams {
public:
    // ScatterParams inner types declare
    // clang-format off
    class ChanceInformation;
    struct CoordinateRange;
    class ScatteredPositions;
    // clang-format on

    // ScatterParams inner types define
    class ChanceInformation {
    public:
        // prevent constructor by default
        ChanceInformation& operator=(ChanceInformation const&);
        ChanceInformation(ChanceInformation const&);
        ChanceInformation();

    public:
        // NOLINTBEGIN
        // symbol: ??1ChanceInformation@ScatterParams@@QEAA@XZ
        MCAPI ~ChanceInformation();

        // NOLINTEND
    };

    struct CoordinateRange {
    public:
        enum class Distribution : int {
            uniform          = 0x1,
            gaussian         = 0x2,
            inverse_gaussian = 0x3,
            jittered_grid    = 0x4,
            fixed_grid       = 0x5,
            triangle         = 0x6
        };
        ExpressionNode mMin;          // this+0x0
        ExpressionNode mMax;          // this+E8
        int            mStepSize;     // this+1D0
        int            mGridOffset;   // this+1D4
        Distribution   mDistribution; // this+1D8
        int            mExtentMin;    // this+1DC
        int            mExtentMax;    // this+1E0
        int            mUnknown1;     // this+1E4
        // prevent constructor by default
        CoordinateRange& operator=(CoordinateRange const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0CoordinateRange@ScatterParams@@QEAA@XZ
        MCAPI CoordinateRange();

        // symbol: ??0CoordinateRange@ScatterParams@@QEAA@$$QEAU01@@Z
        MCAPI CoordinateRange(struct ScatterParams::CoordinateRange&&);

        // symbol: ??0CoordinateRange@ScatterParams@@QEAA@AEBU01@@Z
        MCAPI CoordinateRange(struct ScatterParams::CoordinateRange const&);

        // symbol: ?_eval@CoordinateRange@ScatterParams@@QEBAHHHAEAIAEAVRandom@@@Z
        MCAPI int _eval(int evaluatedMin, int evaluatedMax, uint& stepIndex, class Random& random) const;

        // symbol: ??1CoordinateRange@ScatterParams@@QEAA@XZ
        MCAPI ~CoordinateRange();

        // NOLINTEND
    };

    class ScatteredPositions {
    public:
        // prevent constructor by default
        ScatteredPositions& operator=(ScatteredPositions const&);
        ScatteredPositions(ScatteredPositions const&);
        ScatteredPositions();

    public:
        // NOLINTBEGIN
        // symbol: ?empty@ScatteredPositions@ScatterParams@@QEAA_NXZ
        MCAPI bool empty();

        // symbol: ?nextPos@ScatteredPositions@ScatterParams@@QEAA?AVBlockPos@@XZ
        MCAPI class BlockPos nextPos();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScatterParams& operator=(ScatterParams const&);
    ScatterParams(ScatterParams const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScatterParams@@QEAA@XZ
    MCAPI ScatterParams();

    // symbol: ?addAdditionalSaveData@ScatterParams@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?readAdditionalSaveData@ScatterParams@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void readAdditionalSaveData(class CompoundTag const& tag);

    // symbol: ?scatter@ScatterParams@@QEBA?AVScatteredPositions@1@AEAVRenderParams@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI class ScatterParams::ScatteredPositions
    scatter(class RenderParams& molangParams, class BlockPos const& pos, class Random& random) const;

    // symbol: ??1ScatterParams@@QEAA@XZ
    MCAPI ~ScatterParams();

    // symbol: ?initMolangParams@ScatterParams@@SAXAEAVRenderParams@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI static void
    initMolangParams(class RenderParams& molangParams, class BlockPos const& pos, class Random& random);

    // symbol: ?initScatterParamIndices@ScatterParams@@SAXXZ
    MCAPI static void initScatterParamIndices();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getPos@ScatterParams@@AEBA?AVBlockPos@@IAEBV2@AEAVRandom@@AEAVRenderParams@@@Z
    MCAPI class BlockPos
    _getPos(uint stepIndex, class BlockPos const& origin, class Random& random, class RenderParams& molangParams) const;

    // symbol:
    // ?_parseExpressionNodeFloat@ScatterParams@@AEAAXAEBVCompoundTag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1AEAVExpressionNode@@M@Z
    MCAPI void _parseExpressionNodeFloat(
        class CompoundTag const& tag,
        std::string const&       tagName,
        std::string const&,
        class ExpressionNode& node,
        float                 defaultValue
    );

    // NOLINTEND
};
