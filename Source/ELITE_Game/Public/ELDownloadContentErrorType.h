#pragma once
#include "CoreMinimal.h"
#include "ELDownloadContentErrorType.generated.h"

UENUM(BlueprintType)
enum class ELDownloadContentErrorType : uint8 {
    None,
    ShortageVersion,
    NotFoundItem,
    Max,
};

