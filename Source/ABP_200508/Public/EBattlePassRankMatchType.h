#pragma once
#include "CoreMinimal.h"
#include "EBattlePassRankMatchType.generated.h"

UENUM(BlueprintType)
enum class EBattlePassRankMatchType : uint8 {
    NONE,
    ONE_ON_ONE,
    TAG,
    THREE_WAY,
    FOUR_WAY,
    CASINO_BATTLE_ROYALE,
};

