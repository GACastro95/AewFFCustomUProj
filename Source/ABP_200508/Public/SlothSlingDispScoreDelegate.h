#pragma once
#include "CoreMinimal.h"
#include "SlothSlingDispScoreDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlothSlingDispScore, bool, IsEnableDisplay);

