#pragma once
#include "CoreMinimal.h"
#include "EAbilityScoreType.generated.h"

UENUM(BlueprintType)
enum class EAbilityScoreType : uint8 {
    MomentumRate,
    FinisherSlotNum,
    SignatureSlotNum,
    FinisherSlot1Strength,
    FinisherSlot2Strength,
    FinisherSlot3Strength,
    FinisherSlot4Strength,
    FinisherSlot5Strength,
    SignatureSlot1Strength,
    SignatureSlot2Strength,
    SignatureSlot3Strength,
    SignatureSlot4Strength,
    SignatureSlot5Strength,
    ChainWrestling,
    ArmPower,
    KickPower,
    GrapplePower,
    DivingPower,
    SpringboardPower,
    MovementSpeed,
    Num,
};

