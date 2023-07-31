#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class PlaceCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    PlaceCommand& operator=(PlaceCommand const&) = delete;
    PlaceCommand(PlaceCommand const&)            = delete;
    PlaceCommand()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@PlaceCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@PlaceCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
    // NOLINTEND
};

}; // namespace AgentCommands