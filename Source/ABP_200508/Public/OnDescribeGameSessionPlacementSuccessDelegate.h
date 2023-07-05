#pragma once
#include "CoreMinimal.h"
#include "OnDescribeGameSessionPlacementSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnDescribeGameSessionPlacementSuccess, const FString&, gameSessionId, const FString&, PlacementId, const int32&, Status, const FString&, IPtoPort);

