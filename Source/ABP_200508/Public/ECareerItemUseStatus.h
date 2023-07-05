#pragma once
#include "CoreMinimal.h"
#include "ECareerItemUseStatus.generated.h"

UENUM(BlueprintType)
enum class ECareerItemUseStatus : uint8 {
    NoStock,
    Available,
    CannotBeUsed,
};

