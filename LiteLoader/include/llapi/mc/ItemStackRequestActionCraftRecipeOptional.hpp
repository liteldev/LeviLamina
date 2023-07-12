/**
 * @file  ItemStackRequestActionCraftRecipeOptional.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftRecipeOptional.
 *
 */
class ItemStackRequestActionCraftRecipeOptional {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTRECIPEOPTIONAL
public:
    class ItemStackRequestActionCraftRecipeOptional& operator=(class ItemStackRequestActionCraftRecipeOptional const &) = delete;
    ItemStackRequestActionCraftRecipeOptional(class ItemStackRequestActionCraftRecipeOptional const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?getFilteredStringIndex\@ItemStackRequestActionCraftRecipeOptional\@\@UEBAHXZ
     */
    virtual int getFilteredStringIndex() const;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionCraftRecipeOptional\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl 5
     * @symbol ?_read\@ItemStackRequestActionCraftRecipeOptional\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionCraftRecipeOptional\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftRecipeOptional();

};
