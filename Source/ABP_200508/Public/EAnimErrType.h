#pragma once
#include "CoreMinimal.h"
#include "EAnimErrType.generated.h"

UENUM(BlueprintType)
enum class EAnimErrType : uint8 {
    NoError,
    TimeOut,
    MissingAnimData,
    HitandSyncFailure,
    DistanceCheck,
    NotHit,
};

