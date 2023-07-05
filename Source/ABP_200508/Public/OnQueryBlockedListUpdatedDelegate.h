#pragma once
#include "CoreMinimal.h"
#include "OnQueryBlockedListUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryBlockedListUpdated, const bool, bWasSuccessful);

