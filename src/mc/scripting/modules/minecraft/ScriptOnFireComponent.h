#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptOnFireComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

public:
    // prevent constructor by default
    ScriptOnFireComponent& operator=(ScriptOnFireComponent const&) = delete;
    ScriptOnFireComponent(ScriptOnFireComponent const&)            = delete;
    ScriptOnFireComponent()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTONFIRECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptOnFireComponent();
#endif
    /**
     * @symbol ?getOnFireTicksRemaining\@ScriptOnFireComponent\@ScriptModuleMinecraft\@\@QEBAHXZ
     */
    MCAPI int getOnFireTicksRemaining() const;
    /**
     * @symbol
     * ?bind\@ScriptOnFireComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptOnFireComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptOnFireComponent> bind();
    /**
     * @symbol ?ComponentId\@ScriptOnFireComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft