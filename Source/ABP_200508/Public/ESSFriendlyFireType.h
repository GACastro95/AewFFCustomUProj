#pragma once
#include "CoreMinimal.h"
#include "ESSFriendlyFireType.generated.h"

UENUM(BlueprintType)
enum class ESSFriendlyFireType : uint8 {
    NoDamage,
    NoHit,
    Hit,
};

