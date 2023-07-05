#pragma once
#include "CoreMinimal.h"
#include "EELServerType.generated.h"

UENUM(BlueprintType)
enum class EELServerType : uint8 {
    EOS,
    YGS2,
    Platform,
};

