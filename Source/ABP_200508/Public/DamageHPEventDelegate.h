#pragma once
#include "CoreMinimal.h"
#include "DamageHPEventDelegate.generated.h"

class AELCharacter_Native;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FDamageHPEvent, const AELCharacter_Native*, AtkPlayer, float, DamageHead, float, DamageArm, float, DamageBody, float, DamageLeg);

