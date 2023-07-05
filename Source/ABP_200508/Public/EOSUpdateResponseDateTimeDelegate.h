#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOSUpdateResponseDateTimeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEOSUpdateResponseDateTime, FDateTime, DateTime);

