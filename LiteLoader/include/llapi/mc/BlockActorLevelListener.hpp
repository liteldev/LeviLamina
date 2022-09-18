/**
 * @file  BlockActorLevelListener.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockActorLevelListener.
 *
 */
class BlockActorLevelListener : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTORLEVELLISTENER
public:
    class BlockActorLevelListener& operator=(class BlockActorLevelListener const &) = delete;
    BlockActorLevelListener(class BlockActorLevelListener const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -231732706
     */
    virtual ~BlockActorLevelListener();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1405708028
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  6
     * @hash   -1403860986
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1401090423
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @hash   -384990045
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol ?addParticle@LevelListener@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
     * @hash   -2016134441
     */
    virtual class Particle * addParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /**
     * @vftbl  12
     * @hash   -383143003
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -382219482
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @hash   -381295961
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @hash   -380372440
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -379448919
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @hash   -378525398
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @hash   -377601877
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @hash   -376678356
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @hash   -356360894
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  21
     * @hash   -355437373
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl  22
     * @symbol ?onChunkLoaded@BlockActorLevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     * @hash   1204495377
     */
    virtual void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @vftbl  23
     * @hash   -353590331
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  24
     * @hash   -352666810
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl  25
     * @symbol ?onChunkUnloaded@BlockActorLevelListener@@UEAAXAEAVLevelChunk@@@Z
     * @hash   1724847672
     */
    virtual void onChunkUnloaded(class LevelChunk &);
    /**
     * @symbol ??0BlockActorLevelListener@@QEAA@XZ
     * @hash   -972242084
     */
    MCAPI BlockActorLevelListener();

};