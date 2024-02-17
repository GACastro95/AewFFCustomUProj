#pragma once
#include "CoreMinimal.h"
#include "ECareerAutoPlay_MatchResult.generated.h"

UENUM(BlueprintType)
enum class ECareerAutoPlay_MatchResult : uint8 {
    Random,
    Win,
    Lose,
    WinFromOppA,
    WinFromOppB,
    WinFromOppC,
    WinFromOppD,
    WinOppA,
    WinOppB,
    WinOppC,
    WinOppD,
    None,
};

