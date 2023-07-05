#pragma once
#include "CoreMinimal.h"
#include "CareerPlayerItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FCareerPlayerItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UsedItemEffect;
    
    ABP_200508_API FCareerPlayerItemInfo();
};

