#pragma once
#include "CoreMinimal.h"
#include "ERA_Slot_Championship.generated.h"

UENUM(BlueprintType)
enum class ERA_Slot_Championship : uint8 {
    RA_CHAMPIONSHIP_NONE,
    RA_CHAMPIONSHIP_AEW,
    RA_CHAMPIONSHIP_TNT,
    RA_CHAMPIONSHIP_AEW_WOMEN,
    RA_CHAMPIONSHIP_AEW_TAG,
    RA_CHAMPIONSHIP_FTW,
};

