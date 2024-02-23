#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_AttackType.generated.h"

UENUM()
enum class EMovesTag_AttackType {
    AT_Fist = 0x1,
    AT_Chop,
    AT_Elbow = 0x4,
    AT_Clothesline = 0x8,
    AT_Kick = 0x10,
    AT_Knee = 0x20,
    AT_Head = 0x40,
    AT_Springboard = 0x80,
    AT_CornerDive = 0x100,
    AT_Impact = 0x200,
    AT_RunAtk = 0x400,
    AT_BreakFeet = 0x800,
    AT_BreakArm = 0x1000,
    AT_Dirty = 0x2000,
    AT_MAX UMETA(Hidden),
};

