// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HudContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDCONTAINERMANAGERMODEL
public:
    class HudContainerManagerModel& operator=(class HudContainerManagerModel const &) = delete;
    HudContainerManagerModel(class HudContainerManagerModel const &) = delete;
    HudContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~HudContainerManagerModel();
    /*1*/ virtual enum ContainerID getContainerId() const;
    /*2*/ virtual void setContainerId(enum ContainerID);
    /*3*/ virtual enum ContainerType getContainerType() const;
    /*4*/ virtual void setContainerType(enum ContainerType);
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const &, bool);
    /*8*/ virtual class ItemStack const & getSlot(int) const;
    /*9*/ virtual void setData(int, int);
    /*10*/ virtual void broadcastChanges();
    /*16*/ virtual class ContainerScreenContext _postInit();
    MCAPI HudContainerManagerModel(enum ContainerID, class Player &);

protected:

private:

};