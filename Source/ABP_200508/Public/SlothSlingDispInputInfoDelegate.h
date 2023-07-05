#pragma once
#include "CoreMinimal.h"
#include "SlothSlingDispInputInfoDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlothSlingDispInputInfo, bool, IsEnableDisplay);

