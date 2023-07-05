#pragma once
#include "CoreMinimal.h"
#include "ESeesawStateType_N.generated.h"

UENUM(BlueprintType)
enum class ESeesawStateType_N : uint8 {
    Normal,
    Excite,
    Special,
    Buff,
    PenaltyBuff,
    ESeesawStateType_MAX UMETA(Hidden),
};

