/**
 * @file  ScriptMinecraftServerAdminModuleFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"
#include "Scripting.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftServerAdminModuleFactory.
 *
 */
class ScriptMinecraftServerAdminModuleFactory : public TextObjectText {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTSERVERADMINMODULEFACTORY
public:
    class ScriptMinecraftServerAdminModuleFactory& operator=(class ScriptMinecraftServerAdminModuleFactory const &) = delete;
    ScriptMinecraftServerAdminModuleFactory(class ScriptMinecraftServerAdminModuleFactory const &) = delete;
    ScriptMinecraftServerAdminModuleFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   571089442
     */
    virtual ~ScriptMinecraftServerAdminModuleFactory();
    /**
     * @symbol ??0ScriptMinecraftServerAdminModuleFactory@@QEAA@V?$NonOwnerPointer@VScriptPackConfigurationManager@@@Bedrock@@@Z
     * @hash   -536099772
     */
    MCAPI ScriptMinecraftServerAdminModuleFactory(class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager>);
    /**
     * @symbol ?getModuleUUIDAsString@ScriptMinecraftServerAdminModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   58512014
     */
    MCAPI static std::string getModuleUUIDAsString();
    /**
     * @symbol ?makeModuleDescriptorFor@ScriptMinecraftServerAdminModuleFactory@@SA?AUModuleDescriptor@Scripting@@UVersion@3@@Z
     * @hash   1586905933
     */
    MCAPI static struct Scripting::ModuleDescriptor makeModuleDescriptorFor(struct Scripting::Version);

//private:
    /**
     * @symbol ?_generateBindings@ScriptMinecraftServerAdminModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEBUVersion@3@V?$optional@UContextConfig@Scripting@@@std@@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@@Z
     * @hash   647672013
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(struct Scripting::Version const &, class std::optional<struct Scripting::ContextConfig>, bool, std::vector<std::string> const &);

private:
    /**
     * @symbol ?ModuleName@ScriptMinecraftServerAdminModuleFactory@@0PEBDEB
     * @hash   1123076190
     */
    MCAPI static char const * ModuleName;
    /**
     * @symbol ?ModuleUUID@ScriptMinecraftServerAdminModuleFactory@@0VUUID@mce@@B
     * @hash   -1488322763
     */
    MCAPI static class mce::UUID const ModuleUUID;

};