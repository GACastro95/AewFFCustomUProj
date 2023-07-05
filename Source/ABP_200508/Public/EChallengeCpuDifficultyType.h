#pragma once
#include "CoreMinimal.h"
#include "EChallengeCpuDifficultyType.generated.h"

UENUM(BlueprintType)
enum class EChallengeCpuDifficultyType : uint8 {
    Easy,
    Normal,
    Hard,
    Elite,
    Max,
    Anything,
};

