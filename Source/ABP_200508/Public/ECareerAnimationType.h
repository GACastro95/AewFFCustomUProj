#pragma once
#include "CoreMinimal.h"
#include "ECareerAnimationType.generated.h"

UENUM(BlueprintType)
enum class ECareerAnimationType : uint8 {
    Menu,
    Event,
    Facial,
    Talk,
    Prop,
};

