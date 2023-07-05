#pragma once
#include "CoreMinimal.h"
#include "EnVisualizeMode.generated.h"

UENUM(BlueprintType)
enum class EnVisualizeMode : uint8 {
    All,
    Color,
    Normal,
    AO,
    Roughness,
    Metallic,
    MAX = 0x5,
};

