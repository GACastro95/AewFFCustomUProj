#pragma once
#include "CoreMinimal.h"
#include "EOSStatInfo.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSStatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThresholdValue;
    
    FEOSStatInfo();
};

