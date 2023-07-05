#pragma once
#include "CoreMinimal.h"
#include "IndexedColorList.h"
#include "EditPartsParam.generated.h"

class UEditWrestlerPartsAsset;

USTRUCT(BlueprintType)
struct CREATION_API FEditPartsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEditWrestlerPartsAsset> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexedColorList ColorIDList;
    
    FEditPartsParam();
};

