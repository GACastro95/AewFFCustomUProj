#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionPacketDirectionType.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionPacketDirectionType : uint8 {
    Send,
    Received,
};

