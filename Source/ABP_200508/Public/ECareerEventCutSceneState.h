#pragma once
#include "CoreMinimal.h"
#include "ECareerEventCutSceneState.generated.h"

UENUM(BlueprintType)
enum class ECareerEventCutSceneState : uint8 {
    CutSceneSeeToEnd,
    MovieSeeToEnd,
    CutSceneSkip,
    MovieSkip,
};

