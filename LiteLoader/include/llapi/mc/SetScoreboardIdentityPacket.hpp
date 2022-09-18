/**
 * @file  SetScoreboardIdentityPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetScoreboardIdentityPacket.
 *
 */
class SetScoreboardIdentityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETSCOREBOARDIDENTITYPACKET
public:
    class SetScoreboardIdentityPacket& operator=(class SetScoreboardIdentityPacket const &) = delete;
    SetScoreboardIdentityPacket(class SetScoreboardIdentityPacket const &) = delete;
    SetScoreboardIdentityPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1819500906
     */
    virtual ~SetScoreboardIdentityPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SetScoreboardIdentityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   759373746
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SetScoreboardIdentityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   16718431
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SetScoreboardIdentityPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   647768776
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SetScoreboardIdentityPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -960964616
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?change@SetScoreboardIdentityPacket@@SA?AV1@AEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     * @hash   -16933123
     */
    MCAPI static class SetScoreboardIdentityPacket change(struct ScoreboardId const &, struct PlayerScoreboardId const &);

};