#pragma once
#include "CoreMinimal.h"
#include "EELYGS2SetupStep.generated.h"

UENUM(BlueprintType)
enum class EELYGS2SetupStep : uint8 {
    None,
    DownloadedServerList,
    RequestPing,
    Ready,
};

