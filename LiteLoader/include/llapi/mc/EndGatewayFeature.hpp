/**
 * @file  EndGatewayFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndGatewayFeature.
 *
 */
class EndGatewayFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDGATEWAYFEATURE
public:
    class EndGatewayFeature& operator=(class EndGatewayFeature const &) = delete;
    EndGatewayFeature(class EndGatewayFeature const &) = delete;
    EndGatewayFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   527901467
     */
    virtual ~EndGatewayFeature();
    /**
     * @vftbl  3
     * @symbol ?place@EndGatewayFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1228652921
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};