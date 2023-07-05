#pragma once
#include "CoreMinimal.h"
#include "EELMatchResult_ItemType.generated.h"

UENUM(BlueprintType)
enum class EELMatchResult_ItemType : uint8 {
    None,
    Badge,
    Rematch,
    NextMatch,
    QuitMatch,
    EELMatchResult_MAX UMETA(Hidden),
};

