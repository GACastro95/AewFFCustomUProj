#pragma once
#include "CoreMinimal.h"
#include "EDisplayButtonIconType.generated.h"

UENUM(BlueprintType)
enum class EDisplayButtonIconType : uint8 {
    Gamepad,
    Keyboard,
    NotSpecified,
};

