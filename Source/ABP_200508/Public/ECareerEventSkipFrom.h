#pragma once
#include "CoreMinimal.h"
#include "ECareerEventSkipFrom.generated.h"

UENUM(BlueprintType)
enum class ECareerEventSkipFrom : uint8 {
    None,
    Title,
    Message,
};

