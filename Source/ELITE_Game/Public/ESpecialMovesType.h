#pragma once
#include "CoreMinimal.h"
#include "ESpecialMovesType.generated.h"

UENUM(BlueprintType)
enum class ESpecialMovesType : uint8 {
    None,
    Signature,
    Finisher,
};

