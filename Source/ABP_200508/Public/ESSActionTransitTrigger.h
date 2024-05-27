#pragma once
#include "CoreMinimal.h"
#include "ESSActionTransitTrigger.generated.h"

UENUM(BlueprintType)
enum class ESSActionTransitTrigger : uint8 {
    None,
    Move,
    Land,
    Jump,
    RunJump,
    Guard,
    StartAttack,
    StartTapAttack = StartAttack,
    Punch = StartAttack,
    Kick,
    Grapple,
    DashPunch,
    DashKick,
    DashGrapple,
    FgfPass,
    FgfThrow,
    FgfAimThrow,
    EndTapAttack,
    StartLongAttack,
    PunchLong = StartLongAttack,
    KickLong,
    GrappleLong,
    DashPunchLong,
    DashKickLong,
    DashGrappleLong,
    EndLongAttack,
    StartAbilityMove,
    AbilityMove1 = StartAbilityMove,
    AbilityMove2,
    AbilityMove3,
    EndAbilityMove,
    EndAttack = EndAbilityMove,
    Taunt,
    Revive,
    Max,
};

