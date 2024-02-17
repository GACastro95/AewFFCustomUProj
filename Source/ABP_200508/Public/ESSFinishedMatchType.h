#pragma once
#include "CoreMinimal.h"
#include "ESSFinishedMatchType.generated.h"

UENUM(BlueprintType)
enum class ESSFinishedMatchType : uint8 {
    None,
    Incomplete,
    Dead,
    Timeup,
    ScoreOver,
    SurvivorNum,
    FgfCalledGame,
    FgfEndAllRound,
};

