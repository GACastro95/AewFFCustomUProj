#pragma once
#include "CoreMinimal.h"
#include "EEOSTitleStorageEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSTitleStorageEvent : uint8 {
    GetFileList,
    GetFileListErr,
    GetFileListEmpty,
    Download,
    DownloadErr,
    DownloadCanceled,
    DownloadProgress,
    Pending,
};

