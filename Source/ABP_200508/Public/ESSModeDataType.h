#pragma once
#include "CoreMinimal.h"
#include "ESSModeDataType.generated.h"

UENUM(BlueprintType)
enum class ESSModeDataType : uint8 {
    ESSModeDataType_UserData,
    ESSModeDataType_MAX UMETA(Hidden),
};

