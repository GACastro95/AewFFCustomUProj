// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameFlowState();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSLobbyState();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDatabase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocatorManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPoolManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSRoundManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSoundManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSVehicleManager_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerProgress();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSServerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLogIconType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRoundEventLogType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSAIController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSGameStateEventDispatcher__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerEquipSettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPreloadAssetInfo();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSaveDataManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponTrapObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSFadeManager_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameRuleParam();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOptimizeManager_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionPlayerInfo();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameLobby_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSActivityMatchResult();
// End Cross Module References
	DEFINE_FUNCTION(AELSSGameState::execApplyConnectionTimeoutDuration)
	{
		P_GET_UBOOL(Z_Param_isLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyConnectionTimeoutDuration(Z_Param_isLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execBeginAsyncPreloadStationalAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginAsyncPreloadStationalAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execBeginAsyncPreloadVariableAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginAsyncPreloadVariableAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execCanStartOfMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartOfMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execChangeState)
	{
		P_GET_ENUM(ESSGameFlowState,Z_Param_inState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeState(ESSGameFlowState(Z_Param_inState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execChangeState_Multicast)
	{
		P_GET_ENUM(ESSGameFlowState,Z_Param_inState);
		P_GET_PROPERTY(FIntProperty,Z_Param_inStateSyncId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeState_Multicast_Implementation(ESSGameFlowState(Z_Param_inState),Z_Param_inStateSyncId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execCheckDoneShutdownNetDriver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckDoneShutdownNetDriver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execCheckMultiPlayFeature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckMultiPlayFeature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execClearShouldShutdownGameFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearShouldShutdownGameFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execCreatePreloadAssetInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreatePreloadAssetInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execCreatePreloadAssetInfoForDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreatePreloadAssetInfoForDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execCreateWrestlerSetupParam)
	{
		P_GET_STRUCT_REF(FSSWrestlerSetupParam,Z_Param_Out_inSSWrestlerSetupParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWrestlerSetupParam*)Z_Param__Result=P_THIS->CreateWrestlerSetupParam(Z_Param_Out_inSSWrestlerSetupParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execDeadMySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeadMySelf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execDebugAddInstantMessage_Multicast)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_inMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugAddInstantMessage_Multicast_Implementation(Z_Param_inMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execDebugPrintStateInfo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugPrintStateInfo(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execDebugSetLocalLobbyStateBP)
	{
		P_GET_ENUM(eSSLobbyState,Z_Param_inLobbyState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSetLocalLobbyStateBP(eSSLobbyState(Z_Param_inLobbyState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execDebugSetNoTimeouts)
	{
		P_GET_UBOOL(Z_Param_isNoTimeouts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSetNoTimeouts(Z_Param_isNoTimeouts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execEndOfMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndOfMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execEnterState_GamePlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterState_GamePlay_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execEnterState_Ready)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterState_Ready_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execEnterState_Setup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterState_Setup_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execExitState_GamePlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitState_GamePlay_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execExitState_Ready)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitState_Ready_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execFindSSPlayerState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inServerPlayerIndex);
		P_GET_UBOOL(Z_Param_inCheckPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayerState**)Z_Param__Result=P_THIS->FindSSPlayerState(Z_Param_inServerPlayerIndex,Z_Param_inCheckPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execFindSSPlayerStateForWatch_Random)
	{
		P_GET_UBOOL(Z_Param_inCheckPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayerState**)Z_Param__Result=P_THIS->FindSSPlayerStateForWatch_Random(Z_Param_inCheckPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execGetDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSDatabase**)Z_Param__Result=P_THIS->GetDatabase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execGetItemManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSItemManager**)Z_Param__Result=P_THIS->GetItemManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execGetLocatorManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSLocatorManager**)Z_Param__Result=P_THIS->GetLocatorManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execGetPoolManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSPoolManager**)Z_Param__Result=P_THIS->GetPoolManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execGetRoundManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSRoundManager**)Z_Param__Result=P_THIS->GetRoundManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execGetSoundManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSSoundManager**)Z_Param__Result=P_THIS->GetSoundManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execGetVehicleManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSVehicleManager**)Z_Param__Result=P_THIS->GetVehicleManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execHasDebugFlag)
	{
		P_GET_ENUM(ESSGameStateDebugFlag,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDebugFlag(ESSGameStateDebugFlag(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execHasProgressFlagForAllPlayers)
	{
		P_GET_ENUM(ESSPlayerProgress,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasProgressFlagForAllPlayers(ESSPlayerProgress(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execInitializeManagerActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeManagerActors_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsCompletedPreload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompletedPreload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsDeactiveGameSessionForClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeactiveGameSessionForClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsDoneActorSpawned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneActorSpawned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsDoneOpenGamePlayScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneOpenGamePlayScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsDoneReplicatesManagerActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneReplicatesManagerActors_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsDoneSyncPreloadAssetInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneSyncPreloadAssetInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsDoneUIPrepare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoneUIPrepare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsEnabledServerConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabledServerConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsMatchPlayerLobbyEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchPlayerLobbyEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsServerState)
	{
		P_GET_ENUM(ESSServerState,Z_Param_inState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsServerState(ESSServerState(Z_Param_inState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execIsState)
	{
		P_GET_ENUM(ESSGameFlowState,Z_Param_inState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsState(ESSGameFlowState(Z_Param_inState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execNeedsEnableAIForServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsEnableAIForServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execNeedsReadyStateForServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedsReadyStateForServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execNotifyAnnouceAttention_Multicast)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inServerPlayerStateIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyAnnouceAttention_Multicast_Implementation(Z_Param_inServerPlayerStateIndex,Z_Param_inAttentionPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execNotifyKilled_Multicast)
	{
		P_GET_OBJECT(APlayerState,Z_Param_killerPlayerState);
		P_GET_OBJECT(APlayerState,Z_Param_killedPlayerState);
		P_GET_OBJECT(APawn,Z_Param_killedPawn);
		P_GET_ENUM(ESSLogIconType,Z_Param_LogIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyKilled_Multicast_Implementation(Z_Param_killerPlayerState,Z_Param_killedPlayerState,Z_Param_killedPawn,ESSLogIconType(Z_Param_LogIcon));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execNotifyKo_Multicast)
	{
		P_GET_OBJECT(APlayerState,Z_Param_killerPlayerState);
		P_GET_OBJECT(APlayerState,Z_Param_killedPlayerState);
		P_GET_OBJECT(APawn,Z_Param_killedPawn);
		P_GET_ENUM(ESSLogIconType,Z_Param_LogIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyKo_Multicast_Implementation(Z_Param_killerPlayerState,Z_Param_killedPlayerState,Z_Param_killedPawn,ESSLogIconType(Z_Param_LogIcon));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execNotifyRoundEvent_Multicast)
	{
		P_GET_ENUM(ESSRoundEventLogType,Z_Param_inRoundEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyRoundEvent_Multicast_Implementation(ESSRoundEventLogType(Z_Param_inRoundEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnCompletedSpawnManagerActorsLocal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompletedSpawnManagerActorsLocal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnCompletePreload_StationalAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompletePreload_StationalAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnCompletePreload_VariableAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompletePreload_VariableAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnRep_DebugFlags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DebugFlags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnRep_DebugServerAverageFPS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DebugServerAverageFPS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnRep_DebugServerCrashRequestedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DebugServerCrashRequestedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnRep_DebugServerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DebugServerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnRep_ItemManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ItemManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnRep_RoundManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RoundManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnRep_StateSyncParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StateSyncParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnRep_SurvivorNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SurvivorNum_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execOnRep_VehicleManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_VehicleManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execPlayMatchPointPay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMatchPointPay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execPrintLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Log);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLog(Z_Param_Log);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execReleasePreloadAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleasePreloadAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execRequestCloseConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestCloseConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execRequestTearDownReplicationConnectionDriver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestTearDownReplicationConnectionDriver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execSetDummyPlayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDummyPlayerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execSetupServerPlayerStateIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupServerPlayerStateIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execShutdownNetDriverOnFinishedMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShutdownNetDriverOnFinishedMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execShutdownNetDriverOnSignout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShutdownNetDriverOnSignout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execSpawnAIController)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_inPlayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSAIController**)Z_Param__Result=P_THIS->SpawnAIController(EWrestlerID_N(Z_Param_inWrestlerId),Z_Param_inPlayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execSpawnAIControllerRemainAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inWrestlerMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnAIControllerRemainAll(Z_Param_inWrestlerMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execSpawnManagerActor)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnManagerActor(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execSpawnSSPlayerByPlayerState)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_GET_OBJECT(AELSSPlayerState,Z_Param_inPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->SpawnSSPlayerByPlayerState(Z_Param_Out_InTransform,Z_Param_inPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execStartOfMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartOfMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execTickState_GamePlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickState_GamePlay_Implementation(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execTickState_Ready)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickState_Ready_Implementation(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGameState::execUpdateSurvivorNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSurvivorNum();
		P_NATIVE_END;
	}
	static FName NAME_AELSSGameState_BeginAsyncPreloadStationalAsset_BP = FName(TEXT("BeginAsyncPreloadStationalAsset_BP"));
	void AELSSGameState::BeginAsyncPreloadStationalAsset_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_BeginAsyncPreloadStationalAsset_BP),NULL);
	}
	static FName NAME_AELSSGameState_BeginAsyncPreloadVariableAsset_BP = FName(TEXT("BeginAsyncPreloadVariableAsset_BP"));
	void AELSSGameState::BeginAsyncPreloadVariableAsset_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_BeginAsyncPreloadVariableAsset_BP),NULL);
	}
	static FName NAME_AELSSGameState_CanStartOfMatch = FName(TEXT("CanStartOfMatch"));
	bool AELSSGameState::CanStartOfMatch() const
	{
		ELSSGameState_eventCanStartOfMatch_Parms Parms;
		const_cast<AELSSGameState*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_CanStartOfMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameState_ChangeState_Multicast = FName(TEXT("ChangeState_Multicast"));
	void AELSSGameState::ChangeState_Multicast(ESSGameFlowState inState, int32 inStateSyncId)
	{
		ELSSGameState_eventChangeState_Multicast_Parms Parms;
		Parms.inState=inState;
		Parms.inStateSyncId=inStateSyncId;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ChangeState_Multicast),&Parms);
	}
	static FName NAME_AELSSGameState_DeadMySelf = FName(TEXT("DeadMySelf"));
	void AELSSGameState::DeadMySelf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_DeadMySelf),NULL);
	}
	static FName NAME_AELSSGameState_DebugAddInstantMessage_Multicast = FName(TEXT("DebugAddInstantMessage_Multicast"));
	void AELSSGameState::DebugAddInstantMessage_Multicast(const FString& inMessage)
	{
		ELSSGameState_eventDebugAddInstantMessage_Multicast_Parms Parms;
		Parms.inMessage=inMessage;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_DebugAddInstantMessage_Multicast),&Parms);
	}
	static FName NAME_AELSSGameState_DebugTickBP = FName(TEXT("DebugTickBP"));
	void AELSSGameState::DebugTickBP(float inDeltaSeconds)
	{
		ELSSGameState_eventDebugTickBP_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_DebugTickBP),&Parms);
	}
	static FName NAME_AELSSGameState_EndOfMatch = FName(TEXT("EndOfMatch"));
	bool AELSSGameState::EndOfMatch()
	{
		ELSSGameState_eventEndOfMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EndOfMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameState_EnterState_AfterGamePlay = FName(TEXT("EnterState_AfterGamePlay"));
	void AELSSGameState::EnterState_AfterGamePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_AfterGamePlay),NULL);
	}
	static FName NAME_AELSSGameState_EnterState_BeforeInProgress = FName(TEXT("EnterState_BeforeInProgress"));
	void AELSSGameState::EnterState_BeforeInProgress()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_BeforeInProgress),NULL);
	}
	static FName NAME_AELSSGameState_EnterState_Entrance = FName(TEXT("EnterState_Entrance"));
	void AELSSGameState::EnterState_Entrance()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_Entrance),NULL);
	}
	static FName NAME_AELSSGameState_EnterState_Exit = FName(TEXT("EnterState_Exit"));
	void AELSSGameState::EnterState_Exit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_Exit),NULL);
	}
	static FName NAME_AELSSGameState_EnterState_GamePlay = FName(TEXT("EnterState_GamePlay"));
	void AELSSGameState::EnterState_GamePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_GamePlay),NULL);
	}
	static FName NAME_AELSSGameState_EnterState_Initialize = FName(TEXT("EnterState_Initialize"));
	void AELSSGameState::EnterState_Initialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_Initialize),NULL);
	}
	static FName NAME_AELSSGameState_EnterState_Loading = FName(TEXT("EnterState_Loading"));
	void AELSSGameState::EnterState_Loading()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_Loading),NULL);
	}
	static FName NAME_AELSSGameState_EnterState_OpenGamePlayScreen = FName(TEXT("EnterState_OpenGamePlayScreen"));
	void AELSSGameState::EnterState_OpenGamePlayScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_OpenGamePlayScreen),NULL);
	}
	static FName NAME_AELSSGameState_EnterState_Ready = FName(TEXT("EnterState_Ready"));
	void AELSSGameState::EnterState_Ready()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_Ready),NULL);
	}
	static FName NAME_AELSSGameState_EnterState_Setup = FName(TEXT("EnterState_Setup"));
	void AELSSGameState::EnterState_Setup()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_EnterState_Setup),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_AfterGamePlay = FName(TEXT("ExitState_AfterGamePlay"));
	void AELSSGameState::ExitState_AfterGamePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_AfterGamePlay),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_BeforeInProgress = FName(TEXT("ExitState_BeforeInProgress"));
	void AELSSGameState::ExitState_BeforeInProgress()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_BeforeInProgress),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_Entrance = FName(TEXT("ExitState_Entrance"));
	void AELSSGameState::ExitState_Entrance()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_Entrance),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_Exit = FName(TEXT("ExitState_Exit"));
	void AELSSGameState::ExitState_Exit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_Exit),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_GamePlay = FName(TEXT("ExitState_GamePlay"));
	void AELSSGameState::ExitState_GamePlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_GamePlay),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_Initialize = FName(TEXT("ExitState_Initialize"));
	void AELSSGameState::ExitState_Initialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_Initialize),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_Loading = FName(TEXT("ExitState_Loading"));
	void AELSSGameState::ExitState_Loading()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_Loading),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_OpenGamePlayScreen = FName(TEXT("ExitState_OpenGamePlayScreen"));
	void AELSSGameState::ExitState_OpenGamePlayScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_OpenGamePlayScreen),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_Ready = FName(TEXT("ExitState_Ready"));
	void AELSSGameState::ExitState_Ready()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_Ready),NULL);
	}
	static FName NAME_AELSSGameState_ExitState_Setup = FName(TEXT("ExitState_Setup"));
	void AELSSGameState::ExitState_Setup()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ExitState_Setup),NULL);
	}
	static FName NAME_AELSSGameState_InitializeManagerActors = FName(TEXT("InitializeManagerActors"));
	bool AELSSGameState::InitializeManagerActors()
	{
		ELSSGameState_eventInitializeManagerActors_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_InitializeManagerActors),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameState_IsDoneReplicatesManagerActors = FName(TEXT("IsDoneReplicatesManagerActors"));
	bool AELSSGameState::IsDoneReplicatesManagerActors() const
	{
		ELSSGameState_eventIsDoneReplicatesManagerActors_Parms Parms;
		const_cast<AELSSGameState*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_IsDoneReplicatesManagerActors),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameState_IsNetworkStatusOnline = FName(TEXT("IsNetworkStatusOnline"));
	bool AELSSGameState::IsNetworkStatusOnline() const
	{
		ELSSGameState_eventIsNetworkStatusOnline_Parms Parms;
		const_cast<AELSSGameState*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_IsNetworkStatusOnline),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameState_NotifyAnnouceAttention_Multicast = FName(TEXT("NotifyAnnouceAttention_Multicast"));
	void AELSSGameState::NotifyAnnouceAttention_Multicast(int32 inServerPlayerStateIndex, int32 inAttentionPoint)
	{
		ELSSGameState_eventNotifyAnnouceAttention_Multicast_Parms Parms;
		Parms.inServerPlayerStateIndex=inServerPlayerStateIndex;
		Parms.inAttentionPoint=inAttentionPoint;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_NotifyAnnouceAttention_Multicast),&Parms);
	}
	static FName NAME_AELSSGameState_NotifyKilled_Multicast = FName(TEXT("NotifyKilled_Multicast"));
	void AELSSGameState::NotifyKilled_Multicast(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon)
	{
		ELSSGameState_eventNotifyKilled_Multicast_Parms Parms;
		Parms.killerPlayerState=killerPlayerState;
		Parms.killedPlayerState=killedPlayerState;
		Parms.killedPawn=killedPawn;
		Parms.LogIcon=LogIcon;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_NotifyKilled_Multicast),&Parms);
	}
	static FName NAME_AELSSGameState_NotifyKo_Multicast = FName(TEXT("NotifyKo_Multicast"));
	void AELSSGameState::NotifyKo_Multicast(APlayerState* killerPlayerState, APlayerState* killedPlayerState, APawn* killedPawn, ESSLogIconType LogIcon)
	{
		ELSSGameState_eventNotifyKo_Multicast_Parms Parms;
		Parms.killerPlayerState=killerPlayerState;
		Parms.killedPlayerState=killedPlayerState;
		Parms.killedPawn=killedPawn;
		Parms.LogIcon=LogIcon;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_NotifyKo_Multicast),&Parms);
	}
	static FName NAME_AELSSGameState_NotifyRoundEvent_Multicast = FName(TEXT("NotifyRoundEvent_Multicast"));
	void AELSSGameState::NotifyRoundEvent_Multicast(ESSRoundEventLogType inRoundEvent)
	{
		ELSSGameState_eventNotifyRoundEvent_Multicast_Parms Parms;
		Parms.inRoundEvent=inRoundEvent;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_NotifyRoundEvent_Multicast),&Parms);
	}
	static FName NAME_AELSSGameState_OnRep_SSModeLobby = FName(TEXT("OnRep_SSModeLobby"));
	void AELSSGameState::OnRep_SSModeLobby()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_OnRep_SSModeLobby),NULL);
	}
	static FName NAME_AELSSGameState_OnRep_SurvivorNum = FName(TEXT("OnRep_SurvivorNum"));
	void AELSSGameState::OnRep_SurvivorNum()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_OnRep_SurvivorNum),NULL);
	}
	static FName NAME_AELSSGameState_ReleasePreloadAsset_BP = FName(TEXT("ReleasePreloadAsset_BP"));
	void AELSSGameState::ReleasePreloadAsset_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_ReleasePreloadAsset_BP),NULL);
	}
	static FName NAME_AELSSGameState_SpawnAISSPlayer = FName(TEXT("SpawnAISSPlayer"));
	AELSSPlayer* AELSSGameState::SpawnAISSPlayer(EWrestlerID_N inWrestlerId, FVector const& InLocation, FRotator const& inRotator)
	{
		ELSSGameState_eventSpawnAISSPlayer_Parms Parms;
		Parms.inWrestlerId=inWrestlerId;
		Parms.InLocation=InLocation;
		Parms.inRotator=inRotator;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_SpawnAISSPlayer),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam = FName(TEXT("SpawnAISSPlayerByWrestlerSetupParam"));
	AELSSPlayer* AELSSGameState::SpawnAISSPlayerByWrestlerSetupParam(FWrestlerSetupParam const& inSetupParam, FVector const& InLocation, FRotator const& inRotator)
	{
		ELSSGameState_eventSpawnAISSPlayerByWrestlerSetupParam_Parms Parms;
		Parms.inSetupParam=inSetupParam;
		Parms.InLocation=InLocation;
		Parms.inRotator=inRotator;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSGameState_SpawnAISSPlayers = FName(TEXT("SpawnAISSPlayers"));
	TArray<AELSSPlayer*> AELSSGameState::SpawnAISSPlayers(TArray<EWrestlerID_N> const& wrestlerIDs)
	{
		ELSSGameState_eventSpawnAISSPlayers_Parms Parms;
		Parms.wrestlerIDs=wrestlerIDs;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_SpawnAISSPlayers),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSGameState_StartOfMatch = FName(TEXT("StartOfMatch"));
	bool AELSSGameState::StartOfMatch()
	{
		ELSSGameState_eventStartOfMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_StartOfMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSGameState_TickState_AfterGamePlay = FName(TEXT("TickState_AfterGamePlay"));
	void AELSSGameState::TickState_AfterGamePlay(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_AfterGamePlay_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_AfterGamePlay),&Parms);
	}
	static FName NAME_AELSSGameState_TickState_BeforeInProgress = FName(TEXT("TickState_BeforeInProgress"));
	void AELSSGameState::TickState_BeforeInProgress(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_BeforeInProgress_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_BeforeInProgress),&Parms);
	}
	static FName NAME_AELSSGameState_TickState_Entrance = FName(TEXT("TickState_Entrance"));
	void AELSSGameState::TickState_Entrance(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_Entrance_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_Entrance),&Parms);
	}
	static FName NAME_AELSSGameState_TickState_Exit = FName(TEXT("TickState_Exit"));
	void AELSSGameState::TickState_Exit(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_Exit_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_Exit),&Parms);
	}
	static FName NAME_AELSSGameState_TickState_GamePlay = FName(TEXT("TickState_GamePlay"));
	void AELSSGameState::TickState_GamePlay(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_GamePlay_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_GamePlay),&Parms);
	}
	static FName NAME_AELSSGameState_TickState_Initialize = FName(TEXT("TickState_Initialize"));
	void AELSSGameState::TickState_Initialize(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_Initialize_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_Initialize),&Parms);
	}
	static FName NAME_AELSSGameState_TickState_Loading = FName(TEXT("TickState_Loading"));
	void AELSSGameState::TickState_Loading(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_Loading_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_Loading),&Parms);
	}
	static FName NAME_AELSSGameState_TickState_OpenGamePlayScreen = FName(TEXT("TickState_OpenGamePlayScreen"));
	void AELSSGameState::TickState_OpenGamePlayScreen(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_OpenGamePlayScreen_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_OpenGamePlayScreen),&Parms);
	}
	static FName NAME_AELSSGameState_TickState_Ready = FName(TEXT("TickState_Ready"));
	void AELSSGameState::TickState_Ready(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_Ready_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_Ready),&Parms);
	}
	static FName NAME_AELSSGameState_TickState_Setup = FName(TEXT("TickState_Setup"));
	void AELSSGameState::TickState_Setup(float inDeltaSeconds)
	{
		ELSSGameState_eventTickState_Setup_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGameState_TickState_Setup),&Parms);
	}
	void AELSSGameState::StaticRegisterNativesAELSSGameState()
	{
		UClass* Class = AELSSGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyConnectionTimeoutDuration", &AELSSGameState::execApplyConnectionTimeoutDuration },
			{ "BeginAsyncPreloadStationalAsset", &AELSSGameState::execBeginAsyncPreloadStationalAsset },
			{ "BeginAsyncPreloadVariableAsset", &AELSSGameState::execBeginAsyncPreloadVariableAsset },
			{ "CanStartOfMatch", &AELSSGameState::execCanStartOfMatch },
			{ "ChangeState", &AELSSGameState::execChangeState },
			{ "ChangeState_Multicast", &AELSSGameState::execChangeState_Multicast },
			{ "CheckDoneShutdownNetDriver", &AELSSGameState::execCheckDoneShutdownNetDriver },
			{ "CheckMultiPlayFeature", &AELSSGameState::execCheckMultiPlayFeature },
			{ "ClearShouldShutdownGameFlag", &AELSSGameState::execClearShouldShutdownGameFlag },
			{ "CreatePreloadAssetInfo", &AELSSGameState::execCreatePreloadAssetInfo },
			{ "CreatePreloadAssetInfoForDebug", &AELSSGameState::execCreatePreloadAssetInfoForDebug },
			{ "CreateWrestlerSetupParam", &AELSSGameState::execCreateWrestlerSetupParam },
			{ "DeadMySelf", &AELSSGameState::execDeadMySelf },
			{ "DebugAddInstantMessage_Multicast", &AELSSGameState::execDebugAddInstantMessage_Multicast },
			{ "DebugPrintStateInfo", &AELSSGameState::execDebugPrintStateInfo },
			{ "DebugSetLocalLobbyStateBP", &AELSSGameState::execDebugSetLocalLobbyStateBP },
			{ "DebugSetNoTimeouts", &AELSSGameState::execDebugSetNoTimeouts },
			{ "EndOfMatch", &AELSSGameState::execEndOfMatch },
			{ "EnterState_GamePlay", &AELSSGameState::execEnterState_GamePlay },
			{ "EnterState_Ready", &AELSSGameState::execEnterState_Ready },
			{ "EnterState_Setup", &AELSSGameState::execEnterState_Setup },
			{ "ExitState_GamePlay", &AELSSGameState::execExitState_GamePlay },
			{ "ExitState_Ready", &AELSSGameState::execExitState_Ready },
			{ "FindSSPlayerState", &AELSSGameState::execFindSSPlayerState },
			{ "FindSSPlayerStateForWatch_Random", &AELSSGameState::execFindSSPlayerStateForWatch_Random },
			{ "GetDatabase", &AELSSGameState::execGetDatabase },
			{ "GetItemManager", &AELSSGameState::execGetItemManager },
			{ "GetLocatorManager", &AELSSGameState::execGetLocatorManager },
			{ "GetPoolManager", &AELSSGameState::execGetPoolManager },
			{ "GetRoundManager", &AELSSGameState::execGetRoundManager },
			{ "GetSoundManager", &AELSSGameState::execGetSoundManager },
			{ "GetVehicleManager", &AELSSGameState::execGetVehicleManager },
			{ "HasDebugFlag", &AELSSGameState::execHasDebugFlag },
			{ "HasProgressFlagForAllPlayers", &AELSSGameState::execHasProgressFlagForAllPlayers },
			{ "InitializeManagerActors", &AELSSGameState::execInitializeManagerActors },
			{ "IsCompletedPreload", &AELSSGameState::execIsCompletedPreload },
			{ "IsDeactiveGameSessionForClient", &AELSSGameState::execIsDeactiveGameSessionForClient },
			{ "IsDoneActorSpawned", &AELSSGameState::execIsDoneActorSpawned },
			{ "IsDoneOpenGamePlayScreen", &AELSSGameState::execIsDoneOpenGamePlayScreen },
			{ "IsDoneReplicatesManagerActors", &AELSSGameState::execIsDoneReplicatesManagerActors },
			{ "IsDoneSyncPreloadAssetInfo", &AELSSGameState::execIsDoneSyncPreloadAssetInfo },
			{ "IsDoneUIPrepare", &AELSSGameState::execIsDoneUIPrepare },
			{ "IsEnabledServerConnection", &AELSSGameState::execIsEnabledServerConnection },
			{ "IsInitialized", &AELSSGameState::execIsInitialized },
			{ "IsMatchPlayerLobbyEnd", &AELSSGameState::execIsMatchPlayerLobbyEnd },
			{ "IsServerState", &AELSSGameState::execIsServerState },
			{ "IsState", &AELSSGameState::execIsState },
			{ "NeedsEnableAIForServer", &AELSSGameState::execNeedsEnableAIForServer },
			{ "NeedsReadyStateForServer", &AELSSGameState::execNeedsReadyStateForServer },
			{ "NotifyAnnouceAttention_Multicast", &AELSSGameState::execNotifyAnnouceAttention_Multicast },
			{ "NotifyKilled_Multicast", &AELSSGameState::execNotifyKilled_Multicast },
			{ "NotifyKo_Multicast", &AELSSGameState::execNotifyKo_Multicast },
			{ "NotifyRoundEvent_Multicast", &AELSSGameState::execNotifyRoundEvent_Multicast },
			{ "OnCompletedSpawnManagerActorsLocal", &AELSSGameState::execOnCompletedSpawnManagerActorsLocal },
			{ "OnCompletePreload_StationalAsset", &AELSSGameState::execOnCompletePreload_StationalAsset },
			{ "OnCompletePreload_VariableAsset", &AELSSGameState::execOnCompletePreload_VariableAsset },
			{ "OnRep_DebugFlags", &AELSSGameState::execOnRep_DebugFlags },
			{ "OnRep_DebugServerAverageFPS", &AELSSGameState::execOnRep_DebugServerAverageFPS },
			{ "OnRep_DebugServerCrashRequestedTime", &AELSSGameState::execOnRep_DebugServerCrashRequestedTime },
			{ "OnRep_DebugServerState", &AELSSGameState::execOnRep_DebugServerState },
			{ "OnRep_ItemManager", &AELSSGameState::execOnRep_ItemManager },
			{ "OnRep_RoundManager", &AELSSGameState::execOnRep_RoundManager },
			{ "OnRep_StateSyncParam", &AELSSGameState::execOnRep_StateSyncParam },
			{ "OnRep_SurvivorNum", &AELSSGameState::execOnRep_SurvivorNum },
			{ "OnRep_VehicleManager", &AELSSGameState::execOnRep_VehicleManager },
			{ "PlayMatchPointPay", &AELSSGameState::execPlayMatchPointPay },
			{ "PrintLog", &AELSSGameState::execPrintLog },
			{ "ReleasePreloadAsset", &AELSSGameState::execReleasePreloadAsset },
			{ "RequestCloseConnection", &AELSSGameState::execRequestCloseConnection },
			{ "RequestTearDownReplicationConnectionDriver", &AELSSGameState::execRequestTearDownReplicationConnectionDriver },
			{ "SetDummyPlayerName", &AELSSGameState::execSetDummyPlayerName },
			{ "SetupServerPlayerStateIndex", &AELSSGameState::execSetupServerPlayerStateIndex },
			{ "ShutdownNetDriverOnFinishedMatch", &AELSSGameState::execShutdownNetDriverOnFinishedMatch },
			{ "ShutdownNetDriverOnSignout", &AELSSGameState::execShutdownNetDriverOnSignout },
			{ "SpawnAIController", &AELSSGameState::execSpawnAIController },
			{ "SpawnAIControllerRemainAll", &AELSSGameState::execSpawnAIControllerRemainAll },
			{ "SpawnManagerActor", &AELSSGameState::execSpawnManagerActor },
			{ "SpawnSSPlayerByPlayerState", &AELSSGameState::execSpawnSSPlayerByPlayerState },
			{ "StartOfMatch", &AELSSGameState::execStartOfMatch },
			{ "TickState_GamePlay", &AELSSGameState::execTickState_GamePlay },
			{ "TickState_Ready", &AELSSGameState::execTickState_Ready },
			{ "UpdateSurvivorNum", &AELSSGameState::execUpdateSurvivorNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics
	{
		struct ELSSGameState_eventApplyConnectionTimeoutDuration_Parms
		{
			bool isLobby;
		};
		static void NewProp_isLobby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::NewProp_isLobby_SetBit(void* Obj)
	{
		((ELSSGameState_eventApplyConnectionTimeoutDuration_Parms*)Obj)->isLobby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::NewProp_isLobby = { "isLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventApplyConnectionTimeoutDuration_Parms), &Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::NewProp_isLobby_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::NewProp_isLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ApplyConnectionTimeoutDuration", nullptr, nullptr, sizeof(ELSSGameState_eventApplyConnectionTimeoutDuration_Parms), Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "BeginAsyncPreloadStationalAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "BeginAsyncPreloadStationalAsset_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "BeginAsyncPreloadVariableAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "BeginAsyncPreloadVariableAsset_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventCanStartOfMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventCanStartOfMatch_Parms), &Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "CanStartOfMatch", nullptr, nullptr, sizeof(ELSSGameState_eventCanStartOfMatch_Parms), Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_CanStartOfMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_CanStartOfMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ChangeState_Statics
	{
		struct ELSSGameState_eventChangeState_Parms
		{
			ESSGameFlowState inState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::NewProp_inState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::NewProp_inState = { "inState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventChangeState_Parms, inState), Z_Construct_UEnum_ABP_200508_ESSGameFlowState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::NewProp_inState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::NewProp_inState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ChangeState", nullptr, nullptr, sizeof(ELSSGameState_eventChangeState_Parms), Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inStateSyncId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::NewProp_inState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::NewProp_inState = { "inState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventChangeState_Multicast_Parms, inState), Z_Construct_UEnum_ABP_200508_ESSGameFlowState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::NewProp_inStateSyncId = { "inStateSyncId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventChangeState_Multicast_Parms, inStateSyncId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::NewProp_inState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::NewProp_inState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::NewProp_inStateSyncId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ChangeState_Multicast", nullptr, nullptr, sizeof(ELSSGameState_eventChangeState_Multicast_Parms), Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics
	{
		struct ELSSGameState_eventCheckDoneShutdownNetDriver_Parms
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
	void Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventCheckDoneShutdownNetDriver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventCheckDoneShutdownNetDriver_Parms), &Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "CheckDoneShutdownNetDriver", nullptr, nullptr, sizeof(ELSSGameState_eventCheckDoneShutdownNetDriver_Parms), Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics
	{
		struct ELSSGameState_eventCheckMultiPlayFeature_Parms
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
	void Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventCheckMultiPlayFeature_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventCheckMultiPlayFeature_Parms), &Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "CheckMultiPlayFeature", nullptr, nullptr, sizeof(ELSSGameState_eventCheckMultiPlayFeature_Parms), Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ClearShouldShutdownGameFlag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ClearShouldShutdownGameFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ClearShouldShutdownGameFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ClearShouldShutdownGameFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ClearShouldShutdownGameFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ClearShouldShutdownGameFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ClearShouldShutdownGameFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ClearShouldShutdownGameFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "CreatePreloadAssetInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfoForDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfoForDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfoForDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "CreatePreloadAssetInfoForDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfoForDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfoForDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfoForDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfoForDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics
	{
		struct ELSSGameState_eventCreateWrestlerSetupParam_Parms
		{
			FSSWrestlerSetupParam inSSWrestlerSetupParam;
			FWrestlerSetupParam ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inSSWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSSWrestlerSetupParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam = { "inSSWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventCreateWrestlerSetupParam_Parms, inSSWrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventCreateWrestlerSetupParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "CreateWrestlerSetupParam", nullptr, nullptr, sizeof(ELSSGameState_eventCreateWrestlerSetupParam_Parms), Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_DeadMySelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_DeadMySelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_DeadMySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "DeadMySelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_DeadMySelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DeadMySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_DeadMySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_DeadMySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::NewProp_inMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::NewProp_inMessage = { "inMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventDebugAddInstantMessage_Multicast_Parms, inMessage), METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::NewProp_inMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::NewProp_inMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "DebugAddInstantMessage_Multicast", nullptr, nullptr, sizeof(ELSSGameState_eventDebugAddInstantMessage_Multicast_Parms), Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics
	{
		struct ELSSGameState_eventDebugPrintStateInfo_Parms
		{
			float Time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventDebugPrintStateInfo_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "DebugPrintStateInfo", nullptr, nullptr, sizeof(ELSSGameState_eventDebugPrintStateInfo_Parms), Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics
	{
		struct ELSSGameState_eventDebugSetLocalLobbyStateBP_Parms
		{
			eSSLobbyState inLobbyState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inLobbyState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inLobbyState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::NewProp_inLobbyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::NewProp_inLobbyState = { "inLobbyState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventDebugSetLocalLobbyStateBP_Parms, inLobbyState), Z_Construct_UEnum_ABP_200508_eSSLobbyState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::NewProp_inLobbyState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::NewProp_inLobbyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "DebugSetLocalLobbyStateBP", nullptr, nullptr, sizeof(ELSSGameState_eventDebugSetLocalLobbyStateBP_Parms), Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics
	{
		struct ELSSGameState_eventDebugSetNoTimeouts_Parms
		{
			bool isNoTimeouts;
		};
		static void NewProp_isNoTimeouts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isNoTimeouts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::NewProp_isNoTimeouts_SetBit(void* Obj)
	{
		((ELSSGameState_eventDebugSetNoTimeouts_Parms*)Obj)->isNoTimeouts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::NewProp_isNoTimeouts = { "isNoTimeouts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventDebugSetNoTimeouts_Parms), &Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::NewProp_isNoTimeouts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::NewProp_isNoTimeouts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "DebugSetNoTimeouts", nullptr, nullptr, sizeof(ELSSGameState_eventDebugSetNoTimeouts_Parms), Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventDebugTickBP_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "DebugTickBP", nullptr, nullptr, sizeof(ELSSGameState_eventDebugTickBP_Parms), Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_DebugTickBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_DebugTickBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventEndOfMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventEndOfMatch_Parms), &Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EndOfMatch", nullptr, nullptr, sizeof(ELSSGameState_eventEndOfMatch_Parms), Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EndOfMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EndOfMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_AfterGamePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_AfterGamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_AfterGamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_AfterGamePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_AfterGamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_AfterGamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_AfterGamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_AfterGamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_BeforeInProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_BeforeInProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_BeforeInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_BeforeInProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_BeforeInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_BeforeInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_BeforeInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_BeforeInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_Entrance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_Entrance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_Entrance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_Entrance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_Entrance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_Entrance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_Entrance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_Entrance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_Exit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_Exit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_GamePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_GamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_GamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_GamePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_GamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_GamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_GamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_GamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_Loading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_Loading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_Loading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_Loading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_Loading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_Loading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_Loading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_Loading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_OpenGamePlayScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_OpenGamePlayScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_OpenGamePlayScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_OpenGamePlayScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_OpenGamePlayScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_OpenGamePlayScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_OpenGamePlayScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_OpenGamePlayScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_Ready_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_Ready_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_Ready_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_Ready", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_Ready_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_Ready_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_Ready()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_Ready_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_EnterState_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_EnterState_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_EnterState_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "EnterState_Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_EnterState_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_EnterState_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_EnterState_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_EnterState_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_AfterGamePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_AfterGamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_AfterGamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_AfterGamePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_AfterGamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_AfterGamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_AfterGamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_AfterGamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_BeforeInProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_BeforeInProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_BeforeInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_BeforeInProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_BeforeInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_BeforeInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_BeforeInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_BeforeInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_Entrance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_Entrance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_Entrance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_Entrance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_Entrance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_Entrance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_Entrance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_Entrance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_Exit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_Exit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_GamePlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_GamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_GamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_GamePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_GamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_GamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_GamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_GamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_Loading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_Loading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_Loading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_Loading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_Loading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_Loading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_Loading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_Loading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_OpenGamePlayScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_OpenGamePlayScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_OpenGamePlayScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_OpenGamePlayScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_OpenGamePlayScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_OpenGamePlayScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_OpenGamePlayScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_OpenGamePlayScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_Ready_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_Ready_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_Ready_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_Ready", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_Ready_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_Ready_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_Ready()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_Ready_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ExitState_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ExitState_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ExitState_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ExitState_Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ExitState_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ExitState_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ExitState_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ExitState_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics
	{
		struct ELSSGameState_eventFindSSPlayerState_Parms
		{
			int32 inServerPlayerIndex;
			bool inCheckPawn;
			AELSSPlayerState* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inServerPlayerIndex;
		static void NewProp_inCheckPawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inCheckPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::NewProp_inServerPlayerIndex = { "inServerPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventFindSSPlayerState_Parms, inServerPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::NewProp_inCheckPawn_SetBit(void* Obj)
	{
		((ELSSGameState_eventFindSSPlayerState_Parms*)Obj)->inCheckPawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::NewProp_inCheckPawn = { "inCheckPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventFindSSPlayerState_Parms), &Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::NewProp_inCheckPawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventFindSSPlayerState_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::NewProp_inServerPlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::NewProp_inCheckPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "FindSSPlayerState", nullptr, nullptr, sizeof(ELSSGameState_eventFindSSPlayerState_Parms), Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_FindSSPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_FindSSPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics
	{
		struct ELSSGameState_eventFindSSPlayerStateForWatch_Random_Parms
		{
			bool inCheckPawn;
			AELSSPlayerState* ReturnValue;
		};
		static void NewProp_inCheckPawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inCheckPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::NewProp_inCheckPawn_SetBit(void* Obj)
	{
		((ELSSGameState_eventFindSSPlayerStateForWatch_Random_Parms*)Obj)->inCheckPawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::NewProp_inCheckPawn = { "inCheckPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventFindSSPlayerStateForWatch_Random_Parms), &Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::NewProp_inCheckPawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventFindSSPlayerStateForWatch_Random_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::NewProp_inCheckPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "FindSSPlayerStateForWatch_Random", nullptr, nullptr, sizeof(ELSSGameState_eventFindSSPlayerStateForWatch_Random_Parms), Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics
	{
		struct ELSSGameState_eventGetDatabase_Parms
		{
			AELSSDatabase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventGetDatabase_Parms, ReturnValue), Z_Construct_UClass_AELSSDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "GetDatabase", nullptr, nullptr, sizeof(ELSSGameState_eventGetDatabase_Parms), Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_GetDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_GetDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics
	{
		struct ELSSGameState_eventGetItemManager_Parms
		{
			AELSSItemManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventGetItemManager_Parms, ReturnValue), Z_Construct_UClass_AELSSItemManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "GetItemManager", nullptr, nullptr, sizeof(ELSSGameState_eventGetItemManager_Parms), Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_GetItemManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_GetItemManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics
	{
		struct ELSSGameState_eventGetLocatorManager_Parms
		{
			AELSSLocatorManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventGetLocatorManager_Parms, ReturnValue), Z_Construct_UClass_AELSSLocatorManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "GetLocatorManager", nullptr, nullptr, sizeof(ELSSGameState_eventGetLocatorManager_Parms), Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_GetLocatorManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_GetLocatorManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics
	{
		struct ELSSGameState_eventGetPoolManager_Parms
		{
			UELSSPoolManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventGetPoolManager_Parms, ReturnValue), Z_Construct_UClass_UELSSPoolManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "GetPoolManager", nullptr, nullptr, sizeof(ELSSGameState_eventGetPoolManager_Parms), Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_GetPoolManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_GetPoolManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics
	{
		struct ELSSGameState_eventGetRoundManager_Parms
		{
			AELSSRoundManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventGetRoundManager_Parms, ReturnValue), Z_Construct_UClass_AELSSRoundManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "GetRoundManager", nullptr, nullptr, sizeof(ELSSGameState_eventGetRoundManager_Parms), Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_GetRoundManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_GetRoundManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics
	{
		struct ELSSGameState_eventGetSoundManager_Parms
		{
			AELSSSoundManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventGetSoundManager_Parms, ReturnValue), Z_Construct_UClass_AELSSSoundManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "GetSoundManager", nullptr, nullptr, sizeof(ELSSGameState_eventGetSoundManager_Parms), Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_GetSoundManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_GetSoundManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics
	{
		struct ELSSGameState_eventGetVehicleManager_Parms
		{
			AELSSVehicleManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventGetVehicleManager_Parms, ReturnValue), Z_Construct_UClass_AELSSVehicleManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "GetVehicleManager", nullptr, nullptr, sizeof(ELSSGameState_eventGetVehicleManager_Parms), Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_GetVehicleManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_GetVehicleManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics
	{
		struct ELSSGameState_eventHasDebugFlag_Parms
		{
			ESSGameStateDebugFlag Type;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventHasDebugFlag_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSGameStateDebugFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventHasDebugFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventHasDebugFlag_Parms), &Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "HasDebugFlag", nullptr, nullptr, sizeof(ELSSGameState_eventHasDebugFlag_Parms), Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_HasDebugFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_HasDebugFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics
	{
		struct ELSSGameState_eventHasProgressFlagForAllPlayers_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventHasProgressFlagForAllPlayers_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSPlayerProgress, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventHasProgressFlagForAllPlayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventHasProgressFlagForAllPlayers_Parms), &Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "HasProgressFlagForAllPlayers", nullptr, nullptr, sizeof(ELSSGameState_eventHasProgressFlagForAllPlayers_Parms), Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventInitializeManagerActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventInitializeManagerActors_Parms), &Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "InitializeManagerActors", nullptr, nullptr, sizeof(ELSSGameState_eventInitializeManagerActors_Parms), Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_InitializeManagerActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_InitializeManagerActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics
	{
		struct ELSSGameState_eventIsCompletedPreload_Parms
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
	void Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsCompletedPreload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsCompletedPreload_Parms), &Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsCompletedPreload", nullptr, nullptr, sizeof(ELSSGameState_eventIsCompletedPreload_Parms), Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsCompletedPreload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsCompletedPreload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics
	{
		struct ELSSGameState_eventIsDeactiveGameSessionForClient_Parms
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
	void Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsDeactiveGameSessionForClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsDeactiveGameSessionForClient_Parms), &Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsDeactiveGameSessionForClient", nullptr, nullptr, sizeof(ELSSGameState_eventIsDeactiveGameSessionForClient_Parms), Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics
	{
		struct ELSSGameState_eventIsDoneActorSpawned_Parms
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
	void Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsDoneActorSpawned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsDoneActorSpawned_Parms), &Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsDoneActorSpawned", nullptr, nullptr, sizeof(ELSSGameState_eventIsDoneActorSpawned_Parms), Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics
	{
		struct ELSSGameState_eventIsDoneOpenGamePlayScreen_Parms
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
	void Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsDoneOpenGamePlayScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsDoneOpenGamePlayScreen_Parms), &Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsDoneOpenGamePlayScreen", nullptr, nullptr, sizeof(ELSSGameState_eventIsDoneOpenGamePlayScreen_Parms), Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsDoneReplicatesManagerActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsDoneReplicatesManagerActors_Parms), &Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsDoneReplicatesManagerActors", nullptr, nullptr, sizeof(ELSSGameState_eventIsDoneReplicatesManagerActors_Parms), Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics
	{
		struct ELSSGameState_eventIsDoneSyncPreloadAssetInfo_Parms
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
	void Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsDoneSyncPreloadAssetInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsDoneSyncPreloadAssetInfo_Parms), &Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsDoneSyncPreloadAssetInfo", nullptr, nullptr, sizeof(ELSSGameState_eventIsDoneSyncPreloadAssetInfo_Parms), Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics
	{
		struct ELSSGameState_eventIsDoneUIPrepare_Parms
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
	void Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsDoneUIPrepare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsDoneUIPrepare_Parms), &Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsDoneUIPrepare", nullptr, nullptr, sizeof(ELSSGameState_eventIsDoneUIPrepare_Parms), Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics
	{
		struct ELSSGameState_eventIsEnabledServerConnection_Parms
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
	void Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsEnabledServerConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsEnabledServerConnection_Parms), &Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsEnabledServerConnection", nullptr, nullptr, sizeof(ELSSGameState_eventIsEnabledServerConnection_Parms), Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics
	{
		struct ELSSGameState_eventIsInitialized_Parms
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
	void Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsInitialized_Parms), &Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsInitialized", nullptr, nullptr, sizeof(ELSSGameState_eventIsInitialized_Parms), Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics
	{
		struct ELSSGameState_eventIsMatchPlayerLobbyEnd_Parms
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
	void Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsMatchPlayerLobbyEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsMatchPlayerLobbyEnd_Parms), &Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsMatchPlayerLobbyEnd", nullptr, nullptr, sizeof(ELSSGameState_eventIsMatchPlayerLobbyEnd_Parms), Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsNetworkStatusOnline_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsNetworkStatusOnline_Parms), &Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsNetworkStatusOnline", nullptr, nullptr, sizeof(ELSSGameState_eventIsNetworkStatusOnline_Parms), Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsServerState_Statics
	{
		struct ELSSGameState_eventIsServerState_Parms
		{
			ESSServerState inState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::NewProp_inState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::NewProp_inState = { "inState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventIsServerState_Parms, inState), Z_Construct_UEnum_ABP_200508_ESSServerState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsServerState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsServerState_Parms), &Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::NewProp_inState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::NewProp_inState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsServerState", nullptr, nullptr, sizeof(ELSSGameState_eventIsServerState_Parms), Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsServerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsServerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_IsState_Statics
	{
		struct ELSSGameState_eventIsState_Parms
		{
			ESSGameFlowState inState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_IsState_Statics::NewProp_inState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_IsState_Statics::NewProp_inState = { "inState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventIsState_Parms, inState), Z_Construct_UEnum_ABP_200508_ESSGameFlowState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGameState_IsState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventIsState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_IsState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventIsState_Parms), &Z_Construct_UFunction_AELSSGameState_IsState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_IsState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsState_Statics::NewProp_inState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsState_Statics::NewProp_inState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_IsState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_IsState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_IsState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "IsState", nullptr, nullptr, sizeof(ELSSGameState_eventIsState_Parms), Z_Construct_UFunction_AELSSGameState_IsState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_IsState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_IsState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_IsState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_IsState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics
	{
		struct ELSSGameState_eventNeedsEnableAIForServer_Parms
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
	void Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventNeedsEnableAIForServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventNeedsEnableAIForServer_Parms), &Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "NeedsEnableAIForServer", nullptr, nullptr, sizeof(ELSSGameState_eventNeedsEnableAIForServer_Parms), Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics
	{
		struct ELSSGameState_eventNeedsReadyStateForServer_Parms
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
	void Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventNeedsReadyStateForServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventNeedsReadyStateForServer_Parms), &Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "NeedsReadyStateForServer", nullptr, nullptr, sizeof(ELSSGameState_eventNeedsReadyStateForServer_Parms), Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inServerPlayerStateIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::NewProp_inServerPlayerStateIndex = { "inServerPlayerStateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyAnnouceAttention_Multicast_Parms, inServerPlayerStateIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::NewProp_inAttentionPoint = { "inAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyAnnouceAttention_Multicast_Parms, inAttentionPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::NewProp_inServerPlayerStateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::NewProp_inAttentionPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "NotifyAnnouceAttention_Multicast", nullptr, nullptr, sizeof(ELSSGameState_eventNotifyAnnouceAttention_Multicast_Parms), Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killerPlayerState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killedPlayerState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killedPawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogIcon_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LogIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_killerPlayerState = { "killerPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyKilled_Multicast_Parms, killerPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_killedPlayerState = { "killedPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyKilled_Multicast_Parms, killedPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_killedPawn = { "killedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyKilled_Multicast_Parms, killedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_LogIcon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_LogIcon = { "LogIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyKilled_Multicast_Parms, LogIcon), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_killerPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_killedPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_killedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_LogIcon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::NewProp_LogIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "NotifyKilled_Multicast", nullptr, nullptr, sizeof(ELSSGameState_eventNotifyKilled_Multicast_Parms), Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killerPlayerState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killedPlayerState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killedPawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogIcon_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LogIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_killerPlayerState = { "killerPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyKo_Multicast_Parms, killerPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_killedPlayerState = { "killedPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyKo_Multicast_Parms, killedPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_killedPawn = { "killedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyKo_Multicast_Parms, killedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_LogIcon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_LogIcon = { "LogIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyKo_Multicast_Parms, LogIcon), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_killerPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_killedPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_killedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_LogIcon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::NewProp_LogIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "NotifyKo_Multicast", nullptr, nullptr, sizeof(ELSSGameState_eventNotifyKo_Multicast_Parms), Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inRoundEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inRoundEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::NewProp_inRoundEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::NewProp_inRoundEvent = { "inRoundEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventNotifyRoundEvent_Multicast_Parms, inRoundEvent), Z_Construct_UEnum_ABP_200508_ESSRoundEventLogType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::NewProp_inRoundEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::NewProp_inRoundEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "NotifyRoundEvent_Multicast", nullptr, nullptr, sizeof(ELSSGameState_eventNotifyRoundEvent_Multicast_Parms), Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnCompletedSpawnManagerActorsLocal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnCompletedSpawnManagerActorsLocal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnCompletedSpawnManagerActorsLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnCompletedSpawnManagerActorsLocal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnCompletedSpawnManagerActorsLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnCompletedSpawnManagerActorsLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnCompletedSpawnManagerActorsLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnCompletedSpawnManagerActorsLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnCompletePreload_StationalAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnCompletePreload_StationalAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnCompletePreload_StationalAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnCompletePreload_StationalAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnCompletePreload_StationalAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnCompletePreload_StationalAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnCompletePreload_StationalAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnCompletePreload_StationalAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnCompletePreload_VariableAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnCompletePreload_VariableAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnCompletePreload_VariableAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnCompletePreload_VariableAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnCompletePreload_VariableAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnCompletePreload_VariableAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnCompletePreload_VariableAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnCompletePreload_VariableAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_DebugFlags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_DebugFlags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_DebugFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_DebugFlags", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_DebugFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_DebugFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_DebugFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_DebugFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerAverageFPS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerAverageFPS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerAverageFPS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_DebugServerAverageFPS", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerAverageFPS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerAverageFPS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerAverageFPS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerAverageFPS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerCrashRequestedTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerCrashRequestedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerCrashRequestedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_DebugServerCrashRequestedTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerCrashRequestedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerCrashRequestedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerCrashRequestedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerCrashRequestedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_DebugServerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_ItemManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_ItemManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_ItemManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_ItemManager", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_ItemManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_ItemManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_ItemManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_ItemManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_RoundManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_RoundManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_RoundManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_RoundManager", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_RoundManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_RoundManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_RoundManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_RoundManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_SSModeLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_SSModeLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_SSModeLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_SSModeLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_SSModeLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_SSModeLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_SSModeLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_SSModeLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_StateSyncParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_StateSyncParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_StateSyncParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_StateSyncParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_StateSyncParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_StateSyncParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_StateSyncParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_StateSyncParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_SurvivorNum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_SurvivorNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_SurvivorNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_SurvivorNum", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_SurvivorNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_SurvivorNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_SurvivorNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_SurvivorNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_OnRep_VehicleManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_OnRep_VehicleManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_OnRep_VehicleManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "OnRep_VehicleManager", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_OnRep_VehicleManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_OnRep_VehicleManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_OnRep_VehicleManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_OnRep_VehicleManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_PlayMatchPointPay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_PlayMatchPointPay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_PlayMatchPointPay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "PlayMatchPointPay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_PlayMatchPointPay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_PlayMatchPointPay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_PlayMatchPointPay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_PlayMatchPointPay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_PrintLog_Statics
	{
		struct ELSSGameState_eventPrintLog_Parms
		{
			FString Log;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Log_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Log;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::NewProp_Log_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::NewProp_Log = { "Log", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventPrintLog_Parms, Log), METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::NewProp_Log_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::NewProp_Log_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::NewProp_Log,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "PrintLog", nullptr, nullptr, sizeof(ELSSGameState_eventPrintLog_Parms), Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_PrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_PrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ReleasePreloadAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ReleasePreloadAsset_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_RequestCloseConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_RequestCloseConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_RequestCloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "RequestCloseConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_RequestCloseConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_RequestCloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_RequestCloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_RequestCloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_RequestTearDownReplicationConnectionDriver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_RequestTearDownReplicationConnectionDriver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_RequestTearDownReplicationConnectionDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "RequestTearDownReplicationConnectionDriver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_RequestTearDownReplicationConnectionDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_RequestTearDownReplicationConnectionDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_RequestTearDownReplicationConnectionDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_RequestTearDownReplicationConnectionDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_SetDummyPlayerName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SetDummyPlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_SetDummyPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "SetDummyPlayerName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SetDummyPlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SetDummyPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_SetDummyPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_SetDummyPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_SetupServerPlayerStateIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SetupServerPlayerStateIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_SetupServerPlayerStateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "SetupServerPlayerStateIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SetupServerPlayerStateIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SetupServerPlayerStateIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_SetupServerPlayerStateIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_SetupServerPlayerStateIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnFinishedMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnFinishedMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnFinishedMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ShutdownNetDriverOnFinishedMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnFinishedMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnFinishedMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnFinishedMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnFinishedMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnSignout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnSignout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnSignout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "ShutdownNetDriverOnSignout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnSignout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnSignout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnSignout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnSignout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics
	{
		struct ELSSGameState_eventSpawnAIController_Parms
		{
			EWrestlerID_N inWrestlerId;
			FString inPlayerName;
			AELSSAIController* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inPlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inPlayerName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAIController_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_inPlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_inPlayerName = { "inPlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAIController_Parms, inPlayerName), METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_inPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_inPlayerName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAIController_Parms, ReturnValue), Z_Construct_UClass_AELSSAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_inPlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "SpawnAIController", nullptr, nullptr, sizeof(ELSSGameState_eventSpawnAIController_Parms), Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_SpawnAIController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_SpawnAIController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics
	{
		struct ELSSGameState_eventSpawnAIControllerRemainAll_Parms
		{
			int32 inWrestlerMax;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inWrestlerMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::NewProp_inWrestlerMax = { "inWrestlerMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAIControllerRemainAll_Parms, inWrestlerMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::NewProp_inWrestlerMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "SpawnAIControllerRemainAll", nullptr, nullptr, sizeof(ELSSGameState_eventSpawnAIControllerRemainAll_Parms), Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRotator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayer_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayer_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_inRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_inRotator = { "inRotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayer_Parms, inRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_inRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_inRotator_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayer_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_inRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "SpawnAISSPlayer", nullptr, nullptr, sizeof(ELSSGameState_eventSpawnAISSPlayer_Parms), Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSetupParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRotator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inSetupParam = { "inSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayerByWrestlerSetupParam_Parms, inSetupParam), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inSetupParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayerByWrestlerSetupParam_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inRotator = { "inRotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayerByWrestlerSetupParam_Parms, inRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inRotator_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayerByWrestlerSetupParam_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_inRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "SpawnAISSPlayerByWrestlerSetupParam", nullptr, nullptr, sizeof(ELSSGameState_eventSpawnAISSPlayerByWrestlerSetupParam_Parms), Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_wrestlerIDs_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_wrestlerIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wrestlerIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_wrestlerIDs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_wrestlerIDs_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_wrestlerIDs_Inner = { "wrestlerIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_wrestlerIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_wrestlerIDs = { "wrestlerIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayers_Parms, wrestlerIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_wrestlerIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_wrestlerIDs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnAISSPlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_wrestlerIDs_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_wrestlerIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_wrestlerIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "SpawnAISSPlayers", nullptr, nullptr, sizeof(ELSSGameState_eventSpawnAISSPlayers_Parms), Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics
	{
		struct ELSSGameState_eventSpawnManagerActor_Parms
		{
			TSubclassOf<AActor>  InClass;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnManagerActor_Parms, InClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnManagerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::NewProp_InClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "SpawnManagerActor", nullptr, nullptr, sizeof(ELSSGameState_eventSpawnManagerActor_Parms), Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_SpawnManagerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_SpawnManagerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics
	{
		struct ELSSGameState_eventSpawnSSPlayerByPlayerState_Parms
		{
			FTransform InTransform;
			AELSSPlayerState* inPlayerState;
			AELSSPlayer* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inPlayerState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnSSPlayerByPlayerState_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::NewProp_inPlayerState = { "inPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnSSPlayerByPlayerState_Parms, inPlayerState), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventSpawnSSPlayerByPlayerState_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::NewProp_inPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "SpawnSSPlayerByPlayerState", nullptr, nullptr, sizeof(ELSSGameState_eventSpawnSSPlayerByPlayerState_Parms), Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSGameState_eventStartOfMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameState_eventStartOfMatch_Parms), &Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "StartOfMatch", nullptr, nullptr, sizeof(ELSSGameState_eventStartOfMatch_Parms), Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_StartOfMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_StartOfMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_AfterGamePlay_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_AfterGamePlay", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_AfterGamePlay_Parms), Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_BeforeInProgress_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_BeforeInProgress", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_BeforeInProgress_Parms), Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_Entrance_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_Entrance", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_Entrance_Parms), Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_Entrance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_Entrance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_Exit_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_Exit", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_Exit_Parms), Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_GamePlay_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_GamePlay", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_GamePlay_Parms), Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_GamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_GamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_Initialize_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_Initialize", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_Initialize_Parms), Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_Loading_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_Loading", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_Loading_Parms), Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_Loading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_Loading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_OpenGamePlayScreen_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_OpenGamePlayScreen", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_OpenGamePlayScreen_Parms), Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_Ready_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_Ready", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_Ready_Parms), Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_Ready()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_Ready_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameState_eventTickState_Setup_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "TickState_Setup", nullptr, nullptr, sizeof(ELSSGameState_eventTickState_Setup_Parms), Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_TickState_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_TickState_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGameState_UpdateSurvivorNum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGameState_UpdateSurvivorNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGameState_UpdateSurvivorNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGameState, nullptr, "UpdateSurvivorNum", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGameState_UpdateSurvivorNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGameState_UpdateSurvivorNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGameState_UpdateSurvivorNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGameState_UpdateSurvivorNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSGameState_NoRegister()
	{
		return AELSSGameState::StaticClass();
	}
	struct Z_Construct_UClass_AELSSGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnPreEndPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnPreEndPlay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrevState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrevState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateSyncParamRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateSyncParamRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldShutdownGame_MetaData[];
#endif
		static void NewProp_bShouldShutdownGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldShutdownGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoneShutdownNetDriver_MetaData[];
#endif
		static void NewProp_bDoneShutdownNetDriver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneShutdownNetDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSPlayerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SSPlayerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationCheckOffsetZ_Top_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocationCheckOffsetZ_Top;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationCheckOffsetZ_Bottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocationCheckOffsetZ_Bottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempAIPlayerEquipSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TempAIPlayerEquipSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempWrestlerParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TempWrestlerParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TempAIPlayerNameIdList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempAIPlayerNameIdList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TempAIPlayerNameIdList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AINpcIdCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AINpcIdCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreloadAssetInfoRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreloadAssetInfoRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorManagerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocatorManagerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocatorManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundManagerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SoundManagerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundManagerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoundManagerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoundManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemManagerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemManagerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleManagerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_VehicleManagerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManagerActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManagerActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManagerActorArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidPlayerList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidPlayerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidPlayerList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SSPlayerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSPlayerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SSPlayerArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataManagerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SaveDataManagerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSurvivorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastSurvivorIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidObjectGimmicks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidObjectGimmicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidObjectGimmicks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidObjectOils_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidObjectOils_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidObjectOils;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidObjectPushpins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidObjectPushpins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidObjectPushpins;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidObjectFireBottles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidObjectFireBottles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidObjectFireBottles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidObjectTraps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidObjectTraps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidObjectTraps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidObjectTrapLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValidObjectTrapLimit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidInteractableObject_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidInteractableObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidInteractableObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidHorseSpawnPoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidHorseSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidHorseSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FadeManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DatabaseType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Database_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Database;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoolManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolableRegistTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoolableRegistTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizeManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptimizeManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPlayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttentionPlayerInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SSModeLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackUpCVarPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BackUpCVarPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredCVarPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DesiredCVarPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwicthDesiredCVarPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SwicthDesiredCVarPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackUpCVarMaxTempMemoryAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BackUpCVarMaxTempMemoryAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredCVarMaxTempMemoryAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DesiredCVarMaxTempMemoryAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_ExecPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Activity_ExecPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Activity_MatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_ReplicatedMatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Activity_ReplicatedMatchId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Activity_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugServerState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugServerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebugServerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugServerLobbyState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugServerLobbyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebugServerLobbyState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugLocalLobbyState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLocalLobbyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebugLocalLobbyState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugLocalLobbyStateBP_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLocalLobbyStateBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebugLocalLobbyStateBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugServerAverageFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugServerAverageFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugServerMaxDeltaSec_Recently5sec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugServerMaxDeltaSec_Recently5sec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugServerCrashRequestedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugServerCrashRequestedTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugOverrideAIWrestlerSetupParam_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugOverrideAIWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugOverrideAIWrestlerSetupParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreloadAssetInfoForDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreloadAssetInfoForDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSGameState_ApplyConnectionTimeoutDuration, "ApplyConnectionTimeoutDuration" }, // 3837784188
		{ &Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset, "BeginAsyncPreloadStationalAsset" }, // 2675201258
		{ &Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadStationalAsset_BP, "BeginAsyncPreloadStationalAsset_BP" }, // 1525958289
		{ &Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset, "BeginAsyncPreloadVariableAsset" }, // 2145581101
		{ &Z_Construct_UFunction_AELSSGameState_BeginAsyncPreloadVariableAsset_BP, "BeginAsyncPreloadVariableAsset_BP" }, // 2981540617
		{ &Z_Construct_UFunction_AELSSGameState_CanStartOfMatch, "CanStartOfMatch" }, // 3690632161
		{ &Z_Construct_UFunction_AELSSGameState_ChangeState, "ChangeState" }, // 1268476344
		{ &Z_Construct_UFunction_AELSSGameState_ChangeState_Multicast, "ChangeState_Multicast" }, // 3952873156
		{ &Z_Construct_UFunction_AELSSGameState_CheckDoneShutdownNetDriver, "CheckDoneShutdownNetDriver" }, // 194143972
		{ &Z_Construct_UFunction_AELSSGameState_CheckMultiPlayFeature, "CheckMultiPlayFeature" }, // 3812180996
		{ &Z_Construct_UFunction_AELSSGameState_ClearShouldShutdownGameFlag, "ClearShouldShutdownGameFlag" }, // 463578348
		{ &Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfo, "CreatePreloadAssetInfo" }, // 3158401410
		{ &Z_Construct_UFunction_AELSSGameState_CreatePreloadAssetInfoForDebug, "CreatePreloadAssetInfoForDebug" }, // 617379073
		{ &Z_Construct_UFunction_AELSSGameState_CreateWrestlerSetupParam, "CreateWrestlerSetupParam" }, // 1765435223
		{ &Z_Construct_UFunction_AELSSGameState_DeadMySelf, "DeadMySelf" }, // 3256048304
		{ &Z_Construct_UFunction_AELSSGameState_DebugAddInstantMessage_Multicast, "DebugAddInstantMessage_Multicast" }, // 3095078506
		{ &Z_Construct_UFunction_AELSSGameState_DebugPrintStateInfo, "DebugPrintStateInfo" }, // 2461108421
		{ &Z_Construct_UFunction_AELSSGameState_DebugSetLocalLobbyStateBP, "DebugSetLocalLobbyStateBP" }, // 4039423845
		{ &Z_Construct_UFunction_AELSSGameState_DebugSetNoTimeouts, "DebugSetNoTimeouts" }, // 2586602410
		{ &Z_Construct_UFunction_AELSSGameState_DebugTickBP, "DebugTickBP" }, // 3156943455
		{ &Z_Construct_UFunction_AELSSGameState_EndOfMatch, "EndOfMatch" }, // 1579405852
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_AfterGamePlay, "EnterState_AfterGamePlay" }, // 2614990328
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_BeforeInProgress, "EnterState_BeforeInProgress" }, // 3859617857
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_Entrance, "EnterState_Entrance" }, // 4246860578
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_Exit, "EnterState_Exit" }, // 3312650330
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_GamePlay, "EnterState_GamePlay" }, // 1944777242
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_Initialize, "EnterState_Initialize" }, // 2689335933
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_Loading, "EnterState_Loading" }, // 1209975380
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_OpenGamePlayScreen, "EnterState_OpenGamePlayScreen" }, // 2211923686
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_Ready, "EnterState_Ready" }, // 16132821
		{ &Z_Construct_UFunction_AELSSGameState_EnterState_Setup, "EnterState_Setup" }, // 2054335281
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_AfterGamePlay, "ExitState_AfterGamePlay" }, // 2095118193
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_BeforeInProgress, "ExitState_BeforeInProgress" }, // 3446388004
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_Entrance, "ExitState_Entrance" }, // 2331987211
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_Exit, "ExitState_Exit" }, // 3661010473
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_GamePlay, "ExitState_GamePlay" }, // 2404949265
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_Initialize, "ExitState_Initialize" }, // 2141634306
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_Loading, "ExitState_Loading" }, // 264005622
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_OpenGamePlayScreen, "ExitState_OpenGamePlayScreen" }, // 1689513922
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_Ready, "ExitState_Ready" }, // 3112058232
		{ &Z_Construct_UFunction_AELSSGameState_ExitState_Setup, "ExitState_Setup" }, // 4246947723
		{ &Z_Construct_UFunction_AELSSGameState_FindSSPlayerState, "FindSSPlayerState" }, // 125358501
		{ &Z_Construct_UFunction_AELSSGameState_FindSSPlayerStateForWatch_Random, "FindSSPlayerStateForWatch_Random" }, // 3306032028
		{ &Z_Construct_UFunction_AELSSGameState_GetDatabase, "GetDatabase" }, // 1163789025
		{ &Z_Construct_UFunction_AELSSGameState_GetItemManager, "GetItemManager" }, // 2453988106
		{ &Z_Construct_UFunction_AELSSGameState_GetLocatorManager, "GetLocatorManager" }, // 3331519874
		{ &Z_Construct_UFunction_AELSSGameState_GetPoolManager, "GetPoolManager" }, // 4154928127
		{ &Z_Construct_UFunction_AELSSGameState_GetRoundManager, "GetRoundManager" }, // 3001866178
		{ &Z_Construct_UFunction_AELSSGameState_GetSoundManager, "GetSoundManager" }, // 2879543083
		{ &Z_Construct_UFunction_AELSSGameState_GetVehicleManager, "GetVehicleManager" }, // 3935252549
		{ &Z_Construct_UFunction_AELSSGameState_HasDebugFlag, "HasDebugFlag" }, // 3390331407
		{ &Z_Construct_UFunction_AELSSGameState_HasProgressFlagForAllPlayers, "HasProgressFlagForAllPlayers" }, // 4045903577
		{ &Z_Construct_UFunction_AELSSGameState_InitializeManagerActors, "InitializeManagerActors" }, // 3766362778
		{ &Z_Construct_UFunction_AELSSGameState_IsCompletedPreload, "IsCompletedPreload" }, // 3272546501
		{ &Z_Construct_UFunction_AELSSGameState_IsDeactiveGameSessionForClient, "IsDeactiveGameSessionForClient" }, // 4186336274
		{ &Z_Construct_UFunction_AELSSGameState_IsDoneActorSpawned, "IsDoneActorSpawned" }, // 1151678174
		{ &Z_Construct_UFunction_AELSSGameState_IsDoneOpenGamePlayScreen, "IsDoneOpenGamePlayScreen" }, // 2687791423
		{ &Z_Construct_UFunction_AELSSGameState_IsDoneReplicatesManagerActors, "IsDoneReplicatesManagerActors" }, // 4280367374
		{ &Z_Construct_UFunction_AELSSGameState_IsDoneSyncPreloadAssetInfo, "IsDoneSyncPreloadAssetInfo" }, // 2042178439
		{ &Z_Construct_UFunction_AELSSGameState_IsDoneUIPrepare, "IsDoneUIPrepare" }, // 579623209
		{ &Z_Construct_UFunction_AELSSGameState_IsEnabledServerConnection, "IsEnabledServerConnection" }, // 3516845753
		{ &Z_Construct_UFunction_AELSSGameState_IsInitialized, "IsInitialized" }, // 2742408091
		{ &Z_Construct_UFunction_AELSSGameState_IsMatchPlayerLobbyEnd, "IsMatchPlayerLobbyEnd" }, // 430983183
		{ &Z_Construct_UFunction_AELSSGameState_IsNetworkStatusOnline, "IsNetworkStatusOnline" }, // 4172443239
		{ &Z_Construct_UFunction_AELSSGameState_IsServerState, "IsServerState" }, // 1003029112
		{ &Z_Construct_UFunction_AELSSGameState_IsState, "IsState" }, // 694227691
		{ &Z_Construct_UFunction_AELSSGameState_NeedsEnableAIForServer, "NeedsEnableAIForServer" }, // 885978151
		{ &Z_Construct_UFunction_AELSSGameState_NeedsReadyStateForServer, "NeedsReadyStateForServer" }, // 49281186
		{ &Z_Construct_UFunction_AELSSGameState_NotifyAnnouceAttention_Multicast, "NotifyAnnouceAttention_Multicast" }, // 676254258
		{ &Z_Construct_UFunction_AELSSGameState_NotifyKilled_Multicast, "NotifyKilled_Multicast" }, // 3708902454
		{ &Z_Construct_UFunction_AELSSGameState_NotifyKo_Multicast, "NotifyKo_Multicast" }, // 3430650794
		{ &Z_Construct_UFunction_AELSSGameState_NotifyRoundEvent_Multicast, "NotifyRoundEvent_Multicast" }, // 1108496636
		{ &Z_Construct_UFunction_AELSSGameState_OnCompletedSpawnManagerActorsLocal, "OnCompletedSpawnManagerActorsLocal" }, // 643256772
		{ &Z_Construct_UFunction_AELSSGameState_OnCompletePreload_StationalAsset, "OnCompletePreload_StationalAsset" }, // 3708320599
		{ &Z_Construct_UFunction_AELSSGameState_OnCompletePreload_VariableAsset, "OnCompletePreload_VariableAsset" }, // 3903471902
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_DebugFlags, "OnRep_DebugFlags" }, // 4221355839
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerAverageFPS, "OnRep_DebugServerAverageFPS" }, // 3144312892
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerCrashRequestedTime, "OnRep_DebugServerCrashRequestedTime" }, // 3836103938
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_DebugServerState, "OnRep_DebugServerState" }, // 694988031
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_ItemManager, "OnRep_ItemManager" }, // 3583944991
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_RoundManager, "OnRep_RoundManager" }, // 615997740
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_SSModeLobby, "OnRep_SSModeLobby" }, // 2630375526
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_StateSyncParam, "OnRep_StateSyncParam" }, // 1472634671
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_SurvivorNum, "OnRep_SurvivorNum" }, // 1438914791
		{ &Z_Construct_UFunction_AELSSGameState_OnRep_VehicleManager, "OnRep_VehicleManager" }, // 7141982
		{ &Z_Construct_UFunction_AELSSGameState_PlayMatchPointPay, "PlayMatchPointPay" }, // 4228085714
		{ &Z_Construct_UFunction_AELSSGameState_PrintLog, "PrintLog" }, // 3910967767
		{ &Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset, "ReleasePreloadAsset" }, // 1510080167
		{ &Z_Construct_UFunction_AELSSGameState_ReleasePreloadAsset_BP, "ReleasePreloadAsset_BP" }, // 1743985345
		{ &Z_Construct_UFunction_AELSSGameState_RequestCloseConnection, "RequestCloseConnection" }, // 611486924
		{ &Z_Construct_UFunction_AELSSGameState_RequestTearDownReplicationConnectionDriver, "RequestTearDownReplicationConnectionDriver" }, // 2847028347
		{ &Z_Construct_UFunction_AELSSGameState_SetDummyPlayerName, "SetDummyPlayerName" }, // 3643098369
		{ &Z_Construct_UFunction_AELSSGameState_SetupServerPlayerStateIndex, "SetupServerPlayerStateIndex" }, // 3587009827
		{ &Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnFinishedMatch, "ShutdownNetDriverOnFinishedMatch" }, // 2649784391
		{ &Z_Construct_UFunction_AELSSGameState_ShutdownNetDriverOnSignout, "ShutdownNetDriverOnSignout" }, // 4138301564
		{ &Z_Construct_UFunction_AELSSGameState_SpawnAIController, "SpawnAIController" }, // 2613671575
		{ &Z_Construct_UFunction_AELSSGameState_SpawnAIControllerRemainAll, "SpawnAIControllerRemainAll" }, // 2216638878
		{ &Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayer, "SpawnAISSPlayer" }, // 2512839337
		{ &Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayerByWrestlerSetupParam, "SpawnAISSPlayerByWrestlerSetupParam" }, // 2235882096
		{ &Z_Construct_UFunction_AELSSGameState_SpawnAISSPlayers, "SpawnAISSPlayers" }, // 3882836654
		{ &Z_Construct_UFunction_AELSSGameState_SpawnManagerActor, "SpawnManagerActor" }, // 2919942810
		{ &Z_Construct_UFunction_AELSSGameState_SpawnSSPlayerByPlayerState, "SpawnSSPlayerByPlayerState" }, // 3199923
		{ &Z_Construct_UFunction_AELSSGameState_StartOfMatch, "StartOfMatch" }, // 2724050141
		{ &Z_Construct_UFunction_AELSSGameState_TickState_AfterGamePlay, "TickState_AfterGamePlay" }, // 3511339473
		{ &Z_Construct_UFunction_AELSSGameState_TickState_BeforeInProgress, "TickState_BeforeInProgress" }, // 131435927
		{ &Z_Construct_UFunction_AELSSGameState_TickState_Entrance, "TickState_Entrance" }, // 4228311802
		{ &Z_Construct_UFunction_AELSSGameState_TickState_Exit, "TickState_Exit" }, // 4164442892
		{ &Z_Construct_UFunction_AELSSGameState_TickState_GamePlay, "TickState_GamePlay" }, // 2435520064
		{ &Z_Construct_UFunction_AELSSGameState_TickState_Initialize, "TickState_Initialize" }, // 1834596546
		{ &Z_Construct_UFunction_AELSSGameState_TickState_Loading, "TickState_Loading" }, // 3459150690
		{ &Z_Construct_UFunction_AELSSGameState_TickState_OpenGamePlayScreen, "TickState_OpenGamePlayScreen" }, // 1100367009
		{ &Z_Construct_UFunction_AELSSGameState_TickState_Ready, "TickState_Ready" }, // 903369476
		{ &Z_Construct_UFunction_AELSSGameState_TickState_Setup, "TickState_Setup" }, // 1360056171
		{ &Z_Construct_UFunction_AELSSGameState_UpdateSurvivorNum, "UpdateSurvivorNum" }, // 580122224
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_EventOnPreEndPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_EventOnPreEndPlay = { "EventOnPreEndPlay", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, EventOnPreEndPlay), Z_Construct_UDelegateFunction_ABP_200508_SSGameStateEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_EventOnPreEndPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_EventOnPreEndPlay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_PrevState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_PrevState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_PrevState = { "PrevState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, PrevState), Z_Construct_UEnum_ABP_200508_ESSGameFlowState, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PrevState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PrevState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_StateSyncParamRep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_StateSyncParamRep = { "StateSyncParamRep", "OnRep_StateSyncParam", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, StateSyncParamRep), Z_Construct_UScriptStruct_FSSGameFlowStateSyncParam, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_StateSyncParamRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_StateSyncParamRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_bShouldShutdownGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	void Z_Construct_UClass_AELSSGameState_Statics::NewProp_bShouldShutdownGame_SetBit(void* Obj)
	{
		((AELSSGameState*)Obj)->bShouldShutdownGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_bShouldShutdownGame = { "bShouldShutdownGame", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSGameState), &Z_Construct_UClass_AELSSGameState_Statics::NewProp_bShouldShutdownGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_bShouldShutdownGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_bShouldShutdownGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_bDoneShutdownNetDriver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	void Z_Construct_UClass_AELSSGameState_Statics::NewProp_bDoneShutdownNetDriver_SetBit(void* Obj)
	{
		((AELSSGameState*)Obj)->bDoneShutdownNetDriver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_bDoneShutdownNetDriver = { "bDoneShutdownNetDriver", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSGameState), &Z_Construct_UClass_AELSSGameState_Statics::NewProp_bDoneShutdownNetDriver_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_bDoneShutdownNetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_bDoneShutdownNetDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerClass = { "SSPlayerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, SSPlayerClass), Z_Construct_UClass_AELSSPlayer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_AIControllerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_AIControllerClass = { "AIControllerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, AIControllerClass), Z_Construct_UClass_AELSSAIController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_AIControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_AIControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Top_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Top = { "LocationCheckOffsetZ_Top", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, LocationCheckOffsetZ_Top), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Top_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Bottom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Bottom = { "LocationCheckOffsetZ_Bottom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, LocationCheckOffsetZ_Bottom), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Bottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerEquipSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerEquipSettings = { "TempAIPlayerEquipSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, TempAIPlayerEquipSettings), Z_Construct_UScriptStruct_FSSPlayerEquipSettings, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerEquipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerEquipSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempWrestlerParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempWrestlerParam = { "TempWrestlerParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, TempWrestlerParam), Z_Construct_UScriptStruct_FSSWrestlerParam, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempWrestlerParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempWrestlerParam_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerNameIdList_Inner = { "TempAIPlayerNameIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerNameIdList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerNameIdList = { "TempAIPlayerNameIdList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, TempAIPlayerNameIdList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerNameIdList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerNameIdList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_AINpcIdCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_AINpcIdCount = { "AINpcIdCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, AINpcIdCount), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_AINpcIdCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_AINpcIdCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoRep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoRep = { "PreloadAssetInfoRep", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, PreloadAssetInfoRep), Z_Construct_UScriptStruct_FSSPreloadAssetInfo, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManagerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManagerType = { "LocatorManagerType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, LocatorManagerType), Z_Construct_UClass_AELSSLocatorManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManagerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManagerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManager = { "LocatorManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, LocatorManager), Z_Construct_UClass_AELSSLocatorManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManagerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManagerType = { "SoundManagerType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, SoundManagerType), Z_Construct_UClass_AELSSSoundManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManagerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManagerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManager = { "SoundManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, SoundManager), Z_Construct_UClass_AELSSSoundManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManagerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManagerType = { "RoundManagerType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, RoundManagerType), Z_Construct_UClass_AELSSRoundManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManagerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManagerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManager = { "RoundManager", "OnRep_RoundManager", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, RoundManager), Z_Construct_UClass_AELSSRoundManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManagerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManagerType = { "ItemManagerType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ItemManagerType), Z_Construct_UClass_AELSSItemManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManagerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManagerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManager = { "ItemManager", "OnRep_ItemManager", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ItemManager), Z_Construct_UClass_AELSSItemManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManagerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManagerType = { "VehicleManagerType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, VehicleManagerType), Z_Construct_UClass_AELSSVehicleManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManagerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManagerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManager = { "VehicleManager", "OnRep_VehicleManager", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, VehicleManager), Z_Construct_UClass_AELSSVehicleManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ManagerActorArray_Inner = { "ManagerActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ManagerActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ManagerActorArray = { "ManagerActorArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ManagerActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ManagerActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ManagerActorArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidPlayerList_Inner = { "ValidPlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidPlayerList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidPlayerList = { "ValidPlayerList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ValidPlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidPlayerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidPlayerList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerArray_Inner = { "SSPlayerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerArray = { "SSPlayerArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, SSPlayerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManager = { "SaveDataManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, SaveDataManager), Z_Construct_UClass_AELSSSaveDataManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManagerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManagerType = { "SaveDataManagerType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, SaveDataManagerType), Z_Construct_UClass_AELSSSaveDataManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManagerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManagerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_SurvivorNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SurvivorNum = { "SurvivorNum", "OnRep_SurvivorNum", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, SurvivorNum), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SurvivorNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SurvivorNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_LastSurvivorIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_LastSurvivorIndex = { "LastSurvivorIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, LastSurvivorIndex), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LastSurvivorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_LastSurvivorIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectGimmicks_Inner = { "ValidObjectGimmicks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectGimmicks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectGimmicks = { "ValidObjectGimmicks", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ValidObjectGimmicks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectGimmicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectGimmicks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectOils_Inner = { "ValidObjectOils", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSWeaponThrowProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectOils_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectOils = { "ValidObjectOils", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ValidObjectOils), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectOils_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectOils_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectPushpins_Inner = { "ValidObjectPushpins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSWeaponThrowProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectPushpins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectPushpins = { "ValidObjectPushpins", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ValidObjectPushpins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectPushpins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectPushpins_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectFireBottles_Inner = { "ValidObjectFireBottles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSWeaponThrowProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectFireBottles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectFireBottles = { "ValidObjectFireBottles", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ValidObjectFireBottles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectFireBottles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectFireBottles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTraps_Inner = { "ValidObjectTraps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSWeaponTrapObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTraps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTraps = { "ValidObjectTraps", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ValidObjectTraps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTraps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTraps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTrapLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTrapLimit = { "ValidObjectTrapLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ValidObjectTrapLimit), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTrapLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTrapLimit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidInteractableObject_Inner = { "ValidInteractableObject", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidInteractableObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidInteractableObject = { "ValidInteractableObject", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ValidInteractableObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidInteractableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidInteractableObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidHorseSpawnPoint_Inner = { "ValidHorseSpawnPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidHorseSpawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidHorseSpawnPoint = { "ValidHorseSpawnPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, ValidHorseSpawnPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidHorseSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidHorseSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_FadeManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_FadeManager = { "FadeManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, FadeManager), Z_Construct_UClass_AELSSFadeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_FadeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_FadeManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_GameRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_GameRule = { "GameRule", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, GameRule), Z_Construct_UScriptStruct_FSSGameRuleParam, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_GameRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_GameRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DatabaseType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DatabaseType = { "DatabaseType", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DatabaseType), Z_Construct_UClass_AELSSDatabase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DatabaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DatabaseType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_Database_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_Database = { "Database", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, Database), Z_Construct_UClass_AELSSDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Database_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Database_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolManager = { "PoolManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, PoolManager), Z_Construct_UClass_UELSSPoolManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolableRegistTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolableRegistTable = { "PoolableRegistTable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, PoolableRegistTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolableRegistTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolableRegistTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_OptimizeManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_OptimizeManager = { "OptimizeManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, OptimizeManager), Z_Construct_UClass_UELSSOptimizeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_OptimizeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_OptimizeManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_AttentionPlayerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_AttentionPlayerInfo = { "AttentionPlayerInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, AttentionPlayerInfo), Z_Construct_UScriptStruct_FSSAttentionPlayerInfo, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_AttentionPlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_AttentionPlayerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSModeLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSModeLobby = { "SSModeLobby", "OnRep_SSModeLobby", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, SSModeLobby), Z_Construct_UClass_UELSSGameLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSModeLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSModeLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarPoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarPoolSize = { "BackUpCVarPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, BackUpCVarPoolSize), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarPoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarPoolSize = { "DesiredCVarPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DesiredCVarPoolSize), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_SwicthDesiredCVarPoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_SwicthDesiredCVarPoolSize = { "SwicthDesiredCVarPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, SwicthDesiredCVarPoolSize), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SwicthDesiredCVarPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_SwicthDesiredCVarPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarMaxTempMemoryAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarMaxTempMemoryAllowed = { "BackUpCVarMaxTempMemoryAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, BackUpCVarMaxTempMemoryAllowed), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarMaxTempMemoryAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarMaxTempMemoryAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarMaxTempMemoryAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarMaxTempMemoryAllowed = { "DesiredCVarMaxTempMemoryAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DesiredCVarMaxTempMemoryAllowed), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarMaxTempMemoryAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarMaxTempMemoryAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ExecPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ExecPlayerState = { "Activity_ExecPlayerState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, Activity_ExecPlayerState), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ExecPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ExecPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_MatchId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_MatchId = { "Activity_MatchId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, Activity_MatchId), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_MatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ReplicatedMatchId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ReplicatedMatchId = { "Activity_ReplicatedMatchId", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, Activity_ReplicatedMatchId), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ReplicatedMatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ReplicatedMatchId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_Result = { "Activity_Result", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, Activity_Result), Z_Construct_UScriptStruct_FSSActivityMatchResult, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugFlags = { "DebugFlags", "OnRep_DebugFlags", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DebugFlags), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugFlags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerState = { "DebugServerState", "OnRep_DebugServerState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DebugServerState), Z_Construct_UEnum_ABP_200508_ESSServerState, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerLobbyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerLobbyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerLobbyState = { "DebugServerLobbyState", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DebugServerLobbyState), Z_Construct_UEnum_ABP_200508_eSSLobbyState, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerLobbyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerLobbyState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyState = { "DebugLocalLobbyState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DebugLocalLobbyState), Z_Construct_UEnum_ABP_200508_eSSLobbyState, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyStateBP_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyStateBP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyStateBP = { "DebugLocalLobbyStateBP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DebugLocalLobbyStateBP), Z_Construct_UEnum_ABP_200508_eSSLobbyState, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyStateBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyStateBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerAverageFPS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerAverageFPS = { "DebugServerAverageFPS", "OnRep_DebugServerAverageFPS", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DebugServerAverageFPS), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerAverageFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerAverageFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerMaxDeltaSec_Recently5sec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerMaxDeltaSec_Recently5sec = { "DebugServerMaxDeltaSec_Recently5sec", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DebugServerMaxDeltaSec_Recently5sec), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerMaxDeltaSec_Recently5sec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerMaxDeltaSec_Recently5sec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerCrashRequestedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerCrashRequestedTime = { "DebugServerCrashRequestedTime", "OnRep_DebugServerCrashRequestedTime", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DebugServerCrashRequestedTime), METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerCrashRequestedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerCrashRequestedTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugOverrideAIWrestlerSetupParam_Inner = { "DebugOverrideAIWrestlerSetupParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugOverrideAIWrestlerSetupParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugOverrideAIWrestlerSetupParam = { "DebugOverrideAIWrestlerSetupParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, DebugOverrideAIWrestlerSetupParam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugOverrideAIWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugOverrideAIWrestlerSetupParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoForDebug_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameState" },
		{ "ModuleRelativePath", "Public/ELSSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoForDebug = { "PreloadAssetInfoForDebug", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGameState, PreloadAssetInfoForDebug), Z_Construct_UScriptStruct_FSSPreloadAssetInfo, METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoForDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoForDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_EventOnPreEndPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_PrevState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_PrevState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_StateSyncParamRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_bShouldShutdownGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_bDoneShutdownNetDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_AIControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocationCheckOffsetZ_Bottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerEquipSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempWrestlerParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerNameIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_TempAIPlayerNameIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_AINpcIdCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManagerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_LocatorManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManagerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SoundManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManagerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_RoundManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManagerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ItemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManagerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_VehicleManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ManagerActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ManagerActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidPlayerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidPlayerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSPlayerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SaveDataManagerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SurvivorNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_LastSurvivorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectGimmicks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectGimmicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectOils_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectOils,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectPushpins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectPushpins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectFireBottles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectFireBottles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTraps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTraps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidObjectTrapLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidInteractableObject_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidInteractableObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidHorseSpawnPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_ValidHorseSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_FadeManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_GameRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DatabaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_Database,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_PoolableRegistTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_OptimizeManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_AttentionPlayerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SSModeLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_SwicthDesiredCVarPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_BackUpCVarMaxTempMemoryAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DesiredCVarMaxTempMemoryAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ExecPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_MatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_ReplicatedMatchId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_Activity_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerLobbyState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerLobbyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyStateBP_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugLocalLobbyStateBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerAverageFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerMaxDeltaSec_Recently5sec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugServerCrashRequestedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugOverrideAIWrestlerSetupParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_DebugOverrideAIWrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGameState_Statics::NewProp_PreloadAssetInfoForDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSGameState_Statics::ClassParams = {
		&AELSSGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSGameState, 4108034230);
	template<> ABP_200508_API UClass* StaticClass<AELSSGameState>()
	{
		return AELSSGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSGameState(Z_Construct_UClass_AELSSGameState, &AELSSGameState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSGameState"), false, nullptr, nullptr, nullptr);

	void AELSSGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StateSyncParamRep(TEXT("StateSyncParamRep"));
		static const FName Name_PreloadAssetInfoRep(TEXT("PreloadAssetInfoRep"));
		static const FName Name_RoundManager(TEXT("RoundManager"));
		static const FName Name_ItemManager(TEXT("ItemManager"));
		static const FName Name_VehicleManager(TEXT("VehicleManager"));
		static const FName Name_SurvivorNum(TEXT("SurvivorNum"));
		static const FName Name_SSModeLobby(TEXT("SSModeLobby"));
		static const FName Name_Activity_ReplicatedMatchId(TEXT("Activity_ReplicatedMatchId"));
		static const FName Name_Activity_Result(TEXT("Activity_Result"));
		static const FName Name_DebugFlags(TEXT("DebugFlags"));
		static const FName Name_DebugServerState(TEXT("DebugServerState"));
		static const FName Name_DebugServerLobbyState(TEXT("DebugServerLobbyState"));
		static const FName Name_DebugServerAverageFPS(TEXT("DebugServerAverageFPS"));
		static const FName Name_DebugServerMaxDeltaSec_Recently5sec(TEXT("DebugServerMaxDeltaSec_Recently5sec"));
		static const FName Name_DebugServerCrashRequestedTime(TEXT("DebugServerCrashRequestedTime"));

		const bool bIsValid = true
			&& Name_StateSyncParamRep == ClassReps[(int32)ENetFields_Private::StateSyncParamRep].Property->GetFName()
			&& Name_PreloadAssetInfoRep == ClassReps[(int32)ENetFields_Private::PreloadAssetInfoRep].Property->GetFName()
			&& Name_RoundManager == ClassReps[(int32)ENetFields_Private::RoundManager].Property->GetFName()
			&& Name_ItemManager == ClassReps[(int32)ENetFields_Private::ItemManager].Property->GetFName()
			&& Name_VehicleManager == ClassReps[(int32)ENetFields_Private::VehicleManager].Property->GetFName()
			&& Name_SurvivorNum == ClassReps[(int32)ENetFields_Private::SurvivorNum].Property->GetFName()
			&& Name_SSModeLobby == ClassReps[(int32)ENetFields_Private::SSModeLobby].Property->GetFName()
			&& Name_Activity_ReplicatedMatchId == ClassReps[(int32)ENetFields_Private::Activity_ReplicatedMatchId].Property->GetFName()
			&& Name_Activity_Result == ClassReps[(int32)ENetFields_Private::Activity_Result].Property->GetFName()
			&& Name_DebugFlags == ClassReps[(int32)ENetFields_Private::DebugFlags].Property->GetFName()
			&& Name_DebugServerState == ClassReps[(int32)ENetFields_Private::DebugServerState].Property->GetFName()
			&& Name_DebugServerLobbyState == ClassReps[(int32)ENetFields_Private::DebugServerLobbyState].Property->GetFName()
			&& Name_DebugServerAverageFPS == ClassReps[(int32)ENetFields_Private::DebugServerAverageFPS].Property->GetFName()
			&& Name_DebugServerMaxDeltaSec_Recently5sec == ClassReps[(int32)ENetFields_Private::DebugServerMaxDeltaSec_Recently5sec].Property->GetFName()
			&& Name_DebugServerCrashRequestedTime == ClassReps[(int32)ENetFields_Private::DebugServerCrashRequestedTime].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
