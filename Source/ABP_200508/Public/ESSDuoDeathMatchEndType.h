#pragma once
#include "CoreMinimal.h"
#include "ESSDuoDeathMatchEndType.generated.h"

UENUM(BlueprintType)
enum class ESSDuoDeathMatchEndType : uint8 {
    Victory,
    Defeat,
    Timeup,
};

