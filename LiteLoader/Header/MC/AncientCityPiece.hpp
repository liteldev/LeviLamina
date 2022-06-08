// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PoolElementStructurePiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AncientCityPiece : public PoolElementStructurePiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANCIENTCITYPIECE
public:
    class AncientCityPiece& operator=(class AncientCityPiece const &) = delete;
    AncientCityPiece(class AncientCityPiece const &) = delete;
    AncientCityPiece() = delete;
#endif

public:
    /*0*/ virtual ~AncientCityPiece();
    /*2*/ virtual class PoolElementStructurePiece * asPoolElement();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*10*/ virtual bool canBeReplaced(class BlockSource &, int, int, int, class BoundingBox const &);
    /*12*/ virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /*13*/ virtual int generateHeightAtPosition(class BlockPos const &, class Dimension &, class BlockVolume &, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>> &) const;
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual class Block const & getBeardStabilizeBlock(class Block const &) const;
    /*16*/ virtual enum AdjustmentEffect getTerrainAdjustmentEffect() const;
    /*17*/ virtual bool _needsPostProcessing(class BlockSource &);
    /*
    inline class Block const * getSupportBlock(class BlockSource & a0, class BlockPos const & a1, class Block const & a2) const{
        class Block const * (AncientCityPiece::*rv)(class BlockSource &, class BlockPos const &, class Block const &) const;
        *((void**)&rv) = dlsym("?getSupportBlock@AncientCityPiece@@UEBAPEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class BlockPos const &>(a1), std::forward<class Block const &>(a2));
    }
    */
    MCAPI static void addPieces(class BlockPos, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, class JigsawStructureRegistry &, enum VanillaBiomeTypes, class Dimension &);

protected:

private:

};