#pragma once
#include "CoreMinimal.h"
#include "ECareerResultType.generated.h"

UENUM(BlueprintType)
enum class ECareerResultType : uint8 {
    None,
    Rank_A_Plus,
    Rank_A,
    Rank_B_Plus,
    Rank_B,
    Rank_C,
    Rank_D,
};

