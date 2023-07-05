#pragma once
#include "CoreMinimal.h"
#include "EELEOSGameStatus.generated.h"

UENUM(BlueprintType)
enum class EELEOSGameStatus : uint8 {
    None,
    Default,
    OnlineLobby,
    OnlineMatch,
};

