#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EWrestlerID_N.h"
#include "GameFramework/PlayerController.h"
#include "EEOSAntiCheatClientViolationType.h"
#include "ESSActionTransitTrigger.h"
#include "ESSAliveStateType.h"
#include "ESSAttentionGaugeState.h"
#include "ESSAttentionReason.h"
#include "ESSCameraShakeType.h"
#include "ESSCharacterHpType.h"
#include "ESSClientFlowState.h"
#include "ESSEndGameReason.h"
#include "ESSGameFlowState.h"
#include "ESSGameStateDebugFlag.h"
#include "ESSHeatSkillCategory.h"
#include "ESSInteractExecute.h"
#include "ESSInteractOperate.h"
#include "ESSLogIconType.h"
#include "ESSMouseControlMode.h"
#include "ESSOperationGuideExecute.h"
#include "ESSPlayerDebugFlag.h"
#include "ESSVehicleType.h"
#include "SSHeatLevelUpInfo.h"
#include "SSLogTextParam.h"
#include "SSNearInteractableObjectStatus.h"
#include "SSNearPlayerStatus.h"
#include "SSPlayerControllerEventDispatcherDelegate.h"
#include "SSPlayerEquipSettings.h"
#include "Templates/SubclassOf.h"
#include "ELSSPlayerController.generated.h"

class AActor;
class AELMenuOperationalWidgetManagerBase;
class AELSSGameplayCamera;
class AELSSPickupBase;
class AELSSPlayer;
class AELSSPlayerController;
class AELSSPlayerState;
class AELSSStationalCamera;
class AELSSUIManagerInGame;
class AELSSVictoryCutscene;
class APawn;
class UELCommonLayout;
class USSModeAntiCheatData;

UCLASS(Blueprintable)
class ABP_200508_API AELSSPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerControllerEventDispatcher EventOnPress_MenuLB;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerControllerEventDispatcher EventOnPress_MenuRB;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerControllerEventDispatcher EventOnPress_MenuDecision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerControllerEventDispatcher EventOnRelease_MenuDecision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerControllerEventDispatcher EventOnPress_MenuRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerControllerEventDispatcher EventOnPress_MenuLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerControllerEventDispatcher EventOnPress_MenuAccept;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerControllerEventDispatcher EventOnPress_MenuCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerControllerEventDispatcher EventOnRelease_MenuCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAllowCharacterControll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRestrictMoveOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNetworkError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsApiDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMouseControlMode MouseControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StoredMousePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSGameplayCamera> GameplayCameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSGameplayCamera* GameplayCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSStationalCamera> StationalCameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSStationalCamera* StationalCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSClientFlowState PrevState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSEndGameReason EndGameReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELMenuOperationalWidgetManagerBase* MenuOperationalWidgetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerState* WatchTargetPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WatchGameIgnoreDecisionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSVictoryCutscene* VictoryCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSNearPlayerStatus> NearPlayerStatusList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowNearPlayerStatusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSNearInteractableObjectStatus> NearInteractableObjectStatusList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractableObjectDotIconDistance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor_KilledPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor_Common;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor_UnCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor_Rare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor_Epic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor_Legend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableOpenPauseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JoinedPlayerSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JoinedPlayerId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> TempLocalPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPlayerController*> ChildPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InputOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerController* ParentPlayerController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSModeAntiCheatData* ssAntiCheatData;
    
