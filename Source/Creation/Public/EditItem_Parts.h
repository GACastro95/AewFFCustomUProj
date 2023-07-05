#pragma once
#include "CoreMinimal.h"
#include "EEditPartsSlot.h"
#include "EditItem_Common.h"
#include "EditItem_Parts.generated.h"

class UEditWrestlerPartsAsset;

USTRUCT(BlueprintType)
struct FEditItem_Parts : public FEditItem_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEditPartsSlot PartsSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEditWrestlerPartsAsset> Asset;
    
    CREATION_API FEditItem_Parts();
};

