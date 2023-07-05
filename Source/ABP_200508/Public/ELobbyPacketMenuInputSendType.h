#pragma once
#include "CoreMinimal.h"
#include "ELobbyPacketMenuInputSendType.generated.h"

UENUM(BlueprintType)
enum class ELobbyPacketMenuInputSendType : uint8 {
    Request,
    Result,
};

