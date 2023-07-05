#pragma once
#include "CoreMinimal.h"
#include "EYGS2AnalyticsType.generated.h"

UENUM(BlueprintType)
enum class EYGS2AnalyticsType : uint8 {
    None,
    Offline,
    Createion = 0x32,
    Online = 0x64,
    Casual_MatchingInfo,
    Ranked_MatchingInfo,
    Private_MatchingInfo,
    SS_Mode = 0x96,
    SS_MatchingInfo,
};

