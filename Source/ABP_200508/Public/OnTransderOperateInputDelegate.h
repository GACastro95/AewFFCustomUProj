#pragma once
#include "CoreMinimal.h"
#include "OnTransderOperateInputDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTransderOperateInput, APawn*, ApplyPawn);

