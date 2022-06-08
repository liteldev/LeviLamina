// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StopSoundCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPSOUNDCOMMAND
public:
    class StopSoundCommand& operator=(class StopSoundCommand const &) = delete;
    StopSoundCommand(class StopSoundCommand const &) = delete;
    StopSoundCommand() = delete;
#endif

public:
    /*0*/ virtual ~StopSoundCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STOPSOUNDCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

protected:

private:

};