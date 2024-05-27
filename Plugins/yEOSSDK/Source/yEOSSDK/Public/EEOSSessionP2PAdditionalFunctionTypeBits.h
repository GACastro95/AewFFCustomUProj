#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PAdditionalFunctionTypeBits.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionP2PAdditionalFunctionTypeBits : uint8 {
    None,
    DataSharing,
    BindPlayers,
    HostMigration = 4,
    GameFlowManager = 8,
};

