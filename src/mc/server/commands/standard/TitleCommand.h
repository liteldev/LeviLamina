#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TitleCommand : public ::Command {

public:
    // prevent constructor by default
    TitleCommand& operator=(TitleCommand const&) = delete;
    TitleCommand(TitleCommand const&)            = delete;
    TitleCommand()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TitleCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@TitleCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND
};