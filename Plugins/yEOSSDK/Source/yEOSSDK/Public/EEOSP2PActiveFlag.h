#pragma once
#include "CoreMinimal.h"
#include "EEOSP2PActiveFlag.generated.h"

UENUM(BlueprintType)
enum class EEOSP2PActiveFlag : uint8 {
    Invalid,
    None,
    Activated,
    Deactivated,
};

