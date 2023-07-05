#pragma once
#include "CoreMinimal.h"
#include "ELobbyPrivateMatchStatus.generated.h"

UENUM(BlueprintType)
enum class ELobbyPrivateMatchStatus : uint8 {
    None,
    Wait,
    Ready,
    MatchStart,
};

