#pragma once
#include "CoreMinimal.h"
#include "GLAPI_ErrorData.generated.h"

USTRUCT(BlueprintType)
struct FGLAPI_ErrorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 errCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString errMsg;
    
    ABP_200508_API FGLAPI_ErrorData();
};

