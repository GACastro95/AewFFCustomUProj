#pragma once
#include "CoreMinimal.h"
#include "ESSScheduleType.generated.h"

UENUM(BlueprintType)
enum class ESSScheduleType : uint8 {
    Permanent,
    Period,
    EveryNthDays,
    DayOfWeek,
    EveryNthHours,
};

