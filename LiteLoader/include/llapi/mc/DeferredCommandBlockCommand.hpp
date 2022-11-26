/**
 * @file  DeferredCommandBlockCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeferredCommandBlockCommand.
 *
 */
class DeferredCommandBlockCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDCOMMANDBLOCKCOMMAND
public:
    class DeferredCommandBlockCommand& operator=(class DeferredCommandBlockCommand const &) = delete;
    DeferredCommandBlockCommand(class DeferredCommandBlockCommand const &) = delete;
    DeferredCommandBlockCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -18404648
     */
    virtual ~DeferredCommandBlockCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@DeferredCommandBlockCommand@@UEAAXAEAVMinecraftCommands@@@Z
     * @hash   -1714902475
     */
    virtual void execute(class MinecraftCommands &);
    /**
     * @symbol ??0DeferredCommandBlockCommand@@QEAA@VBlockPos@@AEAVBlockSource@@@Z
     * @hash   1880786996
     */
    MCAPI DeferredCommandBlockCommand(class BlockPos, class BlockSource &);

};