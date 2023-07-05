#pragma once
#include "CoreMinimal.h"
#include "EStickinputDir.h"
#include "NormalTauntEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNormalTauntEvent, EStickinputDir, InputDir);

