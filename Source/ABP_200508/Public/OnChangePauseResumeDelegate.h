#pragma once
#include "CoreMinimal.h"
#include "OnChangePauseResumeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangePauseResume, bool, Pause);

