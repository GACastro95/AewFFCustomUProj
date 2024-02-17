#pragma once
#include "CoreMinimal.h"
#include "EAttackCollision_N.generated.h"

UENUM(BlueprintType)
enum class EAttackCollision_N : uint8 {
    Head,
    RightHand,
    LeftHand,
    Body,
    RightFoot,
    LeftFoot,
    RightKnee,
    LeftKnee,
};

