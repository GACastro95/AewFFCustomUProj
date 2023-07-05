#pragma once
#include "CoreMinimal.h"
#include "EMoviePlayerEvent.generated.h"

UENUM(BlueprintType)
enum class EMoviePlayerEvent : uint8 {
    Opened,
    OpenFailed,
    Closed,
    Prepared,
    Suspended,
    Resumed,
    Seeked,
    PlaybackEnd,
    TrackChanged,
};

