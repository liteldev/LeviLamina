// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerUIContainerModelBase : public ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINERMODELBASE
public:
    class PlayerUIContainerModelBase& operator=(class PlayerUIContainerModelBase const &) = delete;
    PlayerUIContainerModelBase(class PlayerUIContainerModelBase const &) = delete;
    PlayerUIContainerModelBase() = delete;
#endif

public:
    /*0*/ virtual void containerContentChanged(int);
    /*1*/ virtual ~PlayerUIContainerModelBase();
    /*2*/ virtual void postInit();
    /*3*/ virtual void releaseResources();
    /*5*/ virtual int getFilteredContainerSize() const;
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual class ContainerWeakRef getContainerWeakRef() const;
    /*9*/ virtual std::vector<class ItemStack> const & getItems() const;
    /*11*/ virtual class ItemStackBase const & getItemStackBase(int) const;
    /*12*/ virtual void __unk_vfn_12();
    /*14*/ virtual bool isValid();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual enum ContainerExpandStatus getItemExpandStatus(int) const;
    /*18*/ virtual std::string const & getItemGroupName(int) const;
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual class Container * _getContainer() const;
    /*21*/ virtual int _getContainerOffset() const;
    /*22*/ virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
    MCAPI PlayerUIContainerModelBase(enum ContainerEnumName, class Player &, int, enum ContainerCategory);

protected:
    MCAPI void _refreshContainer(bool);

private:

};