#pragma once
#include "CoreMinimal.h"
#include "ESSHorseAction.generated.h"

UENUM(BlueprintType)
enum class ESSHorseAction : uint8 {
    None,
    GetOff,
    Attack,
};

