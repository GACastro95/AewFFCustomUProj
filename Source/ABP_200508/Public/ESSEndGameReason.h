#pragma once
#include "CoreMinimal.h"
#include "ESSEndGameReason.generated.h"

UENUM(BlueprintType)
enum class ESSEndGameReason : uint8 {
    None,
    Win,
    Lose,
    Leave,
    YGS2Error,
    NetworkStatus,
    EOSSignout,
    Illegal,
    NetworkFailure,
};

