#pragma once
#include "CoreMinimal.h"
#include "EChallengeHitSkillType.generated.h"

UENUM(BlueprintType)
enum class EChallengeHitSkillType : uint8 {
    None,
    WeakBlow,
    StrongBlow,
    DashBlow,
    DivingBlow,
    FrontWeakGrab,
    FrontStrongGrab,
    BehindWeakGrab,
    BehindStrongGrab,
    WeaponAttack,
    ThrewOpponentWhoCamebackFromRope,
    BlowOpponentWhoCamebackFromRope,
    GrabToTheOpponentWhoWentDown,
    CompletedTheTaunt,
    BecameFinisher,
};

