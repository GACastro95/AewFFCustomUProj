#pragma once
#include "CoreMinimal.h"
#include "EEOSCachedTransferCreateOptionBit.generated.h"

UENUM(BlueprintType)
enum class EEOSCachedTransferCreateOptionBit : uint8 {
    None,
    ManageInstance,
    ManageSocketID,
    ManageChannel = 0x4,
    ManageAll = 0xF,
};

