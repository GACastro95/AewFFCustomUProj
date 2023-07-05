#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PDataSharingEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionP2PDataSharingEvent : uint8 {
    None,
    SyncDataSccuess,
    SyncDataFailed,
    SyncDataOverTheRetryLimit,
    OverwriteDataSccuess,
    OverwriteDataFailed,
    OverwriteDataOverTheRetryLimit,
    CompareDataSccuess,
    CompareDataFailed,
    CompareDataOverTheRetryLimit,
};

