#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Request_ErrSetupData.h"
#include "ELSSFlexMatchMakeStart_ResponseData.h"
#include "ELSSFlexMatchMakeStatus_ResponseData.h"
#include "ELSSFlexMatchMakeStop_ResponseData.h"
#include "PingData.h"
#include "SSGameMatchMakeErrorEventDelegate.h"
#include "SSGameMatchMakeEventDelegate.h"
#include "SSPlayerEquipSettings.h"
#include "SSSuccessMatchData.h"
#include "SSWrestlerMovePresetParam.h"
#include "eSSGameMatchMakeState.h"
#include "eSSModeAPIType.h"
#include "eSSRequestResultType.h"
#include "ELSSGameMatchMakeSystem.generated.h"

class UELSSGameMatchMakeSystem;
class UELSSLobbyManager;

UCLASS(Blueprintable)
class ABP_200508_API UELSSGameMatchMakeSystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSGameMatchMakeErrorEvent onSSGameMatchMakeErrorEvent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSGameMatchMakeEvent onSSGameMatchMakeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSuccessMatchData ssMatchSuccessData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eSSGameMatchMakeState ssMatchMakeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ssIsNextUpdateWaitSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ssIsRequestCancel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ssMatchRequestRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ssCancelRequestRef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentTicketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestedCancel;
    
public:
    UELSSGameMatchMakeSystem();

    UFUNCTION(BlueprintCallable)
    bool UpdateMatchMakeRequest();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateEOSLobby(UELSSLobbyManager* inLobbyMng);
    
public:
    UFUNCTION(BlueprintCallable)
    bool StopMatchMakeRequest();
    
    UFUNCTION(BlueprintCallable)
    bool StartMatchMakeRequest(const TArray<FPingData> regionLatencieData, const FString& ssBuildVersion, const FString& selectRegion);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFlexMatchDataTimer();
    
private:
    UFUNCTION(BlueprintCallable)
    void SSWebAPI_FlexMatchStatusResult(const FELSSFlexMatchMakeStatus_ResponseData& response, eSSRequestResultType responseType);
    
    UFUNCTION(BlueprintCallable)
    void SSWebAPI_FlexMatchStartResult(const FELSSFlexMatchMakeStart_ResponseData& response, eSSRequestResultType responseType);
    
    UFUNCTION(BlueprintCallable)
    void SSWebAPI_FlexMatchCancelResult(eSSRequestResultType responseType, const FELSSFlexMatchMakeStop_ResponseData& response);
    
public:
    UFUNCTION(BlueprintCallable)
    void RetryMatchMake(const eSSModeAPIType retryAPI, const int32 retryCnt);
    
    UFUNCTION(BlueprintCallable)
    bool RestartMatchMake(const TArray<FPingData> regionLatencieData, const FString& ssBuildVersion, const FString& selectRegion);
    
    UFUNCTION(BlueprintCallable)
    void Restart();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void PreviewMatchRequestData();
    
    UFUNCTION(BlueprintCallable)
    bool IsMatchMakeCheck();
    
    UFUNCTION(BlueprintCallable)
    void ForceMatchEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void ErrorRetryEvent(const FRequest_ErrSetupData& apiErrData, const int32 errRetryCnt);
    
    UFUNCTION(BlueprintCallable)
    void ErrorCommonEvent(const bool isDialogYES, const FRequest_ErrSetupData errDialogData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugGetOverrideRegionInfo(bool& outUseOverride, FString& outSelectedRegionName, TArray<FPingData>& outTargetRegionData);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateJoinGameServerData(FString& joinData, const FSSWrestlerMovePresetParam& presetData, const FSSPlayerEquipSettings& equipSettings);
    
    UFUNCTION(BlueprintCallable)
    UELSSGameMatchMakeSystem* CreateGameMatchMakeSystem();
    
    UFUNCTION(BlueprintCallable)
    bool CanStopMatchMake();
    
};

