#pragma once
#include "CoreMinimal.h"
#include "ECareerHUBMenuItemOperation.generated.h"

UENUM(BlueprintType)
enum class ECareerHUBMenuItemOperation : uint8 {
    Default,
    Purchase,
    SaveAndExit,
};

