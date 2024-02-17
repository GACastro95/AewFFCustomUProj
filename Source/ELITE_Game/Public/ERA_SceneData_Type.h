#pragma once
#include "CoreMinimal.h"
#include "ERA_SceneData_Type.generated.h"

UENUM(BlueprintType)
enum class ERA_SceneData_Type : uint8 {
    Loading,
    Entrance,
    Victory,
    EntranceBattle,
    CreateName,
    CreateTeam,
};

