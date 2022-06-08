// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OceanMonumentPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTPIECE
public:
    class OceanMonumentPiece& operator=(class OceanMonumentPiece const &) = delete;
    OceanMonumentPiece(class OceanMonumentPiece const &) = delete;
    OceanMonumentPiece() = delete;
#endif

public:
    /*0*/ virtual ~OceanMonumentPiece();
    /*2*/ virtual class PoolElementStructurePiece * asPoolElement();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &) = 0;
    /*6*/ virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /*7*/ virtual int getWorldX(int, int);
    /*8*/ virtual int getWorldZ(int, int);
    /*10*/ virtual bool canBeReplaced(class BlockSource &, int, int, int, class BoundingBox const &);
    /*12*/ virtual void addHardcodedSpawnAreas(class LevelChunk &) const;

protected:
    MCAPI OceanMonumentPiece(int, int &, class std::shared_ptr<class RoomDefinition>, int, int, int);
    MCAPI bool chunkIntersects(class BoundingBox const &, int, int, int, int);
    MCAPI void generateDefaultFloor(class BlockSource &, class BoundingBox const &, int, int, bool);
    MCAPI void spawnElder(class BlockSource &, class BoundingBox const &, int, int, int);
    MCAPI static int mGridroomLeftWingConnectIndex;
    MCAPI static int mGridroomRightWingConnectIndex;
    MCAPI static int mGridroomSourceIndex;
    MCAPI static int mGridroomTopConnectIndex;
    MCAPI static int const mLeftWingIndex;
    MCAPI static int const mPenthouseIndex;
    MCAPI static int const mRightWingIndex;

private:

};