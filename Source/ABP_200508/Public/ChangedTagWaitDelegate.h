#pragma once
#include "CoreMinimal.h"
#include "ChangedTagWaitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangedTagWait, bool, Flag);

