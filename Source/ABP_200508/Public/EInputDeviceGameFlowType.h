#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceGameFlowType.generated.h"

UENUM(BlueprintType)
enum class EInputDeviceGameFlowType : uint8 {
    None,
    MainMenu,
    Exhibition,
    TitleMenu,
};

