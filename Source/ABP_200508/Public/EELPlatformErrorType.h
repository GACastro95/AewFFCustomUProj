#pragma once
#include "CoreMinimal.h"
#include "EELPlatformErrorType.generated.h"

UENUM(BlueprintType)
enum class EELPlatformErrorType : uint8 {
    None,
    UserPrivilege,
};

