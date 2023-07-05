#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PCallbackResultBits.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionP2PCallbackResultBits : uint8 {
    Success,
    Skiped,
    Success_EndCallback,
    Success_CachePacket = 0x4,
};

