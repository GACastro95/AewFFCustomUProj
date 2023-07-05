#pragma once
#include "CoreMinimal.h"
#include "EUpdateBattlePassPointType.generated.h"

UENUM(BlueprintType)
enum class EUpdateBattlePassPointType : uint8 {
    None,
    Add,
    Direct,
};

