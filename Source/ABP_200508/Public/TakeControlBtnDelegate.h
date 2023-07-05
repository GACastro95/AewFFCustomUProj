#pragma once
#include "CoreMinimal.h"
#include "TakeControlBtnDelegate.generated.h"

class AELCharacter_Native;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTakeControlBtn, const AELCharacter_Native*, AtkPlayer);

