#pragma once
#include "CoreMinimal.h"
#include "ECareerAutoPlay_WrestlerType.generated.h"

UENUM(BlueprintType)
enum class ECareerAutoPlay_WrestlerType : uint8 {
    None,
    Male_Hero,
    Male_Shy,
    Male_Confident,
    Male_Monster,
    Male_Enigma,
    Male_Jerk,
    Female_Hero,
    Female_Shy,
    Female_Confident,
    Female_Monster,
    Female_Enigma,
    Female_Jerk,
    Direct,
    ECareerAutoPlay_MAX UMETA(Hidden),
};

