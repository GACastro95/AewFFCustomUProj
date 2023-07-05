#pragma once
#include "CoreMinimal.h"
#include "EPairBodyMaskBit.generated.h"

UENUM(BlueprintType)
enum class EPairBodyMaskBit : uint8 {
    Head_Eyeball,
    UpperBody_Shoulder,
    UpperBody_Armpit,
    UpperBody_ShoulderBlade,
    UpperBody_UpperArm,
    UpperBody_LowerArm,
    UpperBody_Palm,
    UpperBody_Fingers,
    LowerBody_Bottom,
    LowerBody_UpperThigh,
    LowerBody_LowerThigh,
    LowerBody_UpperShin,
    LowerBody_LowerShin,
    LowerBody_Ankle,
    LowerBody_Foot,
};

