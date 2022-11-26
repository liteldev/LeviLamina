/**
 * @file  ScoreboardIdentityRef.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IdentityDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScoreboardIdentityRef.
 *
 */
class ScoreboardIdentityRef {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDIDENTITYREF
public:
    class ScoreboardIdentityRef& operator=(class ScoreboardIdentityRef const &) = delete;
    ScoreboardIdentityRef(class ScoreboardIdentityRef const &) = delete;
#endif

public:
    /**
     * @symbol ??0ScoreboardIdentityRef@@QEAA@XZ
     * @hash   1065833245
     */
    MCAPI ScoreboardIdentityRef();
    /**
     * @symbol ??0ScoreboardIdentityRef@@QEAA@AEBUScoreboardId@@@Z
     * @hash   -1579568670
     */
    MCAPI ScoreboardIdentityRef(struct ScoreboardId const &);
    /**
     * @symbol ?getEntityId@ScoreboardIdentityRef@@QEBAAEBUActorUniqueID@@XZ
     * @hash   -347223846
     */
    MCAPI struct ActorUniqueID const & getEntityId() const;
    /**
     * @symbol ?getFakePlayerName@ScoreboardIdentityRef@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -567229204
     */
    MCAPI std::string const & getFakePlayerName() const;
    /**
     * @symbol ?getIdentityType@ScoreboardIdentityRef@@QEBA?AW4Type@IdentityDefinition@@XZ
     * @hash   -195750986
     */
    MCAPI enum class IdentityDefinition::Type getIdentityType() const;
    /**
     * @symbol ?getName@ScoreboardIdentityRef@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@3@@Z
     * @hash   -1233805554
     */
    MCAPI std::string const & getName(class std::function<std::string const & (struct ActorUniqueID)> const &) const;
    /**
     * @symbol ?getPlayerId@ScoreboardIdentityRef@@QEBAAEBUPlayerScoreboardId@@XZ
     * @hash   1469572950
     */
    MCAPI struct PlayerScoreboardId const & getPlayerId() const;
    /**
     * @symbol ?getScoreboardId@ScoreboardIdentityRef@@QEBAAEBUScoreboardId@@XZ
     * @hash   1104854664
     */
    MCAPI struct ScoreboardId const & getScoreboardId() const;
    /**
     * @symbol ?isPlayerType@ScoreboardIdentityRef@@QEBA_NXZ
     * @hash   1042635390
     */
    MCAPI bool isPlayerType() const;
    /**
     * @symbol ?modifyScoreInObjective@ScoreboardIdentityRef@@QEAA_NAEAHAEAVObjective@@HW4PlayerScoreSetFunction@@@Z
     * @hash   -330376705
     */
    MCAPI bool modifyScoreInObjective(int &, class Objective &, int, enum class PlayerScoreSetFunction);
    /**
     * @symbol ?removeFromObjective@ScoreboardIdentityRef@@QEAA_NAEAVScoreboard@@AEAVObjective@@@Z
     * @hash   371698332
     */
    MCAPI bool removeFromObjective(class Scoreboard &, class Objective &);
    /**
     * @symbol ?Undefined@ScoreboardIdentityRef@@2V1@B
     * @hash   2121942241
     */
    MCAPI static class ScoreboardIdentityRef const Undefined;
    /**
     * @symbol ?serialize@ScoreboardIdentityRef@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV1@@Z
     * @hash   2040843607
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ScoreboardIdentityRef const &);

};