#pragma once
#include "CoreMinimal.h"
#include "ECareerModeDifficulty.generated.h"

UENUM(BlueprintType)
enum class ECareerModeDifficulty : uint8 {
    Easy,
    Normal,
    Hard,
    AllElite,
};

