/**
 * @file  MinecraftGameTestHelper.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptModuleMinecraft.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftGameTestHelper.
 *
 */
class MinecraftGameTestHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETESTHELPER
public:
    class MinecraftGameTestHelper& operator=(class MinecraftGameTestHelper const &) = delete;
    MinecraftGameTestHelper(class MinecraftGameTestHelper const &) = delete;
    MinecraftGameTestHelper() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -924686771
     */
    virtual ~MinecraftGameTestHelper();
    /**
     * @vftbl  1
     * @symbol ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@HHH_N@Z
     * @hash   1718403908
     */
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const &, int, int, int, bool);
    /**
     * @vftbl  2
     * @symbol ?succeedWhenEntityPresent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
     * @hash   1136449561
     */
    virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, bool);
    /**
     * @vftbl  3
     * @symbol ?succeedWhenEntityData@MinecraftGameTestHelper@@UEAAXAEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@std@@@Z
     * @hash   -692329484
     */
    virtual void succeedWhenEntityData(class BlockPos const &, struct ActorDefinitionIdentifier const &, class std::function<bool (class Actor &)>);
    /**
     * @vftbl  4
     * @symbol ?succeedWhenEntityHasComponent@MinecraftGameTestHelper@@UEAAXAEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@_N@Z
     * @hash   1756633709
     */
    virtual void succeedWhenEntityHasComponent(struct ActorDefinitionIdentifier const &, std::string const &, class BlockPos const &, bool);
    /**
     * @vftbl  5
     * @symbol ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@HHH_N@Z
     * @hash   -1895125337
     */
    virtual void succeedWhenBlockPresent(class Block const &, int, int, int, bool);
    /**
     * @vftbl  6
     * @symbol ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlock@@AEBVBlockPos@@_N@Z
     * @hash   -1541196884
     */
    virtual void succeedWhenBlockPresent(class Block const &, class BlockPos const &, bool);
    /**
     * @vftbl  7
     * @symbol ?succeedWhenBlockPresent@MinecraftGameTestHelper@@UEAAXAEBVBlockLegacy@@AEBVBlockPos@@_N@Z
     * @hash   -463244525
     */
    virtual void succeedWhenBlockPresent(class BlockLegacy const &, class BlockPos const &, bool);
    /**
     * @vftbl  8
     * @symbol ?setNight@MinecraftGameTestHelper@@UEAAXXZ
     * @hash   1260175406
     */
    virtual void setNight();
    /**
     * @vftbl  9
     * @symbol ?setDayTime@MinecraftGameTestHelper@@UEAAXH@Z
     * @hash   640043552
     */
    virtual void setDayTime(int);
    /**
     * @vftbl  10
     * @symbol ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHHAEBVBlock@@H@Z
     * @hash   1655106710
     */
    virtual class std::optional<struct gametest::GameTestError> setBlock(int, int, int, class Block const &, int);
    /**
     * @vftbl  11
     * @symbol ?setBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBVBlock@@H@Z
     * @hash   -1857555887
     */
    virtual class std::optional<struct gametest::GameTestError> setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @vftbl  12
     * @symbol ?destroyBlock@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
     * @hash   1200610902
     */
    virtual class std::optional<struct gametest::GameTestError> destroyBlock(class BlockPos const &, bool);
    /**
     * @vftbl  13
     * @symbol ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
     * @hash   810935593
     */
    virtual class std::optional<struct gametest::GameTestError> pressButton(int, int, int);
    /**
     * @vftbl  14
     * @symbol ?pressButton@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
     * @hash   -469275004
     */
    virtual class std::optional<struct gametest::GameTestError> pressButton(class BlockPos const &);
    /**
     * @vftbl  15
     * @symbol ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@HHH@Z
     * @hash   563013257
     */
    virtual class std::optional<struct gametest::GameTestError> pullLever(int, int, int);
    /**
     * @vftbl  16
     * @symbol ?pullLever@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
     * @hash   1404675060
     */
    virtual class std::optional<struct gametest::GameTestError> pullLever(class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol ?killAllEntities@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@XZ
     * @hash   -479901723
     */
    virtual class std::optional<struct gametest::GameTestError> killAllEntities();
    /**
     * @vftbl  18
     * @symbol ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@HHH@Z
     * @hash   282546534
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, int, int, int);
    /**
     * @vftbl  19
     * @symbol ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
     * @hash   1875738209
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /**
     * @vftbl  20
     * @symbol ?spawn@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
     * @hash   1892930089
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, class Vec3 const &);
    /**
     * @vftbl  21
     * @symbol ?spawnItem@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBVItemStack@@AEBVVec3@@@Z
     * @hash   -1050701821
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnItem(class ItemStack const &, class Vec3 const &);
    /**
     * @vftbl  22
     * @symbol ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
     * @hash   1233847610
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnWithoutBehaviors(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /**
     * @vftbl  23
     * @symbol ?spawnWithoutBehaviors@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVActor@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@@Z
     * @hash   1380968706
     */
    virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnWithoutBehaviors(struct ActorDefinitionIdentifier const &, class Vec3 const &);
    /**
     * @vftbl  24
     * @symbol ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@M@Z
     * @hash   830274751
     */
    virtual class std::optional<struct gametest::GameTestError> walkTo(class Mob &, class BlockPos const &, float);
    /**
     * @vftbl  25
     * @symbol ?walkTo@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVVec3@@M@Z
     * @hash   924721863
     */
    virtual class std::optional<struct gametest::GameTestError> walkTo(class Mob &, class Vec3 const &, float);
    /**
     * @vftbl  26
     * @symbol ?setTntFuse@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVActor@@H@Z
     * @hash   1521737458
     */
    virtual class std::optional<struct gametest::GameTestError> setTntFuse(class Actor &, int);
    /**
     * @vftbl  27
     * @symbol ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@_N@Z
     * @hash   315428260
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, bool);
    /**
     * @vftbl  28
     * @symbol ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@HHH_N@Z
     * @hash   -191774811
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, int, int, int, bool);
    /**
     * @vftbl  29
     * @symbol ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@_N@Z
     * @hash   -1187836806
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, bool);
    /**
     * @vftbl  30
     * @symbol ?assertEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@M_N@Z
     * @hash   1578793756
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, float, bool);
    /**
     * @vftbl  31
     * @symbol ?assertEntityInstancePresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@PEBVActor@@AEBVBlockPos@@_N@Z
     * @hash   1275759300
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityInstancePresent(class Actor const *, class BlockPos const &, bool);
    /**
     * @vftbl  32
     * @symbol ?assertEntityTouching@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVVec3@@_N@Z
     * @hash   -79392216
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityTouching(struct ActorDefinitionIdentifier const &, class Vec3 const &, bool);
    /**
     * @vftbl  33
     * @symbol ?assertEntityState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBUActorDefinitionIdentifier@@V?$function@$$A6A_NAEAVActor@@@Z@3@@Z
     * @hash   1696105684
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityState(class BlockPos const &, struct ActorDefinitionIdentifier const &, class std::function<bool (class Actor &)>);
    /**
     * @vftbl  34
     * @symbol ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@HHH_N@Z
     * @hash   36479883
     */
    virtual class std::optional<struct gametest::GameTestError> assertBlockPresent(class BlockLegacy const &, int, int, int, bool);
    /**
     * @vftbl  35
     * @symbol ?assertBlockPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockLegacy@@AEBVBlockPos@@_N@Z
     * @hash   -1500547536
     */
    virtual class std::optional<struct gametest::GameTestError> assertBlockPresent(class BlockLegacy const &, class BlockPos const &, bool);
    /**
     * @vftbl  36
     * @symbol ?assertBlockState@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@V?$function@$$A6A_NAEBVBlock@@@Z@3@@Z
     * @hash   798408740
     */
    virtual class std::optional<struct gametest::GameTestError> assertBlockState(class BlockPos const &, class std::function<bool (class Block const &)>);
    /**
     * @vftbl  37
     * @symbol ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@HHHM_N@Z
     * @hash   -340473909
     */
    virtual class std::optional<struct gametest::GameTestError> assertItemEntityPresent(class Item const &, int, int, int, float, bool);
    /**
     * @vftbl  38
     * @symbol ?assertItemEntityPresent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@M_N@Z
     * @hash   -364339642
     */
    virtual class std::optional<struct gametest::GameTestError> assertItemEntityPresent(class Item const &, class BlockPos const &, float, bool);
    /**
     * @vftbl  39
     * @symbol ?assertItemEntityCountIs@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItem@@AEBVBlockPos@@MH@Z
     * @hash   1581313191
     */
    virtual class std::optional<struct gametest::GameTestError> assertItemEntityCountIs(class Item const &, class BlockPos const &, float, int);
    /**
     * @vftbl  40
     * @symbol ?assertContainerEmpty@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@@Z
     * @hash   1580125703
     */
    virtual class std::optional<struct gametest::GameTestError> assertContainerEmpty(class BlockPos const &);
    /**
     * @vftbl  41
     * @symbol ?assertContainerContains@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVItemStack@@AEBVBlockPos@@@Z
     * @hash   1862394577
     */
    virtual class std::optional<struct gametest::GameTestError> assertContainerContains(class ItemStack const &, class BlockPos const &);
    /**
     * @vftbl  42
     * @symbol ?assertEntityHasComponent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@_N@Z
     * @hash   -274240872
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityHasComponent(struct ActorDefinitionIdentifier const &, std::string const &, class BlockPos const &, bool);
    /**
     * @vftbl  43
     * @symbol ?assertEntityHasArmor@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@W4ArmorSlot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@HAEBVBlockPos@@_N@Z
     * @hash   172831854
     */
    virtual class std::optional<struct gametest::GameTestError> assertEntityHasArmor(struct ActorDefinitionIdentifier const &, enum class ArmorSlot, std::string const &, int, class BlockPos const &, bool);
    /**
     * @vftbl  44
     * @symbol ?print@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   -260573130
     */
    virtual class std::optional<struct gametest::GameTestError> print(std::string const &);
    /**
     * @vftbl  45
     * @symbol ?assertRedstonePower@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
     * @hash   2066146689
     */
    virtual class std::optional<struct gametest::GameTestError> assertRedstonePower(class BlockPos const &, int);
    /**
     * @vftbl  46
     * @symbol ?assertIsWaterlogged@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@_N@Z
     * @hash   1180211324
     */
    virtual class std::optional<struct gametest::GameTestError> assertIsWaterlogged(class BlockPos const &, bool);
    /**
     * @vftbl  47
     * @symbol ?pulseRedstone@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
     * @hash   1805290691
     */
    virtual class std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const &, int);
    /**
     * @vftbl  48
     * @symbol ?getFenceConnectivity@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@VScriptGameTestConnectivity@ScriptModuleGameTest@@@std@@AEBVBlockPos@@@Z
     * @hash   1201050209
     */
    virtual class std::variant<struct gametest::GameTestError, class ScriptModuleGameTest::ScriptGameTestConnectivity> getFenceConnectivity(class BlockPos const &);
    /**
     * @vftbl  49
     * @symbol ?worldPosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VBlockPos@@@std@@AEBVBlockPos@@@Z
     * @hash   -1718044647
     */
    virtual class std::variant<struct gametest::GameTestError, class BlockPos> worldPosition(class BlockPos const &) const;
    /**
     * @vftbl  50
     * @symbol ?worldPosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
     * @hash   414571033
     */
    virtual class std::variant<struct gametest::GameTestError, class Vec3> worldPosition(class Vec3 const &) const;
    /**
     * @vftbl  51
     * @symbol ?relativePosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VBlockPos@@@std@@AEBVBlockPos@@@Z
     * @hash   -104590737
     */
    virtual class std::variant<struct gametest::GameTestError, class BlockPos> relativePosition(class BlockPos const &) const;
    /**
     * @vftbl  52
     * @symbol ?relativePosition@MinecraftGameTestHelper@@UEBA?AV?$variant@UGameTestError@gametest@@VVec3@@@std@@AEBVVec3@@@Z
     * @hash   1080439919
     */
    virtual class std::variant<struct gametest::GameTestError, class Vec3> relativePosition(class Vec3 const &) const;
    /**
     * @vftbl  53
     * @symbol ?setFluidContainer@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@H@Z
     * @hash   1195182319
     */
    virtual class std::optional<struct gametest::GameTestError> setFluidContainer(class BlockPos const &, int);
    /**
     * @vftbl  54
     * @symbol ?triggerInternalBlockEvent@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$vector@MV?$allocator@M@std@@@3@@Z
     * @hash   1843561538
     */
    virtual class std::optional<struct gametest::GameTestError> triggerInternalBlockEvent(class BlockPos const &, std::string const &, std::vector<float> const &);
    /**
     * @vftbl  55
     * @symbol ?assertCanReachLocation@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAVMob@@AEBVBlockPos@@_N@Z
     * @hash   1921773087
     */
    virtual class std::optional<struct gametest::GameTestError> assertCanReachLocation(class Mob &, class BlockPos const &, bool);
    /**
     * @vftbl  56
     * @symbol ?spreadFromFaceTowardDirection@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBVBlockPos@@W4ScriptFacing@ScriptModuleMinecraft@@1@Z
     * @hash   -1502977501
     */
    virtual class std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(class BlockPos const &, enum class ScriptModuleMinecraft::ScriptFacing, enum class ScriptModuleMinecraft::ScriptFacing);
    /**
     * @vftbl  57
     * @symbol ?spawnSimulatedPlayer@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVSimulatedPlayer@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@W4GameType@@@Z
     * @hash   1732247561
     */
    virtual class std::variant<struct gametest::GameTestError, class SimulatedPlayer *> spawnSimulatedPlayer(std::string const &, class BlockPos const &, enum class GameType);
    /**
     * @vftbl  58
     * @symbol ?removeSimulatedPlayer@MinecraftGameTestHelper@@UEAAXAEAVSimulatedPlayer@@@Z
     * @hash   614558326
     */
    virtual void removeSimulatedPlayer(class SimulatedPlayer &);
    /**
     * @vftbl  59
     * @symbol ?getDimension@MinecraftGameTestHelper@@UEAA?AV?$variant@UGameTestError@gametest@@PEAVDimension@@@std@@XZ
     * @hash   1817525864
     */
    virtual class std::variant<struct gametest::GameTestError, class Dimension *> getDimension();
    /**
     * @vftbl  60
     * @symbol ?getBlockSource@MinecraftGameTestHelper@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@AEAPEAVBlockSource@@@Z
     * @hash   874001539
     */
    virtual class std::optional<struct gametest::GameTestError> getBlockSource(class BlockSource *&);
    /**
     * @symbol ??0MinecraftGameTestHelper@@QEAA@AEAVMinecraftGameTestInstance@@@Z
     * @hash   1386717010
     */
    MCAPI MinecraftGameTestHelper(class MinecraftGameTestInstance &);

