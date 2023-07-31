#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptCanClimbComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

public:
    // prevent constructor by default
    ScriptCanClimbComponent& operator=(ScriptCanClimbComponent const&) = delete;
    ScriptCanClimbComponent(ScriptCanClimbComponent const&)            = delete;
    ScriptCanClimbComponent()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTCANCLIMBCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptCanClimbComponent();
#endif
    /**
     * @symbol
     * ?sClassName\@ScriptCanClimbComponent\@ScriptModuleMinecraft\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sClassName;
    /**
     * @symbol ?sComponentId\@ScriptCanClimbComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* sComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft