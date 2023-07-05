#pragma once
#include "CoreMinimal.h"
#include "ETrackingGroupType.generated.h"

UENUM(BlueprintType)
enum class ETrackingGroupType : uint8 {
    Main,
    Team,
    Create,
    SoundTrack,
    DLC,
    Other,
};

