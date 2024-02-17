#pragma once
#include "CoreMinimal.h"
#include "ESSRespawnLocationType.generated.h"

UENUM(BlueprintType)
enum class ESSRespawnLocationType : uint8 {
    Default,
    FixedSpawnPoint,
    NearTeamMember,
    NearFgfBall,
    Max,
};

