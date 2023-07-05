#pragma once
#include "CoreMinimal.h"
#include "EEditPartsSlot.h"
#include "EditPartsParam.h"
#include "SSAttirePartPair.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FSSAttirePartPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEditPartsSlot Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditPartsParam Value;
    
    FSSAttirePartPair();
};

