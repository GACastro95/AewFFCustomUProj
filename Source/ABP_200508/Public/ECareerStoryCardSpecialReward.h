#pragma once
#include "CoreMinimal.h"
#include "ECareerStoryCardSpecialReward.generated.h"

UENUM(BlueprintType)
enum class ECareerStoryCardSpecialReward : uint8 {
    None,
    EnterFaction,
    ExitFaction,
    GetPartner,
    LostPartner,
};

