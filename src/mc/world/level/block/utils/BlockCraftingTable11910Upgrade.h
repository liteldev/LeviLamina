#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockCraftingTableVersioning {

class BlockCraftingTable11910Upgrade {

public:
    // prevent constructor by default
    BlockCraftingTable11910Upgrade& operator=(BlockCraftingTable11910Upgrade const&) = delete;
    BlockCraftingTable11910Upgrade(BlockCraftingTable11910Upgrade const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?previousSchema\@BlockCraftingTable11910Upgrade\@BlockCraftingTableVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockCraftingTable11910Upgrade\@BlockCraftingTableVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockCraftingTable11910Upgrade\@BlockCraftingTableVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockCraftingTable11910Upgrade();
    // NOLINTEND
};

}; // namespace BlockCraftingTableVersioning