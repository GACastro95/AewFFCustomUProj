#pragma once
#include "CoreMinimal.h"
#include "ECareerEventSceneSwitchState.generated.h"

UENUM(BlueprintType)
enum class ECareerEventSceneSwitchState : uint8 {
    None,
    RequestScene,
    PreperScene,
    ChangeScene,
    PreInitialScene,
    InitialScene,
    Finish,
};

