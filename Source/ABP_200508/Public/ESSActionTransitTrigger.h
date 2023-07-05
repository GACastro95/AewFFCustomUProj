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
    EndTapAttack,
    StartLongAttack,
    PunchLong = 0xD,
    KickLong,
    GrappleLong,
    DashPunchLong,
    DashKickLong,
    DashGrappleLong,
    EndLongAttack,
    StartAbilityMove,
    AbilityMove1 = 0x14,
    AbilityMove2,
    AbilityMove3,
    EndAbilityMove,
    EndAttack = 0x17,
    Taunt,
    Revive,
    Max,
};

