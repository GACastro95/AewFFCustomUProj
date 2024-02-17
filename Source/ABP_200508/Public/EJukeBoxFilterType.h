#pragma once
#include "CoreMinimal.h"
#include "EJukeBoxFilterType.generated.h"

UENUM(BlueprintType)
enum class EJukeBoxFilterType : uint8 {
    All,
    Entrances,
    GameOriginal,
    Premium,
    FreeDLC,
};

