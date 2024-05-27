#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGS2ErrorType.h"
#include "SSModeServerParam.h"
#include "SSServerEndpoint.h"
#include "YGS2ClientSetupParam.h"
#include "OnPingCheckFinishedDispatcherDelegate.h"
#include "ELGameServerSelector.generated.h"

class UYGS2RequestBase;

UCLASS(Blueprintable, DefaultConfig, Config=OnlineServer)
class ABP_200508_API UELGameServerSelector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPingCheckFinishedDispatcher OnPingCheckFinishedDispatcher;
    
    UELGameServerSelector();

    UFUNCTION(BlueprintCallable)
    bool SetupServers(const FString& Data, const FString& Key, const FString& SubKey);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCheckServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OverrideYGS2ClientSetupParam(FString& AreaName, FYGS2ClientSetupParam& OutSetupParam, int32 Index, const FString& Key, const FString& SubKey, const FString& TargetOnlineVersion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OverrideSSModeServerEnvData(FSSModeServerParam& outServerData, const FString& Key, const FString& SubKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OverrideSSModeEndpointParam(TArray<FSSServerEndpoint>& outServerData, const FString& Key, const FString& SubKey) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response(EYGS2ErrorType ErrorType, UYGS2RequestBase* RequestBase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetServerNum() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetServerId();
    
};

