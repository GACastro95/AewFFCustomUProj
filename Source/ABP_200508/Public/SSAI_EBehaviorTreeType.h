#pragma once
#include "CoreMinimal.h"
#include "SSAI_EBehaviorTreeType.generated.h"

UENUM(BlueprintType)
enum class SSAI_EBehaviorTreeType : uint8 {
    BattleRoyale_Single,
    BattleRoyale_Team,
    FgfOffense,
    FgfDefense,
    Domination,
    Deathmatch,
};

