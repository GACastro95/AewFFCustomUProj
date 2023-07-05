#pragma once
#include "CoreMinimal.h"
#include "CrateItemParam.h"
#include "EmissionItemParam.generated.h"

USTRUCT(BlueprintType)
struct FEmissionItemParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCrateItemParam> ItemParamMap;
    
    ABP_200508_API FEmissionItemParam();
};

