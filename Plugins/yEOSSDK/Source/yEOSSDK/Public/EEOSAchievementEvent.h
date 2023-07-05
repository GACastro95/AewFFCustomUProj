#pragma once
#include "CoreMinimal.h"
#include "EEOSAchievementEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSAchievementEvent : uint8 {
    Unlocked,
    QueryDefinitions,
    QueryDefinitionsErr,
    QueryPlayer,
    QueryPlayerErr,
    Unlock,
    UnlockErr,
};

