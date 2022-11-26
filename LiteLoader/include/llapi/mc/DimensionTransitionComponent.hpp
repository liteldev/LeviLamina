/**
 * @file  DimensionTransitionComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure DimensionTransitionComponent.
 *
 */
struct DimensionTransitionComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONTRANSITIONCOMPONENT
public:
    struct DimensionTransitionComponent& operator=(struct DimensionTransitionComponent const &) = delete;
    DimensionTransitionComponent(struct DimensionTransitionComponent const &) = delete;
    DimensionTransitionComponent() = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData@DimensionTransitionComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -634904696
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?readAdditionalSaveData@DimensionTransitionComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -43873298
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?AXIS_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -337745713
     */
    MCAPI static std::string const AXIS_TAG;
    /**
     * @symbol ?COMPONENT_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1050547593
     */
    MCAPI static std::string const COMPONENT_TAG;
    /**
     * @symbol ?DIMENSION_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1326181029
     */
    MCAPI static std::string const DIMENSION_TAG;
    /**
     * @symbol ?POSITION_X_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1571375
     */
    MCAPI static std::string const POSITION_X_TAG;
    /**
     * @symbol ?POSITION_Y_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -315082637
     */
    MCAPI static std::string const POSITION_Y_TAG;
    /**
     * @symbol ?POSITION_Z_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -628593899
     */
    MCAPI static std::string const POSITION_Z_TAG;

};