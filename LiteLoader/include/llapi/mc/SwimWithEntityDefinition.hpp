/**
 * @file  MC/SwimWithEntityDefinition.hpp
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
 * @brief MC class SwimWithEntityDefinition.
 *
 */
class SwimWithEntityDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWITHENTITYDEFINITION
public:
    class SwimWithEntityDefinition& operator=(class SwimWithEntityDefinition const &) = delete;
    SwimWithEntityDefinition(class SwimWithEntityDefinition const &) = delete;
#endif

public:
    /**
     * @hash   1638764784
     * @symbol ??0SwimWithEntityDefinition@@QEAA@XZ
     */
    MCAPI SwimWithEntityDefinition();
    /**
     * @hash   460417299
     * @symbol ?initialize@SwimWithEntityDefinition@@QEAAXAEAVEntityContext@@AEAVSwimWithEntityGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class SwimWithEntityGoal &);
    /**
     * @hash   -1390035149
     * @symbol ?buildSchema@SwimWithEntityDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSwimWithEntityDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimWithEntityDefinition>> &);

};