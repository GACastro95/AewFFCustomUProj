#pragma once
#include "CoreMinimal.h"
#include "ESaveDataProcResult.h"
#include "SaveDataCreatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSaveDataCreatedDelegate, bool, _Successed, ESaveDataProcResult, _ProcResult);

