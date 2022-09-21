/**
 * @file  MC/BigDripleafBlock.hpp
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
 * @brief MC class BigDripleafBlock.
 *
 */
class BigDripleafBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIGDRIPLEAFBLOCK
public:
    class BigDripleafBlock& operator=(class BigDripleafBlock const &) = delete;
    BigDripleafBlock(class BigDripleafBlock const &) = delete;
    BigDripleafBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BigDripleafBlock();
    /**
     * @hash   238766208
     * @vftbl  5
     * @symbol ?getCollisionShape@BigDripleafBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   -803849910
     * @vftbl  10
     * @symbol ?getAABB@BigDripleafBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @hash   1894664725
     * @vftbl  15
     * @symbol ?onProjectileHit@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   377261472
     * @vftbl  35
     * @symbol ?isWaterBlocking@BigDripleafBlock@@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   24198046
     * @vftbl  62
     * @symbol ?canContainLiquid@BigDripleafBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   212153854
     * @vftbl  68
     * @symbol ?checkIsPathable@BigDripleafBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -878834069
     * @vftbl  72
     * @symbol ?onRedstoneUpdate@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   -1661828370
     * @vftbl  78
     * @symbol ?setupRedstoneComponent@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   114350316
     * @vftbl  85
     * @symbol ?onFertilized@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /**
     * @hash   918381919
     * @vftbl  87
     * @symbol ?canBeFertilized@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1635515115
     * @vftbl  92
     * @symbol ?mayPlaceOn@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2143850692
     * @vftbl  99
     * @symbol ?neighborChanged@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -794937560
     * @vftbl  102
     * @symbol ?getResourceItem@BigDripleafBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -2044140835
     * @vftbl  103
     * @symbol ?asItemInstance@BigDripleafBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -1935923463
     * @vftbl  107
     * @symbol ?getPlacementBlock@BigDripleafBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   1826612708
     * @vftbl  114
     * @symbol ?entityInside@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -1161375996
     * @vftbl  144
     * @symbol ?getVisualShape@BigDripleafBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   475859305
     * @vftbl  153
     * @symbol ?init@BigDripleafBlock@@UEAAAEAVBlockLegacy@@XZ
     */
    virtual class BlockLegacy & init();
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   -932420134
     * @vftbl  171
     * @symbol ?onPlace@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1304820288
     * @vftbl  174
     * @symbol ?tick@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -1477468218
     * @vftbl  180
     * @symbol ?canSurvive@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIGDRIPLEAFBLOCK
    /**
     * @hash   -1699935788
     * @symbol ?canBeSilkTouched@BigDripleafBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   613357061
     * @symbol ?waterSpreadCausesSpawn@BigDripleafBlock@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   -948785848
     * @symbol ??0BigDripleafBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI BigDripleafBlock(std::string const &, int);
    /**
     * @hash   -1532733167
     * @symbol ?MAX_DRIPLEAF_GROWTH_HEIGHT@BigDripleafBlock@@2HB
     */
    MCAPI static int const MAX_DRIPLEAF_GROWTH_HEIGHT;
    /**
     * @hash   -679559829
     * @symbol ?placeWithRandomHeight@BigDripleafBlock@@SAXAEAVBlockSource@@AEAVRandom@@VBlockPos@@H@Z
     */
    MCAPI static void placeWithRandomHeight(class BlockSource &, class Random &, class BlockPos, int);

//private:
    /**
     * @hash   -570259092
     * @symbol ?_resetTilt@BigDripleafBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _resetTilt(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1423332394
     * @symbol ?_setTiltAndScheduleTick@BigDripleafBlock@@AEBAXW4BigDripleafTilt@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _setTiltAndScheduleTick(enum BigDripleafTilt, class BlockSource &, class BlockPos const &) const;

private:

};