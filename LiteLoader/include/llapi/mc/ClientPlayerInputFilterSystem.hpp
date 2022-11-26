/**
 * @file  ClientPlayerInputFilterSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientPlayerInputFilterSystem.
 *
 */
class ClientPlayerInputFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTPLAYERINPUTFILTERSYSTEM
public:
    class ClientPlayerInputFilterSystem& operator=(class ClientPlayerInputFilterSystem const &) = delete;
    ClientPlayerInputFilterSystem(class ClientPlayerInputFilterSystem const &) = delete;
    ClientPlayerInputFilterSystem() = delete;
#endif

public:
    /**
     * @symbol ?create@ClientPlayerInputFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1467141092
     */
    MCAPI static struct TickingSystemWithInfo create();

//private:
    /**
     * @symbol ?tickSystem@ClientPlayerInputFilterSystem@@CAXAEAVStrictEntityContext@@AEBVLoadingStateComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UPlayerInputRequestComponent@@@@@Z
     * @hash   -1125829306
     */
    MCAPI static void tickSystem(class StrictEntityContext &, class LoadingStateComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PlayerInputRequestComponent>);

private:

};