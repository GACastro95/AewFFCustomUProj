#pragma once
#include "CoreMinimal.h"
#include "EELMatchMode.generated.h"

UENUM(BlueprintType)
enum class EELMatchMode : uint8 {
    EXHIBITION_MATCH,
    ONLINE_MATCH,
    RANKED_MATCH,
    CASUAL_MATCH,
    PARTY_MATCH,
    STADIUM_STAMPEDE_MATCH,
    MATCH_MODE_MAX UMETA(Hidden),
};

