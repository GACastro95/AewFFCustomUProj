#pragma once
#include "CoreMinimal.h"
#include "ECareerMemberType.generated.h"

UENUM(BlueprintType)
enum class ECareerMemberType : uint8 {
    NONE,
    PLAYER,
    PARTNER,
    RIVAL,
    DATE,
    OPPONENTA,
    OPPONENTB,
    OPPONENTC,
    OPPONENTD,
    DIRECT,
};

