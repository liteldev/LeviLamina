/**
 * @file  AnimateEntityPacket.hpp
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
 * @brief MC class AnimateEntityPacket.
 *
 */
class AnimateEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATEENTITYPACKET
public:
    class AnimateEntityPacket& operator=(class AnimateEntityPacket const &) = delete;
    AnimateEntityPacket(class AnimateEntityPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -707363558
     */
    virtual ~AnimateEntityPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@AnimateEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   838595842
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@AnimateEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1520439377
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@AnimateEntityPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1827284344
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@AnimateEntityPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1208986040
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0AnimateEntityPacket@@QEAA@XZ
     * @hash   958661736
     */
    MCAPI AnimateEntityPacket();
    /**
     * @symbol ??0AnimateEntityPacket@@QEAA@AEBV?$vector@VActorRuntimeID@@V?$allocator@VActorRuntimeID@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@1M1W4MolangVersion@@1@Z
     * @hash   -1501083236
     */
    MCAPI AnimateEntityPacket(std::vector<class ActorRuntimeID> const &, std::string const &, std::string const &, float, std::string const &, enum class MolangVersion, std::string const &);

};