#pragma once
#include "CoreMinimal.h"
#include "ECareerDebug_AutoPlayType.generated.h"

UENUM(BlueprintType)
enum class ECareerDebug_AutoPlayType : uint8 {
    None,
    Random,
    DataDriven_All,
    DataDriven_Range,
    DataDriven_Individual,
    ECareerDebug_MAX UMETA(Hidden),
};

