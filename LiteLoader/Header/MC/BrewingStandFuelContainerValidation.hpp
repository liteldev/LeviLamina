// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BrewingStandFuelContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREWINGSTANDFUELCONTAINERVALIDATION
public:
    class BrewingStandFuelContainerValidation& operator=(class BrewingStandFuelContainerValidation const &) = delete;
    BrewingStandFuelContainerValidation(class BrewingStandFuelContainerValidation const &) = delete;
    BrewingStandFuelContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~BrewingStandFuelContainerValidation();
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*8*/ virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

protected:

private:

};