/**
 * @file  EmoteListPacket.hpp
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
 * @brief MC class EmoteListPacket.
 *
 */
class EmoteListPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMOTELISTPACKET
public:
    class EmoteListPacket& operator=(class EmoteListPacket const &) = delete;
    EmoteListPacket(class EmoteListPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1370897492
     */
    virtual ~EmoteListPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@EmoteListPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   898329984
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@EmoteListPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -791992275
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@EmoteListPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -397488678
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@EmoteListPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1260696406
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0EmoteListPacket@@QEAA@XZ
     * @hash   700306282
     */
    MCAPI EmoteListPacket();
    /**
     * @symbol ??0EmoteListPacket@@QEAA@VActorRuntimeID@@@Z
     * @hash   842543803
     */
    MCAPI EmoteListPacket(class ActorRuntimeID);
    /**
     * @symbol ?MAX_EMOTE_PIECE_IDS@EmoteListPacket@@2HB
     * @hash   -1725325605
     */
    MCAPI static int const MAX_EMOTE_PIECE_IDS;

};