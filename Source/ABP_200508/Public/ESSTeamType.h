#pragma once
#include "CoreMinimal.h"
#include "ESSTeamType.generated.h"

UENUM(BlueprintType)
enum class ESSTeamType : uint8 {
    Single,
    Team_2men,
    Team_4men,
    Team_5men,
    Max,
};

