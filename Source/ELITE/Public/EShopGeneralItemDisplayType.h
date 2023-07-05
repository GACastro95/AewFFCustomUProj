#pragma once
#include "CoreMinimal.h"
#include "EShopGeneralItemDisplayType.generated.h"

UENUM(BlueprintType)
enum class EShopGeneralItemDisplayType : uint8 {
    Normal,
    Pickup,
    PremiumBattlePass,
    Text,
};

