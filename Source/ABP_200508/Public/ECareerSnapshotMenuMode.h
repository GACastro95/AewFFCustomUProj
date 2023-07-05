#pragma once
#include "CoreMinimal.h"
#include "ECareerSnapshotMenuMode.generated.h"

UENUM(BlueprintType)
enum class ECareerSnapshotMenuMode : uint8 {
    ScenarioMenu,
    TitleMenu,
    PreviewAndEditMenu,
};

