#pragma once
#include "CoreMinimal.h"
#include "EMovesCategoryType.generated.h"

UENUM(BlueprintType)
enum class EMovesCategoryType : uint8 {
    None,
    Special,
    BaseFight,
    Dive,
    Environment,
    Other,
};

