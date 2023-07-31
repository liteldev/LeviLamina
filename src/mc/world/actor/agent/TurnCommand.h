#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

namespace AgentCommands {

class TurnCommand : public ::AgentCommands::Command {

public:
    // prevent constructor by default
    TurnCommand& operator=(TurnCommand const&) = delete;
    TurnCommand(TurnCommand const&)            = delete;
    TurnCommand()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TurnCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void execute();
    /**
     * @vftbl 2
     * @symbol ?isDone\@TurnCommand\@AgentCommands\@\@UEAA_NXZ
     */
    virtual bool isDone();
    /**
     * @vftbl 3
     * @symbol ?tick\@TurnCommand\@AgentCommands\@\@UEAAXXZ
     */
    virtual void tick();
    // NOLINTEND
};

}; // namespace AgentCommands