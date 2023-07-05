#pragma once
#include "CoreMinimal.h"
#include "ELSSAWSErrorResponseData.generated.h"

USTRUCT(BlueprintType)
struct FELSSAWSErrorResponseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    ABP_200508_API FELSSAWSErrorResponseData();
};

