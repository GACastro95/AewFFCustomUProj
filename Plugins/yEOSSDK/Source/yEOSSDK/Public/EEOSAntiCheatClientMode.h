#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatClientMode.generated.h"

UENUM(BlueprintType)
enum class EEOSAntiCheatClientMode : uint8 {
    Invalid,
    ClientServer,
    PeerToPeer,
};

