#pragma once
#include "CoreMinimal.h"
#include "IndexedColorList.h"
#include "CostumeParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FCostumeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemID_Ring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemID_Entrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrintID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexedColorList ColorIDs;
    
    FCostumeParam();
};

