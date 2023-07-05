#pragma once
#include "CoreMinimal.h"
#include "ECareerDisappearItemEffect.generated.h"

UENUM(BlueprintType)
enum class ECareerDisappearItemEffect : uint8 {
    None,
    Immidiate,
    AfterMatch,
    WeekEnd,
};

