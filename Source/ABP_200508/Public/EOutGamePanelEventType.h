#pragma once
#include "CoreMinimal.h"
#include "EOutGamePanelEventType.generated.h"

UENUM(BlueprintType)
enum class EOutGamePanelEventType : uint8 {
    EOutGamePanelEventType_SETUP,
    EOutGamePanelEventType_OPEN,
    EOutGamePanelEventType_CLOSE,
    EOutGamePanelEventType_PREV,
    EOutGamePanelEventType_NEXT,
    EOutGamePanelEventType_MOVIE_PLAY_LOAD,
    EOutGamePanelEventType_MOVIE_PLAY_END,
    EOutGamePanelEventType_MOVIE_PLAY_FAILED,
    EOutGamePanelEventType_MOVIE_PLAY_ALL_END,
};

