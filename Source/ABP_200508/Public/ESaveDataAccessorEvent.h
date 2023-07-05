#pragma once
#include "CoreMinimal.h"
#include "ESaveDataAccessorEvent.generated.h"

UENUM(BlueprintType)
enum class ESaveDataAccessorEvent : uint8 {
    Encrypted,
    Decrypted,
    Loaded,
    Saved,
    Downloaded,
    Uploaded,
    ConvertPS5FromPS4,
};

