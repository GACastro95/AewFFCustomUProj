#pragma once
#include "CoreMinimal.h"
#include "IndexedColorList.h"
#include "EditPaintParam.generated.h"

class UEditWrestlerPaintAsset;

USTRUCT(BlueprintType)
struct CREATION_API FEditPaintParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEditWrestlerPaintAsset> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexedColorList ColorIDs;
    
    FEditPaintParam();
};

