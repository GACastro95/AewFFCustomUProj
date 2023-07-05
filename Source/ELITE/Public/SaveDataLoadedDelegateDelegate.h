#pragma once
#include "CoreMinimal.h"
#include "ESaveDataProcResult.h"
#include "SaveDataLoadedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSaveDataLoadedDelegate, bool, _Successed, ESaveDataProcResult, _ProcResult);

