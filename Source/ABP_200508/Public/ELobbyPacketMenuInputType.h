#pragma once
#include "CoreMinimal.h"
#include "ELobbyPacketMenuInputType.generated.h"

UENUM(BlueprintType)
enum class ELobbyPacketMenuInputType : uint8 {
    NONE,
    MOVE_UP,
    MOVE_DOWN,
    MOVE_LEFT,
    MOVE_RIGHT,
    DECIDE,
    CANCEL,
};

