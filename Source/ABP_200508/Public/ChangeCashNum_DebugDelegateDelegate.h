#pragma once
#include "CoreMinimal.h"
#include "ChangeCashNum_DebugDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeCashNum_DebugDelegate, int32, ChangeNum);

