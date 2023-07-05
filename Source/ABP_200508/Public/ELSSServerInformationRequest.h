#pragma once
#include "CoreMinimal.h"
#include "ELSSServerInformation_ResponseData.h"
#include "ELSSWebRequestBase.h"
#include "ServerInformation_RequestEventDelegate.h"
#include "eSSRequestResultType.h"
#include "ELSSServerInformationRequest.generated.h"

class UELSSServerInformationRequest;

UCLASS(Blueprintable)
class ABP_200508_API UELSSServerInformationRequest : public UELSSWebRequestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerInformation_RequestEvent onServerInformationRequestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSServerInformation_ResponseData ssResponseData;
    
    UELSSServerInformationRequest();
private:
    UFUNCTION(BlueprintCallable)
    void RequestResult(const int32 responseCode, const FString& responseData, eSSRequestResultType resultType);
    
public:
    UFUNCTION(BlueprintCallable)
    static UELSSServerInformationRequest* CreateRequestInstance();
    
};

