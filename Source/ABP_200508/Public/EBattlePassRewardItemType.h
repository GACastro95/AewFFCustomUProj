#pragma once
#include "CoreMinimal.h"
#include "EBattlePassRewardItemType.generated.h"

UENUM(BlueprintType)
enum class EBattlePassRewardItemType : uint8 {
    None,
    UnlockableItem,
    PossessedItem,
};

