// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ActorCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorServerCommandOrigin : public ActorCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSERVERCOMMANDORIGIN
public:
    class ActorServerCommandOrigin& operator=(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~ActorServerCommandOrigin();
    /*9*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*10*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*18*/ virtual bool isSelectorExpansionAllowed() const;
    /*23*/ virtual enum CommandOriginType getOriginType() const;
    /*29*/ virtual class CompoundTag serialize() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORSERVERCOMMANDORIGIN
#endif
    MCAPI ActorServerCommandOrigin(class Actor &);
    MCAPI struct ActorUniqueID getTargetOther() const;
    MCAPI void setTargetOther(struct ActorUniqueID);
    MCAPI static std::unique_ptr<class ActorServerCommandOrigin> load(class CompoundTag const &, class Level &);

protected:

private:

};