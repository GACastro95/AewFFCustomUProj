#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerMeshMode.generated.h"

UENUM(BlueprintType)
enum class ESSPlayerMeshMode : uint8 {
    Default,
    CloneForCameraCulling,
    CloneForDead,
};

