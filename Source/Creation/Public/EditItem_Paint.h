#pragma once
#include "CoreMinimal.h"
#include "EEditTexTarget.h"
#include "EditItem_Common.h"
#include "EditItem_Paint.generated.h"

class UEditWrestlerPaintAsset;

USTRUCT(BlueprintType)
struct FEditItem_Paint : public FEditItem_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEditTexTarget PaintSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEditWrestlerPaintAsset> Asset;
    
    CREATION_API FEditItem_Paint();
};

