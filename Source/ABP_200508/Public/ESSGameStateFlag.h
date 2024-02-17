#pragma once
#include "CoreMinimal.h"
#include "ESSGameStateFlag.generated.h"

UENUM(BlueprintType)
enum class ESSGameStateFlag : uint8 {
    None,
    PlayAnnounceReachedWin,
    Max,
};

