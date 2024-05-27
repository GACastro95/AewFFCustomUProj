#pragma once
#include "CoreMinimal.h"
#include "EEOSCachedTransferCreateOptionBit.generated.h"

UENUM(BlueprintType)
enum class EEOSCachedTransferCreateOptionBit : uint8 {
    None,
    ManageInstance,
    ManageSocketID,
    ManageChannel = 4,
    ManageAll = 15,
};

