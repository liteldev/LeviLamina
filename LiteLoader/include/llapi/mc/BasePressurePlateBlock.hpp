/**
 * @file  BasePressurePlateBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BasePressurePlateBlock.
 *
 */
class BasePressurePlateBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEPRESSUREPLATEBLOCK
public:
    class BasePressurePlateBlock& operator=(class BasePressurePlateBlock const &) = delete;
    BasePressurePlateBlock(class BasePressurePlateBlock const &) = delete;
    BasePressurePlateBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -73549257
     */
    virtual ~BasePressurePlateBlock();
    /**
     * @vftbl  10
     * @symbol ?getAABB@BasePressurePlateBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1636153571
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
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
     * @symbol ?isSignalSource@BasePressurePlateBlock@@UEBA_NXZ
     * @hash   382692840
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -92205058
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  64
     * @symbol ?shouldConnectToRedstone@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   1883964006
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  69
     * @symbol ?checkIsPathable@BasePressurePlateBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   -572809647
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   993071803
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  92
     * @symbol ?mayPlace@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   604158259
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -190868545
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  108
     * @symbol ?isAttachedTo@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     * @hash   1523980561
     */
    virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /**
     * @vftbl  112
     * @symbol ?shouldTriggerEntityInside@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     * @hash   977997680
     */
    virtual bool shouldTriggerEntityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @vftbl  113
     * @symbol ?entityInside@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     * @hash   -2080762985
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
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
     * @vftbl  143
     * @symbol ?getVisualShape@BasePressurePlateBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   1948659895
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  146
     * @symbol ?getVariant@BasePressurePlateBlock@@UEBAHAEBVBlock@@@Z
     * @hash   287165053
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  147
     * @symbol ?canSpawnOn@BasePressurePlateBlock@@UEBA_NPEAVActor@@@Z
     * @hash   294996316
     */
    virtual bool canSpawnOn(class Actor *) const;
    /**
     * @vftbl  156
     * @hash   1569252562
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  157
     * @symbol ?getSilkTouchItemInstance@BasePressurePlateBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   -1351043596
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
     * @symbol ?onPlace@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -810918617
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   328045491
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  179
     * @symbol ?canSurvive@BasePressurePlateBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1446805892
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  192
     * @symbol ?getTickDelay@BasePressurePlateBlock@@UEBAHXZ
     * @hash   738455086
     */
    virtual int getTickDelay() const;
    /**
     * @vftbl  193
     * @symbol ?getSignalStrength@WeightedPressurePlateBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1328376217
     */
    virtual int getSignalStrength(class BlockSource &, class BlockPos const &) const = 0;
    /**
     * @vftbl  194
     * @symbol ?getSignalForData@WeightedPressurePlateBlock@@MEBAHH@Z
     * @hash   1243334188
     */
    virtual int getSignalForData(int) const = 0;
    /**
     * @vftbl  195
     * @symbol ?getRedstoneSignal@WeightedPressurePlateBlock@@MEBAHH@Z
     * @hash   -143780401
     */
    virtual int getRedstoneSignal(int) const = 0;
    /**
     * @vftbl  196
     * @symbol ?getSensitiveAABB@BasePressurePlateBlock@@MEBA?BVAABB@@AEBVBlockPos@@@Z
     * @hash   -635561488
     */
    virtual class AABB const getSensitiveAABB(class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEPRESSUREPLATEBLOCK
    /**
     * @symbol ?isSignalSource@BasePressurePlateBlock@@UEBA_NXZ
     * @hash   382692840
     */
    MCVAPI bool isSignalSource() const;
#endif

//protected:
    /**
     * @symbol ??0BasePressurePlateBlock@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     * @hash   -998283668
     */
    MCAPI BasePressurePlateBlock(std::string const &, int, class Material const &);
    /**
     * @symbol ?checkPressed@BasePressurePlateBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@HH@Z
     * @hash   453590628
     */
    MCAPI void checkPressed(class BlockSource &, class BlockPos const &, class Actor *, int, int) const;

//private:
    /**
     * @symbol ?isEntityInsideTriggerable@BasePressurePlateBlock@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     * @hash   -1903121725
     */
    MCAPI bool isEntityInsideTriggerable(class BlockSource const &, class BlockPos const &, class Actor &) const;

protected:

private:

};