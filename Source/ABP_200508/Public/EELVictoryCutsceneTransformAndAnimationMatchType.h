#pragma once
#include "CoreMinimal.h"
#include "EELVictoryCutsceneTransformAndAnimationMatchType.generated.h"

UENUM(BlueprintType)
enum class EELVictoryCutsceneTransformAndAnimationMatchType : uint8 {
    None,
    OneOnOne,
    TagTeamMatch,
    ThreeWay,
    FourWay,
    BattleRoyale,
};

