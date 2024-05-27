#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWrestlerID_N.h"
#include "CreateGameSession_RequestParam.h"
#include "CreatePlayerSession_RequestParam.h"
#include "DescribeGameSessions_RequestParam.h"
#include "EMatchMakeExecuteType.h"
#include "GLAPI_ErrorData.h"
#include "GameLiftGameSession_Response.h"
#include "GameLiftGameSessions_Response.h"
#include "GameLiftPlayerSession_Response.h"
#include "MachMakeEvent_FailedDelegate.h"
#include "MachMakeEvent_SuccessDelegate.h"
#include "RandomJoinMatchData.h"
#include "SSPlayerSessionParam.h"
#include "TimerEventDelegate.h"
#include "GameLiftMatchMakeSystem.generated.h"

class UGLAPI_Base;
class UGameLiftClientObject;
class UGameLiftMatchMakeSystem;

UCLASS(Blueprintable)
class ABP_200508_API UGameLiftMatchMakeSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachMakeEvent_Success onCallEndEventSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachMakeEvent_Failed onCallEndEventFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerEvent onDelayTimerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N SelectedWrestlerID;
    
public:
    UGameLiftMatchMakeSystem();

    UFUNCTION(BlueprintCallable)
    void Update(const float& Delta);
    
    UFUNCTION(BlueprintCallable)
    void SetUserSelectedData(EWrestlerID_N inWrestlerId);
    
    UFUNCTION(BlueprintCallable)
    bool SearchGameSessionToAlias(const FString& aliasID, const FString& Filter, const FString& sort);
    
    UFUNCTION(BlueprintCallable)
    bool RandomGameSessionJoinOrCreate(const FRandomJoinMatchData& dat);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSuccessEvent(const EMatchMakeExecuteType& Type);
    
    UFUNCTION(BlueprintCallable)
    void OnSearchGameSessionSuccess(const FGameLiftGameSessions_Response& gameSessions);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinPlayerSessionSuccess(const FCreatePlayerSession_RequestParam& requestParam, const FGameLiftPlayerSession_Response& responseParam);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinGameSessionToDelay();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinGameSessionSuccess(const FDescribeGameSessions_RequestParam& requestParam, const FGameLiftGameSessions_Response& responseParam);
    
    UFUNCTION(BlueprintCallable)
    void OnErrorEvent(const FGLAPI_ErrorData& err);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateGameSessionSuccess(const FCreateGameSession_RequestParam& reqestParam, const FGameLiftGameSession_Response& responseParam);
    
public:
    UFUNCTION(BlueprintCallable)
    bool JoinPlayerSessionToRequestParam(const FCreatePlayerSession_RequestParam& requestParam);
    
    UFUNCTION(BlueprintCallable)
    bool JoinPlayerSessionToParam(const FString& targetGameSessionId, const FString& playerId, FSSPlayerSessionParam& userDataJson);
    
    UFUNCTION(BlueprintCallable)
    bool JoinPlayerSession(const FString& targetGameSessionId, const FString& playerId, const FString& userDataJson);
    
    UFUNCTION(BlueprintCallable)
    bool JoinGameSessionToRequest(const FDescribeGameSessions_RequestParam& requestParam);
    
    UFUNCTION(BlueprintCallable)
    bool JoinGameSessionToGameSessionData(const FGameLiftGameSession_Response& sessionData);
    
    UFUNCTION(BlueprintCallable)
    bool JoinGameSession(const FString& SessionID);
    
    UFUNCTION(BlueprintCallable)
    void JoinGameServerIpPort(FString& iport);
    
    UFUNCTION(BlueprintCallable)
    void IsMatchMakeEnd(bool& IsEnd);
    
    UFUNCTION(BlueprintCallable)
    UGameLiftMatchMakeSystem* Init(UGameLiftClientObject* gamelift, const FString& playerId, const FString& PlayerData, float delayLimit);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerSessionId(FString& SessionID);
    
    UFUNCTION(BlueprintCallable)
    void GetJoinGamePlayerSessionData(FGameLiftGameSession_Response& GameSession, FGameLiftPlayerSession_Response& playerSession);
    
    UFUNCTION(BlueprintCallable)
    void GetGameServerJoinData(FString& ipPort, FString& joinUserData);
    
    UFUNCTION(BlueprintCallable)
    bool CreateMatchMakeToSessionParam(const FString& aliasID, const FString& sessionTitle);
    
    UFUNCTION(BlueprintCallable)
    bool CreateMatchMakeToRequest(const FCreateGameSession_RequestParam& roomParam);
    
    UFUNCTION(BlueprintCallable)
    bool CreateMatchMake(const int32& pNum, const int32& pMin, const FString& aliasID, const FString& sessionTitle);
    
    UFUNCTION(BlueprintCallable)
    static UGameLiftMatchMakeSystem* CreateGameLiftMatchMakeSystem();
    
    UFUNCTION(BlueprintCallable)
    void CreateClientJsonData(FString& joinData);
    
private:
    UFUNCTION(BlueprintCallable)
    bool ActivateMatchMakeAPI(UGLAPI_Base* Api);
    
};

