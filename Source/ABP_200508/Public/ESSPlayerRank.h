#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerRank.generated.h"

UENUM(BlueprintType)
enum class ESSPlayerRank : uint8 {
    None,
    ROOKIE,
    INDIE_WRESTLER,
    INDIE_STAR,
    INDIE_CHAMPION,
    DARK_WRESTLER,
    DARK_STAR,
    DYNAMITE_WRESTLER,
    DYNAMITE_STAR,
    MAIN_EVENTER,
    ELITE,
    WORLD_CHAMPION,
};

