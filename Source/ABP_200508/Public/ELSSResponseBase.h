#pragma once
#include "CoreMinimal.h"
#include "ELSSAWSErrorResponseData.h"
#include "eErrorStatusType.h"
#include "ELSSResponseBase.generated.h"

USTRUCT(BlueprintType)
struct FELSSResponseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eErrorStatusType ErrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 errorStatusId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 errorStatusIdAWS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSAWSErrorResponseData errorAWS;
    
    ABP_200508_API FELSSResponseBase();
};

