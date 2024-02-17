#pragma once
#include "CoreMinimal.h"
#include "EELSSLobbyMenuState.generated.h"

UENUM(BlueprintType)
enum class EELSSLobbyMenuState : uint8 {
    Idle,
    Ready,
    Playing,
};

