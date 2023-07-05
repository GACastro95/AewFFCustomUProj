#pragma once
#include "CoreMinimal.h"
#include "ESSAnnounce.generated.h"

UENUM(BlueprintType)
enum class ESSAnnounce : uint8 {
    None,
    BeforeShrink,
    BeginShrink,
    OutOfSafeArea,
    EnterSafeArea,
    AttentionPlayer,
    Congratulations,
    VictoryRoyale,
    Max,
};

