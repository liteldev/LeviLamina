#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct AdCampaignAttributionModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf3f1b1;
    ::ll::UntypedStorage<8, 32> mUnk190aa1;
    ::ll::UntypedStorage<8, 32> mUnkca7acc;
    // NOLINTEND

public:
    // prevent constructor by default
    AdCampaignAttributionModel& operator=(AdCampaignAttributionModel const&);
    AdCampaignAttributionModel(AdCampaignAttributionModel const&);
    AdCampaignAttributionModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AdCampaignAttributionModel() /*override*/ = default;

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
