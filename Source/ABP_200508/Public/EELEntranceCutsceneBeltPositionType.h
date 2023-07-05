#pragma once
#include "CoreMinimal.h"
#include "EELEntranceCutsceneBeltPositionType.generated.h"

UENUM(BlueprintType)
enum class EELEntranceCutsceneBeltPositionType : uint8 {
    Waist,
    LeftHand,
    RightHand,
    LeftShoulder,
    RightSoulder,
};

