#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WrestlerSetupParam.h"
#include "EWrestlerID_N.h"
#include "GameFramework/GameState.h"
#include "ESSGameFlowState.h"
#include "ESSGameStateDebugFlag.h"
#include "ESSLogIconType.h"
#include "ESSPlayerProgress.h"
#include "ESSRoundEventLogType.h"
#include "ESSServerState.h"
#include "SSActivityMatchResult.h"
#include "SSAttentionPlayerInfo.h"
#include "SSGameFlowStateSyncParam.h"
#include "SSGameRuleParam.h"
#include "SSGameStateEventDispatcherDelegate.h"
#include "SSPlayerEquipSettings.h"
#include "SSPreloadAssetInfo.h"
#include "SSWrestlerParam.h"
#include "SSWrestlerSetupParam.h"
#include "Templates/SubclassOf.h"
#include "eSSLobbyState.h"
#include "ELSSGameState.generated.h"

class AActor;
class AELSSAIController;
class AELSSDatabase;
class AELSSFadeManager;
class AELSSItemManager;
class AELSSLocatorManager;
class AELSSPlayer;
class AELSSPlayerState;
class AELSSRoundManager;
class AELSSSaveDataManager;
class AELSSSoundManager;
class AELSSVehicleManager;
class AELSSWeaponThrowProjectile;
class AELSSWeaponTrapObject;
class APawn;
class APlayerState;
class UDataTable;
class UELSSGameLobby;
class UELSSOptimizeManager;
class UELSSPoolManager;

UCLASS(Blueprintable)
class ABP_200508_API AELSSGameState : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSGameStateEventDispatcher EventOnPreEndPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGameFlowState PrevState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StateSyncParam, meta=(AllowPrivateAccess=true))
    FSSGameFlowStateSyncParam StateSyncParamRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShutdownGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoneShutdownNetDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSPlayer> SSPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSAIController> AIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationCheckOffsetZ_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationCheckOffsetZ_Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerEquipSettings TempAIPlayerEquipSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerParam TempWrestlerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TempAIPlayerNameIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AINpcIdCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSSPreloadAssetInfo PreloadAssetInfoRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSLocatorManager> LocatorManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSLocatorManager* LocatorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSSoundManager> SoundManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSSoundManager* SoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSRoundManager> RoundManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoundManager, meta=(AllowPrivateAccess=true))
    AELSSRoundManager* RoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSItemManager> ItemManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemManager, meta=(AllowPrivateAccess=true))
    AELSSItemManager* ItemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSVehicleManager> VehicleManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleManager, meta=(AllowPrivateAccess=true))
    AELSSVehicleManager* VehicleManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ManagerActorArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPlayer*> ValidPlayerList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPlayerState*> SSPlayerArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSSaveDataManager* SaveDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSSaveDataManager> SaveDataManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SurvivorNum, meta=(AllowPrivateAccess=true))
    int32 SurvivorNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastSurvivorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ValidObjectGimmicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSWeaponThrowProjectile*> ValidObjectOils;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSWeaponThrowProjectile*> ValidObjectPushpins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSWeaponThrowProjectile*> ValidObjectFireBottles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSWeaponTrapObject*> ValidObjectTraps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidObjectTrapLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ValidInteractableObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ValidHorseSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSFadeManager* FadeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSGameRuleParam GameRule;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSDatabase> DatabaseType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSDatabase* Database;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UELSSPoolManager* PoolManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PoolableRegistTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UELSSOptimizeManager* OptimizeManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAttentionPlayerInfo AttentionPlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SSModeLobby, meta=(AllowPrivateAccess=true))
    UELSSGameLobby* SSModeLobby;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackUpCVarPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredCVarPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SwicthDesiredCVarPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackUpCVarMaxTempMemoryAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredCVarMaxTempMemoryAllowed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerState* Activity_ExecPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Activity_MatchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString Activity_ReplicatedMatchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSSActivityMatchResult Activity_Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DebugFlags, meta=(AllowPrivateAccess=true))
    int32 DebugFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DebugServerState, meta=(AllowPrivateAccess=true))
    ESSServerState DebugServerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    eSSLobbyState DebugServerLobbyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eSSLobbyState DebugLocalLobbyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eSSLobbyState DebugLocalLobbyStateBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DebugServerAverageFPS, meta=(AllowPrivateAccess=true))
    float DebugServerAverageFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DebugServerMaxDeltaSec_Recently5sec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DebugServerCrashRequestedTime, meta=(AllowPrivateAccess=true))
    float DebugServerCrashRequestedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWrestlerSetupParam> DebugOverrideAIWrestlerSetupParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPreloadAssetInfo PreloadAssetInfoForDebug;
    
