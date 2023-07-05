#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ELAsyncActionLoadAssetBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UELAsyncActionLoadAssetBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UELAsyncActionLoadAssetBase();
};

