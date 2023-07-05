#pragma once
#include "CoreMinimal.h"
#include "ESaveDataProcResult.generated.h"

UENUM(BlueprintType)
enum class ESaveDataProcResult : uint8 {
    None,
    Success,
    MajorVersionIsOld,
    MinorVersionIsOld,
    ValidationError,
    ComparationError,
    TypeError,
    NotFound,
    QuotaError_Size,
    QuotaError_Disk,
    QuotaError_FileLimit,
    QuotaError_DirLimit,
    Broken,
    OverwriteDenied,
    PermissionDenied,
    InsufficientMemory,
    NotImplemented,
    SkipedProcess,
    Canceled,
    RunningBackGroundProcess,
    AlreadyRunning,
    SystemNotConfigured,
    NotInitialized,
    ProcessNotConfigured,
    WrongArgument,
    NoData,
    InvalidParameter,
    RequestFailed,
    IOError,
};

