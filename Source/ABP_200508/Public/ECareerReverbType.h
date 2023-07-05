#pragma once
#include "CoreMinimal.h"
#include "ECareerReverbType.generated.h"

UENUM(BlueprintType)
enum class ECareerReverbType : uint8 {
    Auto,
    SmallRoom,
    LargeRoom,
    MediumHall,
    Restaurant,
    GenericIndoor,
    GenericOutdoor,
    ReverbFromArena,
};

