#pragma once
#include "CoreMinimal.h"
#include "ESSMainMenuSubLevelSituation.generated.h"

UENUM(BlueprintType)
enum class ESSMainMenuSubLevelSituation : uint8 {
    None,
    Top,
    WrestlerSelect,
    FinisherSelect,
    Shop,
    Shop_Preview,
    Shop_Entrance,
};

