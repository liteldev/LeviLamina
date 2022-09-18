/**
 * @file  ContainerValidatorFactory.hpp
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
 * @brief MC class ContainerValidatorFactory.
 *
 */
class ContainerValidatorFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATORFACTORY
public:
    class ContainerValidatorFactory& operator=(class ContainerValidatorFactory const &) = delete;
    ContainerValidatorFactory(class ContainerValidatorFactory const &) = delete;
    ContainerValidatorFactory() = delete;
#endif

public:
    /**
     * @symbol ?createContainerScreenValidator@ContainerValidatorFactory@@SA?AV?$unique_ptr@VContainerScreenValidatorBase@@U?$default_delete@VContainerScreenValidatorBase@@@std@@@std@@AEBVContainerScreenContext@@@Z
     * @hash   -1105748465
     */
    MCAPI static std::unique_ptr<class ContainerScreenValidatorBase> createContainerScreenValidator(class ContainerScreenContext const &);
    /**
     * @symbol ?createContainerValidator@ContainerValidatorFactory@@SA?AV?$shared_ptr@$$CBVContainerValidationBase@@@std@@W4ContainerEnumName@@AEBVContainerScreenContext@@W4ContainerValidationCaller@@@Z
     * @hash   -1153241252
     */
    MCAPI static class std::shared_ptr<class ContainerValidationBase const> createContainerValidator(enum class ContainerEnumName, class ContainerScreenContext const &, enum class ContainerValidationCaller);
    /**
     * @symbol ?getBackingContainer@ContainerValidatorFactory@@SAPEAVContainer@@W4ContainerEnumName@@AEBVContainerScreenContext@@@Z
     * @hash   359875975
     */
    MCAPI static class Container * getBackingContainer(enum class ContainerEnumName, class ContainerScreenContext const &);

};