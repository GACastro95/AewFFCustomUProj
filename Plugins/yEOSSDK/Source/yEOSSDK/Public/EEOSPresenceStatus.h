#pragma once
#include "CoreMinimal.h"
#include "EEOSPresenceStatus.generated.h"

UENUM(BlueprintType)
enum class EEOSPresenceStatus : uint8 {
    Offline,
    Online,
    Away,
    ExtendedAway,
    DoNotDisturb,
};

