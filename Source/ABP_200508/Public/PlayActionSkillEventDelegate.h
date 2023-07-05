#pragma once
#include "CoreMinimal.h"
#include "PlayActionSkillEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayActionSkillEvent, int32, ActionSkillNo);

