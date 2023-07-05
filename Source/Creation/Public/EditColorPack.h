#pragma once
#include "CoreMinimal.h"
#include "EditColorItem.h"
#include "EditColorPack.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditColorPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditColorItem> Items;
    
    FEditColorPack();
};

