#pragma once
#include "CoreMinimal.h"
#include "EMainMenuTopSelectWidgetType.generated.h"

UENUM(BlueprintType)
enum class EMainMenuTopSelectWidgetType : uint8 {
    EMainMenuTopSelectWidgetType_Play,
    EMainMenuTopSelectWidgetType_MatchRule,
    EMainMenuTopSelectWidgetType_LoadOut,
    EMainMenuTopSelectWidgetType_Wrestler,
    EMainMenuTopSelectWidgetType_Reward,
    EMainMenuTopSelectWidgetType_Num,
    EMainMenuTopSelectWidgetType_MAX UMETA(Hidden),
};

