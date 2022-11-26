/**
 * @file  ScriptBindingModuleUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptBindingModuleUtils.
 *
 */
namespace ScriptBindingModuleUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?generateModuleDocumentation@ScriptBindingModuleUtils@@YA?AVValue@Json@@AEBUModuleBinding@Scripting@@AEBUSupportedBindingModule@5@AEBUModuleBindingBundle@5@@Z
     * @hash   -692458144
     */
    MCAPI class Json::Value generateModuleDocumentation(struct Scripting::ModuleBinding const &, struct Scripting::SupportedBindingModule const &, struct Scripting::ModuleBindingBundle const &);
    /**
     * @symbol ?getGameSemVersionAsString@ScriptBindingModuleUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1580914295
     */
    MCAPI std::string getGameSemVersionAsString();
    /**
     * @symbol ?scriptingVersionToString@ScriptBindingModuleUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVersion@Scripting@@@Z
     * @hash   -1971977916
     */
    MCAPI std::string scriptingVersionToString(struct Scripting::Version const &);

};