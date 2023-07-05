#pragma once
#include "CoreMinimal.h"
#include "ECareerLayoutSceneState.generated.h"

UENUM(BlueprintType)
enum class ECareerLayoutSceneState : uint8 {
    None,
    Start,
    Playing,
    Finish,
    GotoCareerHub,
    End,
};

