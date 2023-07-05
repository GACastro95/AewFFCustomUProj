#pragma once
#include "CoreMinimal.h"
#include "ESaveDataProcessType.generated.h"

UENUM(BlueprintType)
enum class ESaveDataProcessType : uint8 {
    Reader,
    Writer,
    Uploader,
    Downloader,
    Deleter,
    Encrypter,
    Validator,
    GetQuota,
    Comparator,
    ConvertPS5FromPS4,
};

