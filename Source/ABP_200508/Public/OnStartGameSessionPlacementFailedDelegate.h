#pragma once
#include "CoreMinimal.h"
#include "OnStartGameSessionPlacementFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartGameSessionPlacementFailed, const FString&, ErrorMessage);

