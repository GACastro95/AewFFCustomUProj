#pragma once
#include "CoreMinimal.h"
#include "ESSGuardReactionType.generated.h"

UENUM(BlueprintType)
enum class ESSGuardReactionType : uint8 {
    None,
    DamageReaction,
    Guard1,
    Guard2,
    Guard3,
    Break1,
    Break2,
    Break3,
    BreakByWeapon1,
    BreakByWeapon2,
    BreakByWeapon3,
};

