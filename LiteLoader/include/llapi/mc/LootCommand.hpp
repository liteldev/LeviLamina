/**
 * @file  LootCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Util.hpp"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LootCommand.
 *
 */
class LootCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTCOMMAND
public:
    class LootCommand& operator=(class LootCommand const &) = delete;
    LootCommand(class LootCommand const &) = delete;
    LootCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   803752785
     */
    virtual ~LootCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@LootCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -379363824
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?getToolItemStack@LootCommand@@QEBA?AVItemStack@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -1592806856
     */
    MCAPI class ItemStack getToolItemStack(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@LootCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   225229376
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_getItemsFromSource@LootCommand@@AEBA?AV?$optional@V?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@std@@AEBVCommandOrigin@@AEAVCommandOutput@@AEBVItemStack@@AEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   -1173322866
     */
    MCAPI class std::optional<std::vector<class ItemStack>> _getItemsFromSource(class CommandOrigin const &, class CommandOutput &, class ItemStack const &, class Level &, class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol ?_outputError@LootCommand@@AEBAXAEAVCommandOutput@@UReplacementResults@Util@@PEBVActor@@@Z
     * @hash   219726308
     */
    MCAPI void _outputError(class CommandOutput &, struct Util::ReplacementResults, class Actor const *) const;
    /**
     * @symbol ?_outputSuccess@LootCommand@@AEBAXAEAVCommandOutput@@H@Z
     * @hash   -1547309510
     */
    MCAPI void _outputSuccess(class CommandOutput &, int) const;
    /**
     * @symbol ?_placeItemsInTarget@LootCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     * @hash   1200535440
     */
    MCAPI void _placeItemsInTarget(class CommandOrigin const &, class CommandOutput &, std::vector<class ItemStack> &) const;

private:

};