#pragma once
#include "CoreMinimal.h"
#include "EActionStateMontagePlayResult.generated.h"

UENUM(BlueprintType)
enum class EActionStateMontagePlayResult : uint8 {
    Success,
    Failed,
};

