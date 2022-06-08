// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockActorFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTORFACTORY
public:
    class BlockActorFactory& operator=(class BlockActorFactory const &) = delete;
    BlockActorFactory(class BlockActorFactory const &) = delete;
    BlockActorFactory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKACTORFACTORY
#endif
    MCAPI static class std::shared_ptr<class BlockActor> createBlockEntity(enum BlockActorType, class BlockPos const &, class BlockLegacy const &);
    MCAPI static void flushCustomBlockEntityCreationCallbacks();

protected:

private:
    MCAPI static std::vector<struct std::pair<enum BlockActorType, class std::function<class std::shared_ptr<class BlockActor> (class BlockPos const &)>>> mCustomBlockEntityCreation;

};