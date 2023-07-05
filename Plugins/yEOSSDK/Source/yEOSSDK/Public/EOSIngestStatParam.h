#pragma once
#include "CoreMinimal.h"
#include "EOSIngestStatParam.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSIngestStatParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FEOSIngestStatParam();
};

