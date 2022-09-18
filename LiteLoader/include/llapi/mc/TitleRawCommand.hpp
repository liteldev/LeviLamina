/**
 * @file  TitleRawCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SetTitlePacket.hpp"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TitleRawCommand.
 *
 */
class TitleRawCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TITLERAWCOMMAND
public:
    class TitleRawCommand& operator=(class TitleRawCommand const &) = delete;
    TitleRawCommand(class TitleRawCommand const &) = delete;
    TitleRawCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   977059145
     */
    virtual ~TitleRawCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@TitleRawCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   910027256
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@TitleRawCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1197599360
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_sendTitlePacketTextObject@TitleRawCommand@@AEBA_NW4TitleType@SetTitlePacket@@AEBVCommandOrigin@@AEAVCommandOutput@@AEBV?$CommandSelectorResults@VPlayer@@@@@Z
     * @hash   -301572891
     */
    MCAPI bool _sendTitlePacketTextObject(enum class SetTitlePacket::TitleType, class CommandOrigin const &, class CommandOutput &, class CommandSelectorResults<class Player> const &) const;

private:

};