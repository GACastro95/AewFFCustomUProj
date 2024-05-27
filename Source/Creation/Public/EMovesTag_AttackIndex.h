#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_AttackIndex.generated.h"

UENUM(BlueprintType)
enum class EMovesTag_AttackIndex : uint8 {
    AT_Fist,
    AT_Chop,
    AT_Elbow,
    AT_Clothesline,
    AT_Kick,
    AT_Knee,
    AT_Head,
    AT_Springboard,
    AT_CornerDive,
    AT_Impact,
    AT_RunAtk,
    AT_BreakFeet,
    AT_BreakArm,
    AT_Dirty,
};