public:
    AELSSPlayerController();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WatchGame_ResetUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WatchGame_RequestNext(bool toVictoryRoyale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WatchGame_OnRequestChangePlayer(bool isNext);
    
    UFUNCTION(BlueprintCallable)
    void WatchGame_OnReleaseMenuDecision();
    
    UFUNCTION(BlueprintCallable)
    void WatchGame_OnPressMenuRB();
    
    UFUNCTION(BlueprintCallable)
    void WatchGame_OnPressMenuLB();
    
    UFUNCTION(BlueprintCallable)
    void WatchGame_OnPressMenuDecision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WatchGame_OnChangePlayer(AELSSPlayerState* inNewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WatchGame_CancelHold();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WatchGame_ApplyHoldRatio(float InRatio);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateViewTarget(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNearPlayerList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateNearInteractableObjectList();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UIPrepare_RPC();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMinimapMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleHUDVisibility();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickClientFlowState_WatchVictoryRoyale(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void TickClientFlowState_WatchGame_Native(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickClientFlowState_WatchGame(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickClientFlowState_VictoryRoyale(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickClientFlowState_Result(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickClientFlowState_GamePlay(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickClientFlowState_Finish(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickClientFlowState_Exit(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickClientFlowState_Closing(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickClientFlowState_BeforeGamePlay(float inDeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SyncWatchTargetPlayer_Server(int32 inWatchPlayerIndex, int32 inSyncId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchMinimapMode(bool inIsWholeMap);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartResultTally_RPC();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SSAntiCheatClient_DisconnectServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SSAntiCheatClient_ConnectServer(const int32 Type, const int32 Platform, const FString& ipAddress, const FString& playerId, const FString& ProductUserID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetWatchTargetPlayerState(AELSSPlayerState* inPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleOtherPlayerOnlineID(AELSSPlayer* inTargetPlayer, bool InVisible, bool InHasCarrot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleInteractDotIcon(AActor* inTargetActor, bool InVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRStickInputZero();
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictMoveOnly(bool isAllow);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetPlayerDebugFlag_Server(ESSPlayerDebugFlag Type, bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerDataToSync();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetOperationalWidhgetManager(AELMenuOperationalWidgetManagerBase* InOperationalWidgetManager);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMouseControlMode(ESSMouseControlMode inMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMinimapTexture(int32 InMinimapID);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapMode(bool inIsWholeMap);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetGameStateDebugFlag_Server(ESSGameStateDebugFlag Type, bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayCameraTarget(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultViewTarget(float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAnyInputButtonCheck(const bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowCharacterControll(bool isAllow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ResultMenuPrepare_RPC();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestLeaveGame_Client();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestEndGameFlow_Client(ESSEndGameReason inEndReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestClientFlowGamePlay();
    
    UFUNCTION(BlueprintCallable)
    void RegisterEndGameReason(ESSEndGameReason inEndReason);
    
    UFUNCTION(BlueprintCallable)
    void RefreshNearPlayerStatus(AELSSPlayer* inPlayer);
    
    UFUNCTION(BlueprintCallable)
    void PrintLog(const FString& Log);
    
    UFUNCTION(BlueprintCallable)
    void PlayCameraShake(ESSCameraShakeType InType, float inScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenPauseMenu_Impl(bool disallowedCharacterControllWhenOpen);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPauseMenu(bool disallowedCharacterControllWhenOpen);
    
    UFUNCTION(BlueprintCallable)
    void OnReservedReturnToMainMenuByNetworkError();
    
    UFUNCTION(BlueprintCallable)
    void OnPrepareVictoryCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerWatchedPlayerUpdate(int32 inWatchedPlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLearnHeatSkill(ESSHeatSkillCategory inCategory, int32 inHeatSkillId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerKoHpUpdate(int32 inKoHp, int32 inKoMaxHp, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerKo(AELSSPlayerState* inKoPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInteractGaugeUpdate(AActor* inInteractTarget, float inRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerHpUpdate(int32 inHp, int32 inMaxHP, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerHeatMeterUpdate(int32 inHeatLevel, float inExpRate, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerHeatLevelUp(int32 inHeatLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerGetOnVehicle(AELSSPlayer* inPlayer, bool InFlag, ESSVehicleType InVehicleType, int32 inDurability, int32 InMaxDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerDead(AELSSPlayerState* inDeadPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeReviveTimer(float inTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangePossessOfCarrot(bool flg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeOperationGuide(ESSOperationGuideExecute InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeMoveSet(const FSSHeatLevelUpInfo& inLevelUpInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeInventoryPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeInventoryLimit(bool flg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeInventoryIconValue(int32 InIndex, int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeInventory(const TArray<AELSSPickupBase*>& inInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeInteractTarget(ESSInteractExecute inInteractExecute, ESSInteractOperate InInteractOperate, AActor* inNewInteractTarget, const FVector& InOffset, int32 inNewId, int32 inNewValue, ESSInteractExecute currentExecute, int32 inCurrentId, int32 inCurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeFinisherTarget(AActor* inNewTarget, ESSInteractExecute inInteractExec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeCurrentVehicleDurability(ESSVehicleType InVehicleType, int32 inDurability, int32 InMaxDurability, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeCurrentShieldDurability(int32 inDurability, int32 InMaxDurability, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeAliveStateType(ESSAliveStateType inAliveStateType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangeAimMode(bool inAimMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerAttentionUpdate(ESSAttentionGaugeState inGaugeState, float inAttentionPoint, bool inAfterFever, ESSAttentionReason inReason, float inAddPoint, bool inImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerAttentionLevelUpdate(int32 inAttentionLevel, int32 inAttentionIcon, int32 inNextFeverTimePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerAttentionBoostUpdate(float inAttentionBoost);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtherPlayerHpUpdateSpecifiedType(AELSSPlayer* inPlayer, ESSCharacterHpType InType, int32 inHp, int32 inMaxHP);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOtherPlayerHpUpdate(AELSSPlayer* inPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisconnectDialogShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeTarget(AActor* inNewTarget, AActor* inPrevTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInputMode(bool isKeyboard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeGameFlowState(ESSGameFlowState inGameFlowState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnChangeClientFlowState_Server(ESSClientFlowState inClientState, int32 inSyncId);
    
    UFUNCTION(BlueprintCallable)
    void OnAntiCheatClientViolated(EEOSAntiCheatClientViolationType ViolationType, const FString& StatusMessage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyEndGameFromClient_Server(ESSEndGameReason inEndGameReason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyDetectedCheat_ClientToServer(int32 inViolationType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsTransitionToWatchGame() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsShowPlayerStatus(AELSSPlayer* inPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsShowOnlineID(AELSSPlayer* inPlayer) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsShowInteractableObjectStatus(AActor* InActor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaveGameByAntiCheat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UIPrepare();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ResultMenuPrepare();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_RequestLeaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_RequestEndGameFlow(ESSEndGameReason inEndReason);
    
    UFUNCTION(BlueprintCallable)
    bool IsViewTargetGameplayCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegisteredEndGameReasonOnServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenErrorDialog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledInputByThisController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneSyncResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneResultAPI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientFlowState(ESSClientFlowState inClientState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChildPlayerController() const;
    
    UFUNCTION(BlueprintCallable)
    AELSSPlayer* GetWatchTargetPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AELSSUIManagerInGame* GetUIManager() const;
    
    UFUNCTION(BlueprintCallable)
    AELSSStationalCamera* GetStationalCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRightStickInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UELCommonLayout* GetPauseMenuCommonLayout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerController* GetParentSSPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNearPlayerHpRatio(AELSSPlayer* inPlayer, float& outHpRatio, float& outKoHpRatio, float& outShieldDurabilityRatio) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMouseMoveInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLeftStickInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLastRightStickInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLastMouseMoveInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLastLeftStickInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetGameplayCameraTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSGameplayCamera* GetGameplayCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSEndGameReason GetEndGameReasonOnServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCameraRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetAssociatedSSPlayer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitClientFlowState_WatchVictoryRoyale();
    
    UFUNCTION(BlueprintCallable)
    void ExitClientFlowState_WatchGame_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitClientFlowState_WatchGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitClientFlowState_VictoryRoyale();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitClientFlowState_Result();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitClientFlowState_GamePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitClientFlowState_Finish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitClientFlowState_Exit();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExitClientFlowState_Dialog_Native();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitClientFlowState_Closing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitClientFlowState_BeforeGamePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterClientFlowState_WatchVictoryRoyale();
    
    UFUNCTION(BlueprintCallable)
    void EnterClientFlowState_WatchGame_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterClientFlowState_WatchGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterClientFlowState_VictoryRoyale();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterClientFlowState_Result();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterClientFlowState_GamePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterClientFlowState_Finish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterClientFlowState_Exit();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnterClientFlowState_Dialog_Native();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterClientFlowState_Closing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterClientFlowState_BeforeGamePlay();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndViewControlledPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dialog_OnPressMenuRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dialog_OnPressMenuLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dialog_OnPressMenuCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dialog_OnPressMenuAccept();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugVehicleSetDurability(float Ratio, bool isAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugVehicleResetRotation(bool isAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugVehicleInvincible(bool IsOn, bool isAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugVehicleFullDurability(bool isAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSpawnWeapon(int32 ID, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSpawnVehicle(int32 ID, float offsetDistance, float offsetZ, float offsetRoll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSpawnShield(int32 ID, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSpawnItemBox(int32 inItemBoxType, int32 inSpawnNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSpawnItem(int32 ID, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSpawnAndEquipWeapon(int32 ID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSetPlayerEquipSettings(const FSSPlayerEquipSettings& InParam, EWrestlerID_N inWrestlerId, bool inDuplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSetHeatLevel(int32 inHeatLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugSetAttentionPoint(int32 inAttentionPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugServerMemReport(bool full);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugServerCrashRequest();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugRoundSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugResetAttention();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void DebugNotifyChangePlayer_Client();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugNoResponseMode(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugNetworkProfilerOnServer(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugLobbySkip();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugForciblyEndMatch();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugDuplicateSSPlayer(bool inPossessPlayer, bool inBaseKill);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugDestroyAllPickupObjects();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAIPlayerSpawnPresetByName(const FString& InName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAIPlayerSpawnPreset(int32 InFaceID, int32 InBodyID, int32 InHairID, int32 InBottomsID, int32 InShoesID, int32 InSuitID, bool InRandom);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAIPlayerSpawn(EWrestlerID_N WrestlerID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAIPlayerNoDamage(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAIPlayerDisableAll(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAIPlayerAutoRequestTransit(ESSActionTransitTrigger Trigger, float intervalTime, bool autoJump);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAIPlayerAutoMove(bool IsOn, float Yaw, float RotateSpeed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAIPlayerAutoKill(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugAddAttentionPoint(ESSAttentionReason inReason, int32 inAddPoint);
    
    UFUNCTION(BlueprintCallable)
    void DeactiveStationalCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ConvertLeftStickToMoveInput(const FVector2D& inStickInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClosePauseMenu_Impl(bool allowedCharacterControllWhenClose);
    
    UFUNCTION(BlueprintCallable)
    bool ClosePauseMenu(bool allowedCharacterControllWhenClose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInSightFromCameraForInteract(AActor* inCheckActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInSightFromCamera(AActor* inCheckActor, float inTargetOffsetZ) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCompletePlayerSetup() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllowCharacterControll() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeClientFlowState(ESSClientFlowState inClientState);
    
    UFUNCTION(BlueprintCallable)
    void BeginViewControlledPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddInstantMessageByList(const TArray<FSSLogTextParam>& inTextParam, ESSLogIconType inLogType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddInstantMessage(const FString& inMessage, ESSLogIconType inLogType);
    
};

