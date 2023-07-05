#pragma once
#include "CoreMinimal.h"
#include "OnScrollMenuDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScrollMenu, int32, Offset);

