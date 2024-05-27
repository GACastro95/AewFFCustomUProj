#pragma once
#include "CoreMinimal.h"
#include "EMainMenuSubWidgetType.generated.h"

UENUM(BlueprintType)
enum class EMainMenuSubWidgetType : uint8 {
    EMainMenuSubWidgetType_Play,
    EMainMenuSubWidgetType_BattlePass,
    EMainMenuSubWidgetType_Shop,
    EMainMenuSubWidgetType_Num,
    EMainMenuSubWidgetType_SelectWrestler,
    EMainMenuSubWidgetType_Preset,
};

