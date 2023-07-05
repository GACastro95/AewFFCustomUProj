#pragma once
#include "CoreMinimal.h"
#include "ECareerInGameHUDType.generated.h"

UENUM(BlueprintType)
enum class ECareerInGameHUDType : uint8 {
    None,
    Victory,
    Defeat,
    Complete,
    TooBad,
};

