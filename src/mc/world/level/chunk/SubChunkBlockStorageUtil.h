#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class SubChunkStorage;
// clang-format on

namespace SubChunkBlockStorageUtil {
// NOLINTBEGIN
/**
 * @symbol
 * ?makeDeserialized\@SubChunkBlockStorageUtil\@\@YA?AV?$unique_ptr\@V?$SubChunkStorage\@VBlock\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBlock\@\@\@\@\@std\@\@\@std\@\@AEAVIDataInput\@\@AEBVBlockPalette\@\@AEBV?$function\@$$A6APEBVBlock\@\@_K\@Z\@3\@AEBV?$function\@$$A6APEBVBlock\@\@AEBVCompoundTag\@\@\@Z\@3\@W4SubChunkFormat\@\@\@Z
 */
MCAPI std::unique_ptr<class SubChunkStorage<class Block>> makeDeserialized(
    class IDataInput&,
    class BlockPalette const&,
    std::function<class Block const*(uint64_t)> const&,
    std::function<class Block const*(class CompoundTag const&)> const&,
    enum class SubChunkFormat
);
// NOLINTEND

}; // namespace SubChunkBlockStorageUtil