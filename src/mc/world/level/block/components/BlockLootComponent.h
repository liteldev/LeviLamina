#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLootComponent {

public:
    // prevent constructor by default
    BlockLootComponent& operator=(BlockLootComponent const&) = delete;
    BlockLootComponent(BlockLootComponent const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKLOOTCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockLootComponent();
#endif
    /**
     * @symbol ??0BlockLootComponent\@\@QEAA\@XZ
     */
    MCAPI BlockLootComponent();
    /**
     * @symbol
     * ?getLootTable\@BlockLootComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLootTable() const;
    // NOLINTEND
};