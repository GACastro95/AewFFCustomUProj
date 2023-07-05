#pragma once
#include "CoreMinimal.h"
#include "IndexedColorList.h"
#include "EditPartsData.generated.h"

class UEditWrestlerPartsAsset;

USTRUCT(BlueprintType)
struct CREATION_API FEditPartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditWrestlerPartsAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexedColorList ColorIDList;
    
    FEditPartsData();
};

