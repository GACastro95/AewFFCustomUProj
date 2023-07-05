#pragma once
#include "CoreMinimal.h"
#include "EYGS2Api.h"
#include "EYGS2Method.h"
#include "YGS2RequestData.generated.h"

USTRUCT(BlueprintType)
struct YGS2CLIENT_API FYGS2RequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGS2Api Api;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGS2Method Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Success;
    
    FYGS2RequestData();
};

