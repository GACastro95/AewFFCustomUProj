#pragma once
#include "CoreMinimal.h"
#include "IndexedColorList.h"
#include "EditPaintData.generated.h"

class UEditWrestlerPaintAsset;

USTRUCT(BlueprintType)
struct CREATION_API FEditPaintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditWrestlerPaintAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexedColorList ColorIDs;
    
    FEditPaintData();
};

