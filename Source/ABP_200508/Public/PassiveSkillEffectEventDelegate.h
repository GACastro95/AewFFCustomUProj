#pragma once
#include "CoreMinimal.h"
#include "StPassiveSkillData.h"
#include "PassiveSkillEffectEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPassiveSkillEffectEvent, const FStPassiveSkillData&, PassiveSkillData);

