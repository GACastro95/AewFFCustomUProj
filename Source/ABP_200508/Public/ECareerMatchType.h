#pragma once
#include "CoreMinimal.h"
#include "ECareerMatchType.generated.h"

UENUM(BlueprintType)
enum class ECareerMatchType : uint8 {
    SINGLE,
    TAG,
    WAY3,
    WAY4,
    CBR_SOLO,
    CBR_GROUP,
    SINGLE_OPP_WM,
    SINGLE_WM_OPP,
    SINGLE_WM_WM,
    HANDICAP_1ON2,
    HANDICAP_1ON3,
    HND_1ON2_OPP_WM,
    HANDICAP_TAG,
    GAUNTLET,
};

