#pragma once
#include "CoreMinimal.h"
#include "ECareerCutsceneMessageCastType.generated.h"

UENUM(BlueprintType)
enum class ECareerCutsceneMessageCastType : uint8 {
    NONE,
    OPPONENTA,
    OPPONENTB,
    OPPONENTC,
    OPPONENTD,
    PLAYER,
    PARTNER,
    RIVAL,
    DATE,
    COMMENTATOR,
    JR,
    EX,
    TZ,
    TK,
    UN,
};

