#pragma once
#include "CoreMinimal.h"
#include "EAchievementContent.generated.h"

UENUM(BlueprintType)
enum class EAchievementContent : uint8 {
    Index,
    Name,
    Unlock,
    Count,
    CountMax,
    IsSaveCount,
    TableName,
    StringKey,
    DebugText,
};

