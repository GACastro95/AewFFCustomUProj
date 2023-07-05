#pragma once
#include "CoreMinimal.h"
#include "ESSArmorType.generated.h"

UENUM(BlueprintType)
enum class ESSArmorType : uint8 {
    Default,
    SuperArmor,
    Guard,
    Invincible,
};

