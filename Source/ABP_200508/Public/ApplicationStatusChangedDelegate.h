#pragma once
#include "CoreMinimal.h"
#include "EELApplicationStatus.h"
#include "ApplicationStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FApplicationStatusChanged, EELApplicationStatus, AppStatus);

