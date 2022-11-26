/**
 * @file  DayLockCommand.hpp
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
 * @brief MC class DayLockCommand.
 *
 */
class DayLockCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAYLOCKCOMMAND
public:
    class DayLockCommand& operator=(class DayLockCommand const &) = delete;
    DayLockCommand(class DayLockCommand const &) = delete;
    DayLockCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1436885806
     */
    virtual ~DayLockCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@DayLockCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1350519023
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@DayLockCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -609058324
     */
    MCAPI static void setup(class CommandRegistry &);

};