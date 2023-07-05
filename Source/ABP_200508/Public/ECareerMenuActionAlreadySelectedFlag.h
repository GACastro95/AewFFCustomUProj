#pragma once
#include "CoreMinimal.h"
#include "ECareerMenuActionAlreadySelectedFlag.generated.h"

UENUM(BlueprintType)
enum class ECareerMenuActionAlreadySelectedFlag : uint8 {
    None,
    bSightSeeing,
    bPressConference,
    bMiniGame = 0x4,
    bAutographSession = 0x8,
    bMovieAppearance = 0x10,
    bCasino = 0x20,
    bTVShow = 0x40,
};

