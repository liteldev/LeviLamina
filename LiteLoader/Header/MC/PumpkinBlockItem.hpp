// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PumpkinBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUMPKINBLOCKITEM
public:
    class PumpkinBlockItem& operator=(class PumpkinBlockItem const &) = delete;
    PumpkinBlockItem(class PumpkinBlockItem const &) = delete;
    PumpkinBlockItem() = delete;
#endif

public:
    /*0*/ virtual ~PumpkinBlockItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*58*/ virtual int getEnchantSlot() const;
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PUMPKINBLOCKITEM
#endif
    MCAPI PumpkinBlockItem(std::string const &, int);

protected:

private:

};