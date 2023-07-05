#pragma once
#include "CoreMinimal.h"
#include "ECareerSnapShotAnimState.generated.h"

UENUM(BlueprintType)
enum class ECareerSnapShotAnimState : uint8 {
    None,
    PlayAnim,
    UpdateSkelton,
};

