// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ContainerScreenValidationCrafting {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATIONCRAFTING
public:
    class ContainerScreenValidationCrafting& operator=(class ContainerScreenValidationCrafting const &) = delete;
    ContainerScreenValidationCrafting(class ContainerScreenValidationCrafting const &) = delete;
    ContainerScreenValidationCrafting() = delete;
#endif

public:
    /*0*/ virtual ~ContainerScreenValidationCrafting();
    /*1*/ virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /*2*/ virtual struct ContainerValidationCraftResult getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSCREENVALIDATIONCRAFTING
#endif

protected:

private:
    MCAPI void _appendCraftResult(struct ContainerValidationCraftResult &);

};