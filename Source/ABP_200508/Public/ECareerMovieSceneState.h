#pragma once
#include "CoreMinimal.h"
#include "ECareerMovieSceneState.generated.h"

UENUM(BlueprintType)
enum class ECareerMovieSceneState : uint8 {
    None,
    Setup,
    Prepare,
    Start,
    Play,
    Finish,
    GotoCareerHub,
    End,
};

