#pragma once
#include "CoreMinimal.h"
#include "EditColorParam.h"
#include "ELUnlockItemSaveData.h"
#include "UnlockableItemParam.h"
#include "ELCustomSearchEditPartsData.generated.h"

USTRUCT(BlueprintType)
struct FELCustomSearchEditPartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockableItemParam UnlockableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELUnlockItemSaveData UnlockItemSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditColorParam> PartsColor;
    
    ELITE_API FELCustomSearchEditPartsData();
};

