#pragma once
#include "CoreMinimal.h"
#include "EEOSVoiceEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSVoiceEvent : uint8 {
    AudioDevicesChanged,
};

