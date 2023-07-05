#pragma once
#include "CoreMinimal.h"
#include "EMovesTag_DamagePartIndex.generated.h"

UENUM(BlueprintType)
enum class EMovesTag_DamagePartIndex : uint8 {
    DP_Head,
    DP_Body,
    DP_Arms,
    DP_Legs,
    DP_MAX UMETA(Hidden),
};

