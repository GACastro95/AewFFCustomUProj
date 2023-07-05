#pragma once
#include "CoreMinimal.h"
#include "ESaveDataProcResult.h"
#include "SaveDataUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSaveDataUpdatedDelegate, bool, _Successed, ESaveDataProcResult, _ProcResult);

