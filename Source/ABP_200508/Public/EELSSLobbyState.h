#pragma once
#include "CoreMinimal.h"
#include "EELSSLobbyState.generated.h"

UENUM(BlueprintType)
enum class EELSSLobbyState : uint8 {
    Default,
    Owner,
    Guest,
};

