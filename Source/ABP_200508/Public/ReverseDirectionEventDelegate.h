#pragma once
#include "CoreMinimal.h"
#include "ReverseDirectionEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReverseDirectionEvent, bool, InReverse);

