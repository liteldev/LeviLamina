// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DeprecatedSlabBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEPRECATEDSLABBLOCKITEM
public:
    class DeprecatedSlabBlockItem& operator=(class DeprecatedSlabBlockItem const &) = delete;
    DeprecatedSlabBlockItem(class DeprecatedSlabBlockItem const &) = delete;
    DeprecatedSlabBlockItem() = delete;
#endif

public:
    /*0*/ virtual ~DeprecatedSlabBlockItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*126*/ virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /*127*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEPRECATEDSLABBLOCKITEM
#endif

protected:

private:

};