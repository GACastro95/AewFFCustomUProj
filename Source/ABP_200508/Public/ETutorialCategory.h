#pragma once
#include "CoreMinimal.h"
#include "ETutorialCategory.generated.h"

UENUM(BlueprintType)
enum class ETutorialCategory : uint8 {
    GameRule,
    GamePlay,
    Online,
    Create,
    Career,
    MiniGame,
    Option,
    StadiumStampede,
};

