#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/events/EventResult.h"

class ServerInstanceEventListener {

public:
    // prevent constructor by default
    ServerInstanceEventListener& operator=(ServerInstanceEventListener const&) = delete;
    ServerInstanceEventListener(ServerInstanceEventListener const&)            = delete;
    ServerInstanceEventListener()                                              = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERINSTANCEEVENTLISTENER
    /**
     * @symbol ?onServerInitializeEnd\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerInitializeEnd(class ServerInstance&);
    /**
     * @symbol ?onServerInitializeStart\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerInitializeStart(class ServerInstance&);
    /**
     * @symbol
     * ?onServerMinecraftInitialized\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCVAPI enum class EventResult
    onServerMinecraftInitialized(class ServerInstance&, gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const&);
    /**
     * @symbol ?onServerResume\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerResume(class ServerInstance&);
    /**
     * @symbol ?onServerSuspend\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerSuspend(class ServerInstance&);
    /**
     * @symbol ?onServerUpdateEnd\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerUpdateEnd(class ServerInstance&);
    /**
     * @symbol ?onStartLeaveGame\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onStartLeaveGame(class ServerInstance&);
#endif
    // NOLINTEND
};
