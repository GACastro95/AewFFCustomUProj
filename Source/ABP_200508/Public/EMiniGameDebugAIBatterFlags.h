#pragma once
#include "CoreMinimal.h"
#include "EMiniGameDebugAIBatterFlags.generated.h"

UENUM(BlueprintType)
enum class EMiniGameDebugAIBatterFlags : uint8 {
    RadioButton_None,
    RadioButton_Missing,
    RadioButton_Hit0,
    RadioButton_Hit1,
    RadioButton_Hit2,
    RadioButton_Hit3,
    RadioButton_Hit4,
    RadioButton_Homerun,
    RadioButton_MAX UMETA(Hidden),
};

