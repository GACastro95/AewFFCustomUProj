#pragma once
#include "CoreMinimal.h"
#include "ECareerParameterSkillItem.generated.h"

UENUM(BlueprintType)
enum class ECareerParameterSkillItem : uint8 {
    None,
    Momentum,
    FinisherSlot,
    SignatureSlot,
    FinisherDamage1,
    FinisherDamage2,
    FinisherDamage3,
    FinisherDamage4,
    FinisherDamage5,
    SignatureDamage1,
    SignatureDamage2,
    SignatureDamage3,
    SignatureDamage4,
    SignatureDamage5,
    ChainWrestling,
    ArmPower,
    KickPower,
    GrapplePower,
    DivingPower,
    SpringboardPower,
    MovementSpeed,
    SkillLimit,
};

