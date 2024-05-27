#pragma once
#include "CoreMinimal.h"
#include "ELSSWebRequestBase.h"
#include "FlexMatchMakeCancel_RequestEventDelegate.h"
#include "eSSRequestResultType.h"
#include "ELSSFlexMatchMakeStopRequest.generated.h"

class UELSSFlexMatchMakeStopRequest;

UCLASS(Blueprintable)
class ABP_200508_API UELSSFlexMatchMakeStopRequest : public UELSSWebRequestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlexMatchMakeCancel_RequestEvent onFlexMatchMakeCancelRequestEvent;
    
    UELSSFlexMatchMakeStopRequest();

private:
    UFUNCTION(BlueprintCallable)
    void RequestResult(const int32 responseCode, const FString& responseData, eSSRequestResultType resultType);
    
public:
    UFUNCTION(BlueprintCallable)
    static UELSSFlexMatchMakeStopRequest* CreateRequestInstance();
    
    UFUNCTION(BlueprintCallable)
    void CreateAPI(const FString& TickedID);
    
};

