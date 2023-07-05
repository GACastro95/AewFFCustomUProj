#pragma once
#include "CoreMinimal.h"
#include "ECareerStoryTiming.generated.h"

UENUM(BlueprintType)
enum class ECareerStoryTiming : uint8 {
    None,
    Command,
    Match,
    StartWeek,
    VehicleMoveAfter,
    StartTurn_1,
    StartTurn_2,
    StartTurn_3,
    StartTurn_4,
    StartTurn_5,
};

