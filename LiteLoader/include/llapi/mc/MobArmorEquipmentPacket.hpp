/**
 * @file  MobArmorEquipmentPacket.hpp
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
 * @brief MC class MobArmorEquipmentPacket.
 *
 */
class MobArmorEquipmentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBARMOREQUIPMENTPACKET
public:
    class MobArmorEquipmentPacket& operator=(class MobArmorEquipmentPacket const &) = delete;
    MobArmorEquipmentPacket(class MobArmorEquipmentPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   552387173
     */
    virtual ~MobArmorEquipmentPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@MobArmorEquipmentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -2136907321
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@MobArmorEquipmentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -488801164
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@MobArmorEquipmentPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1846222835
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@MobArmorEquipmentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1719994851
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0MobArmorEquipmentPacket@@QEAA@XZ
     * @hash   -1720096845
     */
    MCAPI MobArmorEquipmentPacket();
    /**
     * @symbol ??0MobArmorEquipmentPacket@@QEAA@AEBVActor@@@Z
     * @hash   1797057416
     */
    MCAPI MobArmorEquipmentPacket(class Actor const &);

};