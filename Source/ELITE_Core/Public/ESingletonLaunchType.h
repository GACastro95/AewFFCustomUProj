#pragma once
#include "CoreMinimal.h"
#include "ESingletonLaunchType.generated.h"

UENUM(BlueprintType)
enum class ESingletonLaunchType : uint8 {
    GameOnly,
    AnyTime,
    Manual,
};

