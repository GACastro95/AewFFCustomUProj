#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyPacketRequestType.generated.h"

UENUM(BlueprintType)
enum class EELEOSLobbyPacketRequestType : uint8 {
    None,
    RequestMiniGameInfo,
};

