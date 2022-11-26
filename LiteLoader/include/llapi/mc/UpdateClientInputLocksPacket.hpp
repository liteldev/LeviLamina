/**
 * @file  UpdateClientInputLocksPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateClientInputLocksPacket.
 *
 */
class UpdateClientInputLocksPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATECLIENTINPUTLOCKSPACKET
public:
    class UpdateClientInputLocksPacket& operator=(class UpdateClientInputLocksPacket const &) = delete;
    UpdateClientInputLocksPacket(class UpdateClientInputLocksPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -422135676
     */
    virtual ~UpdateClientInputLocksPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@UpdateClientInputLocksPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1086080076
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@UpdateClientInputLocksPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2059094625
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@UpdateClientInputLocksPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1803596474
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@UpdateClientInputLocksPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -309330314
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0UpdateClientInputLocksPacket@@QEAA@XZ
     * @hash   313890966
     */
    MCAPI UpdateClientInputLocksPacket();

};