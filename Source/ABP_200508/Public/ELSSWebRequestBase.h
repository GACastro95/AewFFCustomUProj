#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ErrorRequestRetryEventDelegate.h"
#include "HttpRequest_ErrDialogData.h"
#include "ELSSRequestData.h"
#include "eSSModeAPIType.h"
#include "yEnDialogBoxResult.h"
#include "ELSSWebRequestBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSWebRequestBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eSSModeAPIType requestAPIType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHttpRequest_ErrDialogData mErrDialogData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FErrorRequestRetryEvent mErrRetryEvent;
    
    UELSSWebRequestBase();
    UFUNCTION(BlueprintCallable)
    bool RequestWebAPI();
    
    UFUNCTION(BlueprintCallable)
    void RequestCancel();
    
    UFUNCTION(BlueprintCallable)
    FString GetRequestURL();
    
    UFUNCTION(BlueprintCallable)
    void ErrorDialogEnd(const yEnDialogBoxResult dialogResult);
    
    UFUNCTION(BlueprintCallable)
    bool AnyRequestWebAPI(const FELSSRequestData& activateData);
    
};

