#pragma once
#include "CoreMinimal.h"
#include "ECareerEventTarget.generated.h"

UENUM(BlueprintType)
enum class ECareerEventTarget : uint8 {
    NONE,
    A,
    B,
    C,
    D,
    CAMERA,
};

