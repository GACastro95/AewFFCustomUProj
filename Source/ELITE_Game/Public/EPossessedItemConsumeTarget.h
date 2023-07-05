#pragma once
#include "CoreMinimal.h"
#include "EPossessedItemConsumeTarget.generated.h"

UENUM(BlueprintType)
enum class EPossessedItemConsumeTarget : uint8 {
    None,
    CrateTicket,
    BattlePassPointBoosterTicket,
    AEW_Cash,
    AEW_Gold,
    MAX,
};

