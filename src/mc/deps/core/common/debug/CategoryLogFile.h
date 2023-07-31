#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BedrockLog { enum class LogChannel; }
// clang-format on

namespace BedrockLog {

struct CategoryLogFile {

public:
    // prevent constructor by default
    CategoryLogFile& operator=(CategoryLogFile const&) = delete;
    CategoryLogFile(CategoryLogFile const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?AddChannel\@CategoryLogFile\@BedrockLog\@\@QEAAXW4LogChannel\@2\@\@Z
     */
    MCAPI void AddChannel(enum class BedrockLog::LogChannel);
    /**
     * @symbol ??0CategoryLogFile\@BedrockLog\@\@QEAA\@XZ
     */
    MCAPI CategoryLogFile();
    /**
     * @symbol ??1CategoryLogFile\@BedrockLog\@\@QEAA\@XZ
     */
    MCAPI ~CategoryLogFile();
    // NOLINTEND
};

}; // namespace BedrockLog