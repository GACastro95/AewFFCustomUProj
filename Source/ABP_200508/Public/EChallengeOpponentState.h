#pragma once
#include "CoreMinimal.h"
#include "EChallengeOpponentState.generated.h"

UENUM(BlueprintType)
enum class EChallengeOpponentState : uint8 {
    None,
    CPU,
    LocalUser,
    OnlineUser,
};

