#pragma once
#include "CoreMinimal.h"
#include "EEliteMeterStateType_N.generated.h"

UENUM(BlueprintType)
enum class EEliteMeterStateType_N : uint8 {
    Neutral,
    Excite,
    Special,
    Danger,
    EEliteMeterStateType_MAX UMETA(Hidden),
};

