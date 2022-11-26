/**
 * @file  ShareableDefinition.hpp
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
 * @brief MC class ShareableDefinition.
 *
 */
class ShareableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREABLEDEFINITION
public:
    class ShareableDefinition& operator=(class ShareableDefinition const &) = delete;
    ShareableDefinition(class ShareableDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0ShareableDefinition@@QEAA@XZ
     * @hash   -1940233224
     */
    MCAPI ShareableDefinition();
    /**
     * @symbol ?addShareable@ShareableDefinition@@QEAAXAEBUShareable@@@Z
     * @hash   -2065938494
     */
    MCAPI void addShareable(struct Shareable const &);
    /**
     * @symbol ?addShareableByName@ShareableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -170573014
     */
    MCAPI void addShareableByName(std::string const &);
    /**
     * @symbol ?buildSchema@ShareableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VShareableDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1624980794
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShareableDefinition>> &);

};