/**
 * @file  LodestoneCompassComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LodestoneCompassComponent.
 *
 */
class LodestoneCompassComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LODESTONECOMPASSCOMPONENT
public:
    class LodestoneCompassComponent& operator=(class LodestoneCompassComponent const &) = delete;
    LodestoneCompassComponent(class LodestoneCompassComponent const &) = delete;
    LodestoneCompassComponent() = delete;
#endif

public:
    /**
     * @symbol ??0LodestoneCompassComponent@@QEAA@$$QEAV0@@Z
     * @hash   -242127695
     */
    MCAPI LodestoneCompassComponent(class LodestoneCompassComponent &&);
    /**
     * @symbol ?getAnimationFrame@LodestoneCompassComponent@@QEAAHAEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@AEBVBlockPos@@AEBV?$AutomaticID@VDimension@@H@@@Z
     * @hash   -1950860213
     */
    MCAPI int getAnimationFrame(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, class BlockPos const &, class AutomaticID<class Dimension, int> const &);
    /**
     * @symbol ?initialize@LodestoneCompassComponent@@QEAAXAEBVPositionTrackingId@@@Z
     * @hash   1373733434
     */
    MCAPI void initialize(class PositionTrackingId const &);
    /**
     * @symbol ??4LodestoneCompassComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -219164500
     */
    MCAPI class LodestoneCompassComponent & operator=(class LodestoneCompassComponent &&);
    /**
     * @symbol ?setTrackOnlyInSameDimension@LodestoneCompassComponent@@QEAAXAEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@_N@Z
     * @hash   -2100921445
     */
    MCAPI void setTrackOnlyInSameDimension(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, bool);
    /**
     * @symbol ??1LodestoneCompassComponent@@QEAA@XZ
     * @hash   -753576616
     */
    MCAPI ~LodestoneCompassComponent();
    /**
     * @symbol ?getSpinningAnimationFrame@LodestoneCompassComponent@@SAHXZ
     * @hash   -982943502
     */
    MCAPI static int getSpinningAnimationFrame();
    /**
     * @symbol ?makeCalculatorId@LodestoneCompassComponent@@SA?AV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@AEBUActorUniqueID@@@Z
     * @hash   575284221
     */
    MCAPI static class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> makeCalculatorId(struct ActorUniqueID const &);

//private:
    /**
     * @symbol ?_findCalculator@LodestoneCompassComponent@@AEAAPEAVLodestoneCompassComponentCalculator@@AEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@_N@Z
     * @hash   735274623
     */
    MCAPI class LodestoneCompassComponentCalculator * _findCalculator(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, bool);

private:
    /**
     * @symbol ?mSpinningLodestone@LodestoneCompassComponent@@0VCompassSpriteCalculator@@A
     * @hash   -943558948
     */
    MCAPI static class CompassSpriteCalculator mSpinningLodestone;

};