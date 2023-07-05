#pragma once
#include "CoreMinimal.h"
#include "ECharacterValidationResult.generated.h"

UENUM(BlueprintType)
enum class ECharacterValidationResult : uint8 {
    Valid,
    Invalid,
    Released,
};

