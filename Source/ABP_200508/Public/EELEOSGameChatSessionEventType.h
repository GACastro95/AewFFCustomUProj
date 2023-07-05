#pragma once
#include "CoreMinimal.h"
#include "EELEOSGameChatSessionEventType.generated.h"

UENUM(BlueprintType)
enum class EELEOSGameChatSessionEventType : uint8 {
    VoiceChatEnabled,
    VoiceChatDisabled,
    VoiceChatUnsupported,
    Mute,
    Unmute,
    StartSpeaking,
    StopSpeaking,
    Block,
    Unblock,
};

