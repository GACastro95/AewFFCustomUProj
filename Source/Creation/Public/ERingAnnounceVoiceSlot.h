#pragma once
#include "CoreMinimal.h"
#include "ERingAnnounceVoiceSlot.generated.h"

UENUM(BlueprintType)
enum class ERingAnnounceVoiceSlot : uint8 {
    VoiceSlot1,
    VoiceSlot2,
    VoiceSlot3,
    VoiceSlot4,
    Num,
};

