#pragma once
#include "CoreMinimal.h"
#include "ELSSFlexMatchMakeStatus_RequestData.h"
#include "ELSSFlexMatchMakeStatus_ResponseData.h"
#include "ELSSWebRequestBase.h"
#include "FlexMatchMakeStatus_RequestEventDelegate.h"
#include "eSSRequestResultType.h"
#include "ELSSFlexMatchMakeStatusRequest.generated.h"

class UELSSFlexMatchMakeStatusRequest;

UCLASS(Blueprintable)
class ABP_200508_API UELSSFlexMatchMakeStatusRequest : public UELSSWebRequestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlexMatchMakeStatus_RequestEvent onFlexMatchMakeStatusRequestEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSFlexMatchMakeStatus_RequestData ssRequestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSFlexMatchMakeStatus_ResponseData ssResponseData;
    
    UELSSFlexMatchMakeStatusRequest();

private:
    UFUNCTION(BlueprintCallable)
    void RequestResult(const int32 responseCode, const FString& responseData, eSSRequestResultType resultType);
    
public:
    UFUNCTION(BlueprintCallable)
    static UELSSFlexMatchMakeStatusRequest* CreateRequestInstance();
    
    UFUNCTION(BlueprintCallable)
    void CreateAPI(const FString& TicketId);
    
};

