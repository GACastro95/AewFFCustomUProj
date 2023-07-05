#pragma once
#include "CoreMinimal.h"
#include "EELEntranceCutsceneAnimationType.generated.h"

UENUM(BlueprintType)
enum class EELEntranceCutsceneAnimationType : uint8 {
    None,
    SingleNormal,
    TagNormal,
    SingleChampion,
    TagChampion,
};

