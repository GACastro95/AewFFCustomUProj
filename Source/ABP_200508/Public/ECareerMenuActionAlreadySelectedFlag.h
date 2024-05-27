#pragma once
#include "CoreMinimal.h"
#include "ECareerMenuActionAlreadySelectedFlag.generated.h"

UENUM(BlueprintType)
enum class ECareerMenuActionAlreadySelectedFlag : uint8 {
    None,
    bSightSeeing,
    bPressConference,
    bMiniGame = 4,
    bAutographSession = 8,
    bMovieAppearance = 16,
    bCasino = 32,
    bTVShow = 64,
};

