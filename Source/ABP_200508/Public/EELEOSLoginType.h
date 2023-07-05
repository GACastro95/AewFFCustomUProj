#pragma once
#include "CoreMinimal.h"
#include "EELEOSLoginType.generated.h"

UENUM(BlueprintType)
enum class EELEOSLoginType : uint8 {
    DevAuthTool,
    LoginPortal,
};

