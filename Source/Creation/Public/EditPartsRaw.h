#pragma once
#include "CoreMinimal.h"
#include "IndexedColorList.h"
#include "EditPartsRaw.generated.h"

USTRUCT(BlueprintType)
struct FEditPartsRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexedColorList ColorIDs;
    
    CREATION_API FEditPartsRaw();
};

