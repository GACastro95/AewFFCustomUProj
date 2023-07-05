#pragma once
#include "CoreMinimal.h"
#include "ESSModeServiceState.generated.h"

UENUM(BlueprintType)
enum class ESSModeServiceState : uint8 {
    None,
    InService,
    Maintenance,
    Closed,
    IsNull,
    IsNotEndSetup,
};

