#pragma once
#include "CoreMinimal.h"
#include "EEOSUserContentsEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSUserContentsEvent : uint8 {
    GetFileList,
    GetFileListErr,
    GetFilListEmpty,
    Download,
    DownloadErr,
    DownloadCanceled,
    DownloadProgress,
    Upload,
    UploadErr,
    UploadCanceled,
    UploadProgress,
    Delete,
    DeleteErr,
    Duplicate,
    DuplicateErr,
    Pending,
};

