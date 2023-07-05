#pragma once
#include "CoreMinimal.h"
#include "RemoveGloveBuffEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemoveGloveBuffEvent, float, BuffTime);

