/**
 * @file  CanClimbDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure CanClimbDefinition.
 *
 */
struct CanClimbDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANCLIMBDEFINITION
public:
    struct CanClimbDefinition& operator=(struct CanClimbDefinition const &) = delete;
    CanClimbDefinition(struct CanClimbDefinition const &) = delete;
    CanClimbDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@CanClimbDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   819079756
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?uninitialize@CanClimbDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   -1354082580
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@CanClimbDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UCanClimbDefinition@@@JsonUtil@@@std@@@Z
     * @hash   359077530
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanClimbDefinition>> &);

};