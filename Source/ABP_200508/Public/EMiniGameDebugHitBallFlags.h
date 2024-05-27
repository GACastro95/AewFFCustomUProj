#pragma once
#include "CoreMinimal.h"
#include "EMiniGameDebugHitBallFlags.generated.h"

UENUM(BlueprintType)
enum class EMiniGameDebugHitBallFlags : uint8 {
    RadioButton_None,
    RadioButton_Homerun,
    RadioButton_Drum,
};