public:
    AELSSGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateSurvivorNum();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Setup(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickState_Ready(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_OpenGamePlayScreen(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Loading(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Initialize(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickState_GamePlay(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Exit(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Entrance(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_BeforeInProgress(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_AfterGamePlay(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartOfMatch();
    
public:
    UFUNCTION(BlueprintCallable)
    AELSSPlayer* SpawnSSPlayerByPlayerState(const FTransform& InTransform, AELSSPlayerState* inPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    AActor* SpawnManagerActor(TSubclassOf<AActor> InClass);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AELSSPlayer*> SpawnAISSPlayers(const TArray<EWrestlerID_N>& wrestlerIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AELSSPlayer* SpawnAISSPlayerByWrestlerSetupParam(const FWrestlerSetupParam& inSetupParam, const FVector& InLocation, const FRotator& inRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AELSSPlayer* SpawnAISSPlayer(EWrestlerID_N inWrestlerId, const FVector& InLocation, const FRotator& inRotator);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAIControllerRemainAll(int32 inWrestlerMax);
    
    UFUNCTION(BlueprintCallable)
    AELSSAIController* SpawnAIController(EWrestlerID_N inWrestlerId, const FString& inPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void ShutdownNetDriverOnSignout();
    
    UFUNCTION(BlueprintCallable)
    void ShutdownNetDriverOnFinishedMatch();
    
    UFUNCTION(BlueprintCallable)
    void SetupServerPlayerStateIndex();
    
    UFUNCTION(BlueprintCallable)
    void SetDummyPlayerName();
    
    UFUNCTION(BlueprintCallable)
    void RequestTearDownReplicationConnectionDriver();
    
    UFUNCTION(BlueprintCallable)
    void RequestCloseConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleasePreloadAsset_BP();
    
    UFUNCTION(BlueprintCallable)
    void ReleasePreloadAsset();
    
    UFUNCTION(BlueprintCallable)
    void PrintLog(const FString& Log);
    
    UFUNCTION(BlueprintCallable)
    void PlayMatchPointPay();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_SurvivorNum();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StateSyncParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_SSModeLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RoundManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DebugServerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DebugServerCrashRequestedTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DebugServerAverageFPS();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DebugFlags();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletePreload_VariableAsset();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletePreload_StationalAsset();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedSpawnManagerActorsLocal();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyRoundEvent_Multicast(ESSRoundEventLogType inRoundEvent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyKo_Multicast(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyKilled_Multicast(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyAnnouceAttention_Multicast(int32 inServerPlayerStateIndex, int32 inAttentionPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsReadyStateForServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsEnableAIForServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsState(ESSGameFlowState inState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServerState(ESSServerState inState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsNetworkStatusOnline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchPlayerLobbyEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledServerConnection() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneUIPrepare() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneSyncPreloadAssetInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDoneReplicatesManagerActors() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneOpenGamePlayScreen() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneActorSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeactiveGameSessionForClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompletedPreload() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitializeManagerActors();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProgressFlagForAllPlayers(ESSPlayerProgress Type) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDebugFlag(ESSGameStateDebugFlag Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSVehicleManager* GetVehicleManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSSoundManager* GetSoundManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSRoundManager* GetRoundManager() const;
    
    UFUNCTION(BlueprintCallable)
    UELSSPoolManager* GetPoolManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSLocatorManager* GetLocatorManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSItemManager* GetItemManager() const;
    
    UFUNCTION(BlueprintCallable)
    AELSSDatabase* GetDatabase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* FindSSPlayerStateForWatch_Random(bool inCheckPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* FindSSPlayerState(int32 inServerPlayerIndex, bool inCheckPawn) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitState_Ready();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_OpenGamePlayScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Loading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitState_GamePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Entrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_BeforeInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_AfterGamePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState_Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState_Ready();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_OpenGamePlayScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Loading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState_GamePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Entrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_BeforeInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_AfterGamePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndOfMatch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugTickBP(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetNoTimeouts(bool isNoTimeouts);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetLocalLobbyStateBP(eSSLobbyState inLobbyState);
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintStateInfo(float Time);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DebugAddInstantMessage_Multicast(const FString& inMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeadMySelf();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWrestlerSetupParam CreateWrestlerSetupParam(const FSSWrestlerSetupParam& inSSWrestlerSetupParam) const;
    
    UFUNCTION(BlueprintCallable)
    void CreatePreloadAssetInfoForDebug();
    
    UFUNCTION(BlueprintCallable)
    void CreatePreloadAssetInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearShouldShutdownGameFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMultiPlayFeature() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDoneShutdownNetDriver() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeState_Multicast(ESSGameFlowState inState, int32 inStateSyncId);
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(ESSGameFlowState inState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanStartOfMatch() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginAsyncPreloadVariableAsset_BP();
    
    UFUNCTION(BlueprintCallable)
    void BeginAsyncPreloadVariableAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginAsyncPreloadStationalAsset_BP();
    
    UFUNCTION(BlueprintCallable)
    void BeginAsyncPreloadStationalAsset();
    
    UFUNCTION(BlueprintCallable)
    void ApplyConnectionTimeoutDuration(bool isLobby);
    
};

