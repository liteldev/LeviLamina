/**
 * @file  ToggleDownfallCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ToggleDownfallCommand.
 *
 */
class ToggleDownfallCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOGGLEDOWNFALLCOMMAND
public:
    class ToggleDownfallCommand& operator=(class ToggleDownfallCommand const &) = delete;
    ToggleDownfallCommand(class ToggleDownfallCommand const &) = delete;
    ToggleDownfallCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1777741128
     */
    virtual ~ToggleDownfallCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@ToggleDownfallCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   917018041
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@ToggleDownfallCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   1127264
     */
    MCAPI static void setup(class CommandRegistry &);

};