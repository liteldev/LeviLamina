/**
 * @file  RedstoneTorchBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TorchBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RedstoneTorchBlock.
 *
 */
class RedstoneTorchBlock : public TorchBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONETORCHBLOCK
public:
    class RedstoneTorchBlock& operator=(class RedstoneTorchBlock const &) = delete;
    RedstoneTorchBlock(class RedstoneTorchBlock const &) = delete;
    RedstoneTorchBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -353062705
     */
    virtual ~RedstoneTorchBlock();
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -170704343
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -145769276
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  51
     * @symbol ?isSignalSource@RedstoneTorchBlock@@UEBA_NXZ
     * @hash   -661091248
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -99662418
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  64
     * @symbol ?shouldConnectToRedstone@RedstoneTorchBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -1214611202
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  73
     * @symbol ?onRedstoneUpdate@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   -643761440
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1841066467
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -121382793
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@RedstoneTorchBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   -763802555
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  147
     * @symbol ?canSpawnOn@RedstoneTorchBlock@@UEBA_NPEAVActor@@@Z
     * @hash   -1158248460
     */
    virtual bool canSpawnOn(class Actor *) const;
    /**
     * @vftbl  151
     * @symbol ?animateTick@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -649856214
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  156
     * @hash   1576709922
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  157
     * @symbol ?getSilkTouchItemInstance@RedstoneTorchBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   -1494071316
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol ?onPlace@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1692029903
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  188
     * @symbol ?getResourceItem@RedstoneTorchBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -103273789
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  192
     * @symbol ?getTickDelay@RedstoneTorchBlock@@UEAAHXZ
     * @hash   1463640743
     */
    virtual int getTickDelay();
    /**
     * @symbol ??0RedstoneTorchBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     * @hash   -223880610
     */
    MCAPI RedstoneTorchBlock(std::string const &, int, bool);

//private:
    /**
     * @symbol ?_installCircuit@RedstoneTorchBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1689318049
     */
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &) const;

private:

};