/**
 * @file  PlayerArmorDamagePacket.hpp
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
 * @brief MC class PlayerArmorDamagePacket.
 *
 */
class PlayerArmorDamagePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERARMORDAMAGEPACKET
public:
    class PlayerArmorDamagePacket& operator=(class PlayerArmorDamagePacket const &) = delete;
    PlayerArmorDamagePacket(class PlayerArmorDamagePacket const &) = delete;
    PlayerArmorDamagePacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   475411107
     */
    virtual ~PlayerArmorDamagePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PlayerArmorDamagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1305132999
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PlayerArmorDamagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -614541578
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PlayerArmorDamagePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   2027305473
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PlayerArmorDamagePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   505302081
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};