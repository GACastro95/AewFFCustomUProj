#pragma once
#include "CoreMinimal.h"
#include "ESSStormPositionRelation.generated.h"

UENUM(BlueprintType)
enum class ESSStormPositionRelation : uint8 {
    Safe,
    OutOfAnnounce,
    OutOfZone,
};

