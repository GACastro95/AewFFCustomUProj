#pragma once
#include "CoreMinimal.h"
#include "ESSFGFMatchAnnounce.generated.h"

UENUM(BlueprintType)
enum class ESSFGFMatchAnnounce : uint8 {
    None,
    Goal,
    DefenceSuccess,
    DefenceSuccessBonus,
    Victory,
    Draw,
    Defeat,
};

