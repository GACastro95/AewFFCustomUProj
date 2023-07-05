#pragma once
#include "CoreMinimal.h"
#include "ESessionStatus.generated.h"

UENUM(BlueprintType)
enum class ESessionStatus : uint8 {
    STATUS_IDLE,
    STATUS_SEARCH,
    STATUS_CREATE,
    STATUS_JOIN,
    STATUS_MAX UMETA(Hidden),
};

