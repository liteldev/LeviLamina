/**
 * @file  NpcComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcComponent.
 *
 */
class NpcComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCCOMPONENT
public:
    class NpcComponent& operator=(class NpcComponent const &) = delete;
    NpcComponent(class NpcComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0NpcComponent@@QEAA@XZ
     * @hash   -518056152
     */
    MCAPI NpcComponent();
    /**
     * @symbol ??0NpcComponent@@QEAA@$$QEAV0@@Z
     * @hash   -614641151
     */
    MCAPI NpcComponent(class NpcComponent &&);
    /**
     * @symbol ?addAdditionalSaveData@NpcComponent@@QEBAXAEBVActor@@AEAVCompoundTag@@@Z
     * @hash   256339113
     */
    MCAPI void addAdditionalSaveData(class Actor const &, class CompoundTag &) const;
    /**
     * @symbol ?clearSceneStateForAllPlayers@NpcComponent@@QEAAXXZ
     * @hash   1222701653
     */
    MCAPI void clearSceneStateForAllPlayers();
    /**
     * @symbol ?executeClosingCommands@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1659938608
     */
    MCAPI void executeClosingCommands(class Actor &, class Player &, std::string const &);
    /**
     * @symbol ?executeCommandAction@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   665543223
     */
    MCAPI void executeCommandAction(class Actor &, class Player &, int, std::string const &);
    /**
     * @symbol ?executeOpeningCommands@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2070306934
     */
    MCAPI void executeOpeningCommands(class Actor &, class Player &, std::string const &);
    /**
     * @symbol ?getActionsContainer@NpcComponent@@QEAAAEAUNpcActionsContainer@@XZ
     * @hash   435828030
     */
    MCAPI struct NpcActionsContainer & getActionsContainer();
    /**
     * @symbol ?getButtonCounts@NpcComponent@@QEBA?AV?$vector@HV?$allocator@H@std@@@std@@XZ
     * @hash   1367228016
     */
    MCAPI std::vector<int> getButtonCounts() const;
    /**
     * @symbol ?getCommandPermissionLevel@NpcComponent@@QEBA?AW4CommandPermissionLevel@@XZ
     * @hash   -1412339572
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @symbol ?getInteraction@NpcComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     * @hash   -1615262075
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol ?getInteractiveText@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
     * @hash   -933791025
     */
    MCAPI std::string const & getInteractiveText(class Actor &) const;
    /**
     * @symbol ?getName@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
     * @hash   -648495971
     */
    MCAPI std::string const & getName(class Actor const &) const;
    /**
     * @symbol ?getNameRawText@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
     * @hash   1344839531
     */
    MCAPI std::string const & getNameRawText(class Actor const &) const;
    /**
     * @symbol ?getSkinIndex@NpcComponent@@QEBAHXZ
     * @hash   -1486982808
     */
    MCAPI int getSkinIndex() const;
    /**
     * @symbol ?getUpdatedActions@NpcComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@@2@@3@AEA_N2@Z
     * @hash   -2016528438
     */
    MCAPI void getUpdatedActions(std::string const &, std::vector<std::unique_ptr<class NpcAction>> &, bool &, bool &);
    /**
     * @symbol ?getUrlCount@NpcComponent@@QEBAHXZ
     * @hash   -1818357450
     */
    MCAPI int getUrlCount() const;
    /**
     * @symbol ?handleNpcRequest@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@AEBVNpcRequestPacket@@@Z
     * @hash   -1072178358
     */
    MCAPI void handleNpcRequest(class Actor &, class Player &, class NpcRequestPacket const &);
    /**
     * @symbol ?initClientOnlyData@NpcComponent@@QEAAXAEAVActor@@@Z
     * @hash   -151433798
     */
    MCAPI void initClientOnlyData(class Actor &);
    /**
     * @symbol ?initFromDefinition@NpcComponent@@QEAAXAEAVActor@@@Z
     * @hash   1142299866
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?loadActions@NpcComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1567749156
     */
    MCAPI void loadActions(class Actor &);
    /**
     * @symbol ?loadInteractiveRawText@NpcComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1229408758
     */
    MCAPI void loadInteractiveRawText(class Actor &);
    /**
     * @symbol ?loadNPCData@NpcComponent@@QEAAXAEAVActor@@@Z
     * @hash   -941269284
     */
    MCAPI void loadNPCData(class Actor &);
    /**
     * @symbol ?loadNameRawText@NpcComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1683521012
     */
    MCAPI void loadNameRawText(class Actor &);
    /**
     * @symbol ??4NpcComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   634181748
     */
    MCAPI class NpcComponent & operator=(class NpcComponent &&);
    /**
     * @symbol ?readAdditionalSaveData@NpcComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -355836446
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setActions@NpcComponent@@QEAAXAEAVActor@@$$QEAV?$vector@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@@2@@std@@@Z
     * @hash   -247178878
     */
    MCAPI void setActions(class Actor &, std::vector<std::unique_ptr<class NpcAction>> &&);
    /**
     * @symbol ?setDialogueScene@NpcComponent@@QEAA_NAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2080349292
     */
    MCAPI bool setDialogueScene(class Actor &, std::string const &);
    /**
     * @symbol ?setInteractiveText@NpcComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   1936038244
     */
    MCAPI void setInteractiveText(class Actor &, std::string const &, bool);
    /**
     * @symbol ?setName@NpcComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -154408718
     */
    MCAPI void setName(class Actor &, std::string const &, bool);
    /**
     * @symbol ?setSceneStateForPlayer@NpcComponent@@QEAAXAEAVActor@@AEBUActorUniqueID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1331060182
     */
    MCAPI void setSceneStateForPlayer(class Actor &, struct ActorUniqueID const &, std::string const &);
    /**
     * @symbol ?setSkinIndex@NpcComponent@@QEAAXAEAVActor@@H_N@Z
     * @hash   1880571772
     */
    MCAPI void setSkinIndex(class Actor &, int, bool);
    /**
     * @symbol ?MAX_NPC_NAME_LENGTH@NpcComponent@@2_KB
     * @hash   -797723520
     */
    MCAPI static unsigned __int64 const MAX_NPC_NAME_LENGTH;

//private:
    /**
     * @symbol ?_defineEntityDataString@NpcComponent@@AEAAXAEAVActor@@W4ActorDataIDs@@@Z
     * @hash   866431620
     */
    MCAPI void _defineEntityDataString(class Actor &, enum class ActorDataIDs);
    /**
     * @symbol ?_deserializeData@NpcComponent@@AEAAXXZ
     * @hash   -1441035510
     */
    MCAPI void _deserializeData();
    /**
     * @symbol ?_loadActions@NpcComponent@@AEBAXAEAV?$vector@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   1627876229
     */
    MCAPI void _loadActions(std::vector<std::unique_ptr<class NpcAction>> &, std::string const &) const;
    /**
     * @symbol ?_loadData@NpcComponent@@AEAAXAEAVActor@@@Z
     * @hash   1354732456
     */
    MCAPI void _loadData(class Actor &);
    /**
     * @symbol ?_serializeActions@NpcComponent@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2073507991
     */
    MCAPI std::string _serializeActions() const;

private:
    /**
     * @symbol ?ACTIONS_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1717688385
     */
    MCAPI static std::string const ACTIONS_TAG;
    /**
     * @symbol ?INTERACTIVE_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1273452516
     */
    MCAPI static std::string const INTERACTIVE_TAG;
    /**
     * @symbol ?NAME_RAW_TEXT_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1970123386
     */
    MCAPI static std::string const NAME_RAW_TEXT_TAG;
    /**
     * @symbol ?PLAYER_ID_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1843193125
     */
    MCAPI static std::string const PLAYER_ID_TAG;
    /**
     * @symbol ?PLAYER_SCENE_MAPPING_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1352652351
     */
    MCAPI static std::string const PLAYER_SCENE_MAPPING_TAG;
    /**
     * @symbol ?SCENE_NAME_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -976771872
     */
    MCAPI static std::string const SCENE_NAME_TAG;
    /**
     * @symbol ?URL_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   223356017
     */
    MCAPI static std::string const URL_TAG;

};