//private:
    /**
     * @symbol ?_assertEntityPresent@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@AEBUActorDefinitionIdentifier@@AEBVAABB@@AEBVBlockPos@@_N@Z
     * @hash   1857474120
     */
    MCAPI class std::optional<struct gametest::GameTestError> _assertEntityPresent(struct ActorDefinitionIdentifier const &, class AABB const &, class BlockPos const &, bool) const;
    /**
     * @symbol ?_getContainer@MinecraftGameTestHelper@@AEAAPEBVContainer@@AEBVBlockPos@@@Z
     * @hash   -1919959615
     */
    MCAPI class Container const * _getContainer(class BlockPos const &);
    /**
     * @symbol ?_getItemEntityCount@MinecraftGameTestHelper@@AEAAHAEBVItem@@AEBVAABB@@@Z
     * @hash   -90402681
     */
    MCAPI int _getItemEntityCount(class Item const &, class AABB const &);
    /**
     * @symbol ?_getServerNetworkHandler@MinecraftGameTestHelper@@AEBA?AV?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@XZ
     * @hash   1576245338
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>> _getServerNetworkHandler() const;
    /**
     * @symbol ?_getStructureBlockMissingError@MinecraftGameTestHelper@@AEBA?AV?$optional@UGameTestError@gametest@@@std@@XZ
     * @hash   -320837736
     */
    MCAPI class std::optional<struct gametest::GameTestError> _getStructureBlockMissingError() const;
    /**
     * @symbol ?_isEntityPresent@MinecraftGameTestHelper@@AEBA_NAEBUActorDefinitionIdentifier@@AEBVAABB@@@Z
     * @hash   -212008733
     */
    MCAPI bool _isEntityPresent(struct ActorDefinitionIdentifier const &, class AABB const &) const;

private:

};