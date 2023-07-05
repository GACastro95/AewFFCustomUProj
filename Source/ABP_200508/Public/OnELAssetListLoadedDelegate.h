#pragma once
#include "CoreMinimal.h"
#include "OnELAssetListLoadedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnELAssetListLoaded, const TArray<UObject*>&, Objects);

