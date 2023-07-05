#pragma once
#include "CoreMinimal.h"
#include "ESSModeLaunchType.generated.h"

UENUM(BlueprintType)
enum class ESSModeLaunchType : uint8 {
    DedicatedServer,
    MapDirectlyFromEditor,
    DebugMenu,
};

