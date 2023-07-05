#pragma once
#include "CoreMinimal.h"
#include "ECareerStoryCardCondition.generated.h"

UENUM(BlueprintType)
enum class ECareerStoryCardCondition : uint8 {
    NoCondition,
    Yes,
    No,
};

