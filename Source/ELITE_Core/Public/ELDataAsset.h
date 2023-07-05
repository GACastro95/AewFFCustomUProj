#pragma once
#include "CoreMinimal.h"
#include "ELDataAssetBase.h"
#include "ELDataAsset.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UELDataAsset : public UELDataAssetBase {
    GENERATED_BODY()
public:
    UELDataAsset();
};

