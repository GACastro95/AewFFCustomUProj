#pragma once
#include "CoreMinimal.h"
#include "ESSRequestVerbType.h"
#include "WebRequestEventDelegate.h"
#include "ELSSRequestData.generated.h"

USTRUCT(BlueprintType)
struct FELSSRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSRequestVerbType requestVerbType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString requestPostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> requestHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> requestQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWebRequestEvent requestResultEvent;
    
    ABP_200508_API FELSSRequestData();
};

