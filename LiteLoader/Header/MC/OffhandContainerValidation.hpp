// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OffhandContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OFFHANDCONTAINERVALIDATION
public:
    class OffhandContainerValidation& operator=(class OffhandContainerValidation const &) = delete;
    OffhandContainerValidation(class OffhandContainerValidation const &) = delete;
    OffhandContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~OffhandContainerValidation();
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /*4*/ virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /*5*/ virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /*6*/ virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /*8*/ virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

protected:

private:

};