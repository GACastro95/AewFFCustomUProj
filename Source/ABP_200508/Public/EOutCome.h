#pragma once
#include "CoreMinimal.h"
#include "EOutCome.generated.h"

UENUM(BlueprintType)
enum class EOutCome : uint8 {
    Completed,
    Failed,
    Abandoned,
};

