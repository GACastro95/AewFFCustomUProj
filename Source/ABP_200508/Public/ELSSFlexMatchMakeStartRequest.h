#pragma once
#include "CoreMinimal.h"
#include "ELSSFlexMatchMakeStart_RequestData.h"
#include "ELSSFlexMatchMakeStart_ResponseData.h"
#include "ELSSWebRequestBase.h"
#include "FlexMatchMakeStar_RequestEventDelegate.h"
#include "PingData.h"
#include "eSSRequestResultType.h"
#include "ELSSFlexMatchMakeStartRequest.generated.h"

class UELSSFlexMatchMakeStartRequest;

UCLASS(Blueprintable)
class ABP_200508_API UELSSFlexMatchMakeStartRequest : public UELSSWebRequestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlexMatchMakeStar_RequestEvent onFlexMatchStartRequestEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSFlexMatchMakeStart_RequestData ssRequestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSFlexMatchMakeStart_ResponseData ssResponseData;
    
    UELSSFlexMatchMakeStartRequest();

private:
    UFUNCTION(BlueprintCallable)
    void RequestResult(const int32 responseCode, const FString& responseData, eSSRequestResultType resultType);
    
public:
    UFUNCTION(BlueprintCallable)
    static UELSSFlexMatchMakeStartRequest* CreateRequestInstance();
    
    UFUNCTION(BlueprintCallable)
    void CreateAPI(const FString& buildID, const TArray<FPingData> regionLatencieData, const bool isSinglePlay, int32 singlePlayFixedSecond, const FString& pRegion, const FString& DataID, const int32 GroupId);
    
};

