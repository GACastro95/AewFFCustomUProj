#pragma once
#include "CoreMinimal.h"
#include "EExternalAccountType.generated.h"

UENUM(BlueprintType)
enum class EExternalAccountType : uint8 {
    Unknown,
    Epic,
    Steam,
    PSN,
    XboxLive,
    Nintendo,
};

