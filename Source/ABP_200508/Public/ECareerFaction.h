#pragma once
#include "CoreMinimal.h"
#include "ECareerFaction.generated.h"

UENUM(BlueprintType)
enum class ECareerFaction : uint8 {
    None,
    TheElite,
    InnerCircle,
    DarkOrder,
    TeamTazz,
    FactionMax,
};

