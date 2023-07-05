#pragma once
#include "CoreMinimal.h"
#include "ERA_Slot_MatchRule.generated.h"

UENUM(BlueprintType)
enum class ERA_Slot_MatchRule : uint8 {
    RA_MR_1V1,
    RA_MR_2V2,
    RA_MR_3V3,
    RA_MR_3WAY,
    RA_MR_4WAY,
    RA_MR_CASINO,
    RA_MR_UNSANCTIONED,
    RA_MR_UNSANCTIONED_FULL,
    RA_MR_FCAM,
    RA_MR_CAGE_FULL,
    RA_MR_CAGE,
    RA_MR_LADDER,
    RA_MR_CASINO_LADDER,
    RA_MR_LIGHTSOUT,
    RA_MR_EXPLODING,
    RA_MR_TRAINING,
    RA_MR_MAX UMETA(Hidden),
};

