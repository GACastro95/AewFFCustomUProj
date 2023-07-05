#pragma once
#include "CoreMinimal.h"
#include "ESSLogIconType.generated.h"

UENUM(BlueprintType)
enum class ESSLogIconType : uint8 {
    Skill,
    Melee,
    Gun,
    Throw,
    Cart,
    Horse,
    Finisher,
    Fall,
    Involve,
    TreasureBox,
    Common,
    None,
};

