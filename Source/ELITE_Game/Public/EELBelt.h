#pragma once
#include "CoreMinimal.h"
#include "EELBelt.generated.h"

UENUM(BlueprintType)
enum class EELBelt : uint8 {
    None,
    AEW_World,
    AEW_TNT,
    AEW_Womens,
    AEW_WorldTagTeam,
    FTW,
    TBS,
    Reserved07,
    Reserved08,
    Reserved09,
    Reserved10,
    Max,
};

