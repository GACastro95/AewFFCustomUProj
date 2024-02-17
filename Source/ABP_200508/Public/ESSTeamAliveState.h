#pragma once
#include "CoreMinimal.h"
#include "ESSTeamAliveState.generated.h"

UENUM(BlueprintType)
enum class ESSTeamAliveState : uint8 {
    Disabled,
    Alived,
    Dead,
};

