/**
 * @file  MC/BiomeSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeSource.
 *
 */
class BiomeSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMESOURCE
public:
    class BiomeSource& operator=(class BiomeSource const &) = delete;
    BiomeSource(class BiomeSource const &) = delete;
    BiomeSource() = delete;
#endif

public:
    /**
     * @hash   -1247576674
     * @symbol ?getAreaIterator@BiomeSource@@SA?AVBlockPosIterator@@AEBVBoundingBox@@I@Z
     */
    MCAPI static class BlockPosIterator getAreaIterator(class BoundingBox const &, unsigned int);

};