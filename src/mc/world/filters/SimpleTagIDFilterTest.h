#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SimpleTagIDFilterTest {

public:
    // prevent constructor by default
    SimpleTagIDFilterTest& operator=(SimpleTagIDFilterTest const&) = delete;
    SimpleTagIDFilterTest(SimpleTagIDFilterTest const&)            = delete;
    SimpleTagIDFilterTest()                                        = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLETAGIDFILTERTEST
    /**
     * @symbol ?_serializeValue\@SimpleTagIDFilterTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    MCVAPI class Json::Value _serializeValue() const;
    /**
     * @symbol ?setup\@SimpleTagIDFilterTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    MCVAPI bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
#endif
    // NOLINTEND
};