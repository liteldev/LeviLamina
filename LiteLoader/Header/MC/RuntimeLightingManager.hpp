// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RuntimeLightingManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUNTIMELIGHTINGMANAGER
public:
    class RuntimeLightingManager& operator=(class RuntimeLightingManager const &) = delete;
    RuntimeLightingManager(class RuntimeLightingManager const &) = delete;
    RuntimeLightingManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RUNTIMELIGHTINGMANAGER
#endif
    MCAPI RuntimeLightingManager(class Dimension &);
    MCAPI void flushRunTimeLighting();
    MCAPI void updateBlockLight(class BlockPos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);
    MCAPI ~RuntimeLightingManager();

protected:

private:
    MCAPI void _checkForRelightingTask(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    MCAPI void _getListOfChunksWithPlayerDistance();
    MCAPI void _relightChunks(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    MCAPI void _removeProcessedSubchunks();

};