// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSClientFlowState : uint8;
class AActor;
struct FVector2D;
struct FVector;
enum class ESSAttentionReason : uint8;
enum class ESSActionTransitTrigger : uint8;
enum class EWrestlerID_N : uint8;
struct FSSPlayerEquipSettings;
class AELSSPlayer;
struct FRotator;
enum class ESSEndGameReason : uint8;
class AELSSGameplayCamera;
class APawn;
class AELSSPlayerController;
class AELSSStationalCamera;
enum class EEOSAntiCheatClientViolationType : uint8;
class AELSSPlayerState;
enum class ESSLogIconType : uint8;
enum class ESSCameraShakeType : uint8;
enum class ESSGameStateDebugFlag : uint8;
enum class ESSMouseControlMode : uint8;
class AELMenuOperationalWidgetManagerBase;
enum class ESSPlayerDebugFlag : uint8;
struct FSSLogTextParam;
class UELCommonLayout;
class AELSSUIManagerInGame;
enum class ESSGameFlowState : uint8;
enum class ESSCharacterHpType : uint8;
enum class ESSAttentionGaugeState : uint8;
enum class ESSAliveStateType : uint8;
enum class ESSVehicleType : uint8;
enum class ESSInteractExecute : uint8;
enum class ESSInteractOperate : uint8;
class AELSSPickupBase;
struct FSSHeatLevelUpInfo;
enum class ESSOperationGuideExecute : uint8;
enum class ESSHeatSkillCategory : uint8;
#ifdef ABP_200508_ELSSPlayerController_generated_h
#error "ELSSPlayerController.generated.h already included, missing '#pragma once' in ELSSPlayerController.h"
#endif
#define ABP_200508_ELSSPlayerController_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_RPC_WRAPPERS \
	virtual void DebugAddAttentionPoint_Implementation(ESSAttentionReason inReason, int32 inAddPoint); \
	virtual void DebugAIPlayerAutoKill_Implementation(bool IsOn); \
	virtual void DebugAIPlayerAutoMove_Implementation(bool IsOn, float Yaw, float RotateSpeed); \
	virtual void DebugAIPlayerAutoRequestTransit_Implementation(ESSActionTransitTrigger Trigger, float intervalTime, bool autoJump); \
	virtual void DebugAIPlayerDisableAll_Implementation(bool IsOn); \
	virtual void DebugAIPlayerNoDamage_Implementation(bool IsOn); \
	virtual void DebugAIPlayerSpawn_Implementation(EWrestlerID_N WrestlerID); \
	virtual void DebugAIPlayerSpawnPreset_Implementation(int32 InFaceID, int32 InBodyID, int32 InHairID, int32 InBottomsID, int32 InShoesID, int32 InSuitID, bool InRandom); \
	virtual void DebugAIPlayerSpawnPresetByName_Implementation(const FString& InName); \
	virtual void DebugDestroyAllPickupObjects_Implementation(); \
	virtual void DebugDuplicateSSPlayer_Implementation(bool inPossessPlayer, bool inBaseKill); \
	virtual void DebugForciblyEndMatch_Implementation(); \
	virtual void DebugLobbySkip_Implementation(); \
	virtual void DebugNetworkProfilerOnServer_Implementation(bool IsOn); \
	virtual void DebugNoResponseMode_Implementation(bool IsOn); \
	virtual void DebugNotifyChangePlayer_Client_Implementation(); \
	virtual void DebugResetAttention_Implementation(); \
	virtual void DebugRoundSpeed_Implementation(float Speed); \
	virtual void DebugServerCrashRequest_Implementation(); \
	virtual void DebugServerMemReport_Implementation(bool full); \
	virtual void DebugSetAttentionPoint_Implementation(int32 inAttentionPoint); \
	virtual void DebugSetHeatLevel_Implementation(int32 inHeatLevel); \
	virtual void DebugSetPlayerEquipSettings_Implementation(FSSPlayerEquipSettings const& InParam, EWrestlerID_N inWrestlerId, bool inDuplicate); \
	virtual void DebugSpawnAndEquipWeapon_Implementation(int32 ID); \
	virtual void DebugSpawnItem_Implementation(int32 ID, int32 Amount); \
	virtual void DebugSpawnItemBox_Implementation(int32 inItemBoxType, int32 inSpawnNum); \
	virtual void DebugSpawnShield_Implementation(int32 ID, int32 Amount); \
	virtual void DebugSpawnVehicle_Implementation(int32 ID, float offsetDistance, float offsetZ, float offsetRoll); \
	virtual void DebugSpawnWeapon_Implementation(int32 ID, int32 Amount); \
	virtual void DebugVehicleFullDurability_Implementation(bool isAll); \
	virtual void DebugVehicleInvincible_Implementation(bool IsOn, bool isAll); \
	virtual void DebugVehicleResetRotation_Implementation(bool isAll); \
	virtual void DebugVehicleSetDurability_Implementation(float Ratio, bool isAll); \
	virtual void NotifyDetectedCheat_ClientToServer_Implementation(int32 inViolationType); \
	virtual void NotifyEndGameFromClient_Server_Implementation(ESSEndGameReason inEndGameReason); \
	virtual void OnChangeClientFlowState_Server_Implementation(ESSClientFlowState inClientState, int32 inSyncId); \
	virtual void OnPlayerDead_Implementation(AELSSPlayerState* inDeadPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon); \
	virtual void OnPlayerKo_Implementation(AELSSPlayerState* inKoPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon); \
	virtual void RequestEndGameFlow_Client_Implementation(ESSEndGameReason inEndReason); \
	virtual void RequestLeaveGame_Client_Implementation(); \
	virtual void ResultMenuPrepare_RPC_Implementation(); \
	virtual void SetGameStateDebugFlag_Server_Implementation(ESSGameStateDebugFlag Type, bool IsOn); \
	virtual void SetPlayerDebugFlag_Server_Implementation(ESSPlayerDebugFlag Type, bool IsOn); \
	virtual void SSAntiCheatClient_ConnectServer_Implementation(const int32 Type, const int32 Platform, const FString& ipAddress, const FString& playerId, const FString& ProductUserID); \
	virtual void SSAntiCheatClient_DisconnectServer_Implementation(); \
	virtual void StartResultTally_RPC_Implementation(); \
	virtual void SyncWatchTargetPlayer_Server_Implementation(int32 inWatchPlayerIndex, int32 inSyncId); \
	virtual void UIPrepare_RPC_Implementation(); \
 \
	DECLARE_FUNCTION(execBeginViewControlledPawn); \
	DECLARE_FUNCTION(execChangeClientFlowState); \
	DECLARE_FUNCTION(execCheckAllowCharacterControll); \
	DECLARE_FUNCTION(execCheckCompletePlayerSetup); \
	DECLARE_FUNCTION(execCheckInSightFromCamera); \
	DECLARE_FUNCTION(execCheckInSightFromCameraForInteract); \
	DECLARE_FUNCTION(execClosePauseMenu); \
	DECLARE_FUNCTION(execConvertLeftStickToMoveInput); \
	DECLARE_FUNCTION(execDeactiveStationalCamera); \
	DECLARE_FUNCTION(execDebugAddAttentionPoint); \
	DECLARE_FUNCTION(execDebugAIPlayerAutoKill); \
	DECLARE_FUNCTION(execDebugAIPlayerAutoMove); \
	DECLARE_FUNCTION(execDebugAIPlayerAutoRequestTransit); \
	DECLARE_FUNCTION(execDebugAIPlayerDisableAll); \
	DECLARE_FUNCTION(execDebugAIPlayerNoDamage); \
	DECLARE_FUNCTION(execDebugAIPlayerSpawn); \
	DECLARE_FUNCTION(execDebugAIPlayerSpawnPreset); \
	DECLARE_FUNCTION(execDebugAIPlayerSpawnPresetByName); \
	DECLARE_FUNCTION(execDebugDestroyAllPickupObjects); \
	DECLARE_FUNCTION(execDebugDuplicateSSPlayer); \
	DECLARE_FUNCTION(execDebugForciblyEndMatch); \
	DECLARE_FUNCTION(execDebugLobbySkip); \
	DECLARE_FUNCTION(execDebugNetworkProfilerOnServer); \
	DECLARE_FUNCTION(execDebugNoResponseMode); \
	DECLARE_FUNCTION(execDebugNotifyChangePlayer_Client); \
	DECLARE_FUNCTION(execDebugResetAttention); \
	DECLARE_FUNCTION(execDebugRoundSpeed); \
	DECLARE_FUNCTION(execDebugServerCrashRequest); \
	DECLARE_FUNCTION(execDebugServerMemReport); \
	DECLARE_FUNCTION(execDebugSetAttentionPoint); \
	DECLARE_FUNCTION(execDebugSetHeatLevel); \
	DECLARE_FUNCTION(execDebugSetPlayerEquipSettings); \
	DECLARE_FUNCTION(execDebugSpawnAndEquipWeapon); \
	DECLARE_FUNCTION(execDebugSpawnItem); \
	DECLARE_FUNCTION(execDebugSpawnItemBox); \
	DECLARE_FUNCTION(execDebugSpawnShield); \
	DECLARE_FUNCTION(execDebugSpawnVehicle); \
	DECLARE_FUNCTION(execDebugSpawnWeapon); \
	DECLARE_FUNCTION(execDebugVehicleFullDurability); \
	DECLARE_FUNCTION(execDebugVehicleInvincible); \
	DECLARE_FUNCTION(execDebugVehicleResetRotation); \
	DECLARE_FUNCTION(execDebugVehicleSetDurability); \
	DECLARE_FUNCTION(execEndViewControlledPawn); \
	DECLARE_FUNCTION(execEnterClientFlowState_Dialog_Native); \
	DECLARE_FUNCTION(execEnterClientFlowState_WatchGame_Native); \
	DECLARE_FUNCTION(execExitClientFlowState_Dialog_Native); \
	DECLARE_FUNCTION(execExitClientFlowState_WatchGame_Native); \
	DECLARE_FUNCTION(execGetAssociatedSSPlayer); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetEndGameReasonOnServer); \
	DECLARE_FUNCTION(execGetGameplayCamera); \
	DECLARE_FUNCTION(execGetGameplayCameraTarget); \
	DECLARE_FUNCTION(execGetLastLeftStickInput); \
	DECLARE_FUNCTION(execGetLastMouseMoveInput); \
	DECLARE_FUNCTION(execGetLastRightStickInput); \
	DECLARE_FUNCTION(execGetLeftStickInput); \
	DECLARE_FUNCTION(execGetMouseMoveInput); \
	DECLARE_FUNCTION(execGetMoveInput); \
	DECLARE_FUNCTION(execGetNearPlayerHpRatio); \
	DECLARE_FUNCTION(execGetParentSSPlayerController); \
	DECLARE_FUNCTION(execGetRightStickInput); \
	DECLARE_FUNCTION(execGetStationalCamera); \
	DECLARE_FUNCTION(execGetWatchTargetPlayer); \
	DECLARE_FUNCTION(execIsChildPlayerController); \
	DECLARE_FUNCTION(execIsClientFlowState); \
	DECLARE_FUNCTION(execIsDoneResultAPI); \
	DECLARE_FUNCTION(execIsDoneSyncResult); \
	DECLARE_FUNCTION(execIsEnabledInputByThisController); \
	DECLARE_FUNCTION(execIsOpenErrorDialog); \
	DECLARE_FUNCTION(execIsRegisteredEndGameReasonOnServer); \
	DECLARE_FUNCTION(execIsViewTargetGameplayCamera); \
	DECLARE_FUNCTION(execNeedsShowInteractableObjectStatus); \
	DECLARE_FUNCTION(execNeedsShowOnlineID); \
	DECLARE_FUNCTION(execNeedsShowPlayerStatus); \
	DECLARE_FUNCTION(execNeedsTransitionToWatchGame); \
	DECLARE_FUNCTION(execNotifyDetectedCheat_ClientToServer); \
	DECLARE_FUNCTION(execNotifyEndGameFromClient_Server); \
	DECLARE_FUNCTION(execOnAntiCheatClientViolated); \
	DECLARE_FUNCTION(execOnChangeClientFlowState_Server); \
	DECLARE_FUNCTION(execOnOtherPlayerHpUpdate); \
	DECLARE_FUNCTION(execOnPlayerDead); \
	DECLARE_FUNCTION(execOnPlayerKo); \
	DECLARE_FUNCTION(execOnPrepareVictoryCutscene); \
	DECLARE_FUNCTION(execOnReservedReturnToMainMenuByNetworkError); \
	DECLARE_FUNCTION(execOpenPauseMenu); \
	DECLARE_FUNCTION(execPlayCameraShake); \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execRefreshNearPlayerStatus); \
	DECLARE_FUNCTION(execRegisterEndGameReason); \
	DECLARE_FUNCTION(execRequestEndGameFlow_Client); \
	DECLARE_FUNCTION(execRequestLeaveGame_Client); \
	DECLARE_FUNCTION(execResultMenuPrepare_RPC); \
	DECLARE_FUNCTION(execSetAllowCharacterControll); \
	DECLARE_FUNCTION(execSetAnyInputButtonCheck); \
	DECLARE_FUNCTION(execSetDefaultViewTarget); \
	DECLARE_FUNCTION(execSetGameplayCameraTarget); \
	DECLARE_FUNCTION(execSetGameStateDebugFlag_Server); \
	DECLARE_FUNCTION(execSetMinimapMode); \
	DECLARE_FUNCTION(execSetMouseControlMode); \
	DECLARE_FUNCTION(execSetOperationalWidhgetManager); \
	DECLARE_FUNCTION(execSetPlayerDataToSync); \
	DECLARE_FUNCTION(execSetPlayerDebugFlag_Server); \
	DECLARE_FUNCTION(execSetRestrictMoveOnly); \
	DECLARE_FUNCTION(execSetRStickInputZero); \
	DECLARE_FUNCTION(execSetWatchTargetPlayerState); \
	DECLARE_FUNCTION(execSSAntiCheatClient_ConnectServer); \
	DECLARE_FUNCTION(execSSAntiCheatClient_DisconnectServer); \
	DECLARE_FUNCTION(execStartResultTally_RPC); \
	DECLARE_FUNCTION(execSyncWatchTargetPlayer_Server); \
	DECLARE_FUNCTION(execTickClientFlowState_WatchGame_Native); \
	DECLARE_FUNCTION(execToggleMinimapMode); \
	DECLARE_FUNCTION(execUIPrepare_RPC); \
	DECLARE_FUNCTION(execUpdateNearInteractableObjectList); \
	DECLARE_FUNCTION(execUpdateNearPlayerList); \
	DECLARE_FUNCTION(execUpdateViewTarget); \
	DECLARE_FUNCTION(execWatchGame_OnPressMenuDecision); \
	DECLARE_FUNCTION(execWatchGame_OnPressMenuLB); \
	DECLARE_FUNCTION(execWatchGame_OnPressMenuRB); \
	DECLARE_FUNCTION(execWatchGame_OnReleaseMenuDecision);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DebugAddAttentionPoint_Implementation(ESSAttentionReason inReason, int32 inAddPoint); \
	virtual void DebugAIPlayerAutoKill_Implementation(bool IsOn); \
	virtual void DebugAIPlayerAutoMove_Implementation(bool IsOn, float Yaw, float RotateSpeed); \
	virtual void DebugAIPlayerAutoRequestTransit_Implementation(ESSActionTransitTrigger Trigger, float intervalTime, bool autoJump); \
	virtual void DebugAIPlayerDisableAll_Implementation(bool IsOn); \
	virtual void DebugAIPlayerNoDamage_Implementation(bool IsOn); \
	virtual void DebugAIPlayerSpawn_Implementation(EWrestlerID_N WrestlerID); \
	virtual void DebugAIPlayerSpawnPreset_Implementation(int32 InFaceID, int32 InBodyID, int32 InHairID, int32 InBottomsID, int32 InShoesID, int32 InSuitID, bool InRandom); \
	virtual void DebugAIPlayerSpawnPresetByName_Implementation(const FString& InName); \
	virtual void DebugDestroyAllPickupObjects_Implementation(); \
	virtual void DebugDuplicateSSPlayer_Implementation(bool inPossessPlayer, bool inBaseKill); \
	virtual void DebugForciblyEndMatch_Implementation(); \
	virtual void DebugLobbySkip_Implementation(); \
	virtual void DebugNetworkProfilerOnServer_Implementation(bool IsOn); \
	virtual void DebugNoResponseMode_Implementation(bool IsOn); \
	virtual void DebugNotifyChangePlayer_Client_Implementation(); \
	virtual void DebugResetAttention_Implementation(); \
	virtual void DebugRoundSpeed_Implementation(float Speed); \
	virtual void DebugServerCrashRequest_Implementation(); \
	virtual void DebugServerMemReport_Implementation(bool full); \
	virtual void DebugSetAttentionPoint_Implementation(int32 inAttentionPoint); \
	virtual void DebugSetHeatLevel_Implementation(int32 inHeatLevel); \
	virtual void DebugSetPlayerEquipSettings_Implementation(FSSPlayerEquipSettings const& InParam, EWrestlerID_N inWrestlerId, bool inDuplicate); \
	virtual void DebugSpawnAndEquipWeapon_Implementation(int32 ID); \
	virtual void DebugSpawnItem_Implementation(int32 ID, int32 Amount); \
	virtual void DebugSpawnItemBox_Implementation(int32 inItemBoxType, int32 inSpawnNum); \
	virtual void DebugSpawnShield_Implementation(int32 ID, int32 Amount); \
	virtual void DebugSpawnVehicle_Implementation(int32 ID, float offsetDistance, float offsetZ, float offsetRoll); \
	virtual void DebugSpawnWeapon_Implementation(int32 ID, int32 Amount); \
	virtual void DebugVehicleFullDurability_Implementation(bool isAll); \
	virtual void DebugVehicleInvincible_Implementation(bool IsOn, bool isAll); \
	virtual void DebugVehicleResetRotation_Implementation(bool isAll); \
	virtual void DebugVehicleSetDurability_Implementation(float Ratio, bool isAll); \
	virtual void NotifyDetectedCheat_ClientToServer_Implementation(int32 inViolationType); \
	virtual void NotifyEndGameFromClient_Server_Implementation(ESSEndGameReason inEndGameReason); \
	virtual void OnChangeClientFlowState_Server_Implementation(ESSClientFlowState inClientState, int32 inSyncId); \
	virtual void OnPlayerDead_Implementation(AELSSPlayerState* inDeadPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon); \
	virtual void OnPlayerKo_Implementation(AELSSPlayerState* inKoPlayer, AELSSPlayerState* inKillerPlayer, ESSLogIconType inLogIcon); \
	virtual void RequestEndGameFlow_Client_Implementation(ESSEndGameReason inEndReason); \
	virtual void RequestLeaveGame_Client_Implementation(); \
	virtual void ResultMenuPrepare_RPC_Implementation(); \
	virtual void SetGameStateDebugFlag_Server_Implementation(ESSGameStateDebugFlag Type, bool IsOn); \
	virtual void SetPlayerDebugFlag_Server_Implementation(ESSPlayerDebugFlag Type, bool IsOn); \
	virtual void SSAntiCheatClient_ConnectServer_Implementation(const int32 Type, const int32 Platform, const FString& ipAddress, const FString& playerId, const FString& ProductUserID); \
	virtual void SSAntiCheatClient_DisconnectServer_Implementation(); \
	virtual void StartResultTally_RPC_Implementation(); \
	virtual void SyncWatchTargetPlayer_Server_Implementation(int32 inWatchPlayerIndex, int32 inSyncId); \
	virtual void UIPrepare_RPC_Implementation(); \
 \
	DECLARE_FUNCTION(execBeginViewControlledPawn); \
	DECLARE_FUNCTION(execChangeClientFlowState); \
	DECLARE_FUNCTION(execCheckAllowCharacterControll); \
	DECLARE_FUNCTION(execCheckCompletePlayerSetup); \
	DECLARE_FUNCTION(execCheckInSightFromCamera); \
	DECLARE_FUNCTION(execCheckInSightFromCameraForInteract); \
	DECLARE_FUNCTION(execClosePauseMenu); \
	DECLARE_FUNCTION(execConvertLeftStickToMoveInput); \
	DECLARE_FUNCTION(execDeactiveStationalCamera); \
	DECLARE_FUNCTION(execDebugAddAttentionPoint); \
	DECLARE_FUNCTION(execDebugAIPlayerAutoKill); \
	DECLARE_FUNCTION(execDebugAIPlayerAutoMove); \
	DECLARE_FUNCTION(execDebugAIPlayerAutoRequestTransit); \
	DECLARE_FUNCTION(execDebugAIPlayerDisableAll); \
	DECLARE_FUNCTION(execDebugAIPlayerNoDamage); \
	DECLARE_FUNCTION(execDebugAIPlayerSpawn); \
	DECLARE_FUNCTION(execDebugAIPlayerSpawnPreset); \
	DECLARE_FUNCTION(execDebugAIPlayerSpawnPresetByName); \
	DECLARE_FUNCTION(execDebugDestroyAllPickupObjects); \
	DECLARE_FUNCTION(execDebugDuplicateSSPlayer); \
	DECLARE_FUNCTION(execDebugForciblyEndMatch); \
	DECLARE_FUNCTION(execDebugLobbySkip); \
	DECLARE_FUNCTION(execDebugNetworkProfilerOnServer); \
	DECLARE_FUNCTION(execDebugNoResponseMode); \
	DECLARE_FUNCTION(execDebugNotifyChangePlayer_Client); \
	DECLARE_FUNCTION(execDebugResetAttention); \
	DECLARE_FUNCTION(execDebugRoundSpeed); \
	DECLARE_FUNCTION(execDebugServerCrashRequest); \
	DECLARE_FUNCTION(execDebugServerMemReport); \
	DECLARE_FUNCTION(execDebugSetAttentionPoint); \
	DECLARE_FUNCTION(execDebugSetHeatLevel); \
	DECLARE_FUNCTION(execDebugSetPlayerEquipSettings); \
	DECLARE_FUNCTION(execDebugSpawnAndEquipWeapon); \
	DECLARE_FUNCTION(execDebugSpawnItem); \
	DECLARE_FUNCTION(execDebugSpawnItemBox); \
	DECLARE_FUNCTION(execDebugSpawnShield); \
	DECLARE_FUNCTION(execDebugSpawnVehicle); \
	DECLARE_FUNCTION(execDebugSpawnWeapon); \
	DECLARE_FUNCTION(execDebugVehicleFullDurability); \
	DECLARE_FUNCTION(execDebugVehicleInvincible); \
	DECLARE_FUNCTION(execDebugVehicleResetRotation); \
	DECLARE_FUNCTION(execDebugVehicleSetDurability); \
	DECLARE_FUNCTION(execEndViewControlledPawn); \
	DECLARE_FUNCTION(execEnterClientFlowState_Dialog_Native); \
	DECLARE_FUNCTION(execEnterClientFlowState_WatchGame_Native); \
	DECLARE_FUNCTION(execExitClientFlowState_Dialog_Native); \
	DECLARE_FUNCTION(execExitClientFlowState_WatchGame_Native); \
	DECLARE_FUNCTION(execGetAssociatedSSPlayer); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetEndGameReasonOnServer); \
	DECLARE_FUNCTION(execGetGameplayCamera); \
	DECLARE_FUNCTION(execGetGameplayCameraTarget); \
	DECLARE_FUNCTION(execGetLastLeftStickInput); \
	DECLARE_FUNCTION(execGetLastMouseMoveInput); \
	DECLARE_FUNCTION(execGetLastRightStickInput); \
	DECLARE_FUNCTION(execGetLeftStickInput); \
	DECLARE_FUNCTION(execGetMouseMoveInput); \
	DECLARE_FUNCTION(execGetMoveInput); \
	DECLARE_FUNCTION(execGetNearPlayerHpRatio); \
	DECLARE_FUNCTION(execGetParentSSPlayerController); \
	DECLARE_FUNCTION(execGetRightStickInput); \
	DECLARE_FUNCTION(execGetStationalCamera); \
	DECLARE_FUNCTION(execGetWatchTargetPlayer); \
	DECLARE_FUNCTION(execIsChildPlayerController); \
	DECLARE_FUNCTION(execIsClientFlowState); \
	DECLARE_FUNCTION(execIsDoneResultAPI); \
	DECLARE_FUNCTION(execIsDoneSyncResult); \
	DECLARE_FUNCTION(execIsEnabledInputByThisController); \
	DECLARE_FUNCTION(execIsOpenErrorDialog); \
	DECLARE_FUNCTION(execIsRegisteredEndGameReasonOnServer); \
	DECLARE_FUNCTION(execIsViewTargetGameplayCamera); \
	DECLARE_FUNCTION(execNeedsShowInteractableObjectStatus); \
	DECLARE_FUNCTION(execNeedsShowOnlineID); \
	DECLARE_FUNCTION(execNeedsShowPlayerStatus); \
	DECLARE_FUNCTION(execNeedsTransitionToWatchGame); \
	DECLARE_FUNCTION(execNotifyDetectedCheat_ClientToServer); \
	DECLARE_FUNCTION(execNotifyEndGameFromClient_Server); \
	DECLARE_FUNCTION(execOnAntiCheatClientViolated); \
	DECLARE_FUNCTION(execOnChangeClientFlowState_Server); \
	DECLARE_FUNCTION(execOnOtherPlayerHpUpdate); \
	DECLARE_FUNCTION(execOnPlayerDead); \
	DECLARE_FUNCTION(execOnPlayerKo); \
	DECLARE_FUNCTION(execOnPrepareVictoryCutscene); \
	DECLARE_FUNCTION(execOnReservedReturnToMainMenuByNetworkError); \
	DECLARE_FUNCTION(execOpenPauseMenu); \
	DECLARE_FUNCTION(execPlayCameraShake); \
	DECLARE_FUNCTION(execPrintLog); \
	DECLARE_FUNCTION(execRefreshNearPlayerStatus); \
	DECLARE_FUNCTION(execRegisterEndGameReason); \
	DECLARE_FUNCTION(execRequestEndGameFlow_Client); \
	DECLARE_FUNCTION(execRequestLeaveGame_Client); \
	DECLARE_FUNCTION(execResultMenuPrepare_RPC); \
	DECLARE_FUNCTION(execSetAllowCharacterControll); \
	DECLARE_FUNCTION(execSetAnyInputButtonCheck); \
	DECLARE_FUNCTION(execSetDefaultViewTarget); \
	DECLARE_FUNCTION(execSetGameplayCameraTarget); \
	DECLARE_FUNCTION(execSetGameStateDebugFlag_Server); \
	DECLARE_FUNCTION(execSetMinimapMode); \
	DECLARE_FUNCTION(execSetMouseControlMode); \
	DECLARE_FUNCTION(execSetOperationalWidhgetManager); \
	DECLARE_FUNCTION(execSetPlayerDataToSync); \
	DECLARE_FUNCTION(execSetPlayerDebugFlag_Server); \
	DECLARE_FUNCTION(execSetRestrictMoveOnly); \
	DECLARE_FUNCTION(execSetRStickInputZero); \
	DECLARE_FUNCTION(execSetWatchTargetPlayerState); \
	DECLARE_FUNCTION(execSSAntiCheatClient_ConnectServer); \
	DECLARE_FUNCTION(execSSAntiCheatClient_DisconnectServer); \
	DECLARE_FUNCTION(execStartResultTally_RPC); \
	DECLARE_FUNCTION(execSyncWatchTargetPlayer_Server); \
	DECLARE_FUNCTION(execTickClientFlowState_WatchGame_Native); \
	DECLARE_FUNCTION(execToggleMinimapMode); \
	DECLARE_FUNCTION(execUIPrepare_RPC); \
	DECLARE_FUNCTION(execUpdateNearInteractableObjectList); \
	DECLARE_FUNCTION(execUpdateNearPlayerList); \
	DECLARE_FUNCTION(execUpdateViewTarget); \
	DECLARE_FUNCTION(execWatchGame_OnPressMenuDecision); \
	DECLARE_FUNCTION(execWatchGame_OnPressMenuLB); \
	DECLARE_FUNCTION(execWatchGame_OnPressMenuRB); \
	DECLARE_FUNCTION(execWatchGame_OnReleaseMenuDecision);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_EVENT_PARMS \
	struct ELSSPlayerController_eventAddInstantMessage_Parms \
	{ \
		FString inMessage; \
		ESSLogIconType inLogType; \
	}; \
	struct ELSSPlayerController_eventAddInstantMessageByList_Parms \
	{ \
		TArray<FSSLogTextParam> inTextParam; \
		ESSLogIconType inLogType; \
	}; \
	struct ELSSPlayerController_eventClosePauseMenu_Impl_Parms \
	{ \
		bool allowedCharacterControllWhenClose; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPlayerController_eventClosePauseMenu_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSPlayerController_eventDebugAddAttentionPoint_Parms \
	{ \
		ESSAttentionReason inReason; \
		int32 inAddPoint; \
	}; \
	struct ELSSPlayerController_eventDebugAIPlayerAutoKill_Parms \
	{ \
		bool IsOn; \
	}; \
	struct ELSSPlayerController_eventDebugAIPlayerAutoMove_Parms \
	{ \
		bool IsOn; \
		float Yaw; \
		float RotateSpeed; \
	}; \
	struct ELSSPlayerController_eventDebugAIPlayerAutoRequestTransit_Parms \
	{ \
		ESSActionTransitTrigger Trigger; \
		float intervalTime; \
		bool autoJump; \
	}; \
	struct ELSSPlayerController_eventDebugAIPlayerDisableAll_Parms \
	{ \
		bool IsOn; \
	}; \
	struct ELSSPlayerController_eventDebugAIPlayerNoDamage_Parms \
	{ \
		bool IsOn; \
	}; \
	struct ELSSPlayerController_eventDebugAIPlayerSpawn_Parms \
	{ \
		EWrestlerID_N WrestlerID; \
	}; \
	struct ELSSPlayerController_eventDebugAIPlayerSpawnPreset_Parms \
	{ \
		int32 InFaceID; \
		int32 InBodyID; \
		int32 InHairID; \
		int32 InBottomsID; \
		int32 InShoesID; \
		int32 InSuitID; \
		bool InRandom; \
	}; \
	struct ELSSPlayerController_eventDebugAIPlayerSpawnPresetByName_Parms \
	{ \
		FString InName; \
	}; \
	struct ELSSPlayerController_eventDebugDuplicateSSPlayer_Parms \
	{ \
		bool inPossessPlayer; \
		bool inBaseKill; \
	}; \
	struct ELSSPlayerController_eventDebugNetworkProfilerOnServer_Parms \
	{ \
		bool IsOn; \
	}; \
	struct ELSSPlayerController_eventDebugNoResponseMode_Parms \
	{ \
		bool IsOn; \
	}; \
	struct ELSSPlayerController_eventDebugRoundSpeed_Parms \
	{ \
		float Speed; \
	}; \
	struct ELSSPlayerController_eventDebugServerMemReport_Parms \
	{ \
		bool full; \
	}; \
	struct ELSSPlayerController_eventDebugSetAttentionPoint_Parms \
	{ \
		int32 inAttentionPoint; \
	}; \
	struct ELSSPlayerController_eventDebugSetHeatLevel_Parms \
	{ \
		int32 inHeatLevel; \
	}; \
	struct ELSSPlayerController_eventDebugSetPlayerEquipSettings_Parms \
	{ \
		FSSPlayerEquipSettings InParam; \
		EWrestlerID_N inWrestlerId; \
		bool inDuplicate; \
	}; \
	struct ELSSPlayerController_eventDebugSpawnAndEquipWeapon_Parms \
	{ \
		int32 ID; \
	}; \
	struct ELSSPlayerController_eventDebugSpawnItem_Parms \
	{ \
		int32 ID; \
		int32 Amount; \
	}; \
	struct ELSSPlayerController_eventDebugSpawnItemBox_Parms \
	{ \
		int32 inItemBoxType; \
		int32 inSpawnNum; \
	}; \
	struct ELSSPlayerController_eventDebugSpawnShield_Parms \
	{ \
		int32 ID; \
		int32 Amount; \
	}; \
	struct ELSSPlayerController_eventDebugSpawnVehicle_Parms \
	{ \
		int32 ID; \
		float offsetDistance; \
		float offsetZ; \
		float offsetRoll; \
	}; \
	struct ELSSPlayerController_eventDebugSpawnWeapon_Parms \
	{ \
		int32 ID; \
		int32 Amount; \
	}; \
	struct ELSSPlayerController_eventDebugVehicleFullDurability_Parms \
	{ \
		bool isAll; \
	}; \
	struct ELSSPlayerController_eventDebugVehicleInvincible_Parms \
	{ \
		bool IsOn; \
		bool isAll; \
	}; \
	struct ELSSPlayerController_eventDebugVehicleResetRotation_Parms \
	{ \
		bool isAll; \
	}; \
	struct ELSSPlayerController_eventDebugVehicleSetDurability_Parms \
	{ \
		float Ratio; \
		bool isAll; \
	}; \
	struct ELSSPlayerController_eventGetPauseMenuCommonLayout_Parms \
	{ \
		UELCommonLayout* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPlayerController_eventGetPauseMenuCommonLayout_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSPlayerController_eventGetUIManager_Parms \
	{ \
		AELSSUIManagerInGame* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPlayerController_eventGetUIManager_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSPlayerController_eventK2_RequestEndGameFlow_Parms \
	{ \
		ESSEndGameReason inEndReason; \
	}; \
	struct ELSSPlayerController_eventNotifyDetectedCheat_ClientToServer_Parms \
	{ \
		int32 inViolationType; \
	}; \
	struct ELSSPlayerController_eventNotifyEndGameFromClient_Server_Parms \
	{ \
		ESSEndGameReason inEndGameReason; \
	}; \
	struct ELSSPlayerController_eventOnChangeClientFlowState_Server_Parms \
	{ \
		ESSClientFlowState inClientState; \
		int32 inSyncId; \
	}; \
	struct ELSSPlayerController_eventOnChangeGameFlowState_Parms \
	{ \
		ESSGameFlowState inGameFlowState; \
	}; \
	struct ELSSPlayerController_eventOnChangeInputMode_Parms \
	{ \
		bool isKeyboard; \
	}; \
	struct ELSSPlayerController_eventOnChangeTarget_Parms \
	{ \
		AActor* inNewTarget; \
		AActor* inPrevTarget; \
	}; \
	struct ELSSPlayerController_eventOnOtherPlayerHpUpdateSpecifiedType_Parms \
	{ \
		AELSSPlayer* inPlayer; \
		ESSCharacterHpType InType; \
		int32 inHp; \
		int32 inMaxHP; \
	}; \
	struct ELSSPlayerController_eventOnPlayerAttentionBoostUpdate_Parms \
	{ \
		float inAttentionBoost; \
	}; \
	struct ELSSPlayerController_eventOnPlayerAttentionLevelUpdate_Parms \
	{ \
		int32 inAttentionLevel; \
		int32 inAttentionIcon; \
		int32 inNextFeverTimePoint; \
	}; \
	struct ELSSPlayerController_eventOnPlayerAttentionUpdate_Parms \
	{ \
		ESSAttentionGaugeState inGaugeState; \
		float inAttentionPoint; \
		bool inAfterFever; \
		ESSAttentionReason inReason; \
		float inAddPoint; \
		bool inImmediate; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeAimMode_Parms \
	{ \
		bool inAimMode; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeAliveStateType_Parms \
	{ \
		ESSAliveStateType inAliveStateType; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeCurrentShieldDurability_Parms \
	{ \
		int32 inDurability; \
		int32 InMaxDurability; \
		bool inImmediate; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeCurrentVehicleDurability_Parms \
	{ \
		ESSVehicleType InVehicleType; \
		int32 inDurability; \
		int32 InMaxDurability; \
		bool inImmediate; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeFinisherTarget_Parms \
	{ \
		AActor* inNewTarget; \
		ESSInteractExecute inInteractExec; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeInteractTarget_Parms \
	{ \
		ESSInteractExecute inInteractExecute; \
		ESSInteractOperate InInteractOperate; \
		AActor* inNewInteractTarget; \
		FVector InOffset; \
		int32 inNewId; \
		int32 inNewValue; \
		ESSInteractExecute currentExecute; \
		int32 inCurrentId; \
		int32 inCurrentValue; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeInventory_Parms \
	{ \
		TArray<AELSSPickupBase*> inInventory; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeInventoryIconValue_Parms \
	{ \
		int32 InIndex; \
		int32 InValue; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeInventoryLimit_Parms \
	{ \
		bool flg; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeInventoryPosition_Parms \
	{ \
		int32 InIndex; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeMoveSet_Parms \
	{ \
		FSSHeatLevelUpInfo inLevelUpInfo; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeOperationGuide_Parms \
	{ \
		ESSOperationGuideExecute InType; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangePossessOfCarrot_Parms \
	{ \
		bool flg; \
	}; \
	struct ELSSPlayerController_eventOnPlayerChangeReviveTimer_Parms \
	{ \
		float inTimer; \
	}; \
	struct ELSSPlayerController_eventOnPlayerDead_Parms \
	{ \
		AELSSPlayerState* inDeadPlayer; \
		AELSSPlayerState* inKillerPlayer; \
		ESSLogIconType inLogIcon; \
	}; \
	struct ELSSPlayerController_eventOnPlayerGetOnVehicle_Parms \
	{ \
		AELSSPlayer* inPlayer; \
		bool InFlag; \
		ESSVehicleType InVehicleType; \
		int32 inDurability; \
		int32 InMaxDurability; \
	}; \
	struct ELSSPlayerController_eventOnPlayerHeatLevelUp_Parms \
	{ \
		int32 inHeatLevel; \
	}; \
	struct ELSSPlayerController_eventOnPlayerHeatMeterUpdate_Parms \
	{ \
		int32 inHeatLevel; \
		float inExpRate; \
		bool inImmediate; \
	}; \
	struct ELSSPlayerController_eventOnPlayerHpUpdate_Parms \
	{ \
		int32 inHp; \
		int32 inMaxHP; \
		bool inImmediate; \
	}; \
	struct ELSSPlayerController_eventOnPlayerInteractGaugeUpdate_Parms \
	{ \
		AActor* inInteractTarget; \
		float inRate; \
	}; \
	struct ELSSPlayerController_eventOnPlayerKo_Parms \
	{ \
		AELSSPlayerState* inKoPlayer; \
		AELSSPlayerState* inKillerPlayer; \
		ESSLogIconType inLogIcon; \
	}; \
	struct ELSSPlayerController_eventOnPlayerKoHpUpdate_Parms \
	{ \
		int32 inKoHp; \
		int32 inKoMaxHp; \
		bool inImmediate; \
	}; \
	struct ELSSPlayerController_eventOnPlayerLearnHeatSkill_Parms \
	{ \
		ESSHeatSkillCategory inCategory; \
		int32 inHeatSkillId; \
	}; \
	struct ELSSPlayerController_eventOnPlayerWatchedPlayerUpdate_Parms \
	{ \
		int32 inWatchedPlayerNum; \
	}; \
	struct ELSSPlayerController_eventOpenPauseMenu_Impl_Parms \
	{ \
		bool disallowedCharacterControllWhenOpen; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPlayerController_eventOpenPauseMenu_Impl_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSPlayerController_eventRequestEndGameFlow_Client_Parms \
	{ \
		ESSEndGameReason inEndReason; \
	}; \
	struct ELSSPlayerController_eventSetGameStateDebugFlag_Server_Parms \
	{ \
		ESSGameStateDebugFlag Type; \
		bool IsOn; \
	}; \
	struct ELSSPlayerController_eventSetMinimapTexture_Parms \
	{ \
		int32 InMinimapID; \
	}; \
	struct ELSSPlayerController_eventSetPlayerDebugFlag_Server_Parms \
	{ \
		ESSPlayerDebugFlag Type; \
		bool IsOn; \
	}; \
	struct ELSSPlayerController_eventSetVisibleInteractDotIcon_Parms \
	{ \
		AActor* inTargetActor; \
		bool InVisible; \
	}; \
	struct ELSSPlayerController_eventSetVisibleOtherPlayerOnlineID_Parms \
	{ \
		AELSSPlayer* inTargetPlayer; \
		bool InVisible; \
		bool InHasCarrot; \
	}; \
	struct ELSSPlayerController_eventSSAntiCheatClient_ConnectServer_Parms \
	{ \
		int32 Type; \
		int32 Platform; \
		FString ipAddress; \
		FString playerId; \
		FString ProductUserID; \
	}; \
	struct ELSSPlayerController_eventSwitchMinimapMode_Parms \
	{ \
		bool inIsWholeMap; \
	}; \
	struct ELSSPlayerController_eventSyncWatchTargetPlayer_Server_Parms \
	{ \
		int32 inWatchPlayerIndex; \
		int32 inSyncId; \
	}; \
	struct ELSSPlayerController_eventTickClientFlowState_BeforeGamePlay_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayerController_eventTickClientFlowState_Closing_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayerController_eventTickClientFlowState_Exit_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayerController_eventTickClientFlowState_Finish_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayerController_eventTickClientFlowState_GamePlay_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayerController_eventTickClientFlowState_Result_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayerController_eventTickClientFlowState_VictoryRoyale_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayerController_eventTickClientFlowState_WatchGame_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayerController_eventTickClientFlowState_WatchVictoryRoyale_Parms \
	{ \
		float inDeltaSeconds; \
	}; \
	struct ELSSPlayerController_eventWatchGame_ApplyHoldRatio_Parms \
	{ \
		float InRatio; \
	}; \
	struct ELSSPlayerController_eventWatchGame_OnChangePlayer_Parms \
	{ \
		AELSSPlayerState* inNewTarget; \
	}; \
	struct ELSSPlayerController_eventWatchGame_OnRequestChangePlayer_Parms \
	{ \
		bool isNext; \
	}; \
	struct ELSSPlayerController_eventWatchGame_RequestNext_Parms \
	{ \
		bool toVictoryRoyale; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSPlayerController(); \
	friend struct Z_Construct_UClass_AELSSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AELSSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPlayerController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_INCLASS \
private: \
	static void StaticRegisterNativesAELSSPlayerController(); \
	friend struct Z_Construct_UClass_AELSSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AELSSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPlayerController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPlayerController(AELSSPlayerController&&); \
	NO_API AELSSPlayerController(const AELSSPlayerController&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPlayerController(AELSSPlayerController&&); \
	NO_API AELSSPlayerController(const AELSSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSPlayerController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventOnPress_MenuLB() { return STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuLB); } \
	FORCEINLINE static uint32 __PPO__EventOnPress_MenuRB() { return STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuRB); } \
	FORCEINLINE static uint32 __PPO__EventOnPress_MenuDecision() { return STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuDecision); } \
	FORCEINLINE static uint32 __PPO__EventOnRelease_MenuDecision() { return STRUCT_OFFSET(AELSSPlayerController, EventOnRelease_MenuDecision); } \
	FORCEINLINE static uint32 __PPO__EventOnPress_MenuRight() { return STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuRight); } \
	FORCEINLINE static uint32 __PPO__EventOnPress_MenuLeft() { return STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuLeft); } \
	FORCEINLINE static uint32 __PPO__EventOnPress_MenuAccept() { return STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuAccept); } \
	FORCEINLINE static uint32 __PPO__EventOnPress_MenuCancel() { return STRUCT_OFFSET(AELSSPlayerController, EventOnPress_MenuCancel); } \
	FORCEINLINE static uint32 __PPO__EventOnRelease_MenuCancel() { return STRUCT_OFFSET(AELSSPlayerController, EventOnRelease_MenuCancel); } \
	FORCEINLINE static uint32 __PPO__IsAllowCharacterControll() { return STRUCT_OFFSET(AELSSPlayerController, IsAllowCharacterControll); } \
	FORCEINLINE static uint32 __PPO__IsRestrictMoveOnly() { return STRUCT_OFFSET(AELSSPlayerController, IsRestrictMoveOnly); } \
	FORCEINLINE static uint32 __PPO__IsNetworkError() { return STRUCT_OFFSET(AELSSPlayerController, IsNetworkError); } \
	FORCEINLINE static uint32 __PPO__IsApiDisabled() { return STRUCT_OFFSET(AELSSPlayerController, IsApiDisabled); } \
	FORCEINLINE static uint32 __PPO__MouseControlMode() { return STRUCT_OFFSET(AELSSPlayerController, MouseControlMode); } \
	FORCEINLINE static uint32 __PPO__StoredMousePosition() { return STRUCT_OFFSET(AELSSPlayerController, StoredMousePosition); } \
	FORCEINLINE static uint32 __PPO__GameplayCameraType() { return STRUCT_OFFSET(AELSSPlayerController, GameplayCameraType); } \
	FORCEINLINE static uint32 __PPO__GameplayCamera() { return STRUCT_OFFSET(AELSSPlayerController, GameplayCamera); } \
	FORCEINLINE static uint32 __PPO__StationalCameraType() { return STRUCT_OFFSET(AELSSPlayerController, StationalCameraType); } \
	FORCEINLINE static uint32 __PPO__StationalCamera() { return STRUCT_OFFSET(AELSSPlayerController, StationalCamera); } \
	FORCEINLINE static uint32 __PPO__PrevState() { return STRUCT_OFFSET(AELSSPlayerController, PrevState); } \
	FORCEINLINE static uint32 __PPO__EndGameReason() { return STRUCT_OFFSET(AELSSPlayerController, EndGameReason); } \
	FORCEINLINE static uint32 __PPO__MenuOperationalWidgetManager() { return STRUCT_OFFSET(AELSSPlayerController, MenuOperationalWidgetManager); } \
	FORCEINLINE static uint32 __PPO__WatchTargetPlayerState() { return STRUCT_OFFSET(AELSSPlayerController, WatchTargetPlayerState); } \
	FORCEINLINE static uint32 __PPO__WatchGameIgnoreDecisionTime() { return STRUCT_OFFSET(AELSSPlayerController, WatchGameIgnoreDecisionTime); } \
	FORCEINLINE static uint32 __PPO__VictoryCutscene() { return STRUCT_OFFSET(AELSSPlayerController, VictoryCutscene); } \
	FORCEINLINE static uint32 __PPO__NearPlayerStatusList() { return STRUCT_OFFSET(AELSSPlayerController, NearPlayerStatusList); } \
	FORCEINLINE static uint32 __PPO__ShowNearPlayerStatusDistance() { return STRUCT_OFFSET(AELSSPlayerController, ShowNearPlayerStatusDistance); } \
	FORCEINLINE static uint32 __PPO__NearInteractableObjectStatusList() { return STRUCT_OFFSET(AELSSPlayerController, NearInteractableObjectStatusList); } \
	FORCEINLINE static uint32 __PPO__InteractableObjectDotIconDistance() { return STRUCT_OFFSET(AELSSPlayerController, InteractableObjectDotIconDistance); } \
	FORCEINLINE static uint32 __PPO__TempLocalPlayerControllers() { return STRUCT_OFFSET(AELSSPlayerController, TempLocalPlayerControllers); } \
	FORCEINLINE static uint32 __PPO__ChildPlayerControllers() { return STRUCT_OFFSET(AELSSPlayerController, ChildPlayerControllers); } \
	FORCEINLINE static uint32 __PPO__InputOnly() { return STRUCT_OFFSET(AELSSPlayerController, InputOnly); } \
	FORCEINLINE static uint32 __PPO__ParentPlayerController() { return STRUCT_OFFSET(AELSSPlayerController, ParentPlayerController); } \
	FORCEINLINE static uint32 __PPO__ssAntiCheatData() { return STRUCT_OFFSET(AELSSPlayerController, ssAntiCheatData); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_51_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
