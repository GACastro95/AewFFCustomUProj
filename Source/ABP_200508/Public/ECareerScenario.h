#pragma once
#include "CoreMinimal.h"
#include "ECareerScenario.generated.h"

UENUM(BlueprintType)
enum class ECareerScenario : uint8 {
    Prologue,
    AllOut,
    FullGear,
    Revolution,
    DoubleOrNothing,
    ScenarioEnd,
};

