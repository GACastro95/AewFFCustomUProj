#pragma once
#include "CoreMinimal.h"
#include "ESSChallengeCount.generated.h"

UENUM(BlueprintType)
enum class ESSChallengeCount : uint8 {
    None,
    WeakStrikeTechniqueHitCount,
    StrongStrikeTechniqueHitCount,
    JumpAttackHitCount,
    NearWeaponAttackDamageCount,
    FarWeaponAttackDamageCount,
    ThrowingWeaponAttackDamageCount,
    FinisherSuccessCount,
    WrestlerKillCount,
    SlotMachinePlayCount,
    VendingMachineBuyCount,
    RevivalCount,
    AbilityUseCount,
    SituationMoveCount,
    FeverCount,
    EpicWeaponHitCount,
    TreasureBoxCount,
    ExpItemCount,
    Max,
};

