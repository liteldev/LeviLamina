/**
 * @file  TextPacket.hpp
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
 * @brief MC class TextPacket.
 *
 */
class TextPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[168];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTPACKET
public:
    class TextPacket& operator=(class TextPacket const &) = delete;
    TextPacket(class TextPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1650416801
     */
    virtual ~TextPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@TextPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   291197641
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@TextPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1415217526
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@TextPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1159797297
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@TextPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1522330737
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0TextPacket@@QEAA@XZ
     * @hash   -390089087
     */
    MCAPI TextPacket();
    /**
     * @symbol ?createAnnouncement@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     * @hash   -482849373
     */
    MCAPI static class TextPacket createAnnouncement(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?createChat@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     * @hash   -497060925
     */
    MCAPI static class TextPacket createChat(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?createJukeboxPopup@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     * @hash   149669539
     */
    MCAPI static class TextPacket createJukeboxPopup(std::string const &, std::vector<std::string> const &);
    /**
     * @symbol ?createSystemMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1310389829
     */
    MCAPI static class TextPacket createSystemMessage(std::string const &);
    /**
     * @symbol ?createTextObjectMessage@TextPacket@@SA?AV1@AEBVResolvedTextObject@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     * @hash   -166426545
     */
    MCAPI static class TextPacket createTextObjectMessage(class ResolvedTextObject const &, std::string, std::string);
    /**
     * @symbol ?createTextObjectWhisperMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     * @hash   -29392663
     */
    MCAPI static class TextPacket createTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?createTextObjectWhisperMessage@TextPacket@@SA?AV1@AEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     * @hash   -902571045
     */
    MCAPI static class TextPacket createTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @symbol ?createTranslated@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     * @hash   488035299
     */
    MCAPI static class TextPacket createTranslated(std::string const &, std::vector<std::string> const &);
    /**
     * @symbol ?createTranslatedAnnouncement@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     * @hash   1988404819
     */
    MCAPI static class TextPacket createTranslatedAnnouncement(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?createWhisper@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     * @hash   158282321
     */
    MCAPI static class TextPacket createWhisper(std::string const &, std::string const &, std::string const &, std::string const &);

//private:
    /**
     * @symbol ??0TextPacket@@AEAA@W4TextPacketType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@_N11@Z
     * @hash   -1989506386
     */
    MCAPI TextPacket(enum class TextPacketType, std::string const &, std::string const &, std::vector<std::string> const &, bool, std::string const &, std::string const &);

private:

};