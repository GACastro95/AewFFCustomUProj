// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPlayerState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSActivityMatchResult();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELActivityUpdateMatchStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionReason();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLocalDebugFlag();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSClientFlowState();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSAIController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerController_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerProgress();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FRequest_ErrSetupData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerEquipSettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FSSModeMessageData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSChallengeCountData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSClientInfoForAnalytics();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerProfileForInGame();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSResultTallyPlayerData();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMasterData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttentionGaugeState();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionAdjustParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSExpItemReserved();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionLevelParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSEndGameReason();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSPlayerData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EResultTallyState();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSReplicatedClientResultData();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_PlayerSpawnPointChangeResult__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AELSSPlayerState::execActivity_CreateMatchOnClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activity_CreateMatchOnClient_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execActivity_LeaveMatchOnClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalAccountId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activity_LeaveMatchOnClient_Implementation(Z_Param_MatchID,Z_Param_ExternalAccountId,Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execActivity_ReportOnClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_GET_STRUCT(FSSActivityMatchResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activity_ReportOnClient_Implementation(Z_Param_MatchID,Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execActivity_SendResultCreateMatch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activity_SendResultCreateMatch_Implementation(Z_Param_MatchID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execActivity_SendResultLeaveMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activity_SendResultLeaveMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execActivity_SendResultReport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activity_SendResultReport_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execActivity_SendResultUpdateMatchStatus)
	{
		P_GET_ENUM(EELActivityUpdateMatchStatus,Z_Param_inStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activity_SendResultUpdateMatchStatus_Implementation(EELActivityUpdateMatchStatus(Z_Param_inStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execActivity_UpdateMatchStatusOnClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_GET_ENUM(EELActivityUpdateMatchStatus,Z_Param_inStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activity_UpdateMatchStatusOnClient_Implementation(Z_Param_MatchID,EELActivityUpdateMatchStatus(Z_Param_inStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execAddAttentionPoint)
	{
		P_GET_ENUM(ESSAttentionReason,Z_Param_inReason);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAddPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttentionPoint(ESSAttentionReason(Z_Param_inReason),Z_Param_inAddPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execAddKillCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddKillCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execAddKillCount_Server)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddKillCount_Server_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execApplyChallengeCountToSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyChallengeCountToSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execApplyDebugMenuParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDebugMenuParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execApplyLastPlayRecordToSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyLastPlayRecordToSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execApplyMasterData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyMasterData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execBeginFeverTime_Multicast)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inNewAttentionLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inBeginTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginFeverTime_Multicast_Implementation(Z_Param_inNewAttentionLevel,Z_Param_inBeginTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execCalcAttentionLevelFromPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CalcAttentionLevelFromPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execDebugResetAttention)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugResetAttention_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execDebugSendGameStateDebugFlag_Server)
	{
		P_GET_ENUM(ESSGameStateDebugFlag,Z_Param_inDebugFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSendGameStateDebugFlag_Server_Implementation(ESSGameStateDebugFlag(Z_Param_inDebugFlag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execDebugSetCopyWrestlerSetupParamToAI_Server)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSetCopyWrestlerSetupParamToAI_Server_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execDoneDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoneDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execDoneOpenGamePlayScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoneOpenGamePlayScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execDoneUIPrepare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoneUIPrepare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execForceEndFeverTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceEndFeverTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetAfterFeverTimeRemainRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAfterFeverTimeRemainRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetAssociatedSSPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->GetAssociatedSSPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetAttentionLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAttentionLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetAttentionPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAttentionPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetClientFlowStateOnServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSClientFlowState*)Z_Param__Result=P_THIS->GetClientFlowStateOnServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetFeverCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFeverCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetFeverTimeRemainRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFeverTimeRemainRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetKillCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKillCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetOwnerAIController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSAIController**)Z_Param__Result=P_THIS->GetOwnerAIController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetOwnerLocalPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayerController**)Z_Param__Result=P_THIS->GetOwnerLocalPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetOwnerPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayerController**)Z_Param__Result=P_THIS->GetOwnerPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetRandomBadgeId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomBadgeId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetResultPlayerEXP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResultPlayerEXP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetSSPlayerControllerForUIUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayerController**)Z_Param__Result=P_THIS->GetSSPlayerControllerForUIUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetWeaponColorListIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeaponColorListIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetWeaponColorUniqueId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeaponColorUniqueId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetWeaponDecalId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeaponDecalId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execGetWeaponDecalSymbolId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeaponDecalSymbolId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execHasProgressFlag)
	{
		P_GET_ENUM(ESSPlayerProgress,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasProgressFlag(ESSPlayerProgress(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execIsAfterFeverTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAfterFeverTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execIsDoneResultAPI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneResultAPI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execIsDoneSyncChallengeCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneSyncChallengeCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execIsDoneSyncResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneSyncResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execIsLocalPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execIsPlayerResultEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerResultEnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execIsResultTallyEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsResultTallyEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_AttentionPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttentionPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_AttentionPoint_Impl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttentionPoint_Impl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_ChallengeCountData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ChallengeCountData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_EndGameReasonOnServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EndGameReasonOnServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_FeverTimeBeginTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FeverTimeBeginTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_KillCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_KillCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_PlayerDataSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerDataSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_ReplicatedClientResultData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedClientResultData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_ResultTallyData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ResultTallyData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_SurvivorRanking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SurvivorRanking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_WatchedPlayerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WatchedPlayerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnRep_WrestlerSetupParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WrestlerSetupParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnYGS2Error_GameResult)
	{
		P_GET_UBOOL(Z_Param_isYES);
		P_GET_STRUCT(FRequest_ErrSetupData,Z_Param_errDialogData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Error_GameResult(Z_Param_isYES,Z_Param_errDialogData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnYGS2Error_GameStart)
	{
		P_GET_UBOOL(Z_Param_isYES);
		P_GET_STRUCT(FRequest_ErrSetupData,Z_Param_errDialogData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Error_GameStart(Z_Param_isYES,Z_Param_errDialogData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnYGS2Error_SessionResult)
	{
		P_GET_UBOOL(Z_Param_isYES);
		P_GET_STRUCT(FRequest_ErrSetupData,Z_Param_errDialogData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Error_SessionResult(Z_Param_isYES,Z_Param_errDialogData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnYGS2Response_GameResult)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response_GameResult(EYGS2ErrorType(Z_Param_ErrorType),Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnYGS2Response_GameStart)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response_GameStart(EYGS2ErrorType(Z_Param_ErrorType),Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execOnYGS2Response_SessionResult)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response_SessionResult(EYGS2ErrorType(Z_Param_ErrorType),Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execRegisterLog_SlotMachineUseCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterLog_SlotMachineUseCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execRegisterLog_VendingUseCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterLog_VendingUseCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execRequestYGS2_GameResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestYGS2_GameResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execRequestYGS2_GameStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestYGS2_GameStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execRequestYGS2_SessionResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestYGS2_SessionResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execReserveExpItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inExpItemLotGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveExpItem(Z_Param_inExpItemLotGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execRetryErrorAPIEvent)
	{
		P_GET_STRUCT_REF(FRequest_ErrSetupData,Z_Param_Out_apiErrData);
		P_GET_PROPERTY(FIntProperty,Z_Param_errRetryCnt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetryErrorAPIEvent(Z_Param_Out_apiErrData,Z_Param_errRetryCnt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSendPlayerInfoSyncData_Server)
	{
		P_GET_STRUCT(FELSSLobbyPlayerInfo,Z_Param_inInfoSyncData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPlayerInfoSyncData_Server_Implementation(Z_Param_inInfoSyncData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetAttentionPoint)
	{
		P_GET_ENUM(ESSAttentionReason,Z_Param_inReason);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPrevPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAddPointForHUD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttentionPoint(ESSAttentionReason(Z_Param_inReason),Z_Param_inAttentionPoint,Z_Param_inPrevPoint,Z_Param_inAddPointForHUD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetAttentionPoint_Client)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionUpdateId);
		P_GET_ENUM(ESSAttentionReason,Z_Param_inReason);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAddPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttentionPoint_Client_Implementation(Z_Param_inAttentionUpdateId,ESSAttentionReason(Z_Param_inReason),Z_Param_inAttentionPoint,Z_Param_inAddPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetAttentionPointForWatcher_Client)
	{
		P_GET_OBJECT(AELSSPlayerState,Z_Param_inWatchedPlayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionUpdateId);
		P_GET_ENUM(ESSAttentionReason,Z_Param_inReason);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAddPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttentionPointForWatcher_Client_Implementation(Z_Param_inWatchedPlayer,Z_Param_inAttentionUpdateId,ESSAttentionReason(Z_Param_inReason),Z_Param_inAttentionPoint,Z_Param_inAddPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetDefaultPlayerEquipSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDefaultPlayerEquipSettingsId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultPlayerEquipSettings(Z_Param_inDefaultPlayerEquipSettingsId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetDefaultPlayerEquipSettings_Ability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDefaultPlayerEquipSettingsId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultPlayerEquipSettings_Ability(Z_Param_inDefaultPlayerEquipSettingsId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetDefaultPlayerEquipSettings_HeatSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDefaultPlayerEquipSettingsId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultPlayerEquipSettings_HeatSkill(Z_Param_inDefaultPlayerEquipSettingsId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetIgnoreAnalytics_Server)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoreAnalytics_Server_Implementation(Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetPlayerEquipSettings)
	{
		P_GET_STRUCT_REF(FSSPlayerEquipSettings,Z_Param_Out_equipSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerEquipSettings(Z_Param_Out_equipSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetPlayerEquipSettings_Ability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbility1);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbility2);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbility3);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerEquipSettings_Ability(Z_Param_inAbility1,Z_Param_inAbility2,Z_Param_inAbility3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetPlayerSpawnPointId_Server)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_spawnId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerSpawnPointId_Server_Implementation(Z_Param_spawnId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetPlayerSpawnPointIdResult_Client)
	{
		P_GET_UBOOL(Z_Param_isChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerSpawnPointIdResult_Client_Implementation(Z_Param_isChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetProgressFlag)
	{
		P_GET_ENUM(ESSPlayerProgress,Z_Param_Type);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgressFlag(ESSPlayerProgress(Z_Param_Type),Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetProgressFlag_Server)
	{
		P_GET_ENUM(ESSPlayerProgress,Z_Param_Type);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgressFlag_Server_Implementation(ESSPlayerProgress(Z_Param_Type),Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetResultTallyData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tallyData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResultTallyData(Z_Param_tallyData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetWrestlerPresetParam)
	{
		P_GET_STRUCT_REF(FSSWrestlerMovePresetParam,Z_Param_Out_wrestlerPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerPresetParam(Z_Param_Out_wrestlerPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetWrestlerSetupParam)
	{
		P_GET_STRUCT_REF(FSSWrestlerSetupParam,Z_Param_Out_NewWrestlerSetupParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerSetupParam(Z_Param_Out_NewWrestlerSetupParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSetWrestlerSetupParamByBaseStruct)
	{
		P_GET_STRUCT_REF(FWrestlerSetupParam,Z_Param_Out_NewWrestlerSetupParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerSetupParamByBaseStruct(Z_Param_Out_NewWrestlerSetupParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSSAntiCheatClientNotifyMessage_ToServer)
	{
		P_GET_STRUCT(FSSModeMessageData,Z_Param_dat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSAntiCheatClientNotifyMessage_ToServer_Implementation(Z_Param_dat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSSAntiCheatServerNotifyAddClientAction_ToClient)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_resClientActionState);
		P_GET_PROPERTY(FIntProperty,Z_Param_resActionCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_resActionDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSAntiCheatServerNotifyAddClientAction_ToClient_Implementation(Z_Param_resClientActionState,Z_Param_resActionCode,Z_Param_resActionDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSSAntiCheatServerNotifyMessage_ToClient)
	{
		P_GET_STRUCT(FSSModeMessageData,Z_Param_dat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSAntiCheatServerNotifyMessage_ToClient_Implementation(Z_Param_dat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSyncChallengeCount_Clent)
	{
		P_GET_STRUCT(FSSChallengeCountData,Z_Param_inSyncData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncChallengeCount_Clent_Implementation(Z_Param_inSyncData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSyncClientFPS_Server)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inClientFPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncClientFPS_Server_Implementation(Z_Param_inClientFPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSyncMatchMakeInfo_Server)
	{
		P_GET_STRUCT(FSSMatchMakeInfoForAnalytics,Z_Param_inMatchMakeInfo);
		P_GET_STRUCT(FSSClientInfoForAnalytics,Z_Param_inClientInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncMatchMakeInfo_Server_Implementation(Z_Param_inMatchMakeInfo,Z_Param_inClientInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSyncPlayerProfileForInGame_Server)
	{
		P_GET_STRUCT(FSSPlayerProfileForInGame,Z_Param_inProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncPlayerProfileForInGame_Server_Implementation(Z_Param_inProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSyncStatusForWatch_ClientToServer_Server)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncStatusForWatch_ClientToServer_Server_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSyncStatusForWatch_Server)
	{
		P_GET_STRUCT(FSSSyncStatusForWatch_Owner,Z_Param_inSendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncStatusForWatch_Server_Implementation(Z_Param_inSendData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSyncStatusForWatch_ServerToWatcher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncStatusForWatch_ServerToWatcher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execSyncStatusForWatch_ServerToWatcher_Client)
	{
		P_GET_STRUCT(FSSSyncStatusForWatch_Replicated,Z_Param_inSendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncStatusForWatch_ServerToWatcher_Client_Implementation(Z_Param_inSendData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPlayerState::execUpdateSyncStatusForWatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSyncStatusForWatch();
		P_NATIVE_END;
	}
	static FName NAME_AELSSPlayerState_Activity_CreateMatchOnClient = FName(TEXT("Activity_CreateMatchOnClient"));
	void AELSSPlayerState::Activity_CreateMatchOnClient()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_Activity_CreateMatchOnClient),NULL);
	}
	static FName NAME_AELSSPlayerState_Activity_LeaveMatchOnClient = FName(TEXT("Activity_LeaveMatchOnClient"));
	void AELSSPlayerState::Activity_LeaveMatchOnClient(const FString& MatchID, const FString& ExternalAccountId, const FString& Reason)
	{
		ELSSPlayerState_eventActivity_LeaveMatchOnClient_Parms Parms;
		Parms.MatchID=MatchID;
		Parms.ExternalAccountId=ExternalAccountId;
		Parms.Reason=Reason;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_Activity_LeaveMatchOnClient),&Parms);
	}
	static FName NAME_AELSSPlayerState_Activity_ReportOnClient = FName(TEXT("Activity_ReportOnClient"));
	void AELSSPlayerState::Activity_ReportOnClient(const FString& MatchID, FSSActivityMatchResult const& Result)
	{
		ELSSPlayerState_eventActivity_ReportOnClient_Parms Parms;
		Parms.MatchID=MatchID;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_Activity_ReportOnClient),&Parms);
	}
	static FName NAME_AELSSPlayerState_Activity_SendResultCreateMatch = FName(TEXT("Activity_SendResultCreateMatch"));
	void AELSSPlayerState::Activity_SendResultCreateMatch(const FString& MatchID)
	{
		ELSSPlayerState_eventActivity_SendResultCreateMatch_Parms Parms;
		Parms.MatchID=MatchID;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_Activity_SendResultCreateMatch),&Parms);
	}
	static FName NAME_AELSSPlayerState_Activity_SendResultLeaveMatch = FName(TEXT("Activity_SendResultLeaveMatch"));
	void AELSSPlayerState::Activity_SendResultLeaveMatch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_Activity_SendResultLeaveMatch),NULL);
	}
	static FName NAME_AELSSPlayerState_Activity_SendResultReport = FName(TEXT("Activity_SendResultReport"));
	void AELSSPlayerState::Activity_SendResultReport()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_Activity_SendResultReport),NULL);
	}
	static FName NAME_AELSSPlayerState_Activity_SendResultUpdateMatchStatus = FName(TEXT("Activity_SendResultUpdateMatchStatus"));
	void AELSSPlayerState::Activity_SendResultUpdateMatchStatus(EELActivityUpdateMatchStatus inStatus)
	{
		ELSSPlayerState_eventActivity_SendResultUpdateMatchStatus_Parms Parms;
		Parms.inStatus=inStatus;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_Activity_SendResultUpdateMatchStatus),&Parms);
	}
	static FName NAME_AELSSPlayerState_Activity_UpdateMatchStatusOnClient = FName(TEXT("Activity_UpdateMatchStatusOnClient"));
	void AELSSPlayerState::Activity_UpdateMatchStatusOnClient(const FString& MatchID, EELActivityUpdateMatchStatus inStatus)
	{
		ELSSPlayerState_eventActivity_UpdateMatchStatusOnClient_Parms Parms;
		Parms.MatchID=MatchID;
		Parms.inStatus=inStatus;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_Activity_UpdateMatchStatusOnClient),&Parms);
	}
	static FName NAME_AELSSPlayerState_AddKillCount_Server = FName(TEXT("AddKillCount_Server"));
	void AELSSPlayerState::AddKillCount_Server()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_AddKillCount_Server),NULL);
	}
	static FName NAME_AELSSPlayerState_BeginFeverTime_Multicast = FName(TEXT("BeginFeverTime_Multicast"));
	void AELSSPlayerState::BeginFeverTime_Multicast(int32 inNewAttentionLevel, float inBeginTime)
	{
		ELSSPlayerState_eventBeginFeverTime_Multicast_Parms Parms;
		Parms.inNewAttentionLevel=inNewAttentionLevel;
		Parms.inBeginTime=inBeginTime;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_BeginFeverTime_Multicast),&Parms);
	}
	static FName NAME_AELSSPlayerState_DebugResetAttention = FName(TEXT("DebugResetAttention"));
	void AELSSPlayerState::DebugResetAttention()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_DebugResetAttention),NULL);
	}
	static FName NAME_AELSSPlayerState_DebugSendGameStateDebugFlag_Server = FName(TEXT("DebugSendGameStateDebugFlag_Server"));
	void AELSSPlayerState::DebugSendGameStateDebugFlag_Server(ESSGameStateDebugFlag inDebugFlag)
	{
		ELSSPlayerState_eventDebugSendGameStateDebugFlag_Server_Parms Parms;
		Parms.inDebugFlag=inDebugFlag;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_DebugSendGameStateDebugFlag_Server),&Parms);
	}
	static FName NAME_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server = FName(TEXT("DebugSetCopyWrestlerSetupParamToAI_Server"));
	void AELSSPlayerState::DebugSetCopyWrestlerSetupParamToAI_Server()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server),NULL);
	}
	static FName NAME_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag = FName(TEXT("DebugYGS2DelayCancelRequestWhenHasFlag"));
	void AELSSPlayerState::DebugYGS2DelayCancelRequestWhenHasFlag(UYGS2RequestBase* inRequest, ESSLocalDebugFlag inDebugFlag, EYGS2ErrorType inErrorType, float InDelayTime)
	{
		ELSSPlayerState_eventDebugYGS2DelayCancelRequestWhenHasFlag_Parms Parms;
		Parms.inRequest=inRequest;
		Parms.inDebugFlag=inDebugFlag;
		Parms.inErrorType=inErrorType;
		Parms.InDelayTime=InDelayTime;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag),&Parms);
	}
	static FName NAME_AELSSPlayerState_GetChangeListByAsset = FName(TEXT("GetChangeListByAsset"));
	int32 AELSSPlayerState::GetChangeListByAsset() const
	{
		ELSSPlayerState_eventGetChangeListByAsset_Parms Parms;
		const_cast<AELSSPlayerState*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_GetChangeListByAsset),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSPlayerState_OnChangeLocalKillCount = FName(TEXT("OnChangeLocalKillCount"));
	void AELSSPlayerState::OnChangeLocalKillCount()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_OnChangeLocalKillCount),NULL);
	}
	static FName NAME_AELSSPlayerState_RequestYGS2Flow_GameResult = FName(TEXT("RequestYGS2Flow_GameResult"));
	void AELSSPlayerState::RequestYGS2Flow_GameResult()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_RequestYGS2Flow_GameResult),NULL);
	}
	static FName NAME_AELSSPlayerState_RequestYGS2Flow_GameStart = FName(TEXT("RequestYGS2Flow_GameStart"));
	void AELSSPlayerState::RequestYGS2Flow_GameStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_RequestYGS2Flow_GameStart),NULL);
	}
	static FName NAME_AELSSPlayerState_RequestYGS2Flow_SessionResult = FName(TEXT("RequestYGS2Flow_SessionResult"));
	void AELSSPlayerState::RequestYGS2Flow_SessionResult()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_RequestYGS2Flow_SessionResult),NULL);
	}
	static FName NAME_AELSSPlayerState_ResultTallyDataToSyncBPEvent = FName(TEXT("ResultTallyDataToSyncBPEvent"));
	void AELSSPlayerState::ResultTallyDataToSyncBPEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_ResultTallyDataToSyncBPEvent),NULL);
	}
	static FName NAME_AELSSPlayerState_SendPlayerInfoSyncData_Server = FName(TEXT("SendPlayerInfoSyncData_Server"));
	void AELSSPlayerState::SendPlayerInfoSyncData_Server(FELSSLobbyPlayerInfo const& inInfoSyncData)
	{
		ELSSPlayerState_eventSendPlayerInfoSyncData_Server_Parms Parms;
		Parms.inInfoSyncData=inInfoSyncData;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SendPlayerInfoSyncData_Server),&Parms);
	}
	static FName NAME_AELSSPlayerState_SetAttentionPoint_Client = FName(TEXT("SetAttentionPoint_Client"));
	void AELSSPlayerState::SetAttentionPoint_Client(int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint)
	{
		ELSSPlayerState_eventSetAttentionPoint_Client_Parms Parms;
		Parms.inAttentionUpdateId=inAttentionUpdateId;
		Parms.inReason=inReason;
		Parms.inAttentionPoint=inAttentionPoint;
		Parms.inAddPoint=inAddPoint;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SetAttentionPoint_Client),&Parms);
	}
	static FName NAME_AELSSPlayerState_SetAttentionPointForWatcher_Client = FName(TEXT("SetAttentionPointForWatcher_Client"));
	void AELSSPlayerState::SetAttentionPointForWatcher_Client(AELSSPlayerState* inWatchedPlayer, int32 inAttentionUpdateId, ESSAttentionReason inReason, int32 inAttentionPoint, int32 inAddPoint)
	{
		ELSSPlayerState_eventSetAttentionPointForWatcher_Client_Parms Parms;
		Parms.inWatchedPlayer=inWatchedPlayer;
		Parms.inAttentionUpdateId=inAttentionUpdateId;
		Parms.inReason=inReason;
		Parms.inAttentionPoint=inAttentionPoint;
		Parms.inAddPoint=inAddPoint;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SetAttentionPointForWatcher_Client),&Parms);
	}
	static FName NAME_AELSSPlayerState_SetIgnoreAnalytics_Server = FName(TEXT("SetIgnoreAnalytics_Server"));
	void AELSSPlayerState::SetIgnoreAnalytics_Server(bool IsOn)
	{
		ELSSPlayerState_eventSetIgnoreAnalytics_Server_Parms Parms;
		Parms.IsOn=IsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SetIgnoreAnalytics_Server),&Parms);
	}
	static FName NAME_AELSSPlayerState_SetPlayerSpawnPointId_Server = FName(TEXT("SetPlayerSpawnPointId_Server"));
	void AELSSPlayerState::SetPlayerSpawnPointId_Server(const int32 spawnId)
	{
		ELSSPlayerState_eventSetPlayerSpawnPointId_Server_Parms Parms;
		Parms.spawnId=spawnId;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SetPlayerSpawnPointId_Server),&Parms);
	}
	static FName NAME_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client = FName(TEXT("SetPlayerSpawnPointIdResult_Client"));
	void AELSSPlayerState::SetPlayerSpawnPointIdResult_Client(bool isChange)
	{
		ELSSPlayerState_eventSetPlayerSpawnPointIdResult_Client_Parms Parms;
		Parms.isChange=isChange ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client),&Parms);
	}
	static FName NAME_AELSSPlayerState_SetProgressFlag_Server = FName(TEXT("SetProgressFlag_Server"));
	void AELSSPlayerState::SetProgressFlag_Server(ESSPlayerProgress Type, bool IsOn)
	{
		ELSSPlayerState_eventSetProgressFlag_Server_Parms Parms;
		Parms.Type=Type;
		Parms.IsOn=IsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SetProgressFlag_Server),&Parms);
	}
	static FName NAME_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer = FName(TEXT("SSAntiCheatClientNotifyMessage_ToServer"));
	void AELSSPlayerState::SSAntiCheatClientNotifyMessage_ToServer(FSSModeMessageData const& dat)
	{
		ELSSPlayerState_eventSSAntiCheatClientNotifyMessage_ToServer_Parms Parms;
		Parms.dat=dat;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer),&Parms);
	}
	static FName NAME_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient = FName(TEXT("SSAntiCheatServerNotifyAddClientAction_ToClient"));
	void AELSSPlayerState::SSAntiCheatServerNotifyAddClientAction_ToClient(const int32 resClientActionState, const int32 resActionCode, const FString& resActionDetails)
	{
		ELSSPlayerState_eventSSAntiCheatServerNotifyAddClientAction_ToClient_Parms Parms;
		Parms.resClientActionState=resClientActionState;
		Parms.resActionCode=resActionCode;
		Parms.resActionDetails=resActionDetails;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient),&Parms);
	}
	static FName NAME_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient = FName(TEXT("SSAntiCheatServerNotifyMessage_ToClient"));
	void AELSSPlayerState::SSAntiCheatServerNotifyMessage_ToClient(FSSModeMessageData const& dat)
	{
		ELSSPlayerState_eventSSAntiCheatServerNotifyMessage_ToClient_Parms Parms;
		Parms.dat=dat;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient),&Parms);
	}
	static FName NAME_AELSSPlayerState_SyncChallengeCount_Clent = FName(TEXT("SyncChallengeCount_Clent"));
	void AELSSPlayerState::SyncChallengeCount_Clent(FSSChallengeCountData inSyncData)
	{
		ELSSPlayerState_eventSyncChallengeCount_Clent_Parms Parms;
		Parms.inSyncData=inSyncData;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SyncChallengeCount_Clent),&Parms);
	}
	static FName NAME_AELSSPlayerState_SyncClientFPS_Server = FName(TEXT("SyncClientFPS_Server"));
	void AELSSPlayerState::SyncClientFPS_Server(float inClientFPS)
	{
		ELSSPlayerState_eventSyncClientFPS_Server_Parms Parms;
		Parms.inClientFPS=inClientFPS;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SyncClientFPS_Server),&Parms);
	}
	static FName NAME_AELSSPlayerState_SyncMatchMakeInfo_Server = FName(TEXT("SyncMatchMakeInfo_Server"));
	void AELSSPlayerState::SyncMatchMakeInfo_Server(FSSMatchMakeInfoForAnalytics const& inMatchMakeInfo, FSSClientInfoForAnalytics const& inClientInfo)
	{
		ELSSPlayerState_eventSyncMatchMakeInfo_Server_Parms Parms;
		Parms.inMatchMakeInfo=inMatchMakeInfo;
		Parms.inClientInfo=inClientInfo;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SyncMatchMakeInfo_Server),&Parms);
	}
	static FName NAME_AELSSPlayerState_SyncPlayerProfileForInGame_Server = FName(TEXT("SyncPlayerProfileForInGame_Server"));
	void AELSSPlayerState::SyncPlayerProfileForInGame_Server(FSSPlayerProfileForInGame const& inProfile)
	{
		ELSSPlayerState_eventSyncPlayerProfileForInGame_Server_Parms Parms;
		Parms.inProfile=inProfile;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SyncPlayerProfileForInGame_Server),&Parms);
	}
	static FName NAME_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server = FName(TEXT("SyncStatusForWatch_ClientToServer_Server"));
	void AELSSPlayerState::SyncStatusForWatch_ClientToServer_Server()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server),NULL);
	}
	static FName NAME_AELSSPlayerState_SyncStatusForWatch_Server = FName(TEXT("SyncStatusForWatch_Server"));
	void AELSSPlayerState::SyncStatusForWatch_Server(FSSSyncStatusForWatch_Owner const& inSendData)
	{
		ELSSPlayerState_eventSyncStatusForWatch_Server_Parms Parms;
		Parms.inSendData=inSendData;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SyncStatusForWatch_Server),&Parms);
	}
	static FName NAME_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client = FName(TEXT("SyncStatusForWatch_ServerToWatcher_Client"));
	void AELSSPlayerState::SyncStatusForWatch_ServerToWatcher_Client(FSSSyncStatusForWatch_Replicated const& inSendData)
	{
		ELSSPlayerState_eventSyncStatusForWatch_ServerToWatcher_Client_Parms Parms;
		Parms.inSendData=inSendData;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client),&Parms);
	}
	static FName NAME_AELSSPlayerState_UpdateLeaderboardData = FName(TEXT("UpdateLeaderboardData"));
	void AELSSPlayerState::UpdateLeaderboardData(const FELSSResultTallyPlayerData tallyData)
	{
		ELSSPlayerState_eventUpdateLeaderboardData_Parms Parms;
		Parms.tallyData=tallyData;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_UpdateLeaderboardData),&Parms);
	}
	static FName NAME_AELSSPlayerState_UpdatePlayerRankPoint = FName(TEXT("UpdatePlayerRankPoint"));
	void AELSSPlayerState::UpdatePlayerRankPoint(const int32 pt)
	{
		ELSSPlayerState_eventUpdatePlayerRankPoint_Parms Parms;
		Parms.pt=pt;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPlayerState_UpdatePlayerRankPoint),&Parms);
	}
	void AELSSPlayerState::StaticRegisterNativesAELSSPlayerState()
	{
		UClass* Class = AELSSPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activity_CreateMatchOnClient", &AELSSPlayerState::execActivity_CreateMatchOnClient },
			{ "Activity_LeaveMatchOnClient", &AELSSPlayerState::execActivity_LeaveMatchOnClient },
			{ "Activity_ReportOnClient", &AELSSPlayerState::execActivity_ReportOnClient },
			{ "Activity_SendResultCreateMatch", &AELSSPlayerState::execActivity_SendResultCreateMatch },
			{ "Activity_SendResultLeaveMatch", &AELSSPlayerState::execActivity_SendResultLeaveMatch },
			{ "Activity_SendResultReport", &AELSSPlayerState::execActivity_SendResultReport },
			{ "Activity_SendResultUpdateMatchStatus", &AELSSPlayerState::execActivity_SendResultUpdateMatchStatus },
			{ "Activity_UpdateMatchStatusOnClient", &AELSSPlayerState::execActivity_UpdateMatchStatusOnClient },
			{ "AddAttentionPoint", &AELSSPlayerState::execAddAttentionPoint },
			{ "AddKillCount", &AELSSPlayerState::execAddKillCount },
			{ "AddKillCount_Server", &AELSSPlayerState::execAddKillCount_Server },
			{ "ApplyChallengeCountToSaveData", &AELSSPlayerState::execApplyChallengeCountToSaveData },
			{ "ApplyDebugMenuParam", &AELSSPlayerState::execApplyDebugMenuParam },
			{ "ApplyLastPlayRecordToSaveData", &AELSSPlayerState::execApplyLastPlayRecordToSaveData },
			{ "ApplyMasterData", &AELSSPlayerState::execApplyMasterData },
			{ "BeginFeverTime_Multicast", &AELSSPlayerState::execBeginFeverTime_Multicast },
			{ "CalcAttentionLevelFromPoint", &AELSSPlayerState::execCalcAttentionLevelFromPoint },
			{ "DebugResetAttention", &AELSSPlayerState::execDebugResetAttention },
			{ "DebugSendGameStateDebugFlag_Server", &AELSSPlayerState::execDebugSendGameStateDebugFlag_Server },
			{ "DebugSetCopyWrestlerSetupParamToAI_Server", &AELSSPlayerState::execDebugSetCopyWrestlerSetupParamToAI_Server },
			{ "DoneDescription", &AELSSPlayerState::execDoneDescription },
			{ "DoneOpenGamePlayScreen", &AELSSPlayerState::execDoneOpenGamePlayScreen },
			{ "DoneUIPrepare", &AELSSPlayerState::execDoneUIPrepare },
			{ "ForceEndFeverTime", &AELSSPlayerState::execForceEndFeverTime },
			{ "GetAfterFeverTimeRemainRate", &AELSSPlayerState::execGetAfterFeverTimeRemainRate },
			{ "GetAssociatedSSPlayer", &AELSSPlayerState::execGetAssociatedSSPlayer },
			{ "GetAttentionLevel", &AELSSPlayerState::execGetAttentionLevel },
			{ "GetAttentionPoint", &AELSSPlayerState::execGetAttentionPoint },
			{ "GetClientFlowStateOnServer", &AELSSPlayerState::execGetClientFlowStateOnServer },
			{ "GetFeverCount", &AELSSPlayerState::execGetFeverCount },
			{ "GetFeverTimeRemainRate", &AELSSPlayerState::execGetFeverTimeRemainRate },
			{ "GetKillCount", &AELSSPlayerState::execGetKillCount },
			{ "GetOwnerAIController", &AELSSPlayerState::execGetOwnerAIController },
			{ "GetOwnerLocalPlayerController", &AELSSPlayerState::execGetOwnerLocalPlayerController },
			{ "GetOwnerPlayerController", &AELSSPlayerState::execGetOwnerPlayerController },
			{ "GetRandomBadgeId", &AELSSPlayerState::execGetRandomBadgeId },
			{ "GetResultPlayerEXP", &AELSSPlayerState::execGetResultPlayerEXP },
			{ "GetSSPlayerControllerForUIUpdate", &AELSSPlayerState::execGetSSPlayerControllerForUIUpdate },
			{ "GetWeaponColorListIndex", &AELSSPlayerState::execGetWeaponColorListIndex },
			{ "GetWeaponColorUniqueId", &AELSSPlayerState::execGetWeaponColorUniqueId },
			{ "GetWeaponDecalId", &AELSSPlayerState::execGetWeaponDecalId },
			{ "GetWeaponDecalSymbolId", &AELSSPlayerState::execGetWeaponDecalSymbolId },
			{ "HasProgressFlag", &AELSSPlayerState::execHasProgressFlag },
			{ "IsAfterFeverTime", &AELSSPlayerState::execIsAfterFeverTime },
			{ "IsDoneResultAPI", &AELSSPlayerState::execIsDoneResultAPI },
			{ "IsDoneSyncChallengeCount", &AELSSPlayerState::execIsDoneSyncChallengeCount },
			{ "IsDoneSyncResult", &AELSSPlayerState::execIsDoneSyncResult },
			{ "IsLocallyControlled", &AELSSPlayerState::execIsLocallyControlled },
			{ "IsLocalPlayer", &AELSSPlayerState::execIsLocalPlayer },
			{ "IsPlayerResultEnable", &AELSSPlayerState::execIsPlayerResultEnable },
			{ "IsResultTallyEnd", &AELSSPlayerState::execIsResultTallyEnd },
			{ "OnRep_AttentionPoint", &AELSSPlayerState::execOnRep_AttentionPoint },
			{ "OnRep_AttentionPoint_Impl", &AELSSPlayerState::execOnRep_AttentionPoint_Impl },
			{ "OnRep_ChallengeCountData", &AELSSPlayerState::execOnRep_ChallengeCountData },
			{ "OnRep_EndGameReasonOnServer", &AELSSPlayerState::execOnRep_EndGameReasonOnServer },
			{ "OnRep_FeverTimeBeginTime", &AELSSPlayerState::execOnRep_FeverTimeBeginTime },
			{ "OnRep_KillCount", &AELSSPlayerState::execOnRep_KillCount },
			{ "OnRep_PlayerDataSync", &AELSSPlayerState::execOnRep_PlayerDataSync },
			{ "OnRep_ReplicatedClientResultData", &AELSSPlayerState::execOnRep_ReplicatedClientResultData },
			{ "OnRep_ResultTallyData", &AELSSPlayerState::execOnRep_ResultTallyData },
			{ "OnRep_SurvivorRanking", &AELSSPlayerState::execOnRep_SurvivorRanking },
			{ "OnRep_WatchedPlayerNum", &AELSSPlayerState::execOnRep_WatchedPlayerNum },
			{ "OnRep_WrestlerSetupParam", &AELSSPlayerState::execOnRep_WrestlerSetupParam },
			{ "OnYGS2Error_GameResult", &AELSSPlayerState::execOnYGS2Error_GameResult },
			{ "OnYGS2Error_GameStart", &AELSSPlayerState::execOnYGS2Error_GameStart },
			{ "OnYGS2Error_SessionResult", &AELSSPlayerState::execOnYGS2Error_SessionResult },
			{ "OnYGS2Response_GameResult", &AELSSPlayerState::execOnYGS2Response_GameResult },
			{ "OnYGS2Response_GameStart", &AELSSPlayerState::execOnYGS2Response_GameStart },
			{ "OnYGS2Response_SessionResult", &AELSSPlayerState::execOnYGS2Response_SessionResult },
			{ "RegisterLog_SlotMachineUseCount", &AELSSPlayerState::execRegisterLog_SlotMachineUseCount },
			{ "RegisterLog_VendingUseCount", &AELSSPlayerState::execRegisterLog_VendingUseCount },
			{ "RequestYGS2_GameResult", &AELSSPlayerState::execRequestYGS2_GameResult },
			{ "RequestYGS2_GameStart", &AELSSPlayerState::execRequestYGS2_GameStart },
			{ "RequestYGS2_SessionResult", &AELSSPlayerState::execRequestYGS2_SessionResult },
			{ "ReserveExpItem", &AELSSPlayerState::execReserveExpItem },
			{ "RetryErrorAPIEvent", &AELSSPlayerState::execRetryErrorAPIEvent },
			{ "SendPlayerInfoSyncData_Server", &AELSSPlayerState::execSendPlayerInfoSyncData_Server },
			{ "SetAttentionPoint", &AELSSPlayerState::execSetAttentionPoint },
			{ "SetAttentionPoint_Client", &AELSSPlayerState::execSetAttentionPoint_Client },
			{ "SetAttentionPointForWatcher_Client", &AELSSPlayerState::execSetAttentionPointForWatcher_Client },
			{ "SetDefaultPlayerEquipSettings", &AELSSPlayerState::execSetDefaultPlayerEquipSettings },
			{ "SetDefaultPlayerEquipSettings_Ability", &AELSSPlayerState::execSetDefaultPlayerEquipSettings_Ability },
			{ "SetDefaultPlayerEquipSettings_HeatSkill", &AELSSPlayerState::execSetDefaultPlayerEquipSettings_HeatSkill },
			{ "SetIgnoreAnalytics_Server", &AELSSPlayerState::execSetIgnoreAnalytics_Server },
			{ "SetPlayerEquipSettings", &AELSSPlayerState::execSetPlayerEquipSettings },
			{ "SetPlayerEquipSettings_Ability", &AELSSPlayerState::execSetPlayerEquipSettings_Ability },
			{ "SetPlayerSpawnPointId_Server", &AELSSPlayerState::execSetPlayerSpawnPointId_Server },
			{ "SetPlayerSpawnPointIdResult_Client", &AELSSPlayerState::execSetPlayerSpawnPointIdResult_Client },
			{ "SetProgressFlag", &AELSSPlayerState::execSetProgressFlag },
			{ "SetProgressFlag_Server", &AELSSPlayerState::execSetProgressFlag_Server },
			{ "SetResultTallyData", &AELSSPlayerState::execSetResultTallyData },
			{ "SetWrestlerPresetParam", &AELSSPlayerState::execSetWrestlerPresetParam },
			{ "SetWrestlerSetupParam", &AELSSPlayerState::execSetWrestlerSetupParam },
			{ "SetWrestlerSetupParamByBaseStruct", &AELSSPlayerState::execSetWrestlerSetupParamByBaseStruct },
			{ "SSAntiCheatClientNotifyMessage_ToServer", &AELSSPlayerState::execSSAntiCheatClientNotifyMessage_ToServer },
			{ "SSAntiCheatServerNotifyAddClientAction_ToClient", &AELSSPlayerState::execSSAntiCheatServerNotifyAddClientAction_ToClient },
			{ "SSAntiCheatServerNotifyMessage_ToClient", &AELSSPlayerState::execSSAntiCheatServerNotifyMessage_ToClient },
			{ "SyncChallengeCount_Clent", &AELSSPlayerState::execSyncChallengeCount_Clent },
			{ "SyncClientFPS_Server", &AELSSPlayerState::execSyncClientFPS_Server },
			{ "SyncMatchMakeInfo_Server", &AELSSPlayerState::execSyncMatchMakeInfo_Server },
			{ "SyncPlayerProfileForInGame_Server", &AELSSPlayerState::execSyncPlayerProfileForInGame_Server },
			{ "SyncStatusForWatch_ClientToServer_Server", &AELSSPlayerState::execSyncStatusForWatch_ClientToServer_Server },
			{ "SyncStatusForWatch_Server", &AELSSPlayerState::execSyncStatusForWatch_Server },
			{ "SyncStatusForWatch_ServerToWatcher", &AELSSPlayerState::execSyncStatusForWatch_ServerToWatcher },
			{ "SyncStatusForWatch_ServerToWatcher_Client", &AELSSPlayerState::execSyncStatusForWatch_ServerToWatcher_Client },
			{ "UpdateSyncStatusForWatch", &AELSSPlayerState::execUpdateSyncStatusForWatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSPlayerState_Activity_CreateMatchOnClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_CreateMatchOnClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_Activity_CreateMatchOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "Activity_CreateMatchOnClient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_CreateMatchOnClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_CreateMatchOnClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_Activity_CreateMatchOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_Activity_CreateMatchOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_MatchID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventActivity_LeaveMatchOnClient_Parms, MatchID), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_MatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_MatchID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_ExternalAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventActivity_LeaveMatchOnClient_Parms, ExternalAccountId), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_ExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_ExternalAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventActivity_LeaveMatchOnClient_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_MatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_ExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "Activity_LeaveMatchOnClient", nullptr, nullptr, sizeof(ELSSPlayerState_eventActivity_LeaveMatchOnClient_Parms), Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_MatchID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventActivity_ReportOnClient_Parms, MatchID), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_MatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_MatchID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventActivity_ReportOnClient_Parms, Result), Z_Construct_UScriptStruct_FSSActivityMatchResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_MatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "Activity_ReportOnClient", nullptr, nullptr, sizeof(ELSSPlayerState_eventActivity_ReportOnClient_Parms), Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::NewProp_MatchID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventActivity_SendResultCreateMatch_Parms, MatchID), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::NewProp_MatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::NewProp_MatchID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::NewProp_MatchID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "Activity_SendResultCreateMatch", nullptr, nullptr, sizeof(ELSSPlayerState_eventActivity_SendResultCreateMatch_Parms), Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultLeaveMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultLeaveMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultLeaveMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "Activity_SendResultLeaveMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultLeaveMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultLeaveMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultLeaveMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultLeaveMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultReport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultReport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultReport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "Activity_SendResultReport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultReport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultReport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultReport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultReport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::NewProp_inStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::NewProp_inStatus = { "inStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventActivity_SendResultUpdateMatchStatus_Parms, inStatus), Z_Construct_UEnum_ABP_200508_EELActivityUpdateMatchStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::NewProp_inStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::NewProp_inStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "Activity_SendResultUpdateMatchStatus", nullptr, nullptr, sizeof(ELSSPlayerState_eventActivity_SendResultUpdateMatchStatus_Parms), Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::NewProp_MatchID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventActivity_UpdateMatchStatusOnClient_Parms, MatchID), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::NewProp_MatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::NewProp_MatchID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::NewProp_inStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::NewProp_inStatus = { "inStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventActivity_UpdateMatchStatusOnClient_Parms, inStatus), Z_Construct_UEnum_ABP_200508_EELActivityUpdateMatchStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::NewProp_MatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::NewProp_inStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::NewProp_inStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "Activity_UpdateMatchStatusOnClient", nullptr, nullptr, sizeof(ELSSPlayerState_eventActivity_UpdateMatchStatusOnClient_Parms), Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics
	{
		struct ELSSPlayerState_eventAddAttentionPoint_Parms
		{
			ESSAttentionReason inReason;
			int32 inAddPoint;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAddPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventAddAttentionPoint_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::NewProp_inAddPoint = { "inAddPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventAddAttentionPoint_Parms, inAddPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::NewProp_inAddPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "AddAttentionPoint", nullptr, nullptr, sizeof(ELSSPlayerState_eventAddAttentionPoint_Parms), Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "AddKillCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_AddKillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "AddKillCount_Server", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_ApplyChallengeCountToSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_ApplyChallengeCountToSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_ApplyChallengeCountToSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "ApplyChallengeCountToSaveData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_ApplyChallengeCountToSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_ApplyChallengeCountToSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_ApplyChallengeCountToSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_ApplyChallengeCountToSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_ApplyDebugMenuParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_ApplyDebugMenuParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_ApplyDebugMenuParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "ApplyDebugMenuParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_ApplyDebugMenuParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_ApplyDebugMenuParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_ApplyDebugMenuParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_ApplyDebugMenuParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_ApplyLastPlayRecordToSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_ApplyLastPlayRecordToSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_ApplyLastPlayRecordToSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "ApplyLastPlayRecordToSaveData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_ApplyLastPlayRecordToSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_ApplyLastPlayRecordToSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_ApplyLastPlayRecordToSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_ApplyLastPlayRecordToSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_ApplyMasterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_ApplyMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_ApplyMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "ApplyMasterData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_ApplyMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_ApplyMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_ApplyMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_ApplyMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inNewAttentionLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inBeginTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::NewProp_inNewAttentionLevel = { "inNewAttentionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventBeginFeverTime_Multicast_Parms, inNewAttentionLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::NewProp_inBeginTime = { "inBeginTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventBeginFeverTime_Multicast_Parms, inBeginTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::NewProp_inNewAttentionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::NewProp_inBeginTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "BeginFeverTime_Multicast", nullptr, nullptr, sizeof(ELSSPlayerState_eventBeginFeverTime_Multicast_Parms), Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics
	{
		struct ELSSPlayerState_eventCalcAttentionLevelFromPoint_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventCalcAttentionLevelFromPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "CalcAttentionLevelFromPoint", nullptr, nullptr, sizeof(ELSSPlayerState_eventCalcAttentionLevelFromPoint_Parms), Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_DebugResetAttention_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_DebugResetAttention_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_DebugResetAttention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "DebugResetAttention", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_DebugResetAttention_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_DebugResetAttention_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_DebugResetAttention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_DebugResetAttention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inDebugFlag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inDebugFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::NewProp_inDebugFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::NewProp_inDebugFlag = { "inDebugFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventDebugSendGameStateDebugFlag_Server_Parms, inDebugFlag), Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::NewProp_inDebugFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::NewProp_inDebugFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "DebugSendGameStateDebugFlag_Server", nullptr, nullptr, sizeof(ELSSPlayerState_eventDebugSendGameStateDebugFlag_Server_Parms), Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "DebugSetCopyWrestlerSetupParamToAI_Server", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inRequest;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inDebugFlag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inDebugFlag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inErrorType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inRequest = { "inRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventDebugYGS2DelayCancelRequestWhenHasFlag_Parms, inRequest), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inDebugFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inDebugFlag = { "inDebugFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventDebugYGS2DelayCancelRequestWhenHasFlag_Parms, inDebugFlag), Z_Construct_UEnum_ABP_200508_ESSLocalDebugFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inErrorType = { "inErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventDebugYGS2DelayCancelRequestWhenHasFlag_Parms, inErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_InDelayTime = { "InDelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventDebugYGS2DelayCancelRequestWhenHasFlag_Parms, InDelayTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inDebugFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inDebugFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_inErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::NewProp_InDelayTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "DebugYGS2DelayCancelRequestWhenHasFlag", nullptr, nullptr, sizeof(ELSSPlayerState_eventDebugYGS2DelayCancelRequestWhenHasFlag_Parms), Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_DoneDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_DoneDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_DoneDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "DoneDescription", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_DoneDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_DoneDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_DoneDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_DoneDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_DoneOpenGamePlayScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_DoneOpenGamePlayScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_DoneOpenGamePlayScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "DoneOpenGamePlayScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_DoneOpenGamePlayScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_DoneOpenGamePlayScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_DoneOpenGamePlayScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_DoneOpenGamePlayScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_DoneUIPrepare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_DoneUIPrepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_DoneUIPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "DoneUIPrepare", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_DoneUIPrepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_DoneUIPrepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_DoneUIPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_DoneUIPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_ForceEndFeverTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_ForceEndFeverTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_ForceEndFeverTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "ForceEndFeverTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_ForceEndFeverTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_ForceEndFeverTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_ForceEndFeverTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_ForceEndFeverTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics
	{
		struct ELSSPlayerState_eventGetAfterFeverTimeRemainRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetAfterFeverTimeRemainRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetAfterFeverTimeRemainRate", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetAfterFeverTimeRemainRate_Parms), Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics
	{
		struct ELSSPlayerState_eventGetAssociatedSSPlayer_Parms
		{
			AELSSPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetAssociatedSSPlayer_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetAssociatedSSPlayer", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetAssociatedSSPlayer_Parms), Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics
	{
		struct ELSSPlayerState_eventGetAttentionLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetAttentionLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetAttentionLevel", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetAttentionLevel_Parms), Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics
	{
		struct ELSSPlayerState_eventGetAttentionPoint_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetAttentionPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetAttentionPoint", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetAttentionPoint_Parms), Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetChangeListByAsset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetChangeListByAsset", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetChangeListByAsset_Parms), Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics
	{
		struct ELSSPlayerState_eventGetClientFlowStateOnServer_Parms
		{
			ESSClientFlowState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetClientFlowStateOnServer_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSClientFlowState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetClientFlowStateOnServer", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetClientFlowStateOnServer_Parms), Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics
	{
		struct ELSSPlayerState_eventGetFeverCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetFeverCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetFeverCount", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetFeverCount_Parms), Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetFeverCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetFeverCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics
	{
		struct ELSSPlayerState_eventGetFeverTimeRemainRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetFeverTimeRemainRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetFeverTimeRemainRate", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetFeverTimeRemainRate_Parms), Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics
	{
		struct ELSSPlayerState_eventGetKillCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetKillCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetKillCount", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetKillCount_Parms), Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetKillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetKillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics
	{
		struct ELSSPlayerState_eventGetOwnerAIController_Parms
		{
			AELSSAIController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetOwnerAIController_Parms, ReturnValue), Z_Construct_UClass_AELSSAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetOwnerAIController", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetOwnerAIController_Parms), Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics
	{
		struct ELSSPlayerState_eventGetOwnerLocalPlayerController_Parms
		{
			AELSSPlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetOwnerLocalPlayerController_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetOwnerLocalPlayerController", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetOwnerLocalPlayerController_Parms), Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics
	{
		struct ELSSPlayerState_eventGetOwnerPlayerController_Parms
		{
			AELSSPlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetOwnerPlayerController_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetOwnerPlayerController", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetOwnerPlayerController_Parms), Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics
	{
		struct ELSSPlayerState_eventGetRandomBadgeId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetRandomBadgeId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetRandomBadgeId", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetRandomBadgeId_Parms), Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics
	{
		struct ELSSPlayerState_eventGetResultPlayerEXP_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetResultPlayerEXP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetResultPlayerEXP", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetResultPlayerEXP_Parms), Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics
	{
		struct ELSSPlayerState_eventGetSSPlayerControllerForUIUpdate_Parms
		{
			AELSSPlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetSSPlayerControllerForUIUpdate_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetSSPlayerControllerForUIUpdate", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetSSPlayerControllerForUIUpdate_Parms), Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics
	{
		struct ELSSPlayerState_eventGetWeaponColorListIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetWeaponColorListIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetWeaponColorListIndex", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetWeaponColorListIndex_Parms), Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics
	{
		struct ELSSPlayerState_eventGetWeaponColorUniqueId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetWeaponColorUniqueId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetWeaponColorUniqueId", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetWeaponColorUniqueId_Parms), Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics
	{
		struct ELSSPlayerState_eventGetWeaponDecalId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetWeaponDecalId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetWeaponDecalId", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetWeaponDecalId_Parms), Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics
	{
		struct ELSSPlayerState_eventGetWeaponDecalSymbolId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventGetWeaponDecalSymbolId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "GetWeaponDecalSymbolId", nullptr, nullptr, sizeof(ELSSPlayerState_eventGetWeaponDecalSymbolId_Parms), Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics
	{
		struct ELSSPlayerState_eventHasProgressFlag_Parms
		{
			ESSPlayerProgress Type;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventHasProgressFlag_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSPlayerProgress, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventHasProgressFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventHasProgressFlag_Parms), &Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "HasProgressFlag", nullptr, nullptr, sizeof(ELSSPlayerState_eventHasProgressFlag_Parms), Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics
	{
		struct ELSSPlayerState_eventIsAfterFeverTime_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventIsAfterFeverTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventIsAfterFeverTime_Parms), &Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "IsAfterFeverTime", nullptr, nullptr, sizeof(ELSSPlayerState_eventIsAfterFeverTime_Parms), Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics
	{
		struct ELSSPlayerState_eventIsDoneResultAPI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventIsDoneResultAPI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventIsDoneResultAPI_Parms), &Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "IsDoneResultAPI", nullptr, nullptr, sizeof(ELSSPlayerState_eventIsDoneResultAPI_Parms), Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics
	{
		struct ELSSPlayerState_eventIsDoneSyncChallengeCount_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventIsDoneSyncChallengeCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventIsDoneSyncChallengeCount_Parms), &Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "IsDoneSyncChallengeCount", nullptr, nullptr, sizeof(ELSSPlayerState_eventIsDoneSyncChallengeCount_Parms), Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics
	{
		struct ELSSPlayerState_eventIsDoneSyncResult_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventIsDoneSyncResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventIsDoneSyncResult_Parms), &Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "IsDoneSyncResult", nullptr, nullptr, sizeof(ELSSPlayerState_eventIsDoneSyncResult_Parms), Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics
	{
		struct ELSSPlayerState_eventIsLocallyControlled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(ELSSPlayerState_eventIsLocallyControlled_Parms), Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics
	{
		struct ELSSPlayerState_eventIsLocalPlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventIsLocalPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventIsLocalPlayer_Parms), &Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "IsLocalPlayer", nullptr, nullptr, sizeof(ELSSPlayerState_eventIsLocalPlayer_Parms), Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics
	{
		struct ELSSPlayerState_eventIsPlayerResultEnable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventIsPlayerResultEnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventIsPlayerResultEnable_Parms), &Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "IsPlayerResultEnable", nullptr, nullptr, sizeof(ELSSPlayerState_eventIsPlayerResultEnable_Parms), Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics
	{
		struct ELSSPlayerState_eventIsResultTallyEnd_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventIsResultTallyEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventIsResultTallyEnd_Parms), &Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "IsResultTallyEnd", nullptr, nullptr, sizeof(ELSSPlayerState_eventIsResultTallyEnd_Parms), Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnChangeLocalKillCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnChangeLocalKillCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnChangeLocalKillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnChangeLocalKillCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnChangeLocalKillCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnChangeLocalKillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnChangeLocalKillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnChangeLocalKillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_AttentionPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_AttentionPoint_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_ChallengeCountData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_ChallengeCountData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_ChallengeCountData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_ChallengeCountData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_ChallengeCountData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_ChallengeCountData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_ChallengeCountData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_ChallengeCountData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_EndGameReasonOnServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_EndGameReasonOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_EndGameReasonOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_EndGameReasonOnServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_EndGameReasonOnServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_EndGameReasonOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_EndGameReasonOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_EndGameReasonOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_FeverTimeBeginTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_FeverTimeBeginTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_FeverTimeBeginTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_FeverTimeBeginTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_FeverTimeBeginTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_FeverTimeBeginTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_FeverTimeBeginTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_FeverTimeBeginTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_KillCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_KillCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_KillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_KillCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_KillCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_KillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_KillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_KillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_PlayerDataSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_PlayerDataSync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_PlayerDataSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_PlayerDataSync", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_PlayerDataSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_PlayerDataSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_PlayerDataSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_PlayerDataSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_ReplicatedClientResultData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_ReplicatedClientResultData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_ReplicatedClientResultData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_ReplicatedClientResultData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_ReplicatedClientResultData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_ReplicatedClientResultData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_ReplicatedClientResultData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_ReplicatedClientResultData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_ResultTallyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_ResultTallyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_ResultTallyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_ResultTallyData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_ResultTallyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_ResultTallyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_ResultTallyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_ResultTallyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_SurvivorRanking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_SurvivorRanking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_SurvivorRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_SurvivorRanking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_SurvivorRanking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_SurvivorRanking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_SurvivorRanking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_SurvivorRanking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_WatchedPlayerNum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_WatchedPlayerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_WatchedPlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_WatchedPlayerNum", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_WatchedPlayerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_WatchedPlayerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_WatchedPlayerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_WatchedPlayerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnRep_WrestlerSetupParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnRep_WrestlerSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnRep_WrestlerSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnRep_WrestlerSetupParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnRep_WrestlerSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnRep_WrestlerSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnRep_WrestlerSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnRep_WrestlerSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics
	{
		struct ELSSPlayerState_eventOnYGS2Error_GameResult_Parms
		{
			bool isYES;
			FRequest_ErrSetupData errDialogData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isYES_MetaData[];
#endif
		static void NewProp_isYES_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isYES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errDialogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errDialogData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_isYES_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_isYES_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventOnYGS2Error_GameResult_Parms*)Obj)->isYES = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_isYES = { "isYES", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventOnYGS2Error_GameResult_Parms), &Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_isYES_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_isYES_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_isYES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_errDialogData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_errDialogData = { "errDialogData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventOnYGS2Error_GameResult_Parms, errDialogData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_errDialogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_errDialogData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_isYES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::NewProp_errDialogData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnYGS2Error_GameResult", nullptr, nullptr, sizeof(ELSSPlayerState_eventOnYGS2Error_GameResult_Parms), Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics
	{
		struct ELSSPlayerState_eventOnYGS2Error_GameStart_Parms
		{
			bool isYES;
			FRequest_ErrSetupData errDialogData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isYES_MetaData[];
#endif
		static void NewProp_isYES_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isYES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errDialogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errDialogData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_isYES_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_isYES_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventOnYGS2Error_GameStart_Parms*)Obj)->isYES = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_isYES = { "isYES", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventOnYGS2Error_GameStart_Parms), &Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_isYES_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_isYES_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_isYES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_errDialogData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_errDialogData = { "errDialogData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventOnYGS2Error_GameStart_Parms, errDialogData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_errDialogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_errDialogData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_isYES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::NewProp_errDialogData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnYGS2Error_GameStart", nullptr, nullptr, sizeof(ELSSPlayerState_eventOnYGS2Error_GameStart_Parms), Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics
	{
		struct ELSSPlayerState_eventOnYGS2Error_SessionResult_Parms
		{
			bool isYES;
			FRequest_ErrSetupData errDialogData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isYES_MetaData[];
#endif
		static void NewProp_isYES_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isYES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errDialogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errDialogData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_isYES_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_isYES_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventOnYGS2Error_SessionResult_Parms*)Obj)->isYES = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_isYES = { "isYES", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventOnYGS2Error_SessionResult_Parms), &Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_isYES_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_isYES_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_isYES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_errDialogData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_errDialogData = { "errDialogData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventOnYGS2Error_SessionResult_Parms, errDialogData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_errDialogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_errDialogData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_isYES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::NewProp_errDialogData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnYGS2Error_SessionResult", nullptr, nullptr, sizeof(ELSSPlayerState_eventOnYGS2Error_SessionResult_Parms), Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics
	{
		struct ELSSPlayerState_eventOnYGS2Response_GameResult_Parms
		{
			EYGS2ErrorType ErrorType;
			UYGS2RequestBase* Request;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventOnYGS2Response_GameResult_Parms, ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventOnYGS2Response_GameResult_Parms, Request), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnYGS2Response_GameResult", nullptr, nullptr, sizeof(ELSSPlayerState_eventOnYGS2Response_GameResult_Parms), Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics
	{
		struct ELSSPlayerState_eventOnYGS2Response_GameStart_Parms
		{
			EYGS2ErrorType ErrorType;
			UYGS2RequestBase* Request;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventOnYGS2Response_GameStart_Parms, ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventOnYGS2Response_GameStart_Parms, Request), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnYGS2Response_GameStart", nullptr, nullptr, sizeof(ELSSPlayerState_eventOnYGS2Response_GameStart_Parms), Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics
	{
		struct ELSSPlayerState_eventOnYGS2Response_SessionResult_Parms
		{
			EYGS2ErrorType ErrorType;
			UYGS2RequestBase* Request;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventOnYGS2Response_SessionResult_Parms, ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventOnYGS2Response_SessionResult_Parms, Request), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "OnYGS2Response_SessionResult", nullptr, nullptr, sizeof(ELSSPlayerState_eventOnYGS2Response_SessionResult_Parms), Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_RegisterLog_SlotMachineUseCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RegisterLog_SlotMachineUseCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_RegisterLog_SlotMachineUseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "RegisterLog_SlotMachineUseCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RegisterLog_SlotMachineUseCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RegisterLog_SlotMachineUseCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_RegisterLog_SlotMachineUseCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_RegisterLog_SlotMachineUseCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_RegisterLog_VendingUseCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RegisterLog_VendingUseCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_RegisterLog_VendingUseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "RegisterLog_VendingUseCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RegisterLog_VendingUseCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RegisterLog_VendingUseCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_RegisterLog_VendingUseCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_RegisterLog_VendingUseCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics
	{
		struct ELSSPlayerState_eventRequestYGS2_GameResult_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventRequestYGS2_GameResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventRequestYGS2_GameResult_Parms), &Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "RequestYGS2_GameResult", nullptr, nullptr, sizeof(ELSSPlayerState_eventRequestYGS2_GameResult_Parms), Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics
	{
		struct ELSSPlayerState_eventRequestYGS2_GameStart_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventRequestYGS2_GameStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventRequestYGS2_GameStart_Parms), &Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "RequestYGS2_GameStart", nullptr, nullptr, sizeof(ELSSPlayerState_eventRequestYGS2_GameStart_Parms), Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics
	{
		struct ELSSPlayerState_eventRequestYGS2_SessionResult_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventRequestYGS2_SessionResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventRequestYGS2_SessionResult_Parms), &Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "RequestYGS2_SessionResult", nullptr, nullptr, sizeof(ELSSPlayerState_eventRequestYGS2_SessionResult_Parms), Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "RequestYGS2Flow_GameResult", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "RequestYGS2Flow_GameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_SessionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_SessionResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_SessionResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "RequestYGS2Flow_SessionResult", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_SessionResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_SessionResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_SessionResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_SessionResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics
	{
		struct ELSSPlayerState_eventReserveExpItem_Parms
		{
			int32 inExpItemLotGroupID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inExpItemLotGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::NewProp_inExpItemLotGroupID = { "inExpItemLotGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventReserveExpItem_Parms, inExpItemLotGroupID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::NewProp_inExpItemLotGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "ReserveExpItem", nullptr, nullptr, sizeof(ELSSPlayerState_eventReserveExpItem_Parms), Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_ResultTallyDataToSyncBPEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_ResultTallyDataToSyncBPEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_ResultTallyDataToSyncBPEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "ResultTallyDataToSyncBPEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_ResultTallyDataToSyncBPEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_ResultTallyDataToSyncBPEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_ResultTallyDataToSyncBPEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_ResultTallyDataToSyncBPEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics
	{
		struct ELSSPlayerState_eventRetryErrorAPIEvent_Parms
		{
			FRequest_ErrSetupData apiErrData;
			int32 errRetryCnt;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiErrData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_apiErrData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errRetryCnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errRetryCnt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_apiErrData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_apiErrData = { "apiErrData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventRetryErrorAPIEvent_Parms, apiErrData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_apiErrData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_apiErrData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_errRetryCnt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_errRetryCnt = { "errRetryCnt", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventRetryErrorAPIEvent_Parms, errRetryCnt), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_errRetryCnt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_errRetryCnt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_apiErrData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::NewProp_errRetryCnt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "RetryErrorAPIEvent", nullptr, nullptr, sizeof(ELSSPlayerState_eventRetryErrorAPIEvent_Parms), Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inInfoSyncData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inInfoSyncData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::NewProp_inInfoSyncData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::NewProp_inInfoSyncData = { "inInfoSyncData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSendPlayerInfoSyncData_Server_Parms, inInfoSyncData), Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::NewProp_inInfoSyncData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::NewProp_inInfoSyncData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::NewProp_inInfoSyncData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SendPlayerInfoSyncData_Server", nullptr, nullptr, sizeof(ELSSPlayerState_eventSendPlayerInfoSyncData_Server_Parms), Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics
	{
		struct ELSSPlayerState_eventSetAttentionPoint_Parms
		{
			ESSAttentionReason inReason;
			int32 inAttentionPoint;
			int32 inPrevPoint;
			int32 inAddPointForHUD;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPrevPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAddPointForHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPoint_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inAttentionPoint = { "inAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPoint_Parms, inAttentionPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inPrevPoint = { "inPrevPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPoint_Parms, inPrevPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inAddPointForHUD = { "inAddPointForHUD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPoint_Parms, inAddPointForHUD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inAttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inPrevPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::NewProp_inAddPointForHUD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetAttentionPoint", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetAttentionPoint_Parms), Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionUpdateId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAddPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inAttentionUpdateId = { "inAttentionUpdateId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPoint_Client_Parms, inAttentionUpdateId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPoint_Client_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inAttentionPoint = { "inAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPoint_Client_Parms, inAttentionPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inAddPoint = { "inAddPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPoint_Client_Parms, inAddPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inAttentionUpdateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inAttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::NewProp_inAddPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetAttentionPoint_Client", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetAttentionPoint_Client_Parms), Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inWatchedPlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionUpdateId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAddPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inWatchedPlayer = { "inWatchedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPointForWatcher_Client_Parms, inWatchedPlayer), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inAttentionUpdateId = { "inAttentionUpdateId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPointForWatcher_Client_Parms, inAttentionUpdateId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPointForWatcher_Client_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSAttentionReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inAttentionPoint = { "inAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPointForWatcher_Client_Parms, inAttentionPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inAddPoint = { "inAddPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetAttentionPointForWatcher_Client_Parms, inAddPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inWatchedPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inAttentionUpdateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inAttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::NewProp_inAddPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetAttentionPointForWatcher_Client", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetAttentionPointForWatcher_Client_Parms), Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics
	{
		struct ELSSPlayerState_eventSetDefaultPlayerEquipSettings_Parms
		{
			int32 inDefaultPlayerEquipSettingsId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDefaultPlayerEquipSettingsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::NewProp_inDefaultPlayerEquipSettingsId = { "inDefaultPlayerEquipSettingsId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetDefaultPlayerEquipSettings_Parms, inDefaultPlayerEquipSettingsId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::NewProp_inDefaultPlayerEquipSettingsId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetDefaultPlayerEquipSettings", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetDefaultPlayerEquipSettings_Parms), Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics
	{
		struct ELSSPlayerState_eventSetDefaultPlayerEquipSettings_Ability_Parms
		{
			int32 inDefaultPlayerEquipSettingsId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDefaultPlayerEquipSettingsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::NewProp_inDefaultPlayerEquipSettingsId = { "inDefaultPlayerEquipSettingsId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetDefaultPlayerEquipSettings_Ability_Parms, inDefaultPlayerEquipSettingsId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::NewProp_inDefaultPlayerEquipSettingsId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetDefaultPlayerEquipSettings_Ability", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetDefaultPlayerEquipSettings_Ability_Parms), Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics
	{
		struct ELSSPlayerState_eventSetDefaultPlayerEquipSettings_HeatSkill_Parms
		{
			int32 inDefaultPlayerEquipSettingsId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDefaultPlayerEquipSettingsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::NewProp_inDefaultPlayerEquipSettingsId = { "inDefaultPlayerEquipSettingsId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetDefaultPlayerEquipSettings_HeatSkill_Parms, inDefaultPlayerEquipSettingsId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::NewProp_inDefaultPlayerEquipSettingsId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetDefaultPlayerEquipSettings_HeatSkill", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetDefaultPlayerEquipSettings_HeatSkill_Parms), Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics
	{
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventSetIgnoreAnalytics_Server_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventSetIgnoreAnalytics_Server_Parms), &Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetIgnoreAnalytics_Server", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetIgnoreAnalytics_Server_Parms), Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics
	{
		struct ELSSPlayerState_eventSetPlayerEquipSettings_Parms
		{
			FSSPlayerEquipSettings equipSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equipSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_equipSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::NewProp_equipSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::NewProp_equipSettings = { "equipSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetPlayerEquipSettings_Parms, equipSettings), Z_Construct_UScriptStruct_FSSPlayerEquipSettings, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::NewProp_equipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::NewProp_equipSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::NewProp_equipSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetPlayerEquipSettings", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetPlayerEquipSettings_Parms), Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics
	{
		struct ELSSPlayerState_eventSetPlayerEquipSettings_Ability_Parms
		{
			int32 inAbility1;
			int32 inAbility2;
			int32 inAbility3;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbility1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbility2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbility3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::NewProp_inAbility1 = { "inAbility1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetPlayerEquipSettings_Ability_Parms, inAbility1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::NewProp_inAbility2 = { "inAbility2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetPlayerEquipSettings_Ability_Parms, inAbility2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::NewProp_inAbility3 = { "inAbility3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetPlayerEquipSettings_Ability_Parms, inAbility3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::NewProp_inAbility1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::NewProp_inAbility2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::NewProp_inAbility3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetPlayerEquipSettings_Ability", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetPlayerEquipSettings_Ability_Parms), Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_spawnId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::NewProp_spawnId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::NewProp_spawnId = { "spawnId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetPlayerSpawnPointId_Server_Parms, spawnId), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::NewProp_spawnId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::NewProp_spawnId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::NewProp_spawnId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetPlayerSpawnPointId_Server", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetPlayerSpawnPointId_Server_Parms), Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isChange_MetaData[];
#endif
		static void NewProp_isChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::NewProp_isChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::NewProp_isChange_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventSetPlayerSpawnPointIdResult_Client_Parms*)Obj)->isChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::NewProp_isChange = { "isChange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventSetPlayerSpawnPointIdResult_Client_Parms), &Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::NewProp_isChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::NewProp_isChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::NewProp_isChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::NewProp_isChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetPlayerSpawnPointIdResult_Client", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetPlayerSpawnPointIdResult_Client_Parms), Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics
	{
		struct ELSSPlayerState_eventSetProgressFlag_Parms
		{
			ESSPlayerProgress Type;
			bool IsOn;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetProgressFlag_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSPlayerProgress, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventSetProgressFlag_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventSetProgressFlag_Parms), &Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetProgressFlag", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetProgressFlag_Parms), Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetProgressFlag_Server_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSPlayerProgress, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSPlayerState_eventSetProgressFlag_Server_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPlayerState_eventSetProgressFlag_Server_Parms), &Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetProgressFlag_Server", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetProgressFlag_Server_Parms), Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics
	{
		struct ELSSPlayerState_eventSetResultTallyData_Parms
		{
			FString tallyData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tallyData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::NewProp_tallyData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::NewProp_tallyData = { "tallyData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetResultTallyData_Parms, tallyData), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::NewProp_tallyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::NewProp_tallyData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::NewProp_tallyData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetResultTallyData", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetResultTallyData_Parms), Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics
	{
		struct ELSSPlayerState_eventSetWrestlerPresetParam_Parms
		{
			FSSWrestlerMovePresetParam wrestlerPreset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wrestlerPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_wrestlerPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::NewProp_wrestlerPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::NewProp_wrestlerPreset = { "wrestlerPreset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetWrestlerPresetParam_Parms, wrestlerPreset), Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::NewProp_wrestlerPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::NewProp_wrestlerPreset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::NewProp_wrestlerPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetWrestlerPresetParam", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetWrestlerPresetParam_Parms), Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics
	{
		struct ELSSPlayerState_eventSetWrestlerSetupParam_Parms
		{
			FSSWrestlerSetupParam NewWrestlerSetupParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewWrestlerSetupParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::NewProp_NewWrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::NewProp_NewWrestlerSetupParam = { "NewWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetWrestlerSetupParam_Parms, NewWrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::NewProp_NewWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::NewProp_NewWrestlerSetupParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::NewProp_NewWrestlerSetupParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetWrestlerSetupParam", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetWrestlerSetupParam_Parms), Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics
	{
		struct ELSSPlayerState_eventSetWrestlerSetupParamByBaseStruct_Parms
		{
			FWrestlerSetupParam NewWrestlerSetupParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewWrestlerSetupParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::NewProp_NewWrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::NewProp_NewWrestlerSetupParam = { "NewWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSetWrestlerSetupParamByBaseStruct_Parms, NewWrestlerSetupParam), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::NewProp_NewWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::NewProp_NewWrestlerSetupParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::NewProp_NewWrestlerSetupParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SetWrestlerSetupParamByBaseStruct", nullptr, nullptr, sizeof(ELSSPlayerState_eventSetWrestlerSetupParamByBaseStruct_Parms), Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::NewProp_dat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::NewProp_dat = { "dat", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSSAntiCheatClientNotifyMessage_ToServer_Parms, dat), Z_Construct_UScriptStruct_FSSModeMessageData, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::NewProp_dat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::NewProp_dat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::NewProp_dat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SSAntiCheatClientNotifyMessage_ToServer", nullptr, nullptr, sizeof(ELSSPlayerState_eventSSAntiCheatClientNotifyMessage_ToServer_Parms), Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resClientActionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_resClientActionState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resActionCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_resActionCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resActionDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_resActionDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resClientActionState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resClientActionState = { "resClientActionState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSSAntiCheatServerNotifyAddClientAction_ToClient_Parms, resClientActionState), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resClientActionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resClientActionState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionCode = { "resActionCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSSAntiCheatServerNotifyAddClientAction_ToClient_Parms, resActionCode), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionDetails = { "resActionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSSAntiCheatServerNotifyAddClientAction_ToClient_Parms, resActionDetails), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resClientActionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::NewProp_resActionDetails,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SSAntiCheatServerNotifyAddClientAction_ToClient", nullptr, nullptr, sizeof(ELSSPlayerState_eventSSAntiCheatServerNotifyAddClientAction_ToClient_Parms), Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::NewProp_dat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::NewProp_dat = { "dat", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSSAntiCheatServerNotifyMessage_ToClient_Parms, dat), Z_Construct_UScriptStruct_FSSModeMessageData, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::NewProp_dat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::NewProp_dat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::NewProp_dat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SSAntiCheatServerNotifyMessage_ToClient", nullptr, nullptr, sizeof(ELSSPlayerState_eventSSAntiCheatServerNotifyMessage_ToClient_Parms), Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSyncData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::NewProp_inSyncData = { "inSyncData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSyncChallengeCount_Clent_Parms, inSyncData), Z_Construct_UScriptStruct_FSSChallengeCountData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::NewProp_inSyncData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SyncChallengeCount_Clent", nullptr, nullptr, sizeof(ELSSPlayerState_eventSyncChallengeCount_Clent_Parms), Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inClientFPS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::NewProp_inClientFPS = { "inClientFPS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSyncClientFPS_Server_Parms, inClientFPS), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::NewProp_inClientFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SyncClientFPS_Server", nullptr, nullptr, sizeof(ELSSPlayerState_eventSyncClientFPS_Server_Parms), Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMatchMakeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inMatchMakeInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inClientInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inClientInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inMatchMakeInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inMatchMakeInfo = { "inMatchMakeInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSyncMatchMakeInfo_Server_Parms, inMatchMakeInfo), Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inMatchMakeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inMatchMakeInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inClientInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inClientInfo = { "inClientInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSyncMatchMakeInfo_Server_Parms, inClientInfo), Z_Construct_UScriptStruct_FSSClientInfoForAnalytics, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inClientInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inClientInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inMatchMakeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::NewProp_inClientInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SyncMatchMakeInfo_Server", nullptr, nullptr, sizeof(ELSSPlayerState_eventSyncMatchMakeInfo_Server_Parms), Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::NewProp_inProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::NewProp_inProfile = { "inProfile", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSyncPlayerProfileForInGame_Server_Parms, inProfile), Z_Construct_UScriptStruct_FSSPlayerProfileForInGame, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::NewProp_inProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::NewProp_inProfile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::NewProp_inProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SyncPlayerProfileForInGame_Server", nullptr, nullptr, sizeof(ELSSPlayerState_eventSyncPlayerProfileForInGame_Server_Parms), Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SyncStatusForWatch_ClientToServer_Server", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inSendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSendData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::NewProp_inSendData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::NewProp_inSendData = { "inSendData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSyncStatusForWatch_Server_Parms, inSendData), Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::NewProp_inSendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::NewProp_inSendData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::NewProp_inSendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SyncStatusForWatch_Server", nullptr, nullptr, sizeof(ELSSPlayerState_eventSyncStatusForWatch_Server_Parms), Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SyncStatusForWatch_ServerToWatcher", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inSendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSendData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::NewProp_inSendData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::NewProp_inSendData = { "inSendData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventSyncStatusForWatch_ServerToWatcher_Client_Parms, inSendData), Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::NewProp_inSendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::NewProp_inSendData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::NewProp_inSendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "SyncStatusForWatch_ServerToWatcher_Client", nullptr, nullptr, sizeof(ELSSPlayerState_eventSyncStatusForWatch_ServerToWatcher_Client_Parms), Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tallyData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::NewProp_tallyData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::NewProp_tallyData = { "tallyData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventUpdateLeaderboardData_Parms, tallyData), Z_Construct_UScriptStruct_FELSSResultTallyPlayerData, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::NewProp_tallyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::NewProp_tallyData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::NewProp_tallyData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "UpdateLeaderboardData", nullptr, nullptr, sizeof(ELSSPlayerState_eventUpdateLeaderboardData_Parms), Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::NewProp_pt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::NewProp_pt = { "pt", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPlayerState_eventUpdatePlayerRankPoint_Parms, pt), METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::NewProp_pt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::NewProp_pt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::NewProp_pt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "UpdatePlayerRankPoint", nullptr, nullptr, sizeof(ELSSPlayerState_eventUpdatePlayerRankPoint_Parms), Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPlayerState_UpdateSyncStatusForWatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPlayerState_UpdateSyncStatusForWatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPlayerState_UpdateSyncStatusForWatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPlayerState, nullptr, "UpdateSyncStatusForWatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPlayerState_UpdateSyncStatusForWatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPlayerState_UpdateSyncStatusForWatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPlayerState_UpdateSyncStatusForWatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPlayerState_UpdateSyncStatusForWatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister()
	{
		return AELSSPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AELSSPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillCountRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillCountRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillCountLocal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillCountLocal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatcherLocal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WatcherLocal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WatcherOnServer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatcherOnServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WatcherOnServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchedPlayerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WatchedPlayerNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncStatusForWatch_Replicated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncStatusForWatch_Replicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncStatus_CameraRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncStatus_CameraRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncStatus_InteractTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SyncStatus_InteractTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncStatusForWatch_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncStatusForWatch_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionPoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttentionGaugeState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionGaugeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttentionGaugeState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeverTimeBeginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FeverTimeBeginTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegativeTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionAdjustParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttentionAdjustParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpItemReservedList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpItemReservedList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExpItemReservedList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpItemSpawnDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpItemSpawnDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterFeverTimeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AfterFeverTimeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorRanking_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorRanking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpItemPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpItemPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpItemPointLoopCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpItemPointLoopCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionLevelParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttentionLevelParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSetSettingsOnServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveSetSettingsOnServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipSettingsOnServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipSettingsOnServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingAbilityId_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SettingAbilityId_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingAbilityId_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SettingAbilityId_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingAbilityId_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SettingAbilityId_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDefaultUserSettings_MetaData[];
#endif
		static void NewProp_UseDefaultUserSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDefaultUserSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSetupParamRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSetupParamRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSetupParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_HeatLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_HeatLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_TotalAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_TotalAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_TotalDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_TotalDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_Mileage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Log_Mileage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Log_Area_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_Area_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Log_Area;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Log_PickupItem_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_PickupItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Log_PickupItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Log_PickupWeapon_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_PickupWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Log_PickupWeapon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Log_PickupShield_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_PickupShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Log_PickupShield;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Log_KilledPlayer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_KilledPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Log_KilledPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_KillerPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Log_KillerPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_ReviveFromKoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_ReviveFromKoCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_StrikeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_StrikeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_GrappleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_GrappleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_WeaponAttackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_WeaponAttackCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_FinisherId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Log_FinisherId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_FinisherCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_FinisherCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_VehicleRideCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_VehicleRideCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Log_AbilityUseCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_AbilityUseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Log_AbilityUseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_VendingUseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_VendingUseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_SlotMachineUseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Log_SlotMachineUseCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndGameReasonOnServer_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndGameReasonOnServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndGameReasonOnServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCountData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeCountData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCountDataRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeCountDataRep;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPlayerStateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerPlayerStateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerPlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillerPlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSPlayerProfileForInGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSPlayerProfileForInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSMatchMakeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSMatchMakeInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSClientInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSClientInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientIPForServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientIPForServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tallyResultPlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tallyResultPlayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resultTallyPlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_resultTallyPlayerData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_isResultTallyState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isResultTallyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_isResultTallyState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssResultTallyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ssResultTallyData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedClientResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedClientResultData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssPlayerInfoSyncData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssPlayerInfoSyncData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectSpawnPointId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectSpawnPointId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onPlayerSpawnPointChangeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onPlayerSpawnPointChangeEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSPlayerState_Activity_CreateMatchOnClient, "Activity_CreateMatchOnClient" }, // 2577140343
		{ &Z_Construct_UFunction_AELSSPlayerState_Activity_LeaveMatchOnClient, "Activity_LeaveMatchOnClient" }, // 398477647
		{ &Z_Construct_UFunction_AELSSPlayerState_Activity_ReportOnClient, "Activity_ReportOnClient" }, // 2371342729
		{ &Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultCreateMatch, "Activity_SendResultCreateMatch" }, // 2845330190
		{ &Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultLeaveMatch, "Activity_SendResultLeaveMatch" }, // 4173149470
		{ &Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultReport, "Activity_SendResultReport" }, // 2283928465
		{ &Z_Construct_UFunction_AELSSPlayerState_Activity_SendResultUpdateMatchStatus, "Activity_SendResultUpdateMatchStatus" }, // 1110914012
		{ &Z_Construct_UFunction_AELSSPlayerState_Activity_UpdateMatchStatusOnClient, "Activity_UpdateMatchStatusOnClient" }, // 1721865411
		{ &Z_Construct_UFunction_AELSSPlayerState_AddAttentionPoint, "AddAttentionPoint" }, // 3161728967
		{ &Z_Construct_UFunction_AELSSPlayerState_AddKillCount, "AddKillCount" }, // 2603723794
		{ &Z_Construct_UFunction_AELSSPlayerState_AddKillCount_Server, "AddKillCount_Server" }, // 1585202320
		{ &Z_Construct_UFunction_AELSSPlayerState_ApplyChallengeCountToSaveData, "ApplyChallengeCountToSaveData" }, // 535902723
		{ &Z_Construct_UFunction_AELSSPlayerState_ApplyDebugMenuParam, "ApplyDebugMenuParam" }, // 2668465026
		{ &Z_Construct_UFunction_AELSSPlayerState_ApplyLastPlayRecordToSaveData, "ApplyLastPlayRecordToSaveData" }, // 105837586
		{ &Z_Construct_UFunction_AELSSPlayerState_ApplyMasterData, "ApplyMasterData" }, // 451005774
		{ &Z_Construct_UFunction_AELSSPlayerState_BeginFeverTime_Multicast, "BeginFeverTime_Multicast" }, // 881722101
		{ &Z_Construct_UFunction_AELSSPlayerState_CalcAttentionLevelFromPoint, "CalcAttentionLevelFromPoint" }, // 1191262864
		{ &Z_Construct_UFunction_AELSSPlayerState_DebugResetAttention, "DebugResetAttention" }, // 2931774219
		{ &Z_Construct_UFunction_AELSSPlayerState_DebugSendGameStateDebugFlag_Server, "DebugSendGameStateDebugFlag_Server" }, // 362501387
		{ &Z_Construct_UFunction_AELSSPlayerState_DebugSetCopyWrestlerSetupParamToAI_Server, "DebugSetCopyWrestlerSetupParamToAI_Server" }, // 688171111
		{ &Z_Construct_UFunction_AELSSPlayerState_DebugYGS2DelayCancelRequestWhenHasFlag, "DebugYGS2DelayCancelRequestWhenHasFlag" }, // 4085908786
		{ &Z_Construct_UFunction_AELSSPlayerState_DoneDescription, "DoneDescription" }, // 115359900
		{ &Z_Construct_UFunction_AELSSPlayerState_DoneOpenGamePlayScreen, "DoneOpenGamePlayScreen" }, // 667393778
		{ &Z_Construct_UFunction_AELSSPlayerState_DoneUIPrepare, "DoneUIPrepare" }, // 2570330759
		{ &Z_Construct_UFunction_AELSSPlayerState_ForceEndFeverTime, "ForceEndFeverTime" }, // 2461091711
		{ &Z_Construct_UFunction_AELSSPlayerState_GetAfterFeverTimeRemainRate, "GetAfterFeverTimeRemainRate" }, // 3682434833
		{ &Z_Construct_UFunction_AELSSPlayerState_GetAssociatedSSPlayer, "GetAssociatedSSPlayer" }, // 1590157162
		{ &Z_Construct_UFunction_AELSSPlayerState_GetAttentionLevel, "GetAttentionLevel" }, // 1652595813
		{ &Z_Construct_UFunction_AELSSPlayerState_GetAttentionPoint, "GetAttentionPoint" }, // 178149351
		{ &Z_Construct_UFunction_AELSSPlayerState_GetChangeListByAsset, "GetChangeListByAsset" }, // 2885221314
		{ &Z_Construct_UFunction_AELSSPlayerState_GetClientFlowStateOnServer, "GetClientFlowStateOnServer" }, // 482679626
		{ &Z_Construct_UFunction_AELSSPlayerState_GetFeverCount, "GetFeverCount" }, // 2696678957
		{ &Z_Construct_UFunction_AELSSPlayerState_GetFeverTimeRemainRate, "GetFeverTimeRemainRate" }, // 2195978607
		{ &Z_Construct_UFunction_AELSSPlayerState_GetKillCount, "GetKillCount" }, // 3292215412
		{ &Z_Construct_UFunction_AELSSPlayerState_GetOwnerAIController, "GetOwnerAIController" }, // 62501593
		{ &Z_Construct_UFunction_AELSSPlayerState_GetOwnerLocalPlayerController, "GetOwnerLocalPlayerController" }, // 2376378925
		{ &Z_Construct_UFunction_AELSSPlayerState_GetOwnerPlayerController, "GetOwnerPlayerController" }, // 2748172293
		{ &Z_Construct_UFunction_AELSSPlayerState_GetRandomBadgeId, "GetRandomBadgeId" }, // 2631583897
		{ &Z_Construct_UFunction_AELSSPlayerState_GetResultPlayerEXP, "GetResultPlayerEXP" }, // 3924351021
		{ &Z_Construct_UFunction_AELSSPlayerState_GetSSPlayerControllerForUIUpdate, "GetSSPlayerControllerForUIUpdate" }, // 3039365050
		{ &Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorListIndex, "GetWeaponColorListIndex" }, // 1217205138
		{ &Z_Construct_UFunction_AELSSPlayerState_GetWeaponColorUniqueId, "GetWeaponColorUniqueId" }, // 308062033
		{ &Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalId, "GetWeaponDecalId" }, // 3577882693
		{ &Z_Construct_UFunction_AELSSPlayerState_GetWeaponDecalSymbolId, "GetWeaponDecalSymbolId" }, // 4172105218
		{ &Z_Construct_UFunction_AELSSPlayerState_HasProgressFlag, "HasProgressFlag" }, // 1293104513
		{ &Z_Construct_UFunction_AELSSPlayerState_IsAfterFeverTime, "IsAfterFeverTime" }, // 2448340824
		{ &Z_Construct_UFunction_AELSSPlayerState_IsDoneResultAPI, "IsDoneResultAPI" }, // 698115492
		{ &Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncChallengeCount, "IsDoneSyncChallengeCount" }, // 3126567985
		{ &Z_Construct_UFunction_AELSSPlayerState_IsDoneSyncResult, "IsDoneSyncResult" }, // 587795591
		{ &Z_Construct_UFunction_AELSSPlayerState_IsLocallyControlled, "IsLocallyControlled" }, // 1436176391
		{ &Z_Construct_UFunction_AELSSPlayerState_IsLocalPlayer, "IsLocalPlayer" }, // 4072596633
		{ &Z_Construct_UFunction_AELSSPlayerState_IsPlayerResultEnable, "IsPlayerResultEnable" }, // 1962624400
		{ &Z_Construct_UFunction_AELSSPlayerState_IsResultTallyEnd, "IsResultTallyEnd" }, // 1628674730
		{ &Z_Construct_UFunction_AELSSPlayerState_OnChangeLocalKillCount, "OnChangeLocalKillCount" }, // 2083302960
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint, "OnRep_AttentionPoint" }, // 774151762
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_AttentionPoint_Impl, "OnRep_AttentionPoint_Impl" }, // 3642214498
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_ChallengeCountData, "OnRep_ChallengeCountData" }, // 2439067979
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_EndGameReasonOnServer, "OnRep_EndGameReasonOnServer" }, // 3211153994
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_FeverTimeBeginTime, "OnRep_FeverTimeBeginTime" }, // 986925661
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_KillCount, "OnRep_KillCount" }, // 2985783451
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_PlayerDataSync, "OnRep_PlayerDataSync" }, // 474529696
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_ReplicatedClientResultData, "OnRep_ReplicatedClientResultData" }, // 2350568091
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_ResultTallyData, "OnRep_ResultTallyData" }, // 4130182600
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_SurvivorRanking, "OnRep_SurvivorRanking" }, // 224845214
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_WatchedPlayerNum, "OnRep_WatchedPlayerNum" }, // 1535376029
		{ &Z_Construct_UFunction_AELSSPlayerState_OnRep_WrestlerSetupParam, "OnRep_WrestlerSetupParam" }, // 2872478376
		{ &Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameResult, "OnYGS2Error_GameResult" }, // 3425821113
		{ &Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_GameStart, "OnYGS2Error_GameStart" }, // 3288258730
		{ &Z_Construct_UFunction_AELSSPlayerState_OnYGS2Error_SessionResult, "OnYGS2Error_SessionResult" }, // 2412331917
		{ &Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameResult, "OnYGS2Response_GameResult" }, // 2068957610
		{ &Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_GameStart, "OnYGS2Response_GameStart" }, // 1774536067
		{ &Z_Construct_UFunction_AELSSPlayerState_OnYGS2Response_SessionResult, "OnYGS2Response_SessionResult" }, // 3920577333
		{ &Z_Construct_UFunction_AELSSPlayerState_RegisterLog_SlotMachineUseCount, "RegisterLog_SlotMachineUseCount" }, // 801589148
		{ &Z_Construct_UFunction_AELSSPlayerState_RegisterLog_VendingUseCount, "RegisterLog_VendingUseCount" }, // 480531090
		{ &Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameResult, "RequestYGS2_GameResult" }, // 320406425
		{ &Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_GameStart, "RequestYGS2_GameStart" }, // 679666416
		{ &Z_Construct_UFunction_AELSSPlayerState_RequestYGS2_SessionResult, "RequestYGS2_SessionResult" }, // 389098629
		{ &Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameResult, "RequestYGS2Flow_GameResult" }, // 4111300937
		{ &Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_GameStart, "RequestYGS2Flow_GameStart" }, // 4032632496
		{ &Z_Construct_UFunction_AELSSPlayerState_RequestYGS2Flow_SessionResult, "RequestYGS2Flow_SessionResult" }, // 4226973540
		{ &Z_Construct_UFunction_AELSSPlayerState_ReserveExpItem, "ReserveExpItem" }, // 1195519261
		{ &Z_Construct_UFunction_AELSSPlayerState_ResultTallyDataToSyncBPEvent, "ResultTallyDataToSyncBPEvent" }, // 1779745180
		{ &Z_Construct_UFunction_AELSSPlayerState_RetryErrorAPIEvent, "RetryErrorAPIEvent" }, // 4236844940
		{ &Z_Construct_UFunction_AELSSPlayerState_SendPlayerInfoSyncData_Server, "SendPlayerInfoSyncData_Server" }, // 409606226
		{ &Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint, "SetAttentionPoint" }, // 3465594851
		{ &Z_Construct_UFunction_AELSSPlayerState_SetAttentionPoint_Client, "SetAttentionPoint_Client" }, // 4204453816
		{ &Z_Construct_UFunction_AELSSPlayerState_SetAttentionPointForWatcher_Client, "SetAttentionPointForWatcher_Client" }, // 3399424315
		{ &Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings, "SetDefaultPlayerEquipSettings" }, // 3821660572
		{ &Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_Ability, "SetDefaultPlayerEquipSettings_Ability" }, // 2880488582
		{ &Z_Construct_UFunction_AELSSPlayerState_SetDefaultPlayerEquipSettings_HeatSkill, "SetDefaultPlayerEquipSettings_HeatSkill" }, // 3161666584
		{ &Z_Construct_UFunction_AELSSPlayerState_SetIgnoreAnalytics_Server, "SetIgnoreAnalytics_Server" }, // 3835706113
		{ &Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings, "SetPlayerEquipSettings" }, // 736869200
		{ &Z_Construct_UFunction_AELSSPlayerState_SetPlayerEquipSettings_Ability, "SetPlayerEquipSettings_Ability" }, // 4035400917
		{ &Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointId_Server, "SetPlayerSpawnPointId_Server" }, // 3623134541
		{ &Z_Construct_UFunction_AELSSPlayerState_SetPlayerSpawnPointIdResult_Client, "SetPlayerSpawnPointIdResult_Client" }, // 18482309
		{ &Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag, "SetProgressFlag" }, // 3023031327
		{ &Z_Construct_UFunction_AELSSPlayerState_SetProgressFlag_Server, "SetProgressFlag_Server" }, // 2913564881
		{ &Z_Construct_UFunction_AELSSPlayerState_SetResultTallyData, "SetResultTallyData" }, // 2202801242
		{ &Z_Construct_UFunction_AELSSPlayerState_SetWrestlerPresetParam, "SetWrestlerPresetParam" }, // 2586183257
		{ &Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParam, "SetWrestlerSetupParam" }, // 592248678
		{ &Z_Construct_UFunction_AELSSPlayerState_SetWrestlerSetupParamByBaseStruct, "SetWrestlerSetupParamByBaseStruct" }, // 1711412911
		{ &Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatClientNotifyMessage_ToServer, "SSAntiCheatClientNotifyMessage_ToServer" }, // 1786723436
		{ &Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyAddClientAction_ToClient, "SSAntiCheatServerNotifyAddClientAction_ToClient" }, // 230156106
		{ &Z_Construct_UFunction_AELSSPlayerState_SSAntiCheatServerNotifyMessage_ToClient, "SSAntiCheatServerNotifyMessage_ToClient" }, // 1030590850
		{ &Z_Construct_UFunction_AELSSPlayerState_SyncChallengeCount_Clent, "SyncChallengeCount_Clent" }, // 192387551
		{ &Z_Construct_UFunction_AELSSPlayerState_SyncClientFPS_Server, "SyncClientFPS_Server" }, // 727373659
		{ &Z_Construct_UFunction_AELSSPlayerState_SyncMatchMakeInfo_Server, "SyncMatchMakeInfo_Server" }, // 1832733962
		{ &Z_Construct_UFunction_AELSSPlayerState_SyncPlayerProfileForInGame_Server, "SyncPlayerProfileForInGame_Server" }, // 3508066189
		{ &Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ClientToServer_Server, "SyncStatusForWatch_ClientToServer_Server" }, // 1517531674
		{ &Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_Server, "SyncStatusForWatch_Server" }, // 2273160886
		{ &Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher, "SyncStatusForWatch_ServerToWatcher" }, // 398180025
		{ &Z_Construct_UFunction_AELSSPlayerState_SyncStatusForWatch_ServerToWatcher_Client, "SyncStatusForWatch_ServerToWatcher_Client" }, // 654304873
		{ &Z_Construct_UFunction_AELSSPlayerState_UpdateLeaderboardData, "UpdateLeaderboardData" }, // 831952873
		{ &Z_Construct_UFunction_AELSSPlayerState_UpdatePlayerRankPoint, "UpdatePlayerRankPoint" }, // 1117204828
		{ &Z_Construct_UFunction_AELSSPlayerState_UpdateSyncStatusForWatch, "UpdateSyncStatusForWatch" }, // 2989318685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSPlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MasterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MasterData = { "MasterData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, MasterData), Z_Construct_UClass_UELSSMasterData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MasterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MasterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountRep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountRep = { "KillCountRep", "OnRep_KillCount", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, KillCountRep), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountLocal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountLocal = { "KillCountLocal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, KillCountLocal), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountLocal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherLocal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherLocal = { "WatcherLocal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, WatcherLocal), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherLocal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherOnServer_Inner = { "WatcherOnServer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherOnServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherOnServer = { "WatcherOnServer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, WatcherOnServer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherOnServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatchedPlayerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatchedPlayerNum = { "WatchedPlayerNum", "OnRep_WatchedPlayerNum", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, WatchedPlayerNum), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatchedPlayerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatchedPlayerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Replicated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Replicated = { "SyncStatusForWatch_Replicated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SyncStatusForWatch_Replicated), Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Replicated, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Replicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Replicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_CameraRot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_CameraRot = { "SyncStatus_CameraRot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SyncStatus_CameraRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_CameraRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_CameraRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_InteractTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_InteractTarget = { "SyncStatus_InteractTarget", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SyncStatus_InteractTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_InteractTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_InteractTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Owner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Owner = { "SyncStatusForWatch_Owner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SyncStatusForWatch_Owner), Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionPoint = { "AttentionPoint", "OnRep_AttentionPoint", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, AttentionPoint), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionPoint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionGaugeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionGaugeState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionGaugeState = { "AttentionGaugeState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, AttentionGaugeState), Z_Construct_UEnum_ABP_200508_ESSAttentionGaugeState, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionGaugeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionGaugeState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_FeverTimeBeginTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_FeverTimeBeginTime = { "FeverTimeBeginTime", "OnRep_FeverTimeBeginTime", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, FeverTimeBeginTime), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_FeverTimeBeginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_FeverTimeBeginTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_NegativeTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_NegativeTimer = { "NegativeTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, NegativeTimer), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_NegativeTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_NegativeTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionAdjustParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionAdjustParam = { "AttentionAdjustParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, AttentionAdjustParam), Z_Construct_UScriptStruct_FSSAttentionAdjustParam, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionAdjustParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionAdjustParam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemReservedList_Inner = { "ExpItemReservedList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSExpItemReserved, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemReservedList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemReservedList = { "ExpItemReservedList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ExpItemReservedList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemReservedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemReservedList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemSpawnDelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemSpawnDelayTime = { "ExpItemSpawnDelayTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ExpItemSpawnDelayTime), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemSpawnDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemSpawnDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AfterFeverTimeDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AfterFeverTimeDuration = { "AfterFeverTimeDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, AfterFeverTimeDuration), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AfterFeverTimeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AfterFeverTimeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SurvivorRanking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SurvivorRanking = { "SurvivorRanking", "OnRep_SurvivorRanking", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SurvivorRanking), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SurvivorRanking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SurvivorRanking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPoint = { "ExpItemPoint", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ExpItemPoint), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPointLoopCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPointLoopCount = { "ExpItemPointLoopCount", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ExpItemPointLoopCount), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPointLoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPointLoopCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionLevelParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionLevelParam = { "AttentionLevelParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, AttentionLevelParam), Z_Construct_UScriptStruct_FSSAttentionLevelParam, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionLevelParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionLevelParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MoveSetSettingsOnServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MoveSetSettingsOnServer = { "MoveSetSettingsOnServer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, MoveSetSettingsOnServer), Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MoveSetSettingsOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MoveSetSettingsOnServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EquipSettingsOnServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EquipSettingsOnServer = { "EquipSettingsOnServer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, EquipSettingsOnServer), Z_Construct_UScriptStruct_FSSPlayerEquipSettings, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EquipSettingsOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EquipSettingsOnServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_1 = { "SettingAbilityId_1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SettingAbilityId_1), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_2 = { "SettingAbilityId_2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SettingAbilityId_2), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_3 = { "SettingAbilityId_3", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SettingAbilityId_3), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_UseDefaultUserSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_UseDefaultUserSettings_SetBit(void* Obj)
	{
		((AELSSPlayerState*)Obj)->UseDefaultUserSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_UseDefaultUserSettings = { "UseDefaultUserSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPlayerState), &Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_UseDefaultUserSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_UseDefaultUserSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_UseDefaultUserSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParamRep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParamRep = { "WrestlerSetupParamRep", "OnRep_WrestlerSetupParam", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, WrestlerSetupParamRep), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParamRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParamRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParam = { "WrestlerSetupParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, WrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ProgressFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ProgressFlags = { "ProgressFlags", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ProgressFlags), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ProgressFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ProgressFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_HeatLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_HeatLevel = { "Log_HeatLevel", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_HeatLevel), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_HeatLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_HeatLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalAttack = { "Log_TotalAttack", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_TotalAttack), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalDamage = { "Log_TotalDamage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_TotalDamage), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Mileage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Mileage = { "Log_Mileage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_Mileage), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Mileage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Mileage_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Area_Inner = { "Log_Area", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Area_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Area = { "Log_Area", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_Area), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Area_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Area_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupItem_Inner = { "Log_PickupItem", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupItem = { "Log_PickupItem", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_PickupItem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupWeapon_Inner = { "Log_PickupWeapon", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupWeapon = { "Log_PickupWeapon", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_PickupWeapon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupWeapon_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupShield_Inner = { "Log_PickupShield", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupShield_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupShield = { "Log_PickupShield", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_PickupShield), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupShield_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KilledPlayer_Inner = { "Log_KilledPlayer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KilledPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KilledPlayer = { "Log_KilledPlayer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_KilledPlayer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KilledPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KilledPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KillerPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KillerPlayer = { "Log_KillerPlayer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_KillerPlayer), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KillerPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KillerPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_ReviveFromKoCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_ReviveFromKoCount = { "Log_ReviveFromKoCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_ReviveFromKoCount), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_ReviveFromKoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_ReviveFromKoCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_StrikeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_StrikeCount = { "Log_StrikeCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_StrikeCount), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_StrikeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_StrikeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_GrappleCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_GrappleCount = { "Log_GrappleCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_GrappleCount), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_GrappleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_GrappleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_WeaponAttackCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_WeaponAttackCount = { "Log_WeaponAttackCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_WeaponAttackCount), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_WeaponAttackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_WeaponAttackCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherId = { "Log_FinisherId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_FinisherId), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherCount = { "Log_FinisherCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_FinisherCount), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VehicleRideCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VehicleRideCount = { "Log_VehicleRideCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_VehicleRideCount), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VehicleRideCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VehicleRideCount_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_AbilityUseCount_Inner = { "Log_AbilityUseCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_AbilityUseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_AbilityUseCount = { "Log_AbilityUseCount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_AbilityUseCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_AbilityUseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_AbilityUseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VendingUseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VendingUseCount = { "Log_VendingUseCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_VendingUseCount), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VendingUseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VendingUseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_SlotMachineUseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_SlotMachineUseCount = { "Log_SlotMachineUseCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, Log_SlotMachineUseCount), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_SlotMachineUseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_SlotMachineUseCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EndGameReasonOnServer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EndGameReasonOnServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EndGameReasonOnServer = { "EndGameReasonOnServer", "OnRep_EndGameReasonOnServer", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, EndGameReasonOnServer), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EndGameReasonOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EndGameReasonOnServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountData = { "ChallengeCountData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ChallengeCountData), Z_Construct_UScriptStruct_FSSChallengeCountData, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountDataRep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountDataRep = { "ChallengeCountDataRep", "OnRep_ChallengeCountData", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ChallengeCountDataRep), Z_Construct_UScriptStruct_FSSChallengeCountData, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountDataRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountDataRep_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ServerPlayerStateIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ServerPlayerStateIndex = { "ServerPlayerStateIndex", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ServerPlayerStateIndex), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ServerPlayerStateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ServerPlayerStateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillerPlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillerPlayerIndex = { "KillerPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, KillerPlayerIndex), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillerPlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillerPlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSPlayerProfileForInGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSPlayerProfileForInGame = { "SSPlayerProfileForInGame", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SSPlayerProfileForInGame), Z_Construct_UScriptStruct_FSSPlayerProfileForInGame, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSPlayerProfileForInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSPlayerProfileForInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSMatchMakeInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSMatchMakeInfo = { "SSMatchMakeInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SSMatchMakeInfo), Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSMatchMakeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSMatchMakeInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSClientInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSClientInfo = { "SSClientInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SSClientInfo), Z_Construct_UScriptStruct_FSSClientInfoForAnalytics, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSClientInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSClientInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ClientIPForServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ClientIPForServer = { "ClientIPForServer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ClientIPForServer), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ClientIPForServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ClientIPForServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_tallyResultPlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_tallyResultPlayerData = { "tallyResultPlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, tallyResultPlayerData), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_tallyResultPlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_tallyResultPlayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_resultTallyPlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_resultTallyPlayerData = { "resultTallyPlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, resultTallyPlayerData), Z_Construct_UScriptStruct_FELSSResultTallyPlayerData, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_resultTallyPlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_resultTallyPlayerData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_isResultTallyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_isResultTallyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_isResultTallyState = { "isResultTallyState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, isResultTallyState), Z_Construct_UEnum_ABP_200508_EResultTallyState, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_isResultTallyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_isResultTallyState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssResultTallyData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssResultTallyData = { "ssResultTallyData", "OnRep_ResultTallyData", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ssResultTallyData), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssResultTallyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssResultTallyData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ReplicatedClientResultData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ReplicatedClientResultData = { "ReplicatedClientResultData", "OnRep_ReplicatedClientResultData", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ReplicatedClientResultData), Z_Construct_UScriptStruct_FSSReplicatedClientResultData, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ReplicatedClientResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ReplicatedClientResultData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssPlayerInfoSyncData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssPlayerInfoSyncData = { "ssPlayerInfoSyncData", "OnRep_PlayerDataSync", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, ssPlayerInfoSyncData), Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssPlayerInfoSyncData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssPlayerInfoSyncData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SelectSpawnPointId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SelectSpawnPointId = { "SelectSpawnPointId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, SelectSpawnPointId), METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SelectSpawnPointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SelectSpawnPointId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_onPlayerSpawnPointChangeEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPlayerState" },
		{ "ModuleRelativePath", "Public/ELSSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_onPlayerSpawnPointChangeEvent = { "onPlayerSpawnPointChangeEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPlayerState, onPlayerSpawnPointChangeEvent), Z_Construct_UDelegateFunction_ABP_200508_PlayerSpawnPointChangeResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_onPlayerSpawnPointChangeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_onPlayerSpawnPointChangeEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MasterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillCountLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherOnServer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatcherOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WatchedPlayerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Replicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_CameraRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatus_InteractTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SyncStatusForWatch_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionGaugeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionGaugeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_FeverTimeBeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_NegativeTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionAdjustParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemReservedList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemReservedList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemSpawnDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AfterFeverTimeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SurvivorRanking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ExpItemPointLoopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_AttentionLevelParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_MoveSetSettingsOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EquipSettingsOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SettingAbilityId_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_UseDefaultUserSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParamRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ProgressFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_HeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_TotalDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Mileage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Area_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_Area,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupItem_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupWeapon_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupShield_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_PickupShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KilledPlayer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KilledPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_KillerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_ReviveFromKoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_StrikeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_GrappleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_WeaponAttackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_FinisherCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VehicleRideCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_AbilityUseCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_AbilityUseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_VendingUseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_Log_SlotMachineUseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EndGameReasonOnServer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_EndGameReasonOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ChallengeCountDataRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ServerPlayerStateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_KillerPlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSPlayerProfileForInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSMatchMakeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SSClientInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ClientIPForServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_tallyResultPlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_resultTallyPlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_isResultTallyState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_isResultTallyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssResultTallyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ReplicatedClientResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_ssPlayerInfoSyncData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_SelectSpawnPointId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPlayerState_Statics::NewProp_onPlayerSpawnPointChangeEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSPlayerState_Statics::ClassParams = {
		&AELSSPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSPlayerState, 773441854);
	template<> ABP_200508_API UClass* StaticClass<AELSSPlayerState>()
	{
		return AELSSPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSPlayerState(Z_Construct_UClass_AELSSPlayerState, &AELSSPlayerState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSPlayerState"), false, nullptr, nullptr, nullptr);

	void AELSSPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_KillCountRep(TEXT("KillCountRep"));
		static const FName Name_WatchedPlayerNum(TEXT("WatchedPlayerNum"));
		static const FName Name_AttentionPoint(TEXT("AttentionPoint"));
		static const FName Name_FeverTimeBeginTime(TEXT("FeverTimeBeginTime"));
		static const FName Name_SurvivorRanking(TEXT("SurvivorRanking"));
		static const FName Name_ExpItemPoint(TEXT("ExpItemPoint"));
		static const FName Name_ExpItemPointLoopCount(TEXT("ExpItemPointLoopCount"));
		static const FName Name_WrestlerSetupParamRep(TEXT("WrestlerSetupParamRep"));
		static const FName Name_ProgressFlags(TEXT("ProgressFlags"));
		static const FName Name_EndGameReasonOnServer(TEXT("EndGameReasonOnServer"));
		static const FName Name_ChallengeCountDataRep(TEXT("ChallengeCountDataRep"));
		static const FName Name_ServerPlayerStateIndex(TEXT("ServerPlayerStateIndex"));
		static const FName Name_ssResultTallyData(TEXT("ssResultTallyData"));
		static const FName Name_ReplicatedClientResultData(TEXT("ReplicatedClientResultData"));
		static const FName Name_ssPlayerInfoSyncData(TEXT("ssPlayerInfoSyncData"));

		const bool bIsValid = true
			&& Name_KillCountRep == ClassReps[(int32)ENetFields_Private::KillCountRep].Property->GetFName()
			&& Name_WatchedPlayerNum == ClassReps[(int32)ENetFields_Private::WatchedPlayerNum].Property->GetFName()
			&& Name_AttentionPoint == ClassReps[(int32)ENetFields_Private::AttentionPoint].Property->GetFName()
			&& Name_FeverTimeBeginTime == ClassReps[(int32)ENetFields_Private::FeverTimeBeginTime].Property->GetFName()
			&& Name_SurvivorRanking == ClassReps[(int32)ENetFields_Private::SurvivorRanking].Property->GetFName()
			&& Name_ExpItemPoint == ClassReps[(int32)ENetFields_Private::ExpItemPoint].Property->GetFName()
			&& Name_ExpItemPointLoopCount == ClassReps[(int32)ENetFields_Private::ExpItemPointLoopCount].Property->GetFName()
			&& Name_WrestlerSetupParamRep == ClassReps[(int32)ENetFields_Private::WrestlerSetupParamRep].Property->GetFName()
			&& Name_ProgressFlags == ClassReps[(int32)ENetFields_Private::ProgressFlags].Property->GetFName()
			&& Name_EndGameReasonOnServer == ClassReps[(int32)ENetFields_Private::EndGameReasonOnServer].Property->GetFName()
			&& Name_ChallengeCountDataRep == ClassReps[(int32)ENetFields_Private::ChallengeCountDataRep].Property->GetFName()
			&& Name_ServerPlayerStateIndex == ClassReps[(int32)ENetFields_Private::ServerPlayerStateIndex].Property->GetFName()
			&& Name_ssResultTallyData == ClassReps[(int32)ENetFields_Private::ssResultTallyData].Property->GetFName()
			&& Name_ReplicatedClientResultData == ClassReps[(int32)ENetFields_Private::ReplicatedClientResultData].Property->GetFName()
			&& Name_ssPlayerInfoSyncData == ClassReps[(int32)ENetFields_Private::ssPlayerInfoSyncData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
