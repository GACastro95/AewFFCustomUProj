#pragma once
#include "CoreMinimal.h"
#include "ELobbyProcStatus.generated.h"

UENUM(BlueprintType)
enum class ELobbyProcStatus : uint8 {
    STATUS_NONE,
    STATUS_PROCESSING,
};

