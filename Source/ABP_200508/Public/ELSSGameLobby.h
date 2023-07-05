#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELSSLobbyData.h"
#include "ELSSLobbyMatchPlayerData.h"
#include "ELSSLobbyMatchPlayerDataToClient.h"
#include "LobbyDataReplicateEventDelegate.h"
#include "LobbyStateChangeEventDelegate.h"
#include "SSGameLobbyData.h"
#include "SSOnlinePlayerData.h"
#include "eSSLobbyState.h"
#include "ELSSGameLobby.generated.h"

class AELSSPlayerState;
class AGameMode;
class APlayerController;

UCLASS(Blueprintable)
class ABP_200508_API UELSSGameLobby : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyStateChangeEvent LobbyStateChangeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyDataReplicateEvent LobbyDataReplicateEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELSSLobbyMatchPlayerData> ssMatchPlayerDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSGameLobbyData SSGameLobbyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SSGameStartLimitTime, meta=(AllowPrivateAccess=true))
    float tGameStartLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SSGameValidPlayerCount, meta=(AllowPrivateAccess=true))
    int32 ssGamePlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SSGameNpcCount, meta=(AllowPrivateAccess=true))
    int32 ssGameNpcCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SSGameLobbyState, meta=(AllowPrivateAccess=true))
    eSSLobbyState ssGameLobbyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELSSLobbyMatchPlayerDataToClient> clientMatchPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELSSLobbyMatchPlayerDataToClient> clientPlayerAIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SSGameLobbyData, meta=(AllowPrivateAccess=true))
    FELSSLobbyData ssLobbyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
public:
    UELSSGameLobby();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Update(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool StartupLobby();
    
private:
    UFUNCTION(BlueprintCallable)
    void SSGameServerJoinPlayerNotifyEvent(APlayerController* pController, const FSSOnlinePlayerData& PlayerData, bool isLogin);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SSGameValidPlayerCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SSGameStartLimitTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SSGameNpcCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SSGameLobbyState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SSGameLobbyData();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsLobbyMatchPlayerToCheckClient(TArray<AELSSPlayerState*>& allPlayerList, TArray<FELSSLobbyMatchPlayerDataToClient>& inPlayerList, TArray<FELSSLobbyMatchPlayerDataToClient>& outPlayerList);
    
    UFUNCTION(BlueprintCallable)
    bool IsLobbyMatchAIPlayer(TArray<AELSSPlayerState*>& aiPlayerList);
    
    UFUNCTION(BlueprintCallable)
    bool IsLobbyEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsEmptyLobby();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeLobby(AGameMode* ownerGameMode, const FSSGameLobbyData& datLobby);
    
    UFUNCTION(BlueprintCallable)
    void InitializeForClient();
    
    UFUNCTION(BlueprintCallable)
    void GetMatchPlayerData(TArray<FELSSLobbyMatchPlayerDataToClient>& dats);
    
    UFUNCTION(BlueprintCallable)
    eSSLobbyState GetLobbyState();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLobbyPlayerCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<FELSSLobbyMatchPlayerDataToClient> GetLobbyHottestPlayerDataToClient();
    
    UFUNCTION(BlueprintCallable)
    float GetGameStartTime();
    
    UFUNCTION(BlueprintCallable)
    void ForceLobbySyncDataNoticeToClient();
    
};

