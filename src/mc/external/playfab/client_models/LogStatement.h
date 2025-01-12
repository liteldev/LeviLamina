#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LogStatement : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk95da88;
    ::ll::UntypedStorage<8, 32> mUnk9bf394;
    ::ll::UntypedStorage<8, 32> mUnk92d695;
    // NOLINTEND

public:
    // prevent constructor by default
    LogStatement& operator=(LogStatement const&);
    LogStatement(LogStatement const&);
    LogStatement();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LogStatement() /*override*/ = default;

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
