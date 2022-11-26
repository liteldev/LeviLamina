/**
 * @file  SidePoweredComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CircuitComponentList.hpp"
#include "CapacitorComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SidePoweredComponent.
 *
 */
class SidePoweredComponent : public CapacitorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEPOWEREDCOMPONENT
public:
    class SidePoweredComponent& operator=(class SidePoweredComponent const &) = delete;
    SidePoweredComponent(class SidePoweredComponent const &) = delete;
    SidePoweredComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -903192390
     */
    virtual ~SidePoweredComponent();
    /**
     * @vftbl  6
     * @symbol ?canConsumePowerAnyDirection@SidePoweredComponent@@UEBA_NXZ
     * @hash   -405662524
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vftbl  7
     * @symbol ?canConsumerPower@SidePoweredComponent@@UEBA_NXZ
     * @hash   614651383
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl  10
     * @symbol ?removeSource@SidePoweredComponent@@UEAA_NAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
     * @hash   1244663574
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @vftbl  12
     * @symbol ?allowConnection@SidePoweredComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     * @hash   1174584672
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  17
     * @hash   -228886166
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @hash   -206721662
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  22
     * @symbol ?removeFromAnySourceList@SidePoweredComponent@@MEAA_NPEBVBaseCircuitComponent@@@Z
     * @hash   1289873679
     */
    virtual bool removeFromAnySourceList(class BaseCircuitComponent const *);
    /**
     * @vftbl  25
     * @symbol ?getPoweroutDirection@SidePoweredComponent@@UEBAEXZ
     * @hash   -1326152615
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @symbol ?addToSideComponents@SidePoweredComponent@@QEAAXAEAV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VItem@CircuitComponentList@@@std@@@std@@@std@@PEAVBaseCircuitComponent@@@Z
     * @hash   -426571359
     */
    MCAPI void addToSideComponents(class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class CircuitComponentList::Item>>> &, class BaseCircuitComponent *);

};