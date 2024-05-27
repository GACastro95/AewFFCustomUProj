#pragma once
#include "CoreMinimal.h"
#include "ELSSFlexMatchMakeStartParty_RequestData.h"
#include "ELSSFlexMatchMakeStart_ResponseData.h"
#include "ELSSWebRequestBase.h"
#include "FlexMatchMakeStar_RequestEventDelegate.h"
#include "PingData.h"
#include "eSSRequestResultType.h"
#include "ELSSFlexMatchMakeStartPartyRequest.generated.h"

class UELSSFlexMatchMakeStartPartyRequest;
class UELSSLobbyManager;

UCLASS(Blueprintable)
class ABP_200508_API UELSSFlexMatchMakeStartPartyRequest : public UELSSWebRequestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlexMatchMakeStar_RequestEvent onFlexMatchStartRequestEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSFlexMatchMakeStartParty_RequestData ssRequestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSFlexMatchMakeStart_ResponseData ssResponseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ssRePlaceLatenciesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSLobbyManager* LobbyManager;
    
    UELSSFlexMatchMakeStartPartyRequest();

private:
    UFUNCTION(BlueprintCallable)
    void RequestResult(const int32 responseCode, const FString& responseData, eSSRequestResultType resultType);
    
public:
    UFUNCTION(BlueprintCallable)
    static UELSSFlexMatchMakeStartPartyRequest* CreateRequestInstance();
    
    UFUNCTION(BlueprintCallable)
    void CreateAPI(const FString& buildID, const TArray<FPingData> regionLatencieData, const bool isSinglePlay, int32 singlePlayFixedSecond, const FString& pRegion, const FString& DataID, const int32 GroupId);
    
};

