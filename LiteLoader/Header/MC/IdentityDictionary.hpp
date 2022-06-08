// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IdentityDictionary {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTITYDICTIONARY
public:
    class IdentityDictionary& operator=(class IdentityDictionary const &) = delete;
    IdentityDictionary(class IdentityDictionary const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDENTITYDICTIONARY
#endif
    MCAPI IdentityDictionary();
    MCAPI bool clearIdentity(struct ScoreboardId const &);
    MCAPI struct ScoreboardId const & convertFakeToReal(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    MCAPI std::vector<struct ScoreboardId> getAllScoreboardIds() const;
    MCAPI struct ScoreboardId const & getScoreboardId(struct ActorUniqueID const &) const;
    MCAPI struct ScoreboardId const & getScoreboardId(struct PlayerScoreboardId const &) const;
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, std::string const &);
    MCAPI bool shouldConvertFakePlayer(struct PlayerScoreboardId const &, std::string const &);
    MCAPI ~IdentityDictionary();

protected:

private:

};