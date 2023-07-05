#pragma once
#include "CoreMinimal.h"
#include "EEOSPacketReliability.generated.h"

UENUM(BlueprintType)
enum class EEOSPacketReliability : uint8 {
    UnreliableUnordered,
    ReliableUnordered,
    ReliableOrdered,
};

