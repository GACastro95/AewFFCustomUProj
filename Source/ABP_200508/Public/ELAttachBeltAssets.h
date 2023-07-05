#pragma once
#include "CoreMinimal.h"
#include "ELAttachBeltAssets.generated.h"

class UEditWrestlerPartsAsset;

USTRUCT(BlueprintType)
struct FELAttachBeltAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEditWrestlerPartsAsset> BeltAsset_Male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEditWrestlerPartsAsset> BeltAsset_Female;
    
    ABP_200508_API FELAttachBeltAssets();
};

