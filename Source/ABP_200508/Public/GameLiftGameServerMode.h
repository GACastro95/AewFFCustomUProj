#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GameLiftGameSession_Response.h"
#include "GameServerJoinPlayerEventDelegate.h"
#include "SSOnlinePlayerData.h"
#include "GameLiftGameServerMode.generated.h"

class AController;
class APlayerState;

UCLASS(Blueprintable, NonTransient)
class ABP_200508_API AGameLiftGameServerMode : public AGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSOnlinePlayerData> gameJoinPlayer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameServerJoinPlayerEvent SSGameServerJoinPlayerEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameLiftGameSession_Response joinGameSessionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOnlinePlayerData joinPlayerDataToDummy;
    
public:
    AGameLiftGameServerMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePlayerSessionPolicyIsStopPlayerJoin();
    
    UFUNCTION(BlueprintCallable)
    void PrepareGameSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartGameSession() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerLoginEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerJoinEnd() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsGameServerActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPlayerJoinEnd() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableSDK();
    
    UFUNCTION(BlueprintCallable)
    static FString GetServerJoinOptionName();
    
    UFUNCTION(BlueprintCallable)
    APlayerState* GetLoginPlayerToPlayerState(const int32 idx);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLoginPlayerNum();
    
    UFUNCTION(BlueprintCallable)
    FSSOnlinePlayerData GetLoginPlayerDataToController(const AController* pController);
    
    UFUNCTION(BlueprintCallable)
    FSSOnlinePlayerData GetLoginPlayerData(const APlayerState* pSate);
    
    UFUNCTION(BlueprintCallable)
    int32 GetJoinPlayerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameLiftGameSession_Response GetJoinGameSessionData() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetGameSessionPlayerMax();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCreatePlayerPawnNum();
    
    UFUNCTION(BlueprintCallable)
    void GameServerEnd();
    
};

