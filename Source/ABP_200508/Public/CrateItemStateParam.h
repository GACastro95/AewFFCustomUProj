#pragma once
#include "CoreMinimal.h"
#include "CrateItemParam.h"
#include "CrateItemStateParam.generated.h"

USTRUCT(BlueprintType)
struct FCrateItemStateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrateItemParam ItemParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEjected;
    
    ABP_200508_API FCrateItemStateParam();
};

