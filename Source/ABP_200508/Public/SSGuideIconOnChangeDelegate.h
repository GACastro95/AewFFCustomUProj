#pragma once
#include "CoreMinimal.h"
#include "SSGuideIconOnChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSSGuideIconOnChange, bool, IsActive);

