#pragma once
#include "CoreMinimal.h"
#include "EELEntranceCutsceneItemType.generated.h"

UENUM(BlueprintType)
enum class EELEntranceCutsceneItemType : uint8 {
    Unknown,
    Animation,
    FingerSign,
    Weapon,
    Filter,
    Particle,
    BGModel,
    Music,
    Movie,
};

