#pragma once
#include "CoreMinimal.h"
#include "ERichPresenceType.generated.h"

UENUM(BlueprintType)
enum class ERichPresenceType : uint8 {
    LocalPlay,
    OnlineLobby,
    OnlineMatch,
    Reset,
};

