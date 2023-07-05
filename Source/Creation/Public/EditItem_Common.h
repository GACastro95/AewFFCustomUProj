#pragma once
#include "CoreMinimal.h"
#include "ELUnlockItemSaveData.h"
#include "EditItem_Base.h"
#include "EditItem_Common.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FEditItem_Common : public FEditItem_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Thumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELUnlockItemSaveData UnlockItemState;
    
    CREATION_API FEditItem_Common();
};

