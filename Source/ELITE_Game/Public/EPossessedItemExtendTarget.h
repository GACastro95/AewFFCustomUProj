#pragma once
#include "CoreMinimal.h"
#include "EPossessedItemExtendTarget.generated.h"

UENUM(BlueprintType)
enum class EPossessedItemExtendTarget : uint8 {
    None,
    CAW_SaveSlot,
    CAA_SaveSlot,
    Team_SaveSlot,
    AttireSlot,
    MAX,
};

