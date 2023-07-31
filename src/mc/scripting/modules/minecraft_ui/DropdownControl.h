#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class DropdownControl {

public:
    // prevent constructor by default
    DropdownControl& operator=(DropdownControl const&) = delete;
    DropdownControl(DropdownControl const&)            = delete;
    DropdownControl()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getJson\@DropdownControl\@ScriptModuleMinecraftServerUI\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value getJson() const;
    /**
     * @symbol
     * ??0DropdownControl\@ScriptModuleMinecraftServerUI\@\@QEAA\@VValue\@Json\@\@V?$vector\@VValue\@Json\@\@V?$allocator\@VValue\@Json\@\@\@std\@\@\@std\@\@V?$optional\@I\@5\@\@Z
     */
    MCAPI DropdownControl(class Json::Value, std::vector<class Json::Value>, std::optional<unsigned int>);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI