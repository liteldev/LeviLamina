// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlushableStorageAreaEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLUSHABLESTORAGEAREAENV
public:
    class FlushableStorageAreaEnv& operator=(class FlushableStorageAreaEnv const &) = delete;
    FlushableStorageAreaEnv(class FlushableStorageAreaEnv const &) = delete;
    FlushableStorageAreaEnv() = delete;
#endif

public:
    /*0*/ virtual ~FlushableStorageAreaEnv();
    /*1*/ virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /*2*/ virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /*9*/ virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /*10*/ virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /*13*/ virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /*16*/ virtual short getMinHeight() const;
    /*17*/ virtual bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
    /*20*/ virtual void flushToPermanentStorage();
    MCAPI FlushableStorageAreaEnv(class leveldb::Env *, class std::shared_ptr<class Core::FileStorageArea>);

protected:

private:

};