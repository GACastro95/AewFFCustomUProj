#pragma once
#include "CoreMinimal.h"
#include "EEOSLobbyUserAudioStatus.generated.h"

UENUM(BlueprintType)
enum class EEOSLobbyUserAudioStatus : uint8 {
    Unsupported,
    Enabled,
    Disabled,
    AdminDisabled,
    NotListeningDisabled,
};

