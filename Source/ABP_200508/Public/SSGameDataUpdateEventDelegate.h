#pragma once
#include "CoreMinimal.h"
#include "ESSModeDataType.h"
#include "SSGameDataUpdateEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSSGameDataUpdateEvent, const ESSModeDataType, updateDataType);

