#pragma once
#include "CoreMinimal.h"
#include "ESaveDataAccessorProcMode.generated.h"

UENUM(BlueprintType)
enum class ESaveDataAccessorProcMode : uint8 {
    None,
    CreateNew,
    Access,
    ReleaseAccess,
    Load,
    Save,
    Load_ForDebug,
    Save_ForDebug,
    Copy,
    Delete,
    Download,
    Upload,
    DeleteOnServer,
    DownloadTitleData,
    ListForLocalData,
    ListForLocalData_ProjDir,
    ListForServerData,
    ListForTitleData,
    CacheLoad,
    GetQuota,
    ConvertPS5FromPS4,
    Import,
    Export,
    CompareHash,
};

