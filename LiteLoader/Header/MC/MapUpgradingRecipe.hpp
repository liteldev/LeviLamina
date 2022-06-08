// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MapUpgradingRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPUPGRADINGRECIPE
public:
    class MapUpgradingRecipe& operator=(class MapUpgradingRecipe const &) = delete;
    MapUpgradingRecipe(class MapUpgradingRecipe const &) = delete;
    MapUpgradingRecipe() = delete;
#endif


public:
    /*0*/ virtual ~MapUpgradingRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /*2*/ virtual int getCraftingSize() const;
    /*3*/ virtual class RecipeIngredient const & getIngredient(int, int) const;
    /*4*/ virtual std::vector<class ItemInstance> const & getResultItem() const;
    /*6*/ virtual bool matches(class CraftingContainer &, class Level &) const;
    /*7*/ virtual int size() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPUPGRADINGRECIPE
public:
#endif
    MCAPI MapUpgradingRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);

//private:

private:
    MCAPI static class mce::UUID const CartographyTableID;
    MCAPI static class mce::UUID const CraftingTableID;


};