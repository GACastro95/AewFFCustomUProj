#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterHpType.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterHpType : uint8 {
    None,
    Default,
    Shield,
    Down,
};

