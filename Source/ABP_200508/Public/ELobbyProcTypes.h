#pragma once
#include "CoreMinimal.h"
#include "ELobbyProcTypes.generated.h"

UENUM(BlueprintType)
enum class ELobbyProcTypes : uint8 {
    PROC_CONSOLE_PARTYJOIN,
    PROC_CONSOLE_MAX UMETA(Hidden),
};

