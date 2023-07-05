// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSActivityMatchResult;
enum class EELActivityUpdateMatchStatus : uint8;
enum class ESSAttentionReason : uint8;
enum class ESSGameStateDebugFlag : uint8;
class AELSSPlayer;
enum class ESSClientFlowState : uint8;
class AELSSAIController;
class AELSSPlayerController;
enum class ESSPlayerProgress : uint8;
struct FRequest_ErrSetupData;
enum class EYGS2ErrorType : uint8;
class UYGS2RequestBase;
struct FELSSLobbyPlayerInfo;
class AELSSPlayerState;
struct FSSPlayerEquipSettings;
struct FSSWrestlerMovePresetParam;
struct FSSWrestlerSetupParam;
struct FWrestlerSetupParam;
struct FSSModeMessageData;
struct FSSChallengeCountData;
struct FSSMatchMakeInfoForAnalytics;
struct FSSClientInfoForAnalytics;
struct FSSPlayerProfileForInGame;
struct FSSSyncStatusForWatch_Owner;
struct FSSSyncStatusForWatch_Replicated;
enum class ESSLocalDebugFlag : uint8;
struct FELSSResultTallyPlayerData;
#ifdef ABP_200508_ELSSPlayerState_generated_h
#error "ELSSPlayerState.generated.h already included, missing '#pragma once' in ELSSPlayerState.h"
#endif
#define ABP_200508_ELSSPlayerState_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_RPC_WRAPPERS \
	virtual void Activity_CreateMatchOnClient_Implementation(); \
	virtual void Activity_LeaveMatchOnClient_Implementation(const FString& MatchID, const FString& ExternalAccountId, const FString& Reason); \
	virtual void Activity_ReportOnClient_Implementation(const FString& MatchID, FSSActivityMatchResult const& Result); \
	virtual void Activity_SendResultCreateMatch_Implementation(const FString& MatchID); \
	virtual void Activity_SendResultLeaveMatch_Implementation(); \
	virtual void Activity_SendResultReport_Implementation(); \
	virtual void Activity_SendResultUpdateMatchStatus_Implementation(EELActivityUpdateMatchStatus inStatus); \
	virtual void Activity_UpdateMatchStatusOnClient_Implementation(const FString& MatchID, EELActivityUpdateMatchStatus inStatus); \
	virtual void AddKillCount_Server_Implementation(); \
	virtual void BeginFeverTime_Multicast_Implementation(int32 inNewAttentionLevel, float inBeginTime); \
	virtual void DebugResetAttention_Implementation(); \
	virtual void DebugSendGameStateDebugFlag_Server_Implementation(ESSGameStateDebugFlag inDebugFlag); \
	virtual void DebugSetCopyWrestlerSetupParamToAI_Server_Implementation(); \
	virtual void SendPlayerInfoSyncData_Server_Implementation(FELSSLobbyPlayerInfo const& inInfoSyncData); \
	virtual void SetAttentionPoint_Client_Implementation(int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint); \
	virtual void SetAttentionPointForWatcher_Client_Implementation(AELSSPlayerState* inWatchedPlayer, int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint); \
	virtual void SetIgnoreAnalytics_Server_Implementation(bool IsOn); \
	virtual void SetPlayerSpawnPointId_Server_Implementation(const int32 spawnId); \
	virtual void SetPlayerSpawnPointIdResult_Client_Implementation(bool isChange); \
	virtual void SetProgressFlag_Server_Implementation(ESSPlayerProgress Type, bool IsOn); \
	virtual void SSAntiCheatClientNotifyMessage_ToServer_Implementation(FSSModeMessageData const& dat); \
	virtual void SSAntiCheatServerNotifyAddClientAction_ToClient_Implementation(const int32 resClientActionState, const int32 resActionCode, const FString& resActionDetails); \
	virtual void SSAntiCheatServerNotifyMessage_ToClient_Implementation(FSSModeMessageData const& dat); \
	virtual void SyncChallengeCount_Clent_Implementation(FSSChallengeCountData inSyncData); \
	virtual void SyncClientFPS_Server_Implementation(float inClientFPS); \
	virtual void SyncMatchMakeInfo_Server_Implementation(FSSMatchMakeInfoForAnalytics const& inMatchMakeInfo, FSSClientInfoForAnalytics const& inClientInfo); \
	virtual void SyncPlayerProfileForInGame_Server_Implementation(FSSPlayerProfileForInGame const& inProfile); \
	virtual void SyncStatusForWatch_ClientToServer_Server_Implementation(); \
	virtual void SyncStatusForWatch_Server_Implementation(FSSSyncStatusForWatch_Owner const& inSendData); \
	virtual void SyncStatusForWatch_ServerToWatcher_Client_Implementation(FSSSyncStatusForWatch_Replicated const& inSendData); \
 \
	DECLARE_FUNCTION(execActivity_CreateMatchOnClient); \
	DECLARE_FUNCTION(execActivity_LeaveMatchOnClient); \
	DECLARE_FUNCTION(execActivity_ReportOnClient); \
	DECLARE_FUNCTION(execActivity_SendResultCreateMatch); \
	DECLARE_FUNCTION(execActivity_SendResultLeaveMatch); \
	DECLARE_FUNCTION(execActivity_SendResultReport); \
	DECLARE_FUNCTION(execActivity_SendResultUpdateMatchStatus); \
	DECLARE_FUNCTION(execActivity_UpdateMatchStatusOnClient); \
	DECLARE_FUNCTION(execAddAttentionPoint); \
	DECLARE_FUNCTION(execAddKillCount); \
	DECLARE_FUNCTION(execAddKillCount_Server); \
	DECLARE_FUNCTION(execApplyChallengeCountToSaveData); \
	DECLARE_FUNCTION(execApplyDebugMenuParam); \
	DECLARE_FUNCTION(execApplyLastPlayRecordToSaveData); \
	DECLARE_FUNCTION(execApplyMasterData); \
	DECLARE_FUNCTION(execBeginFeverTime_Multicast); \
	DECLARE_FUNCTION(execCalcAttentionLevelFromPoint); \
	DECLARE_FUNCTION(execDebugResetAttention); \
	DECLARE_FUNCTION(execDebugSendGameStateDebugFlag_Server); \
	DECLARE_FUNCTION(execDebugSetCopyWrestlerSetupParamToAI_Server); \
	DECLARE_FUNCTION(execDoneDescription); \
	DECLARE_FUNCTION(execDoneOpenGamePlayScreen); \
	DECLARE_FUNCTION(execDoneUIPrepare); \
	DECLARE_FUNCTION(execForceEndFeverTime); \
	DECLARE_FUNCTION(execGetAfterFeverTimeRemainRate); \
	DECLARE_FUNCTION(execGetAssociatedSSPlayer); \
	DECLARE_FUNCTION(execGetAttentionLevel); \
	DECLARE_FUNCTION(execGetAttentionPoint); \
	DECLARE_FUNCTION(execGetClientFlowStateOnServer); \
	DECLARE_FUNCTION(execGetFeverCount); \
	DECLARE_FUNCTION(execGetFeverTimeRemainRate); \
	DECLARE_FUNCTION(execGetKillCount); \
	DECLARE_FUNCTION(execGetOwnerAIController); \
	DECLARE_FUNCTION(execGetOwnerLocalPlayerController); \
	DECLARE_FUNCTION(execGetOwnerPlayerController); \
	DECLARE_FUNCTION(execGetRandomBadgeId); \
	DECLARE_FUNCTION(execGetResultPlayerEXP); \
	DECLARE_FUNCTION(execGetSSPlayerControllerForUIUpdate); \
	DECLARE_FUNCTION(execGetWeaponColorListIndex); \
	DECLARE_FUNCTION(execGetWeaponColorUniqueId); \
	DECLARE_FUNCTION(execGetWeaponDecalId); \
	DECLARE_FUNCTION(execGetWeaponDecalSymbolId); \
	DECLARE_FUNCTION(execHasProgressFlag); \
	DECLARE_FUNCTION(execIsAfterFeverTime); \
	DECLARE_FUNCTION(execIsDoneResultAPI); \
	DECLARE_FUNCTION(execIsDoneSyncChallengeCount); \
	DECLARE_FUNCTION(execIsDoneSyncResult); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execIsLocalPlayer); \
	DECLARE_FUNCTION(execIsPlayerResultEnable); \
	DECLARE_FUNCTION(execIsResultTallyEnd); \
	DECLARE_FUNCTION(execOnRep_AttentionPoint); \
	DECLARE_FUNCTION(execOnRep_AttentionPoint_Impl); \
	DECLARE_FUNCTION(execOnRep_ChallengeCountData); \
	DECLARE_FUNCTION(execOnRep_EndGameReasonOnServer); \
	DECLARE_FUNCTION(execOnRep_FeverTimeBeginTime); \
	DECLARE_FUNCTION(execOnRep_KillCount); \
	DECLARE_FUNCTION(execOnRep_PlayerDataSync); \
	DECLARE_FUNCTION(execOnRep_ReplicatedClientResultData); \
	DECLARE_FUNCTION(execOnRep_ResultTallyData); \
	DECLARE_FUNCTION(execOnRep_SurvivorRanking); \
	DECLARE_FUNCTION(execOnRep_WatchedPlayerNum); \
	DECLARE_FUNCTION(execOnRep_WrestlerSetupParam); \
	DECLARE_FUNCTION(execOnYGS2Error_GameResult); \
	DECLARE_FUNCTION(execOnYGS2Error_GameStart); \
	DECLARE_FUNCTION(execOnYGS2Error_SessionResult); \
	DECLARE_FUNCTION(execOnYGS2Response_GameResult); \
	DECLARE_FUNCTION(execOnYGS2Response_GameStart); \
	DECLARE_FUNCTION(execOnYGS2Response_SessionResult); \
	DECLARE_FUNCTION(execRegisterLog_SlotMachineUseCount); \
	DECLARE_FUNCTION(execRegisterLog_VendingUseCount); \
	DECLARE_FUNCTION(execRequestYGS2_GameResult); \
	DECLARE_FUNCTION(execRequestYGS2_GameStart); \
	DECLARE_FUNCTION(execRequestYGS2_SessionResult); \
	DECLARE_FUNCTION(execReserveExpItem); \
	DECLARE_FUNCTION(execRetryErrorAPIEvent); \
	DECLARE_FUNCTION(execSendPlayerInfoSyncData_Server); \
	DECLARE_FUNCTION(execSetAttentionPoint); \
	DECLARE_FUNCTION(execSetAttentionPoint_Client); \
	DECLARE_FUNCTION(execSetAttentionPointForWatcher_Client); \
	DECLARE_FUNCTION(execSetDefaultPlayerEquipSettings); \
	DECLARE_FUNCTION(execSetDefaultPlayerEquipSettings_Ability); \
	DECLARE_FUNCTION(execSetDefaultPlayerEquipSettings_HeatSkill); \
	DECLARE_FUNCTION(execSetIgnoreAnalytics_Server); \
	DECLARE_FUNCTION(execSetPlayerEquipSettings); \
	DECLARE_FUNCTION(execSetPlayerEquipSettings_Ability); \
	DECLARE_FUNCTION(execSetPlayerSpawnPointId_Server); \
	DECLARE_FUNCTION(execSetPlayerSpawnPointIdResult_Client); \
	DECLARE_FUNCTION(execSetProgressFlag); \
	DECLARE_FUNCTION(execSetProgressFlag_Server); \
	DECLARE_FUNCTION(execSetResultTallyData); \
	DECLARE_FUNCTION(execSetWrestlerPresetParam); \
	DECLARE_FUNCTION(execSetWrestlerSetupParam); \
	DECLARE_FUNCTION(execSetWrestlerSetupParamByBaseStruct); \
	DECLARE_FUNCTION(execSSAntiCheatClientNotifyMessage_ToServer); \
	DECLARE_FUNCTION(execSSAntiCheatServerNotifyAddClientAction_ToClient); \
	DECLARE_FUNCTION(execSSAntiCheatServerNotifyMessage_ToClient); \
	DECLARE_FUNCTION(execSyncChallengeCount_Clent); \
	DECLARE_FUNCTION(execSyncClientFPS_Server); \
	DECLARE_FUNCTION(execSyncMatchMakeInfo_Server); \
	DECLARE_FUNCTION(execSyncPlayerProfileForInGame_Server); \
	DECLARE_FUNCTION(execSyncStatusForWatch_ClientToServer_Server); \
	DECLARE_FUNCTION(execSyncStatusForWatch_Server); \
	DECLARE_FUNCTION(execSyncStatusForWatch_ServerToWatcher); \
	DECLARE_FUNCTION(execSyncStatusForWatch_ServerToWatcher_Client); \
	DECLARE_FUNCTION(execUpdateSyncStatusForWatch);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Activity_CreateMatchOnClient_Implementation(); \
	virtual void Activity_LeaveMatchOnClient_Implementation(const FString& MatchID, const FString& ExternalAccountId, const FString& Reason); \
	virtual void Activity_ReportOnClient_Implementation(const FString& MatchID, FSSActivityMatchResult const& Result); \
	virtual void Activity_SendResultCreateMatch_Implementation(const FString& MatchID); \
	virtual void Activity_SendResultLeaveMatch_Implementation(); \
	virtual void Activity_SendResultReport_Implementation(); \
	virtual void Activity_SendResultUpdateMatchStatus_Implementation(EELActivityUpdateMatchStatus inStatus); \
	virtual void Activity_UpdateMatchStatusOnClient_Implementation(const FString& MatchID, EELActivityUpdateMatchStatus inStatus); \
	virtual void AddKillCount_Server_Implementation(); \
	virtual void BeginFeverTime_Multicast_Implementation(int32 inNewAttentionLevel, float inBeginTime); \
	virtual void DebugResetAttention_Implementation(); \
	virtual void DebugSendGameStateDebugFlag_Server_Implementation(ESSGameStateDebugFlag inDebugFlag); \
	virtual void DebugSetCopyWrestlerSetupParamToAI_Server_Implementation(); \
	virtual void SendPlayerInfoSyncData_Server_Implementation(FELSSLobbyPlayerInfo const& inInfoSyncData); \
	virtual void SetAttentionPoint_Client_Implementation(int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint); \
	virtual void SetAttentionPointForWatcher_Client_Implementation(AELSSPlayerState* inWatchedPlayer, int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint); \
	virtual void SetIgnoreAnalytics_Server_Implementation(bool IsOn); \
	virtual void SetPlayerSpawnPointId_Server_Implementation(const int32 spawnId); \
	virtual void SetPlayerSpawnPointIdResult_Client_Implementation(bool isChange); \
	virtual void SetProgressFlag_Server_Implementation(ESSPlayerProgress Type, bool IsOn); \
	virtual void SSAntiCheatClientNotifyMessage_ToServer_Implementation(FSSModeMessageData const& dat); \
	virtual void SSAntiCheatServerNotifyAddClientAction_ToClient_Implementation(const int32 resClientActionState, const int32 resActionCode, const FString& resActionDetails); \
	virtual void SSAntiCheatServerNotifyMessage_ToClient_Implementation(FSSModeMessageData const& dat); \
	virtual void SyncChallengeCount_Clent_Implementation(FSSChallengeCountData inSyncData); \
	virtual void SyncClientFPS_Server_Implementation(float inClientFPS); \
	virtual void SyncMatchMakeInfo_Server_Implementation(FSSMatchMakeInfoForAnalytics const& inMatchMakeInfo, FSSClientInfoForAnalytics const& inClientInfo); \
	virtual void SyncPlayerProfileForInGame_Server_Implementation(FSSPlayerProfileForInGame const& inProfile); \
	virtual void SyncStatusForWatch_ClientToServer_Server_Implementation(); \
	virtual void SyncStatusForWatch_Server_Implementation(FSSSyncStatusForWatch_Owner const& inSendData); \
	virtual void SyncStatusForWatch_ServerToWatcher_Client_Implementation(FSSSyncStatusForWatch_Replicated const& inSendData); \
 \
	DECLARE_FUNCTION(execActivity_CreateMatchOnClient); \
	DECLARE_FUNCTION(execActivity_LeaveMatchOnClient); \
	DECLARE_FUNCTION(execActivity_ReportOnClient); \
	DECLARE_FUNCTION(execActivity_SendResultCreateMatch); \
	DECLARE_FUNCTION(execActivity_SendResultLeaveMatch); \
	DECLARE_FUNCTION(execActivity_SendResultReport); \
	DECLARE_FUNCTION(execActivity_SendResultUpdateMatchStatus); \
	DECLARE_FUNCTION(execActivity_UpdateMatchStatusOnClient); \
	DECLARE_FUNCTION(execAddAttentionPoint); \
	DECLARE_FUNCTION(execAddKillCount); \
	DECLARE_FUNCTION(execAddKillCount_Server); \
	DECLARE_FUNCTION(execApplyChallengeCountToSaveData); \
	DECLARE_FUNCTION(execApplyDebugMenuParam); \
	DECLARE_FUNCTION(execApplyLastPlayRecordToSaveData); \
	DECLARE_FUNCTION(execApplyMasterData); \
	DECLARE_FUNCTION(execBeginFeverTime_Multicast); \
	DECLARE_FUNCTION(execCalcAttentionLevelFromPoint); \
	DECLARE_FUNCTION(execDebugResetAttention); \
	DECLARE_FUNCTION(execDebugSendGameStateDebugFlag_Server); \
	DECLARE_FUNCTION(execDebugSetCopyWrestlerSetupParamToAI_Server); \
	DECLARE_FUNCTION(execDoneDescription); \
	DECLARE_FUNCTION(execDoneOpenGamePlayScreen); \
	DECLARE_FUNCTION(execDoneUIPrepare); \
	DECLARE_FUNCTION(execForceEndFeverTime); \
	DECLARE_FUNCTION(execGetAfterFeverTimeRemainRate); \
	DECLARE_FUNCTION(execGetAssociatedSSPlayer); \
	DECLARE_FUNCTION(execGetAttentionLevel); \
	DECLARE_FUNCTION(execGetAttentionPoint); \
	DECLARE_FUNCTION(execGetClientFlowStateOnServer); \
	DECLARE_FUNCTION(execGetFeverCount); \
	DECLARE_FUNCTION(execGetFeverTimeRemainRate); \
	DECLARE_FUNCTION(execGetKillCount); \
	DECLARE_FUNCTION(execGetOwnerAIController); \
	DECLARE_FUNCTION(execGetOwnerLocalPlayerController); \
	DECLARE_FUNCTION(execGetOwnerPlayerController); \
	DECLARE_FUNCTION(execGetRandomBadgeId); \
	DECLARE_FUNCTION(execGetResultPlayerEXP); \
	DECLARE_FUNCTION(execGetSSPlayerControllerForUIUpdate); \
	DECLARE_FUNCTION(execGetWeaponColorListIndex); \
	DECLARE_FUNCTION(execGetWeaponColorUniqueId); \
	DECLARE_FUNCTION(execGetWeaponDecalId); \
	DECLARE_FUNCTION(execGetWeaponDecalSymbolId); \
	DECLARE_FUNCTION(execHasProgressFlag); \
	DECLARE_FUNCTION(execIsAfterFeverTime); \
	DECLARE_FUNCTION(execIsDoneResultAPI); \
	DECLARE_FUNCTION(execIsDoneSyncChallengeCount); \
	DECLARE_FUNCTION(execIsDoneSyncResult); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execIsLocalPlayer); \
	DECLARE_FUNCTION(execIsPlayerResultEnable); \
	DECLARE_FUNCTION(execIsResultTallyEnd); \
	DECLARE_FUNCTION(execOnRep_AttentionPoint); \
	DECLARE_FUNCTION(execOnRep_AttentionPoint_Impl); \
	DECLARE_FUNCTION(execOnRep_ChallengeCountData); \
	DECLARE_FUNCTION(execOnRep_EndGameReasonOnServer); \
	DECLARE_FUNCTION(execOnRep_FeverTimeBeginTime); \
	DECLARE_FUNCTION(execOnRep_KillCount); \
	DECLARE_FUNCTION(execOnRep_PlayerDataSync); \
	DECLARE_FUNCTION(execOnRep_ReplicatedClientResultData); \
	DECLARE_FUNCTION(execOnRep_ResultTallyData); \
	DECLARE_FUNCTION(execOnRep_SurvivorRanking); \
	DECLARE_FUNCTION(execOnRep_WatchedPlayerNum); \
	DECLARE_FUNCTION(execOnRep_WrestlerSetupParam); \
	DECLARE_FUNCTION(execOnYGS2Error_GameResult); \
	DECLARE_FUNCTION(execOnYGS2Error_GameStart); \
	DECLARE_FUNCTION(execOnYGS2Error_SessionResult); \
	DECLARE_FUNCTION(execOnYGS2Response_GameResult); \
	DECLARE_FUNCTION(execOnYGS2Response_GameStart); \
	DECLARE_FUNCTION(execOnYGS2Response_SessionResult); \
	DECLARE_FUNCTION(execRegisterLog_SlotMachineUseCount); \
	DECLARE_FUNCTION(execRegisterLog_VendingUseCount); \
	DECLARE_FUNCTION(execRequestYGS2_GameResult); \
	DECLARE_FUNCTION(execRequestYGS2_GameStart); \
	DECLARE_FUNCTION(execRequestYGS2_SessionResult); \
	DECLARE_FUNCTION(execReserveExpItem); \
	DECLARE_FUNCTION(execRetryErrorAPIEvent); \
	DECLARE_FUNCTION(execSendPlayerInfoSyncData_Server); \
	DECLARE_FUNCTION(execSetAttentionPoint); \
	DECLARE_FUNCTION(execSetAttentionPoint_Client); \
	DECLARE_FUNCTION(execSetAttentionPointForWatcher_Client); \
	DECLARE_FUNCTION(execSetDefaultPlayerEquipSettings); \
	DECLARE_FUNCTION(execSetDefaultPlayerEquipSettings_Ability); \
	DECLARE_FUNCTION(execSetDefaultPlayerEquipSettings_HeatSkill); \
	DECLARE_FUNCTION(execSetIgnoreAnalytics_Server); \
	DECLARE_FUNCTION(execSetPlayerEquipSettings); \
	DECLARE_FUNCTION(execSetPlayerEquipSettings_Ability); \
	DECLARE_FUNCTION(execSetPlayerSpawnPointId_Server); \
	DECLARE_FUNCTION(execSetPlayerSpawnPointIdResult_Client); \
	DECLARE_FUNCTION(execSetProgressFlag); \
	DECLARE_FUNCTION(execSetProgressFlag_Server); \
	DECLARE_FUNCTION(execSetResultTallyData); \
	DECLARE_FUNCTION(execSetWrestlerPresetParam); \
	DECLARE_FUNCTION(execSetWrestlerSetupParam); \
	DECLARE_FUNCTION(execSetWrestlerSetupParamByBaseStruct); \
	DECLARE_FUNCTION(execSSAntiCheatClientNotifyMessage_ToServer); \
	DECLARE_FUNCTION(execSSAntiCheatServerNotifyAddClientAction_ToClient); \
	DECLARE_FUNCTION(execSSAntiCheatServerNotifyMessage_ToClient); \
	DECLARE_FUNCTION(execSyncChallengeCount_Clent); \
	DECLARE_FUNCTION(execSyncClientFPS_Server); \
	DECLARE_FUNCTION(execSyncMatchMakeInfo_Server); \
	DECLARE_FUNCTION(execSyncPlayerProfileForInGame_Server); \
	DECLARE_FUNCTION(execSyncStatusForWatch_ClientToServer_Server); \
	DECLARE_FUNCTION(execSyncStatusForWatch_Server); \
	DECLARE_FUNCTION(execSyncStatusForWatch_ServerToWatcher); \
	DECLARE_FUNCTION(execSyncStatusForWatch_ServerToWatcher_Client); \
	DECLARE_FUNCTION(execUpdateSyncStatusForWatch);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_EVENT_PARMS \
	struct ELSSPlayerState_eventActivity_LeaveMatchOnClient_Parms \
	{ \
		FString MatchID; \
		FString ExternalAccountId; \
		FString Reason; \
	}; \
	struct ELSSPlayerState_eventActivity_ReportOnClient_Parms \
	{ \
		FString MatchID; \
		FSSActivityMatchResult Result; \
	}; \
	struct ELSSPlayerState_eventActivity_SendResultCreateMatch_Parms \
	{ \
		FString MatchID; \
	}; \
	struct ELSSPlayerState_eventActivity_SendResultUpdateMatchStatus_Parms \
	{ \
		EELActivityUpdateMatchStatus inStatus; \
	}; \
	struct ELSSPlayerState_eventActivity_UpdateMatchStatusOnClient_Parms \
	{ \
		FString MatchID; \
		EELActivityUpdateMatchStatus inStatus; \
	}; \
	struct ELSSPlayerState_eventBeginFeverTime_Multicast_Parms \
	{ \
		int32 inNewAttentionLevel; \
		float inBeginTime; \
	}; \
	struct ELSSPlayerState_eventDebugSendGameStateDebugFlag_Server_Parms \
	{ \
		ESSGameStateDebugFlag inDebugFlag; \
	}; \
	struct ELSSPlayerState_eventDebugYGS2DelayCancelRequestWhenHasFlag_Parms \
	{ \
		UYGS2RequestBase* inRequest; \
		ESSLocalDebugFlag inDebugFlag; \
		EYGS2ErrorType inErrorType; \
		float InDelayTime; \
	}; \
	struct ELSSPlayerState_eventGetChangeListByAsset_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSPlayerState_eventGetChangeListByAsset_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSPlayerState_eventSendPlayerInfoSyncData_Server_Parms \
	{ \
		FELSSLobbyPlayerInfo inInfoSyncData; \
	}; \
	struct ELSSPlayerState_eventSetAttentionPoint_Client_Parms \
	{ \
		int32 inAttentionUpdateId; \
		ESSAttentionReason inReason; \
		int32 inAttentionPoint; \
		int32 inAddPoint; \
	}; \
	struct ELSSPlayerState_eventSetAttentionPointForWatcher_Client_Parms \
	{ \
		AELSSPlayerState* inWatchedPlayer; \
		int32 inAttentionUpdateId; \
		ESSAttentionReason inReason; \
		int32 inAttentionPoint; \
		int32 inAddPoint; \
	}; \
	struct ELSSPlayerState_eventSetIgnoreAnalytics_Server_Parms \
	{ \
		bool IsOn; \
	}; \
	struct ELSSPlayerState_eventSetPlayerSpawnPointId_Server_Parms \
	{ \
		int32 spawnId; \
	}; \
	struct ELSSPlayerState_eventSetPlayerSpawnPointIdResult_Client_Parms \
	{ \
		bool isChange; \
	}; \
	struct ELSSPlayerState_eventSetProgressFlag_Server_Parms \
	{ \
		ESSPlayerProgress Type; \
		bool IsOn; \
	}; \
	struct ELSSPlayerState_eventSSAntiCheatClientNotifyMessage_ToServer_Parms \
	{ \
		FSSModeMessageData dat; \
	}; \
	struct ELSSPlayerState_eventSSAntiCheatServerNotifyAddClientAction_ToClient_Parms \
	{ \
		int32 resClientActionState; \
		int32 resActionCode; \
		FString resActionDetails; \
	}; \
	struct ELSSPlayerState_eventSSAntiCheatServerNotifyMessage_ToClient_Parms \
	{ \
		FSSModeMessageData dat; \
	}; \
	struct ELSSPlayerState_eventSyncChallengeCount_Clent_Parms \
	{ \
		FSSChallengeCountData inSyncData; \
	}; \
	struct ELSSPlayerState_eventSyncClientFPS_Server_Parms \
	{ \
		float inClientFPS; \
	}; \
	struct ELSSPlayerState_eventSyncMatchMakeInfo_Server_Parms \
	{ \
		FSSMatchMakeInfoForAnalytics inMatchMakeInfo; \
		FSSClientInfoForAnalytics inClientInfo; \
	}; \
	struct ELSSPlayerState_eventSyncPlayerProfileForInGame_Server_Parms \
	{ \
		FSSPlayerProfileForInGame inProfile; \
	}; \
	struct ELSSPlayerState_eventSyncStatusForWatch_Server_Parms \
	{ \
		FSSSyncStatusForWatch_Owner inSendData; \
	}; \
	struct ELSSPlayerState_eventSyncStatusForWatch_ServerToWatcher_Client_Parms \
	{ \
		FSSSyncStatusForWatch_Replicated inSendData; \
	}; \
	struct ELSSPlayerState_eventUpdateLeaderboardData_Parms \
	{ \
		FELSSResultTallyPlayerData tallyData; \
	}; \
	struct ELSSPlayerState_eventUpdatePlayerRankPoint_Parms \
	{ \
		int32 pt; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSPlayerState(); \
	friend struct Z_Construct_UClass_AELSSPlayerState_Statics; \
public: \
	DECLARE_CLASS(AELSSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		KillCountRep=NETFIELD_REP_START, \
		WatchedPlayerNum, \
		AttentionPoint, \
		FeverTimeBeginTime, \
		SurvivorRanking, \
		ExpItemPoint, \
		ExpItemPointLoopCount, \
		WrestlerSetupParamRep, \
		ProgressFlags, \
		EndGameReasonOnServer, \
		ChallengeCountDataRep, \
		ServerPlayerStateIndex, \
		ssResultTallyData, \
		ReplicatedClientResultData, \
		ssPlayerInfoSyncData, \
		NETFIELD_REP_END=ssPlayerInfoSyncData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAELSSPlayerState(); \
	friend struct Z_Construct_UClass_AELSSPlayerState_Statics; \
public: \
	DECLARE_CLASS(AELSSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		KillCountRep=NETFIELD_REP_START, \
		WatchedPlayerNum, \
		AttentionPoint, \
		FeverTimeBeginTime, \
		SurvivorRanking, \
		ExpItemPoint, \
		ExpItemPointLoopCount, \
		WrestlerSetupParamRep, \
		ProgressFlags, \
		EndGameReasonOnServer, \
		ChallengeCountDataRep, \
		ServerPlayerStateIndex, \
		ssResultTallyData, \
		ReplicatedClientResultData, \
		ssPlayerInfoSyncData, \
		NETFIELD_REP_END=ssPlayerInfoSyncData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPlayerState(AELSSPlayerState&&); \
	NO_API AELSSPlayerState(const AELSSPlayerState&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPlayerState(AELSSPlayerState&&); \
	NO_API AELSSPlayerState(const AELSSPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSPlayerState)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MasterData() { return STRUCT_OFFSET(AELSSPlayerState, MasterData); } \
	FORCEINLINE static uint32 __PPO__KillCountRep() { return STRUCT_OFFSET(AELSSPlayerState, KillCountRep); } \
	FORCEINLINE static uint32 __PPO__KillCountLocal() { return STRUCT_OFFSET(AELSSPlayerState, KillCountLocal); } \
	FORCEINLINE static uint32 __PPO__WatcherLocal() { return STRUCT_OFFSET(AELSSPlayerState, WatcherLocal); } \
	FORCEINLINE static uint32 __PPO__WatcherOnServer() { return STRUCT_OFFSET(AELSSPlayerState, WatcherOnServer); } \
	FORCEINLINE static uint32 __PPO__WatchedPlayerNum() { return STRUCT_OFFSET(AELSSPlayerState, WatchedPlayerNum); } \
	FORCEINLINE static uint32 __PPO__SyncStatusForWatch_Replicated() { return STRUCT_OFFSET(AELSSPlayerState, SyncStatusForWatch_Replicated); } \
	FORCEINLINE static uint32 __PPO__SyncStatus_CameraRot() { return STRUCT_OFFSET(AELSSPlayerState, SyncStatus_CameraRot); } \
	FORCEINLINE static uint32 __PPO__SyncStatus_InteractTarget() { return STRUCT_OFFSET(AELSSPlayerState, SyncStatus_InteractTarget); } \
	FORCEINLINE static uint32 __PPO__SyncStatusForWatch_Owner() { return STRUCT_OFFSET(AELSSPlayerState, SyncStatusForWatch_Owner); } \
	FORCEINLINE static uint32 __PPO__AttentionPoint() { return STRUCT_OFFSET(AELSSPlayerState, AttentionPoint); } \
	FORCEINLINE static uint32 __PPO__AttentionGaugeState() { return STRUCT_OFFSET(AELSSPlayerState, AttentionGaugeState); } \
	FORCEINLINE static uint32 __PPO__FeverTimeBeginTime() { return STRUCT_OFFSET(AELSSPlayerState, FeverTimeBeginTime); } \
	FORCEINLINE static uint32 __PPO__NegativeTimer() { return STRUCT_OFFSET(AELSSPlayerState, NegativeTimer); } \
	FORCEINLINE static uint32 __PPO__AttentionAdjustParam() { return STRUCT_OFFSET(AELSSPlayerState, AttentionAdjustParam); } \
	FORCEINLINE static uint32 __PPO__ExpItemReservedList() { return STRUCT_OFFSET(AELSSPlayerState, ExpItemReservedList); } \
	FORCEINLINE static uint32 __PPO__ExpItemSpawnDelayTime() { return STRUCT_OFFSET(AELSSPlayerState, ExpItemSpawnDelayTime); } \
	FORCEINLINE static uint32 __PPO__AfterFeverTimeDuration() { return STRUCT_OFFSET(AELSSPlayerState, AfterFeverTimeDuration); } \
	FORCEINLINE static uint32 __PPO__SurvivorRanking() { return STRUCT_OFFSET(AELSSPlayerState, SurvivorRanking); } \
	FORCEINLINE static uint32 __PPO__ExpItemPoint() { return STRUCT_OFFSET(AELSSPlayerState, ExpItemPoint); } \
	FORCEINLINE static uint32 __PPO__ExpItemPointLoopCount() { return STRUCT_OFFSET(AELSSPlayerState, ExpItemPointLoopCount); } \
	FORCEINLINE static uint32 __PPO__AttentionLevelParam() { return STRUCT_OFFSET(AELSSPlayerState, AttentionLevelParam); } \
	FORCEINLINE static uint32 __PPO__MoveSetSettingsOnServer() { return STRUCT_OFFSET(AELSSPlayerState, MoveSetSettingsOnServer); } \
	FORCEINLINE static uint32 __PPO__EquipSettingsOnServer() { return STRUCT_OFFSET(AELSSPlayerState, EquipSettingsOnServer); } \
	FORCEINLINE static uint32 __PPO__SettingAbilityId_1() { return STRUCT_OFFSET(AELSSPlayerState, SettingAbilityId_1); } \
	FORCEINLINE static uint32 __PPO__SettingAbilityId_2() { return STRUCT_OFFSET(AELSSPlayerState, SettingAbilityId_2); } \
	FORCEINLINE static uint32 __PPO__SettingAbilityId_3() { return STRUCT_OFFSET(AELSSPlayerState, SettingAbilityId_3); } \
	FORCEINLINE static uint32 __PPO__UseDefaultUserSettings() { return STRUCT_OFFSET(AELSSPlayerState, UseDefaultUserSettings); } \
	FORCEINLINE static uint32 __PPO__WrestlerSetupParamRep() { return STRUCT_OFFSET(AELSSPlayerState, WrestlerSetupParamRep); } \
	FORCEINLINE static uint32 __PPO__WrestlerSetupParam() { return STRUCT_OFFSET(AELSSPlayerState, WrestlerSetupParam); } \
	FORCEINLINE static uint32 __PPO__ProgressFlags() { return STRUCT_OFFSET(AELSSPlayerState, ProgressFlags); } \
	FORCEINLINE static uint32 __PPO__Log_HeatLevel() { return STRUCT_OFFSET(AELSSPlayerState, Log_HeatLevel); } \
	FORCEINLINE static uint32 __PPO__Log_TotalAttack() { return STRUCT_OFFSET(AELSSPlayerState, Log_TotalAttack); } \
	FORCEINLINE static uint32 __PPO__Log_TotalDamage() { return STRUCT_OFFSET(AELSSPlayerState, Log_TotalDamage); } \
	FORCEINLINE static uint32 __PPO__Log_Mileage() { return STRUCT_OFFSET(AELSSPlayerState, Log_Mileage); } \
	FORCEINLINE static uint32 __PPO__Log_Area() { return STRUCT_OFFSET(AELSSPlayerState, Log_Area); } \
	FORCEINLINE static uint32 __PPO__Log_PickupItem() { return STRUCT_OFFSET(AELSSPlayerState, Log_PickupItem); } \
	FORCEINLINE static uint32 __PPO__Log_PickupWeapon() { return STRUCT_OFFSET(AELSSPlayerState, Log_PickupWeapon); } \
	FORCEINLINE static uint32 __PPO__Log_PickupShield() { return STRUCT_OFFSET(AELSSPlayerState, Log_PickupShield); } \
	FORCEINLINE static uint32 __PPO__Log_KilledPlayer() { return STRUCT_OFFSET(AELSSPlayerState, Log_KilledPlayer); } \
	FORCEINLINE static uint32 __PPO__Log_KillerPlayer() { return STRUCT_OFFSET(AELSSPlayerState, Log_KillerPlayer); } \
	FORCEINLINE static uint32 __PPO__Log_ReviveFromKoCount() { return STRUCT_OFFSET(AELSSPlayerState, Log_ReviveFromKoCount); } \
	FORCEINLINE static uint32 __PPO__Log_StrikeCount() { return STRUCT_OFFSET(AELSSPlayerState, Log_StrikeCount); } \
	FORCEINLINE static uint32 __PPO__Log_GrappleCount() { return STRUCT_OFFSET(AELSSPlayerState, Log_GrappleCount); } \
	FORCEINLINE static uint32 __PPO__Log_WeaponAttackCount() { return STRUCT_OFFSET(AELSSPlayerState, Log_WeaponAttackCount); } \
	FORCEINLINE static uint32 __PPO__Log_FinisherId() { return STRUCT_OFFSET(AELSSPlayerState, Log_FinisherId); } \
	FORCEINLINE static uint32 __PPO__Log_FinisherCount() { return STRUCT_OFFSET(AELSSPlayerState, Log_FinisherCount); } \
	FORCEINLINE static uint32 __PPO__Log_VehicleRideCount() { return STRUCT_OFFSET(AELSSPlayerState, Log_VehicleRideCount); } \
	FORCEINLINE static uint32 __PPO__Log_AbilityUseCount() { return STRUCT_OFFSET(AELSSPlayerState, Log_AbilityUseCount); } \
	FORCEINLINE static uint32 __PPO__Log_VendingUseCount() { return STRUCT_OFFSET(AELSSPlayerState, Log_VendingUseCount); } \
	FORCEINLINE static uint32 __PPO__Log_SlotMachineUseCount() { return STRUCT_OFFSET(AELSSPlayerState, Log_SlotMachineUseCount); } \
	FORCEINLINE static uint32 __PPO__EndGameReasonOnServer() { return STRUCT_OFFSET(AELSSPlayerState, EndGameReasonOnServer); } \
	FORCEINLINE static uint32 __PPO__ChallengeCountData() { return STRUCT_OFFSET(AELSSPlayerState, ChallengeCountData); } \
	FORCEINLINE static uint32 __PPO__ChallengeCountDataRep() { return STRUCT_OFFSET(AELSSPlayerState, ChallengeCountDataRep); } \
	FORCEINLINE static uint32 __PPO__SSPlayerProfileForInGame() { return STRUCT_OFFSET(AELSSPlayerState, SSPlayerProfileForInGame); } \
	FORCEINLINE static uint32 __PPO__SSMatchMakeInfo() { return STRUCT_OFFSET(AELSSPlayerState, SSMatchMakeInfo); } \
	FORCEINLINE static uint32 __PPO__SSClientInfo() { return STRUCT_OFFSET(AELSSPlayerState, SSClientInfo); } \
	FORCEINLINE static uint32 __PPO__ClientIPForServer() { return STRUCT_OFFSET(AELSSPlayerState, ClientIPForServer); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_48_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
