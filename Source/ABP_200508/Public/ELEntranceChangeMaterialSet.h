#pragma once
#include "CoreMinimal.h"
#include "ELEntranceChangeMaterialSet.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FELEntranceChangeMaterialSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReturnToMaterial;
    
    ABP_200508_API FELEntranceChangeMaterialSet();
};

