#pragma once
#include "CoreMinimal.h"
#include "ESSAttentionReason.generated.h"

UENUM(BlueprintType)
enum class ESSAttentionReason : uint8 {
    None,
    HitAttack,
    Throw,
    Destructible,
    KO,
    Finisher,
    AttentionArea,
    Taunt,
    VehicleAttack,
    VehicleMoving,
    SituationMove,
    HorseAttack,
    HorseMoving,
    NegativePenalty,
    Fever,
    FgfGoal,
    FgfGoalTeamMember,
    FgfPassSuccess,
    FgfBallStole,
    FgfDefenseSuccess,
};

