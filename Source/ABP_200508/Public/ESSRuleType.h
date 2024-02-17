#pragma once
#include "CoreMinimal.h"
#include "ESSRuleType.generated.h"

UENUM(BlueprintType)
enum class ESSRuleType : uint8 {
    BattleRoyale,
    FieldGoalFrenzy,
    Domination,
    Deathmatch,
};

