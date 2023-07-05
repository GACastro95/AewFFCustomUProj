#pragma once
#include "CoreMinimal.h"
#include "ECareerCutSceneState.generated.h"

UENUM(BlueprintType)
enum class ECareerCutSceneState : uint8 {
    None,
    Start,
    Continue,
    Finish,
    GotoCareerHub,
    MessageStart,
    MessageEnd,
    End,
};

