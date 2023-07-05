#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerRankRange.generated.h"

UENUM(BlueprintType)
enum class ESSPlayerRankRange : uint8 {
    None,
    ROOKIE,
    INDIE,
    DARK,
    DYNAMITE,
    ELITE,
};

