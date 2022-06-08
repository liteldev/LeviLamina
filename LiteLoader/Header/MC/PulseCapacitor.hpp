// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PulseCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PULSECAPACITOR
public:
    class PulseCapacitor& operator=(class PulseCapacitor const &) = delete;
    PulseCapacitor(class PulseCapacitor const &) = delete;
#endif

public:
    /*0*/ virtual ~PulseCapacitor();
    /*1*/ virtual int getStrength() const;
    /*3*/ virtual void setStrength(int);
    /*6*/ virtual bool canConsumePowerAnyDirection() const;
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /*13*/ virtual void checkLock(class CircuitSystem &, class BlockPos const &);
    /*14*/ virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /*15*/ virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /*16*/ virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    /*24*/ virtual unsigned char getPoweroutDirection() const;
    /*
    inline bool canConsumerPower() const{
        bool (PulseCapacitor::*rv)() const;
        *((void**)&rv) = dlsym("?canConsumerPower@PulseCapacitor@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI PulseCapacitor();

protected:

private:

};