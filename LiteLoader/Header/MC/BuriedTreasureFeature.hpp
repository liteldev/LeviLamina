// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BuriedTreasureFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURIEDTREASUREFEATURE
public:
    class BuriedTreasureFeature& operator=(class BuriedTreasureFeature const &) = delete;
    BuriedTreasureFeature(class BuriedTreasureFeature const &) = delete;
    BuriedTreasureFeature() = delete;
#endif

public:
    /*0*/ virtual ~BuriedTreasureFeature();
    /*1*/ virtual bool shouldAddHardcodedSpawnAreas() const;
    /*2*/ virtual bool shouldPostProcessMobs() const;
    /*3*/ virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /*4*/ virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);
    /*5*/ virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /*6*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    MCAPI BuriedTreasureFeature(unsigned int);

protected:

private:

};