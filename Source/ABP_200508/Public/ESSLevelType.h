#pragma once
#include "CoreMinimal.h"
#include "ESSLevelType.generated.h"

UENUM(BlueprintType)
enum class ESSLevelType : uint8 {
    None,
    BaseGame,
    SSMainMenu,
    SSInGame,
    LoadingToBaseGame,
    LoadingToSSMainMenu,
    LoadingToSSInGame,
};

