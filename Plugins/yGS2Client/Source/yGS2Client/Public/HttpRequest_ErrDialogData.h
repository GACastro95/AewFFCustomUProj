#pragma once
#include "CoreMinimal.h"
#include "ErrorRequestRetryEventDelegate.h"
#include "RequestErrorDialogEventDelegate.h"
#include "Request_ErrSetupData.h"
#include "HttpRequest_ErrDialogData.generated.h"

USTRUCT(BlueprintType)
struct YGS2CLIENT_API FHttpRequest_ErrDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequest_ErrSetupData errDialogData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestErrorDialogEvent errDialogEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FErrorRequestRetryEvent errRetryEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 errDialogOpenRetryCnt;
    
    FHttpRequest_ErrDialogData();
};

