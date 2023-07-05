#pragma once
#include "CoreMinimal.h"
#include "ECareerStatusWidgetUpdateType.generated.h"

UENUM(BlueprintType)
enum class ECareerStatusWidgetUpdateType : uint8 {
    Condition,
    Motivation,
    Followers,
    CareerMoney,
    SkillPoint,
    All,
    Chain,
};

