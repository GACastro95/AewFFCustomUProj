#pragma once
#include "CoreMinimal.h"
#include "EELEOSSessionUserEventType.generated.h"

UENUM(BlueprintType)
enum class EELEOSSessionUserEventType : uint8 {
    UpdatePlayerStateData,
    Disconnected,
};

