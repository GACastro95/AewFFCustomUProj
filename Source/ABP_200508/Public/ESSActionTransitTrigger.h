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
    StartTapAttack = 0x6,
    Punch = 0x6,
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
    PunchLong = 0x10,
    KickLong,
    GrappleLong,
    DashPunchLong,
    DashKickLong,
    DashGrappleLong,
    EndLongAttack,
    StartAbilityMove,
    AbilityMove1 = 0x17,
    AbilityMove2,
    AbilityMove3,
    EndAbilityMove,
    EndAttack = 0x1A,
    Taunt,
    Revive,
    Max,
};

