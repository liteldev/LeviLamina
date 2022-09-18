/**
 * @file  RakWebSocketDataFrameHeader.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure RakWebSocketDataFrameHeader.
 *
 */
struct RakWebSocketDataFrameHeader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETDATAFRAMEHEADER
public:
    struct RakWebSocketDataFrameHeader& operator=(struct RakWebSocketDataFrameHeader const &) = delete;
    RakWebSocketDataFrameHeader(struct RakWebSocketDataFrameHeader const &) = delete;
#endif

public:
    /**
     * @symbol ??0RakWebSocketDataFrameHeader@@QEAA@_N0000W4OpCode@@E@Z
     * @hash   1806182859
     */
    MCAPI RakWebSocketDataFrameHeader(bool, bool, bool, bool, bool, enum class OpCode, unsigned char);
    /**
     * @symbol ??0RakWebSocketDataFrameHeader@@QEAA@XZ
     * @hash   -301195279
     */
    MCAPI RakWebSocketDataFrameHeader();
    /**
     * @symbol ?getFinBit@RakWebSocketDataFrameHeader@@QEBAHXZ
     * @hash   -1035300632
     */
    MCAPI int getFinBit() const;
    /**
     * @symbol ?getMaskBit@RakWebSocketDataFrameHeader@@QEBAHXZ
     * @hash   -1656917444
     */
    MCAPI int getMaskBit() const;
    /**
     * @symbol ?getOpCode@RakWebSocketDataFrameHeader@@QEBA?AW4OpCode@@XZ
     * @hash   1307814512
     */
    MCAPI enum class OpCode getOpCode() const;
    /**
     * @symbol ?getPayloadLength@RakWebSocketDataFrameHeader@@QEBAEXZ
     * @hash   -873727885
     */
    MCAPI unsigned char getPayloadLength() const;
    /**
     * @symbol ?getRSV1Bit@RakWebSocketDataFrameHeader@@QEBAHXZ
     * @hash   -1949619380
     */
    MCAPI int getRSV1Bit() const;
    /**
     * @symbol ?getRSV2Bit@RakWebSocketDataFrameHeader@@QEBAHXZ
     * @hash   -82720422
     */
    MCAPI int getRSV2Bit() const;
    /**
     * @symbol ?getRSV3Bit@RakWebSocketDataFrameHeader@@QEBAHXZ
     * @hash   1784178536
     */
    MCAPI int getRSV3Bit() const;
    /**
     * @symbol ??1RakWebSocketDataFrameHeader@@QEAA@XZ
     * @hash   -33022031
     */
    MCAPI ~RakWebSocketDataFrameHeader();

};