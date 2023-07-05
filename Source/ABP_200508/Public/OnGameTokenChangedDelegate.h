#pragma once
#include "CoreMinimal.h"
#include "OnGameTokenChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameTokenChanged, int32, NewValue);

