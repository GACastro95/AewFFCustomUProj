#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionGeneralPacketKind.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionGeneralPacketKind : uint8 {
    ReceivedResponse,
};

