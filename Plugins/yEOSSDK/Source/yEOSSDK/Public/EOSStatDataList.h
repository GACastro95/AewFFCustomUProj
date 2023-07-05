#pragma once
#include "CoreMinimal.h"
#include "EOSStatData.h"
#include "EOSStatDataList.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSStatDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEOSStatData> StatDataList;
    
    FEOSStatDataList();
};

