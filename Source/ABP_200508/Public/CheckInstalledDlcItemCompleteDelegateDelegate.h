#pragma once
#include "CoreMinimal.h"
#include "InstalledDlcItemParamResult.h"
#include "CheckInstalledDlcItemCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCheckInstalledDlcItemCompleteDelegate, FInstalledDlcItemParamResult, Result);

