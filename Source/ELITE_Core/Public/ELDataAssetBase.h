#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ELDataAssetBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UELDataAssetBase : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UELDataAssetBase();
};

