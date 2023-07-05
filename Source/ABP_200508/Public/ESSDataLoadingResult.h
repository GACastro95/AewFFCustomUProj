#pragma once
#include "CoreMinimal.h"
#include "ESSDataLoadingResult.generated.h"

UENUM(BlueprintType)
enum class ESSDataLoadingResult : uint8 {
    None,
    Success,
    Failed,
};

