#pragma once
#include "CoreMinimal.h"
#include "EELIKPartType.generated.h"

UENUM(BlueprintType)
enum class EELIKPartType : uint8 {
    Empty,
    ArmIK_Begin = 0x0,
    Hand_L,
    Hand_R,
    Elbow_L,
    Elbow_R,
    Shoulder_L,
    Shoulder_R,
    ArmIK_End,
    LegIK_Begin = 0x80,
    Leg_L,
    Leg_R,
    Foot_L,
    Foot_R,
    LegIK_End,
};

