#pragma once
#include "CoreMinimal.h"
#include "EMiniGameCareerResult.generated.h"

UENUM(BlueprintType)
enum class EMiniGameCareerResult : uint8 {
    NoGame,
    Winner,
    Loser,
    None,
};

