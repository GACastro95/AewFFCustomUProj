#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionPacketSyncProcType.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionPacketSyncProcType : uint8 {
    None,
    Update_Request,
    Update_Success,
    Update_Failed,
    Compare_Request,
    Compare_Request_Sync,
    Compare_Success,
    Compare_Failed,
    Overwrite_Request,
    Overwrite_Success,
    Overwrite_Failed,
};

