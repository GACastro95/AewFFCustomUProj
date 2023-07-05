#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizeAssetBase.generated.h"

UCLASS(Abstract, Blueprintable)
class CREATION_API UCustomizeAssetBase : public UObject {
    GENERATED_BODY()
public:
    UCustomizeAssetBase();
};

