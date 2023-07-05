#pragma once
#include "CoreMinimal.h"
#include "EMoves_PreviewDistOffsetType.generated.h"

UENUM(BlueprintType)
enum class EMoves_PreviewDistOffsetType : uint8 {
    None,
    Equality,
    Player1Only,
    Player2Only,
    EMoves_MAX UMETA(Hidden),
};

