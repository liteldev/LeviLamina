#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryClientData {

public:
    // prevent constructor by default
    StructureTelemetryClientData& operator=(StructureTelemetryClientData const&) = delete;
    StructureTelemetryClientData(StructureTelemetryClientData const&)            = delete;
    StructureTelemetryClientData()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getMirrorEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getMirrorEditCount() const;
    /**
     * @symbol ?getOffsetEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getOffsetEditCount() const;
    /**
     * @symbol ?getRotationEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getRotationEditCount() const;
    /**
     * @symbol ?getSizeEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getSizeEditCount() const;
    // NOLINTEND
};