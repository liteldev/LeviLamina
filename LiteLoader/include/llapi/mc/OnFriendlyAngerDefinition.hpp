/**
 * @file  MC/OnFriendlyAngerDefinition.hpp
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
 * @brief MC structure OnFriendlyAngerDefinition.
 *
 */
struct OnFriendlyAngerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFRIENDLYANGERDEFINITION
public:
    struct OnFriendlyAngerDefinition& operator=(struct OnFriendlyAngerDefinition const &) = delete;
    OnFriendlyAngerDefinition(struct OnFriendlyAngerDefinition const &) = delete;
    OnFriendlyAngerDefinition() = delete;
#endif

public:
    /**
     * @hash   -1453682466
     * @symbol ?buildSchema@OnFriendlyAngerDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnFriendlyAngerDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnFriendlyAngerDefinition>> &);

};