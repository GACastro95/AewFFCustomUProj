#pragma once
#include "CoreMinimal.h"
#include "OnCreatePlayerSessionFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreatePlayerSessionFailed, const FString&, ErrorMessage);

