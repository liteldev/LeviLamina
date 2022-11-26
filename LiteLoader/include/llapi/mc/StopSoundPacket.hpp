/**
 * @file  StopSoundPacket.hpp
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
 * @brief MC class StopSoundPacket.
 *
 */
class StopSoundPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPSOUNDPACKET
public:
    class StopSoundPacket& operator=(class StopSoundPacket const &) = delete;
    StopSoundPacket(class StopSoundPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   278319843
     */
    virtual ~StopSoundPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@StopSoundPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   2112586361
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@StopSoundPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   625138982
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@StopSoundPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1656815105
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@StopSoundPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1949976015
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0StopSoundPacket@@QEAA@XZ
     * @hash   -123975359
     */
    MCAPI StopSoundPacket();
    /**
     * @symbol ??0StopSoundPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1055257487
     */
    MCAPI StopSoundPacket(std::string const &, bool);

};