#pragma once
#include "CoreMinimal.h"
#include "OnELAssetLoadedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnELAssetLoaded, UObject*, Object);

