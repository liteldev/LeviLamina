// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CartographyContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CARTOGRAPHYCONTAINERMANAGERMODEL
public:
    class CartographyContainerManagerModel& operator=(class CartographyContainerManagerModel const &) = delete;
    CartographyContainerManagerModel(class CartographyContainerManagerModel const &) = delete;
    CartographyContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~CartographyContainerManagerModel();
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const &, bool);
    /*8*/ virtual class ItemStack const & getSlot(int) const;
    /*9*/ virtual void setData(int, int);
    /*10*/ virtual void broadcastChanges();
    /*15*/ virtual bool isValid(float);
    /*16*/ virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CARTOGRAPHYCONTAINERMANAGERMODEL
#endif
    MCAPI CartographyContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);

protected:

private:

};