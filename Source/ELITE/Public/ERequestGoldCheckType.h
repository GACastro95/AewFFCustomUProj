#pragma once
#include "CoreMinimal.h"
#include "ERequestGoldCheckType.generated.h"

UENUM(BlueprintType)
enum class ERequestGoldCheckType : uint8 {
    NONE,
    INIT,
    PURCHASE,
};

