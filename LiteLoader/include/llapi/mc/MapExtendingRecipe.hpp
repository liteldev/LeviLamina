/**
 * @file  MapExtendingRecipe.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapExtendingRecipe.
 *
 */
class MapExtendingRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPEXTENDINGRECIPE
public:
    class MapExtendingRecipe& operator=(class MapExtendingRecipe const &) = delete;
    MapExtendingRecipe(class MapExtendingRecipe const &) = delete;
    MapExtendingRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   323491844
     */
    virtual ~MapExtendingRecipe();
    /**
     * @vftbl  1
     * @symbol ?assemble@MapExtendingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     * @hash   -1318418600
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol ?getCraftingSize@MapExtendingRecipe@@UEBAHXZ
     * @hash   -425636694
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol ?getIngredient@MapExtendingRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     * @hash   736002811
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol ?getResultItem@MapExtendingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     * @hash   756397255
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  6
     * @symbol ?matches@MapExtendingRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     * @hash   603716108
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol ?size@MapExtendingRecipe@@UEBAHXZ
     * @hash   -1182304750
     */
    virtual int size() const;
    /**
     * @symbol ??0MapExtendingRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBVUUID@mce@@@Z
     * @hash   1716025506
     */
    MCAPI MapExtendingRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @symbol ?CartographyTableID@MapExtendingRecipe@@2VUUID@mce@@B
     * @hash   1059015259
     */
    MCAPI static class mce::UUID const CartographyTableID;
    /**
     * @symbol ?CraftingTableID@MapExtendingRecipe@@2VUUID@mce@@B
     * @hash   -933742423
     */
    MCAPI static class mce::UUID const CraftingTableID;

//private:
    /**
     * @symbol ?_updateMapInstance@MapExtendingRecipe@@AEBAXAEAVItemInstance@@@Z
     * @hash   -714037992
     */
    MCAPI void _updateMapInstance(class ItemInstance &) const;

private:

};