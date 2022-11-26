/**
 * @file  BannerDuplicateRecipe.hpp
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
 * @brief MC class BannerDuplicateRecipe.
 *
 */
class BannerDuplicateRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERDUPLICATERECIPE
public:
    class BannerDuplicateRecipe& operator=(class BannerDuplicateRecipe const &) = delete;
    BannerDuplicateRecipe(class BannerDuplicateRecipe const &) = delete;
    BannerDuplicateRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -47450629
     */
    virtual ~BannerDuplicateRecipe();
    /**
     * @vftbl  1
     * @symbol ?assemble@BannerDuplicateRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     * @hash   179002731
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol ?getCraftingSize@BannerDuplicateRecipe@@UEBAHXZ
     * @hash   -1148977465
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol ?getIngredient@BannerDuplicateRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     * @hash   -1764519992
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol ?getResultItem@BannerDuplicateRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     * @hash   322677908
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  6
     * @symbol ?matches@BannerDuplicateRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     * @hash   -640250487
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol ?size@BannerDuplicateRecipe@@UEBAHXZ
     * @hash   35304367
     */
    virtual int size() const;
    /**
     * @symbol ??0BannerDuplicateRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBVUUID@mce@@@Z
     * @hash   -2010780299
     */
    MCAPI BannerDuplicateRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @symbol ??0BannerDuplicateRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1391860518
     */
    MCAPI BannerDuplicateRecipe(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?ID@BannerDuplicateRecipe@@2VUUID@mce@@B
     * @hash   1500429775
     */
    MCAPI static class mce::UUID const ID;

};