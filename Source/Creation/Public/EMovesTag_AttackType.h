#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_AttackType.generated.h"

UENUM()
enum class EMovesTag_AttackType {
    AT_Fist = 1,
    AT_Chop,
    AT_Elbow = 4,
    AT_Clothesline = 8,
    AT_Kick = 16,
    AT_Knee = 32,
    AT_Head = 64,
    AT_Springboard = 128,
    AT_CornerDive = 256,
    AT_Impact = 512,
    AT_RunAtk = 1024,
    AT_BreakFeet = 2048,
    AT_BreakArm = 4096,
    AT_Dirty = 8192,
};

