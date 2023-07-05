#pragma once
#include "CoreMinimal.h"
#include "EBodyType.generated.h"

UENUM(BlueprintType)
enum class EBodyType : uint8 {
    Standard,
    Heavy,
    Slim,
    Muscular,
    Special,
};

