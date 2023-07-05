#pragma once
#include "CoreMinimal.h"
#include "EMoviePlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EMoviePlayerStatus : uint8 {
    Stop,
    DecHdr,
    WaitPrep,
    Prep,
    Ready,
    Playing,
    PlayEnd,
    Error,
    StopProcessing,
};

