#pragma once
#include "CoreMinimal.h"
#include "ECareerSnapshotInfo.generated.h"

UENUM(BlueprintType)
enum class ECareerSnapshotInfo : uint8 {
    Taken,
    Delete,
    Maximum,
};

