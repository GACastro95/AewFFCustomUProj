#pragma once
#include "CoreMinimal.h"
#include "EDamageReactionType_N.generated.h"

UENUM(BlueprintType)
enum class EDamageReactionType_N : uint8 {
    None,
    Head,
    Arm_R,
    Arm_L,
    Body_F,
    Body_B,
    Leg_R,
    Leg_L,
};

