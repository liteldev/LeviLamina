/**
 * @file  AreaAttackDefinition.hpp
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
 * @brief MC class AreaAttackDefinition.
 *
 */
class AreaAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAATTACKDEFINITION
public:
    class AreaAttackDefinition& operator=(class AreaAttackDefinition const &) = delete;
    AreaAttackDefinition(class AreaAttackDefinition const &) = delete;
    AreaAttackDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@AreaAttackDefinition@@QEAAXAEAVEntityContext@@AEAVAreaAttackComponent@@@Z
     * @hash   -1373618187
     */
    MCAPI void initialize(class EntityContext &, class AreaAttackComponent &);
    /**
     * @symbol ?setDamageCause@AreaAttackDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -610145668
     */
    MCAPI void setDamageCause(std::string const &);
    /**
     * @symbol ?buildSchema@AreaAttackDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VAreaAttackDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -1625094906
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AreaAttackDefinition>> &);

};