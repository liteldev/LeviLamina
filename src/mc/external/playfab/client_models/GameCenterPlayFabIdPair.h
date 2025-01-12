#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GameCenterPlayFabIdPair : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf07461;
    ::ll::UntypedStorage<8, 32> mUnk61b96d;
    // NOLINTEND

public:
    // prevent constructor by default
    GameCenterPlayFabIdPair& operator=(GameCenterPlayFabIdPair const&);
    GameCenterPlayFabIdPair(GameCenterPlayFabIdPair const&);
    GameCenterPlayFabIdPair();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameCenterPlayFabIdPair() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab::ClientModels
