#pragma once
#include "CoreMinimal.h"
#include "ESaveDataCompressionFormat.generated.h"

UENUM(BlueprintType)
enum class ESaveDataCompressionFormat : uint8 {
    Raw,
    Encrypt,
};

